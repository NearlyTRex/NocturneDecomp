; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00466790(void)
;
;
; XREF[1]:
;   FUN_00466540 at 00466710
;
; Referenced Globals:
;   undefined4 DAT_005bc17c
;
; Called Functions:
;   FUN_00466470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466790
        ;   Label: FUN_00466790
    CALL FUN_00466470                   ; 00466791
        ;   XREF to: 00466470 (UNCONDITIONAL_CALL)  ; undefined FUN_00466470()
    FLD double ptr [0x005bc17c]         ; 00466796 | DAT_005bc17c
    FILD dword ptr [EBX + 0x354]        ; 0046679c
    FMUL ST1                            ; 004667a2
    FILD dword ptr [EBX + 0x358]        ; 004667a4
    FMUL ST2                            ; 004667aa
    FILD dword ptr [EBX + 0x35c]        ; 004667ac
    FMUL ST3                            ; 004667b2
    FILD dword ptr [EBX + 0x360]        ; 004667b4
    FMUL ST4                            ; 004667ba
    FILD dword ptr [EBX + 0x364]        ; 004667bc
    FMUL ST5                            ; 004667c2
    FILD dword ptr [EBX + 0x368]        ; 004667c4
    FMULP ST6                           ; 004667ca
    ADD ESP,0x4                         ; 004667cc
    FXCH ST4                            ; 004667cf
    FSTP float ptr [EBX + 0x36c]        ; 004667d1
    FXCH ST2                            ; 004667d7
    FSTP float ptr [EBX + 0x370]        ; 004667d9
    FSTP float ptr [EBX + 0x374]        ; 004667df
    FSTP float ptr [EBX + 0x378]        ; 004667e5
    FSTP float ptr [EBX + 0x37c]        ; 004667eb
    FSTP float ptr [EBX + 0x380]        ; 004667f1
    ADD ESP,0xc                         ; 004667f7
    POP EBP                             ; 004667fa
    POP EDI                             ; 004667fb
    POP ESI                             ; 004667fc
    POP EBX                             ; 004667fd
    RET                                 ; 004667fe

