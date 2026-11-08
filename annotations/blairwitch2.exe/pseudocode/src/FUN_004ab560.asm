; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ab560(int param_1,int param_2)
;
;
; XREF[32]:
;   FUN_0047b1f0 at 0047b230
;   FUN_0047b800 at 0047b832
;   FUN_0047be90 at 0047beb8
;   FUN_0047c0f0 at 0047c139
;   FUN_0047d270 at 0047d2cf
;   FUN_0047db40 at 0047db88
;   FUN_0047e1d0 at 0047e21c
;   FUN_0047e2b0 at 0047e2dc
;   FUN_0047e870 at 0047e898
;   FUN_00482250 at 00482298
;   ... and 22 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab560
        ;   Label: FUN_004ab560
    TEST EAX,EAX                        ; 004ab564
    JL 0x004ab56f                       ; 004ab566
        ;   XREF to: 004ab56f (CONDITIONAL_JUMP)  ; LAB_004ab56f
    CMP EAX,0x100                       ; 004ab568
    JL 0x004ab572                       ; 004ab56d
        ;   XREF to: 004ab572 (CONDITIONAL_JUMP)  ; LAB_004ab572
    XOR EAX,EAX                         ; 004ab56f
        ;   Label: LAB_004ab56f
    RET                                 ; 004ab571
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ab572
        ;   Label: LAB_004ab572
    SHL EAX,0x2                         ; 004ab576
    ADD EDX,EAX                         ; 004ab579
    MOV EAX,dword ptr [EDX + 0x39e8]    ; 004ab57b
    ADD EAX,dword ptr [EDX + 0x3de8]    ; 004ab581
    RET                                 ; 004ab587

