; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0058eb40(void)
;
;
; XREF[8]:
;   FUN_0047b1f0 at 0047b486
;   FUN_0047b800 at 0047b9ae
;   FUN_0047c0f0 at 0047c532
;   FUN_0047d270 at 0047d4d3
;   FUN_00482350 at 00482460
;   FUN_004b90d0 at 004b916f
;   FUN_004bcbf0 at 004bcfdc
;   FUN_00591190 at 0059148c
;
; Referenced Globals:
;   undefined4 DAT_02662dd8
;   undefined4 DAT_02662ddc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02662ddc]      ; 0058eb40 | DAT_02662ddc
        ;   Label: FUN_0058eb40
    MOV EAX,[0x02662dd8]                ; 0058eb46 | DAT_02662dd8
    CMP EAX,EDX                         ; 0058eb4b
    SETNZ AL                            ; 0058eb4d
    AND EAX,0xff                        ; 0058eb50
    RET                                 ; 0058eb55

