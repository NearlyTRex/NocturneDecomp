; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ae560(void)
;
;
; XREF[1]:
;   FUN_005ae580 at 005ae784
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fdd020
;
; *****************************************************************************

section .text

    MOV EAX,[0x00622c18]                ; 005ae560 | DAT_00622c18
        ;   Label: FUN_005ae560
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 005ae565 | DAT_01fdd020
    IMUL EDX,EDX,0x1a4                  ; 005ae56b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x14c] ; 005ae571
    RET                                 ; 005ae578

