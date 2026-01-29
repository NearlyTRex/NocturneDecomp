; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_00596860(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00596860
        ;   Label: core_skeledit.cpp_FUN_00596860
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00596865
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0059686a
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059686b
    LEA EDX,[EBX + 0x1]                 ; 0059686f
    LEA EBX,[EDX*0x4 + 0x0]             ; 00596872
    SUB EBX,EDX                         ; 00596879
    SHL EBX,0x2                         ; 0059687b
    SUB EBX,EDX                         ; 0059687e
    PUSH EBX                            ; 00596880
    PUSH 0x7                            ; 00596881
    MOV EDX,dword ptr [ESP + 0x14]      ; 00596883
    PUSH EDX                            ; 00596887
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00596888
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0059688d
    PUSH EBX                            ; 00596890
    PUSH 0x69                           ; 00596891
    MOV ECX,dword ptr [ESP + 0x18]      ; 00596893
    PUSH ECX                            ; 00596897
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00596898
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0059689d
    POP EBX                             ; 005968a0
    RET                                 ; 005968a1

