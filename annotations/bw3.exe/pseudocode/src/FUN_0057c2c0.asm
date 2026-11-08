; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057c2c0(void)
;
;
; XREF[1]:
;   FUN_0057c2e0 at 0057c5a8
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_02032780
;
; *****************************************************************************

section .text

    MOV EAX,[0x00603b28]                ; 0057c2c0 | DAT_00603b28
        ;   Label: FUN_0057c2c0
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 0057c2c5 | DAT_02032780
    IMUL EDX,EDX,0x1a4                  ; 0057c2cb
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x14c] ; 0057c2d1
    RET                                 ; 0057c2d8

