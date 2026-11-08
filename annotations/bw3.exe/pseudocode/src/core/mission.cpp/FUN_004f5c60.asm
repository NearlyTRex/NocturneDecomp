; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5c60(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004659c0
;   FUN_004e4330
;   FUN_004f6410
;   FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5c60
        ;   Label: FUN_004f5c60
    PUSH EDI                            ; 004f5c61
    PUSH 0x5c83d2                       ; 004f5c62
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f5c67
    PUSH EDX                            ; 004f5c6b
    PUSH 0x5c83d5                       ; 004f5c6c
    CALL FUN_004659c0                   ; 004f5c71
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004659c0()
    ADD ESP,0xc                         ; 004f5c76
    MOV EBX,EAX                         ; 004f5c79
    TEST EAX,EAX                        ; 004f5c7b
    JZ 0x004f5c99                       ; 004f5c7d
        ;   XREF to: 004f5c99 (CONDITIONAL_JUMP)  ; LAB_004f5c99
    PUSH EBX                            ; 004f5c7f
        ;   Label: LAB_004f5c7f
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f5c80
    PUSH EDI                            ; 004f5c84
    CALL FUN_004f6410                   ; 004f5c85
        ;   XREF to: 004f6410 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6410()
    ADD ESP,0x8                         ; 004f5c8a
    PUSH EBX                            ; 004f5c8d
    CALL FUN_005a3a90                   ; 004f5c8e
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3a90()
    ADD ESP,0x4                         ; 004f5c93
    POP EDI                             ; 004f5c96
    POP EBX                             ; 004f5c97
    RET                                 ; 004f5c98
    PUSH ESI                            ; 004f5c99
        ;   Label: LAB_004f5c99
    MOV ECX,0x5c83db                    ; 004f5c9a
    MOV ESI,0xbd                        ; 004f5c9f
    PUSH 0x5c83ef                       ; 004f5ca4
    MOV dword ptr [0x01d71de0],ECX      ; 004f5ca9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f5caf | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f5cb5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004f5cba
    POP ESI                             ; 004f5cbd
    JMP 0x004f5c7f                      ; 004f5cbe
        ;   XREF to: 004f5c7f (UNCONDITIONAL_JUMP)  ; LAB_004f5c7f

