; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0040dd30(void)
;
;
; XREF[3]:
;   FUN_0040dda0 at 0040ddbe
;   FUN_0040de00 at 0040de7a
;   FUN_0040dea0 at 0040deb1
;
; Referenced Globals:
;   undefined4 DAT_007641b8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x007641b8]      ; 0040dd30 | DAT_007641b8
        ;   Label: FUN_0040dd30
    IMUL EDX,EDX,0x2ff0bd               ; 0040dd36
    INC EDX                             ; 0040dd3c
    AND EDX,0xffffff                    ; 0040dd3d
    MOV dword ptr [0x007641b8],EDX      ; 0040dd43 | DAT_007641b8
    MOV EAX,EDX                         ; 0040dd49
    RET                                 ; 0040dd4b

