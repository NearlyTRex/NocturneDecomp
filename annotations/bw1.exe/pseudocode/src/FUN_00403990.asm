; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403990(int param_1)
;
;
; XREF[5]:
;   FUN_00403aa0 at 00403b0f
;   FUN_004046e0 at 00404870
;   FUN_00404980 at 004049fe
;   FUN_00406280 at 004064a5
;   FUN_00406520 at 0040658f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00403990
        ;   Label: FUN_00403990
    TEST EAX,EAX                        ; 00403994
    JL 0x004039b1                       ; 00403996
        ;   XREF to: 004039b1 (CONDITIONAL_JUMP)  ; LAB_004039b1
    MOV EAX,0xff                        ; 00403998
    MOV EDX,EAX                         ; 0040399d
    MOV ECX,EAX                         ; 0040399f
    SHL EDX,0x8                         ; 004039a1
    SHL ECX,0x10                        ; 004039a4
    ADD EDX,EAX                         ; 004039a7
    SHL EAX,0x18                        ; 004039a9
    ADD EDX,ECX                         ; 004039ac
    ADD EAX,EDX                         ; 004039ae
    RET                                 ; 004039b0
    NEG EAX                             ; 004039b1
        ;   Label: LAB_004039b1
    MOV EDX,EAX                         ; 004039b3
    MOV ECX,EAX                         ; 004039b5
    SHL EDX,0x8                         ; 004039b7
    SHL ECX,0x10                        ; 004039ba
    ADD EDX,EAX                         ; 004039bd
    SHL EAX,0x18                        ; 004039bf
    ADD EDX,ECX                         ; 004039c2
    ADD EAX,EDX                         ; 004039c4
    RET                                 ; 004039c6

