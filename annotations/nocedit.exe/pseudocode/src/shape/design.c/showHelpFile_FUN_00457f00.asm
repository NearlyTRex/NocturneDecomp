; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_showHelpFile_FUN_00457f00(char *help_filename)
;
; Parameters:
; char *           Stack[0x4]:4   help_filename
; Local Variables:
; char[80]         Stack[-0x68]:80  local_68
; _FILE *          Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045ca6e
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f66a
;
; Referenced Globals:
;   TerminatedCString s_rt_0061a868
;   TerminatedCString s_help_0061a86b
;   TerminatedCString s_shape_design_c_0061a870
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457f00
        ;   Label: shape_design.c_showHelpFile_FUN_00457f00
    PUSH ESI                            ; 00457f01
    PUSH EDI                            ; 00457f02
    PUSH EBP                            ; 00457f03
    MOV EBP,ESP                         ; 00457f04
    SUB ESP,0x58                        ; 00457f06
    MOV dword ptr [EBP + -0x4],0x0      ; 00457f0c
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00457f13
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,0x61a868                    ; 00457f18 | = "rt"
    PUSH EAX                            ; 00457f1d | = "rt"
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457f1e
    PUSH EAX                            ; 00457f21
    MOV EAX,0x61a86b                    ; 00457f22 | = "help"
    PUSH EAX                            ; 00457f27 | = "help"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00457f28
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00457f2d
    MOV dword ptr [EBP + -0x8],EAX      ; 00457f30
    CMP dword ptr [EBP + -0x8],0x0      ; 00457f33
    JZ 0x00457fb9                       ; 00457f37
        ;   XREF to: 00457fb9 (CONDITIONAL_JUMP)  ; LAB_00457fb9
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00457f3d
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [EBP + -0x8]      ; 00457f42
        ;   Label: LAB_00457f42
    PUSH EAX                            ; 00457f45
    PUSH 0x4f                           ; 00457f46
    LEA EAX,[EBP + -0x58]               ; 00457f48
    PUSH EAX                            ; 00457f4b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00457f4c
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00457f51
    TEST EAX,EAX                        ; 00457f54
    JZ 0x00457f98                       ; 00457f56
        ;   XREF to: 00457f98 (CONDITIONAL_JUMP)  ; LAB_00457f98
    MOV EAX,dword ptr [EBP + -0x4]      ; 00457f58
    PUSH EAX                            ; 00457f5b
    PUSH 0x0                            ; 00457f5c
    LEA EAX,[EBP + -0x58]               ; 00457f5e
    PUSH EAX                            ; 00457f61
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00457f62
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00457f67
    ADD dword ptr [EBP + -0x4],0xb      ; 00457f6a
    MOV EAX,[0x00679398]                ; 00457f6e | g_WindowHeight
    SUB EAX,0xb                         ; 00457f73
    CMP EAX,dword ptr [EBP + -0x4]      ; 00457f76
    JGE 0x00457f96                      ; 00457f79
        ;   XREF to: 00457f96 (CONDITIONAL_JUMP)  ; LAB_00457f96
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00457f7b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00457f80
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00457f85
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00457f8a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0x4],0x0      ; 00457f8f
    JMP 0x00457f42                      ; 00457f96
        ;   XREF to: 00457f42 (UNCONDITIONAL_JUMP)  ; LAB_00457f42
        ;   Label: LAB_00457f96
    PUSH 0x186                          ; 00457f98
        ;   Label: LAB_00457f98
    MOV EAX,0x61a870                    ; 00457f9d | = "..\\shape\\design.c"
    PUSH EAX                            ; 00457fa2 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x8]      ; 00457fa3
    PUSH EAX                            ; 00457fa6
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00457fa7
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00457fac
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00457faf
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00457fb4
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00457fb9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00457fb9
    MOV ESP,EBP                         ; 00457fbe
    POP EBP                             ; 00457fc0
    POP EDI                             ; 00457fc1
    POP ESI                             ; 00457fc2
    POP EBX                             ; 00457fc3
    RET                                 ; 00457fc4

