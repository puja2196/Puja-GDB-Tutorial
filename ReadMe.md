Setting Up:
		a. Launch gdb: gdb --args $COMPILER/ptxas -arch=sm_100 list-traverse.ptx
		Where ptxas is the binary executable and -arch and file-names are the arguments.
		B. List the arguments: show args
	
	2. Breakpoints:
		A. Set Breakpoints:
			i. Set breakpoint at a function: b <func_name> (eg: b preprocessInstruction)
			ii. Set breakpoint in a lineNo of a file: b <source_file>:<line_no>
			Eg: b /home/psaha/src/sw/dev/gpu_drv/module_compiler/drivers/compiler/gpgpucomp/lib/ptxparse/ptxy.inc:24631
			iii. Set Conditional breakpoint: b <func_name> if <condition>
			Eg: b ptxProcessAbiParamRegPragma if pragma == ""
			
		B. List all breakpoints: info b
		C. Delete Breakpoint: delete <brkpt_number_from_the_list>
		D. Disable a breakpoint: disable <brkpt_number_from_the_list>
		E. Enable a breakpoint: enable <brkpt_number_from_the_list>
		F. Skip a breakpoint for somenumber of times: ignore <brkpt_number> <skip_count>
		
	4. Watchpoints:
		A. To set watchpoint on a variable and investigate if the variable is written into: watch <var_name> 
		B. To set watchpoint on a memory location and investigate if the location is written into: watch -location <location>
		C. To list all watchpoints: info b
		D. To delete a watchpoint: delete <watch_point_no>
	5. Execution:
		A. To run the program after launching: r
		B. To show current frame and source line: frame
		C. To get into the current frame: s
		D. To see the stack trace: bt
		E. To get out of the current frame: finish
		F. To go to the next line: n
		G. To continue till next brkpoint hit or end of the program: c
		H. To continue till a particular line: until <line_no>
		I. To go to upper/Caller function of the current frame: Up
		J. To go to down to the stack: down
	6. Print

		A. To print the local variables and registers used in the current frame: info frame
		B. To print the arguments of the current frame: info args, info locals
		C. To print a variable: p <var_name>
	7. ASM Level:
		A. To step to a frame: stepi
		B. To go to the next assembly line: nexti
	8. Text - Visual Interface:
		A. To enable source and asm visual: 
			i. tui enable (from debugger cmd prompt)
			ii. gdb -tui --args $COMPILER/ptxas -arch=sm_100 list-traverse.ptx(from Linux Cmd prompt)
		B. These are layouts and properties:
			i. Layout 0 - Only source code
			ii. Layout 1 - Only Assembly
			iii. Layout 2 - source and assembly
			iv. Layout 3 - Registers and source
			v. Layout 4 - Registers and assembly
		C. To go from one to another layout use: layout next
		D. To specify specific layout: layout <layout_name>
			i. Layout_name = {src,regs,split}
		E. To focus on particular window: focus <window_name>
			i. Window_name = {src, regs, asm, cmd}
		F. To know the window info: info win

