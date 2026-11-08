; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b2b0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[61]:
;   FUN_004089d0 at 004089df
;   FUN_0040ec10 at 0040ec35
;   FUN_00410670 at 00410717
;   FUN_00414810 at 00414825
;   FUN_0041c580 at 0041c5e0
;   FUN_0041c690 at 0041c6c8
;   FUN_0043a130 at 0043a145
;   FUN_004468c0 at 004468d5
;   FUN_00448900 at 00448919
;   FUN_0044ac60 at 0044ac7d
;   ... and 51 more
;
; Referenced Globals:
;   undefined4 DAT_005d1583
;
; Called Functions:
;   FUN_00403830
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046b2b0
        ;   Label: FUN_0046b2b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046b2b3
    FLD double ptr [0x005d1583]         ; 0046b2b7 | DAT_005d1583
    FLD float ptr [EAX]                 ; 0046b2bd
    FMUL ST1                            ; 0046b2bf
    CALL FUN_005b7ff0                   ; 0046b2c1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 0046b2c6
    FLD float ptr [EAX + 0x4]           ; 0046b2ca
    FMUL ST1                            ; 0046b2cd
    CALL FUN_005b7ff0                   ; 0046b2cf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 0046b2d4
    FMUL float ptr [EAX + 0x8]          ; 0046b2d8
    MOV EAX,ESP                         ; 0046b2db
    CALL FUN_005b7ff0                   ; 0046b2dd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 0046b2e2
    FISTP dword ptr [ESP + 0x10]        ; 0046b2e3
    CALL FUN_00403830                   ; 0046b2e7
        ;   XREF to: 00403830 (UNCONDITIONAL_CALL)  ; undefined FUN_00403830()
    ADD ESP,0x4                         ; 0046b2ec
    ADD ESP,0x10                        ; 0046b2ef
    RET                                 ; 0046b2f2

