; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00566db0(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566db0
        ;   Label: FUN_00566db0
    PUSH ESI                            ; 00566db1
    PUSH EDI                            ; 00566db2
    SUB ESP,0x30                        ; 00566db3
    MOV EBX,dword ptr [ESP + 0x40]      ; 00566db6
    PUSH EBX                            ; 00566dba
    CALL FUN_004087f0                   ; 00566dbb
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00566dc0
    PUSH 0x0                            ; 00566dc3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00566dc5
    PUSH EBX                            ; 00566dcb
    LEA ESI,[ESP + 0x8]                 ; 00566dcc
    LEA EDI,[ESP + 0x20]                ; 00566dd0
    CALL dword ptr [EAX + 0x1c]         ; 00566dd4
    MOV ECX,0x6                         ; 00566dd7
    ADD ESP,0x4                         ; 00566ddc
    LEA EAX,[ESP + 0x1c]                ; 00566ddf
    LEA ESI,[ESP + 0x4]                 ; 00566de3
    PUSH EAX                            ; 00566de7
    MOVSD.REP ES:EDI,ESI                ; 00566de8
    CALL FUN_0041daf0                   ; 00566dea
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00566def
    MOV ESI,EAX                         ; 00566df2
    TEST EAX,EAX                        ; 00566df4
    JNZ 0x00566e0a                      ; 00566df6
        ;   XREF to: 00566e0a (CONDITIONAL_JUMP)  ; LAB_00566e0a
    PUSH EBX                            ; 00566df8
    CALL FUN_00408830                   ; 00566df9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00566dfe
    MOV EAX,ESI                         ; 00566e01
    ADD ESP,0x30                        ; 00566e03
    POP EDI                             ; 00566e06
    POP ESI                             ; 00566e07
    POP EBX                             ; 00566e08
    RET                                 ; 00566e09
    PUSH -0x1                           ; 00566e0a
        ;   Label: LAB_00566e0a
    LEA EAX,[EBX + 0x158]               ; 00566e0c
    PUSH 0x0                            ; 00566e12
    PUSH EAX                            ; 00566e14
    CALL FUN_00462540                   ; 00566e15
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 00566e1a
    PUSH EBX                            ; 00566e1d
    CALL FUN_00408830                   ; 00566e1e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00566e23
    MOV EAX,ESI                         ; 00566e26
    ADD ESP,0x30                        ; 00566e28
    POP EDI                             ; 00566e2b
    POP ESI                             ; 00566e2c
    POP EBX                             ; 00566e2d
    RET                                 ; 00566e2e

