; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414dd0(int param_1)
;
;
; Called Functions:
;   FUN_0044fd00
;   FUN_0044fd20
;   FUN_00487eb0
;   FUN_00547480
;   FUN_005b6f80
;   FUN_005b6fc0
;   FUN_005b71d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414dd0
        ;   Label: FUN_00414dd0
    PUSH ESI                            ; 00414dd1
    PUSH EDI                            ; 00414dd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414dd3
    PUSH EBX                            ; 00414dd7
    CALL FUN_00487eb0                   ; 00414dd8
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 00414ddd
    LEA ESI,[EBX + 0x2b4]               ; 00414de0
    PUSH ESI                            ; 00414de6
    CALL FUN_00547480                   ; 00414de7
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 00414dec
    LEA EDI,[EBX + 0x10af8]             ; 00414def
    PUSH EDI                            ; 00414df5
    CALL FUN_0044fd00                   ; 00414df6
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    ADD ESP,0x4                         ; 00414dfb
    PUSH ESI                            ; 00414dfe
    PUSH 0x0                            ; 00414dff
    LEA ESI,[EBX + 0x10c7c]             ; 00414e01
    PUSH ESI                            ; 00414e07
    CALL FUN_005b6f80                   ; 00414e08
        ;   XREF to: 005b6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6f80()
    ADD ESP,0xc                         ; 00414e0d
    PUSH 0x0                            ; 00414e10
    PUSH EDI                            ; 00414e12
    CALL FUN_0044fd20                   ; 00414e13
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 00414e18
    PUSH EAX                            ; 00414e1b
    PUSH 0x1                            ; 00414e1c
    PUSH ESI                            ; 00414e1e
    CALL FUN_005b6fc0                   ; 00414e1f
        ;   XREF to: 005b6fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6fc0()
    ADD ESP,0x10                        ; 00414e24
    PUSH ESI                            ; 00414e27
    CALL FUN_005b71d0                   ; 00414e28
        ;   XREF to: 005b71d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b71d0()
    MOV dword ptr [EBX + 0x10c74],0x0   ; 00414e2d
    ADD ESP,0x4                         ; 00414e37
    MOV dword ptr [EBX + 0x10c78],0x0   ; 00414e3a
    POP EDI                             ; 00414e44
    POP ESI                             ; 00414e45
    POP EBX                             ; 00414e46
    RET                                 ; 00414e47

