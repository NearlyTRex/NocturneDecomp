; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b4d0(undefined4 param_1,float param_2)
;
;
; XREF[1]:
;   FUN_005389b0 at 00538a10
;
; Referenced Globals:
;   undefined4 DAT_005d15b3
;   undefined4 DAT_006141e4
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 0046b4d0
        ;   Label: FUN_0046b4d0
    FDIVR double ptr [0x005d15b3]       ; 0046b4d4 | DAT_005d15b3
    CALL FUN_005b7ff0                   ; 0046b4da
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [0x006141e4]        ; 0046b4df | DAT_006141e4
    RET                                 ; 0046b4e5

