; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005907b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02664fa0
;   undefined4 DAT_02664fa4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005907b0
        ;   Label: wincore_winrun.cpp_FUN_005907b0
    XOR EDX,EDX                         ; 005907b1
    XOR EAX,EAX                         ; 005907b3
    MOV dword ptr [0x02664fa0],EDX      ; 005907b5 | DAT_02664fa0
    MOV dword ptr [0x02664fa4],EDX      ; 005907bb | DAT_02664fa4
    ADD EAX,0xac                        ; 005907c1
        ;   Label: LAB_005907c1
    XOR EBX,EBX                         ; 005907c6
    MOV dword ptr [EAX + 0x26656c0],EBX ; 005907c8
    CMP EAX,0x2b0                       ; 005907ce
    JNZ 0x005907c1                      ; 005907d3
        ;   XREF to: 005907c1 (CONDITIONAL_JUMP)  ; LAB_005907c1
    POP EBX                             ; 005907d5
    RET                                 ; 005907d6

