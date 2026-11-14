; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005824d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d224f0
;   undefined4 DAT_02d224f4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005824d0
        ;   Label: wincore_winrun.cpp_FUN_005824d0
    XOR EDX,EDX                         ; 005824d1
    XOR EAX,EAX                         ; 005824d3
    MOV dword ptr [0x02d224f0],EDX      ; 005824d5 | DAT_02d224f0
    MOV dword ptr [0x02d224f4],EDX      ; 005824db | DAT_02d224f4
    ADD EAX,0xac                        ; 005824e1
        ;   Label: LAB_005824e1
    XOR EBX,EBX                         ; 005824e6
    MOV dword ptr [EAX + 0x2d22c20],EBX ; 005824e8
    CMP EAX,0x2b0                       ; 005824ee
    JNZ 0x005824e1                      ; 005824f3
        ;   XREF to: 005824e1 (CONDITIONAL_JUMP)  ; LAB_005824e1
    POP EBX                             ; 005824f5
    RET                                 ; 005824f6

