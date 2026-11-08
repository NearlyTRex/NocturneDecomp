; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414ab0(int param_1)
;
;
; Called Functions:
;   FUN_004688e0
;   FUN_00468900
;   FUN_004a0510
;   FUN_005230c0
;   FUN_00523100
;   FUN_00523310
;   FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414ab0
        ;   Label: FUN_00414ab0
    PUSH ESI                            ; 00414ab1
    PUSH EDI                            ; 00414ab2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414ab3
    PUSH EBX                            ; 00414ab7
    CALL FUN_004a0510                   ; 00414ab8
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 00414abd
    LEA ESI,[EBX + 0x158]               ; 00414ac0
    PUSH ESI                            ; 00414ac6
    CALL FUN_00569b20                   ; 00414ac7
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00414acc
    LEA EDI,[EBX + 0xc268]              ; 00414acf
    PUSH EDI                            ; 00414ad5
    CALL FUN_004688e0                   ; 00414ad6
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00414adb
    PUSH ESI                            ; 00414ade
    PUSH 0x0                            ; 00414adf
    LEA ESI,[EBX + 0xc3ec]              ; 00414ae1
    PUSH ESI                            ; 00414ae7
    CALL FUN_005230c0                   ; 00414ae8
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005230c0()
    ADD ESP,0xc                         ; 00414aed
    PUSH 0x0                            ; 00414af0
    PUSH EDI                            ; 00414af2
    CALL FUN_00468900                   ; 00414af3
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    ADD ESP,0x4                         ; 00414af8
    PUSH EAX                            ; 00414afb
    PUSH 0x1                            ; 00414afc
    PUSH ESI                            ; 00414afe
    CALL FUN_00523100                   ; 00414aff
        ;   XREF to: 00523100 (UNCONDITIONAL_CALL)  ; undefined FUN_00523100()
    ADD ESP,0x10                        ; 00414b04
    PUSH ESI                            ; 00414b07
    CALL FUN_00523310                   ; 00414b08
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; undefined FUN_00523310()
    MOV dword ptr [EBX + 0xc3e4],0x0    ; 00414b0d
    ADD ESP,0x4                         ; 00414b17
    MOV dword ptr [EBX + 0xc3e8],0x0    ; 00414b1a
    POP EDI                             ; 00414b24
    POP ESI                             ; 00414b25
    POP EBX                             ; 00414b26
    RET                                 ; 00414b27

