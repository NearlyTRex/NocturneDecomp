; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b30f0(int param_1,int param_2)
;
;
; XREF[31]:
;   FUN_0047c2c0 at 0047c300
;   FUN_0047c8e0 at 0047c912
;   FUN_0047cfa0 at 0047cfcb
;   FUN_0047d230 at 0047d279
;   FUN_0047e470 at 0047e4cf
;   FUN_0047ed50 at 0047ed98
;   FUN_0047f3e0 at 0047f42c
;   FUN_0047f4c0 at 0047f4ec
;   FUN_0047fa80 at 0047faa8
;   FUN_00483450 at 00483498
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004b30f0
        ;   Label: FUN_004b30f0
    TEST EAX,EAX                        ; 004b30f4
    JL 0x004b30ff                       ; 004b30f6
        ;   XREF to: 004b30ff (CONDITIONAL_JUMP)  ; LAB_004b30ff
    CMP EAX,0x100                       ; 004b30f8
    JL 0x004b3102                       ; 004b30fd
        ;   XREF to: 004b3102 (CONDITIONAL_JUMP)  ; LAB_004b3102
    XOR EAX,EAX                         ; 004b30ff
        ;   Label: LAB_004b30ff
    RET                                 ; 004b3101
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3102
        ;   Label: LAB_004b3102
    SHL EAX,0x2                         ; 004b3106
    ADD EDX,EAX                         ; 004b3109
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004b310b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004b3111
    RET                                 ; 004b3117

