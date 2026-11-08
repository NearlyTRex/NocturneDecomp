; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00406bd0(int param_1)
;
;
; XREF[23]:
;   FUN_00404070 at 004040b7
;   FUN_004058f0 at 0040592a
;   FUN_00405ef0 at 00405f37
;   FUN_004060e0 at 00406140
;   FUN_00406bb0 at 00406bb8
;   FUN_004101f0 at 00410285
;   FUN_00483de0 at 00483de5
;   FUN_00483df0 at 00483e09
;   FUN_004934b0 at 004934e9
;   FUN_00493d40 at 00493f3f
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_006104f0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00713a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00406bd0
        ;   Label: FUN_00406bd0
    SAR EDX,0x8                         ; 00406bd4
    TEST EDX,EDX                        ; 00406bd7
    JL 0x00406c11                       ; 00406bd9
        ;   XREF to: 00406c11 (CONDITIONAL_JUMP)  ; LAB_00406c11
    CMP EDX,0xff                        ; 00406bdb
    JLE 0x00406be8                      ; 00406be1
        ;   XREF to: 00406be8 (CONDITIONAL_JUMP)  ; LAB_00406be8
    MOV EDX,0xff                        ; 00406be3
    MOV EAX,EDX                         ; 00406be8
        ;   Label: LAB_00406be8
    MOV ECX,EDX                         ; 00406bea
    SHL EAX,0x8                         ; 00406bec
    OR ECX,EAX                          ; 00406bef
    MOV EAX,EDX                         ; 00406bf1
    SHL EAX,0x10                        ; 00406bf3
    OR ECX,EAX                          ; 00406bf6
    MOV EAX,ECX                         ; 00406bf8
    XOR EAX,0xffffff                    ; 00406bfa
    MOV dword ptr [0x006104f0],ECX      ; 00406bff | DAT_006104f0
    MOV [0x00713a80],EAX                ; 00406c05 | DAT_00713a80
    MOV dword ptr [0x0061b4b8],EDX      ; 00406c0a | DAT_0061b4b8
    RET                                 ; 00406c10
    XOR EDX,EDX                         ; 00406c11
        ;   Label: LAB_00406c11
    JMP 0x00406be8                      ; 00406c13
        ;   XREF to: 00406be8 (UNCONDITIONAL_JUMP)  ; LAB_00406be8

