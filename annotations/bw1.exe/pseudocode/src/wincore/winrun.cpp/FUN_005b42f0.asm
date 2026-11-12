; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b42f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9c7e0
;   undefined4 DAT_02c9c7e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b42f0
        ;   Label: wincore_winrun.cpp_FUN_005b42f0
    XOR EDX,EDX                         ; 005b42f1
    XOR EAX,EAX                         ; 005b42f3
    MOV dword ptr [0x02c9c7e0],EDX      ; 005b42f5 | DAT_02c9c7e0
    MOV dword ptr [0x02c9c7e4],EDX      ; 005b42fb | DAT_02c9c7e4
    ADD EAX,0xac                        ; 005b4301
        ;   Label: LAB_005b4301
    XOR EBX,EBX                         ; 005b4306
    MOV dword ptr [EAX + 0x2c9cf10],EBX ; 005b4308
    CMP EAX,0x2b0                       ; 005b430e
    JNZ 0x005b4301                      ; 005b4313
        ;   XREF to: 005b4301 (CONDITIONAL_JUMP)  ; LAB_005b4301
    POP EBX                             ; 005b4315
    RET                                 ; 005b4316

