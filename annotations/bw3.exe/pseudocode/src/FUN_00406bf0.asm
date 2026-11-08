; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00406bf0(int param_1)
;
;
; XREF[22]:
;   FUN_00404070 at 004040b7
;   FUN_004058f0 at 0040592a
;   FUN_00405ef0 at 00405f37
;   FUN_004060e0 at 0040613b
;   FUN_00406bd0 at 00406bd8
;   FUN_0046d4c0 at 0046d4c5
;   FUN_0046d4d0 at 0046d4e9
;   FUN_0047c050 at 0047c089
;   FUN_0047c8e0 at 0047cadf
;   FUN_0047cfa0 at 0047d016
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_005f07c0
;   undefined4 DAT_005fba38
;   undefined4 DAT_00730400
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406bf0
        ;   Label: FUN_00406bf0
    SAR EDX,0x8                         ; 00406bf4
    TEST EDX,EDX                        ; 00406bf7
    JL 0x00406c31                       ; 00406bf9
        ;   XREF to: 00406c31 (CONDITIONAL_JUMP)  ; LAB_00406c31
    CMP EDX,0xff                        ; 00406bfb
    JLE 0x00406c08                      ; 00406c01
        ;   XREF to: 00406c08 (CONDITIONAL_JUMP)  ; LAB_00406c08
    MOV EDX,0xff                        ; 00406c03
    MOV EAX,EDX                         ; 00406c08
        ;   Label: LAB_00406c08
    MOV ECX,EDX                         ; 00406c0a
    SHL EAX,0x8                         ; 00406c0c
    OR ECX,EAX                          ; 00406c0f
    MOV EAX,EDX                         ; 00406c11
    SHL EAX,0x10                        ; 00406c13
    OR ECX,EAX                          ; 00406c16
    MOV EAX,ECX                         ; 00406c18
    XOR EAX,0xffffff                    ; 00406c1a
    MOV dword ptr [0x005f07c0],ECX      ; 00406c1f | DAT_005f07c0
    MOV [0x00730400],EAX                ; 00406c25 | DAT_00730400
    MOV dword ptr [0x005fba38],EDX      ; 00406c2a | DAT_005fba38
    RET                                 ; 00406c30
    XOR EDX,EDX                         ; 00406c31
        ;   Label: LAB_00406c31
    JMP 0x00406c08                      ; 00406c33
        ;   XREF to: 00406c08 (UNCONDITIONAL_JUMP)  ; LAB_00406c08

