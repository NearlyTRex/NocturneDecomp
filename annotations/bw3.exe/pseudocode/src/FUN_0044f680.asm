; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044f680(undefined4 param_1,float param_2)
;
;
; XREF[7]:
;   FUN_004bb100 at 004bcb7d
;   FUN_00534420 at 005344e9
;   FUN_0053b280 at 0053b2ad
;   FUN_00541fb0 at 00542025
;   FUN_0057bda0 at 0057c10d
;   FUN_0057c2e0 at 0057c601
;   FUN_0057d050 at 0057d073
;
; Referenced Globals:
;   undefined4 DAT_005b9f66
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0044f680
        ;   Label: FUN_0044f680
    FMUL double ptr [0x005b9f66]        ; 0044f684 | DAT_005b9f66
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044f68a
    CALL FUN_005a3120                   ; 0044f68e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [EAX + 0x11e8]      ; 0044f693
    RET                                 ; 0044f699

