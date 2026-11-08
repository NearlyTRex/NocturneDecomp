; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058eab0(void)
;
;
; XREF[3]:
;   FUN_004032b0 at 004032b0
;   FUN_0047acc0 at 0047ae2d
;   thunk_FUN_0058eab0 at 004dfe80
;
; Referenced Globals:
;   undefined4 DAT_02662dd8
;   undefined4 DAT_02662ddc
;   undefined4 DAT_02662de0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0058eab0
        ;   Label: FUN_0058eab0
    XOR EAX,EAX                         ; 0058eab2
    MOV dword ptr [0x02662ddc],EDX      ; 0058eab4 | DAT_02662ddc
    MOV dword ptr [0x02662dd8],EDX      ; 0058eaba | DAT_02662dd8
    MOV dword ptr [0x02662de0],EDX      ; 0058eac0 | DAT_02662de0
    RET                                 ; 0058eac6

