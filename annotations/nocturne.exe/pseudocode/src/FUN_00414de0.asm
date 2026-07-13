; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414de0(int param_1)
;
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414de0
        ;   Label: FUN_00414de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414de1
    PUSH EBX                            ; 00414de5
    CALL FUN_00409fc0                   ; 00414de6
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 00414deb
    LEA EAX,[EBX + 0x150]               ; 00414dee
    PUSH EAX                            ; 00414df4
    CALL FUN_00454510                   ; 00414df5
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 00414dfa
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00414dfd
    POP EBX                             ; 00414e07
    RET                                 ; 00414e08

