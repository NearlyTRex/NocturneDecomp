; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460c00(undefined4 param_1,float param_2)
;
;
; XREF[11]:
;   FUN_00440290 at 004404ad
;   FUN_0044e470 at 0044e520
;   FUN_004c0b40 at 004c0d81
;   FUN_004c59e0 at 004c5a74
;   FUN_004d6610 at 004d6632
;   FUN_004dec50 at 004dec8b
;   FUN_004df040 at 004df071
;   FUN_0050a260 at 0050a5a1
;   FUN_0050e190 at 0050e1b4
;   FUN_005125a0 at 00512da8
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0057dc45
;   undefined4 DAT_0057dc4d
;   undefined4 DAT_005b7648
;
; Called Functions:
;   FUN_00563a30
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00460c00
        ;   Label: FUN_00460c00
    FDIVR double ptr [0x0057dc45]       ; 00460c04 | DAT_0057dc45
    FMUL double ptr [0x0057dc4d]        ; 00460c0a | DAT_0057dc4d
    CALL FUN_00563a30                   ; 00460c10
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [0x005b7648]        ; 00460c15 | DAT_005b7648
    RET                                 ; 00460c1b

