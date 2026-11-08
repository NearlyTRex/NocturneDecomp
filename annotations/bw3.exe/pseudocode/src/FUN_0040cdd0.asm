; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0040cdd0(void)
;
;
; XREF[3]:
;   FUN_0040ce40 at 0040ce5e
;   FUN_0040cea0 at 0040cf1a
;   FUN_0040cf40 at 0040cf51
;
; Referenced Globals:
;   undefined4 DAT_007dfce8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x007dfce8]      ; 0040cdd0 | DAT_007dfce8
        ;   Label: FUN_0040cdd0
    IMUL EDX,EDX,0x2ff0bd               ; 0040cdd6
    INC EDX                             ; 0040cddc
    AND EDX,0xffffff                    ; 0040cddd
    MOV dword ptr [0x007dfce8],EDX      ; 0040cde3 | DAT_007dfce8
    MOV EAX,EDX                         ; 0040cde9
    RET                                 ; 0040cdeb

