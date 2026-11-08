; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00580800(void)
;
;
; XREF[8]:
;   FUN_0047c2c0 at 0047c563
;   FUN_0047c8e0 at 0047ca8e
;   FUN_0047d230 at 0047d68a
;   FUN_0047e470 at 0047e6d3
;   FUN_00483550 at 00483660
;   FUN_004bb100 at 004bb1af
;   FUN_004bec20 at 004beff2
;   FUN_00582eb0 at 005831b7
;
; Referenced Globals:
;   undefined4 DAT_02d20328
;   undefined4 DAT_02d2032c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02d2032c]      ; 00580800 | DAT_02d2032c
        ;   Label: FUN_00580800
    MOV EAX,[0x02d20328]                ; 00580806 | DAT_02d20328
    CMP EAX,EDX                         ; 0058080b
    SETNZ AL                            ; 0058080d
    AND EAX,0xff                        ; 00580810
    RET                                 ; 00580815

