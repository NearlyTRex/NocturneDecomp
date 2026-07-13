; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460a00(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[56]:
;   FUN_00409f20 at 00409f2f
;   FUN_004110f0 at 00411197
;   FUN_00414e70 at 00414e84
;   FUN_0041ea00 at 0041ea5f
;   FUN_0041eaf0 at 0041eb28
;   FUN_0043cbc0 at 0043cbd4
;   FUN_0044aff0 at 0044b005
;   FUN_0044ce80 at 0044ce94
;   FUN_0044f0b0 at 0044f0cf
;   FUN_0044f430 at 0044f460
;   ... and 46 more
;
; Referenced Globals:
;   undefined4 DAT_0057dc25
;
; Called Functions:
;   FUN_004044d0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00460a00
        ;   Label: FUN_00460a00
    MOV EAX,dword ptr [ESP + 0x18]      ; 00460a03
    FLD double ptr [0x0057dc25]         ; 00460a07 | DAT_0057dc25
    FLD float ptr [EAX]                 ; 00460a0d
    FMUL ST1                            ; 00460a0f
    CALL FUN_00563a30                   ; 00460a11
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x4]         ; 00460a16
    FLD float ptr [EAX + 0x4]           ; 00460a1a
    FMUL ST1                            ; 00460a1d
    CALL FUN_00563a30                   ; 00460a1f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 00460a24
    FMUL float ptr [EAX + 0x8]          ; 00460a28
    MOV EAX,ESP                         ; 00460a2b
    CALL FUN_00563a30                   ; 00460a2d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    PUSH EAX                            ; 00460a32
    FISTP dword ptr [ESP + 0x10]        ; 00460a33
    CALL FUN_004044d0                   ; 00460a37
        ;   XREF to: 004044d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004044d0()
    ADD ESP,0x4                         ; 00460a3c
    ADD ESP,0x10                        ; 00460a3f
    RET                                 ; 00460a42

