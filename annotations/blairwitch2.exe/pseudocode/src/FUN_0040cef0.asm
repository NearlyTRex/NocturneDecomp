; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0040cef0(void)
;
;
; XREF[3]:
;   FUN_0040cf60 at 0040cf7e
;   FUN_0040cfc0 at 0040d03a
;   FUN_0040d060 at 0040d071
;
; Referenced Globals:
;   undefined4 DAT_007bc368
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x007bc368]      ; 0040cef0 | DAT_007bc368
        ;   Label: FUN_0040cef0
    IMUL EDX,EDX,0x2ff0bd               ; 0040cef6
    INC EDX                             ; 0040cefc
    AND EDX,0xffffff                    ; 0040cefd
    MOV dword ptr [0x007bc368],EDX      ; 0040cf03 | DAT_007bc368
    MOV EAX,EDX                         ; 0040cf09
    RET                                 ; 0040cf0b

