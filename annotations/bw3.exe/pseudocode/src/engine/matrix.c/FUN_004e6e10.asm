; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004e6e10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d726a0
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6e10
        ;   Label: engine_matrix.c_FUN_004e6e10
    PUSH ESI                            ; 004e6e11
    PUSH EBP                            ; 004e6e12
    MOV EAX,[0x01d726a0]                ; 004e6e13 | DAT_01d726a0
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e6e18 | DAT_01c6e2cc
    MOV ECX,dword ptr [0x01c6e2d0]      ; 004e6e1e | DAT_01c6e2d0
    MOV dword ptr [EAX*0x4 + 0x1d7280c],EDX ; 004e6e24
    MOV EDX,dword ptr [0x01c6e2d0]      ; 004e6e2b | DAT_01c6e2d0
    MOV EBX,dword ptr [0x01c6e2d4]      ; 004e6e31 | DAT_01c6e2d4
    MOV dword ptr [EAX*0x4 + 0x1d72834],EDX ; 004e6e37
    MOV EDX,dword ptr [0x01c6e2d4]      ; 004e6e3e | DAT_01c6e2d4
    MOV ESI,dword ptr [0x01d726a0]      ; 004e6e44 | DAT_01d726a0
    MOV dword ptr [EAX*0x4 + 0x1d7285c],EDX ; 004e6e4a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e6e51
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e6e55 | DAT_01c6e2cc
    INC ESI                             ; 004e6e5b
    SUB EDX,EAX                         ; 004e6e5c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e6e5e
    MOV dword ptr [0x01d726a0],ESI      ; 004e6e62 | DAT_01d726a0
    SUB ECX,EAX                         ; 004e6e68
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e6e6a
    MOV dword ptr [0x01c6e2cc],EDX      ; 004e6e6e | DAT_01c6e2cc
    SUB EBX,EAX                         ; 004e6e74
    MOV dword ptr [0x01c6e2d0],ECX      ; 004e6e76 | DAT_01c6e2d0
    MOV dword ptr [0x01c6e2d4],EBX      ; 004e6e7c | DAT_01c6e2d4
    CMP ESI,0x9                         ; 004e6e82
    JG 0x004e6e8b                       ; 004e6e85
        ;   XREF to: 004e6e8b (CONDITIONAL_JUMP)  ; LAB_004e6e8b
    POP EBP                             ; 004e6e87
    POP ESI                             ; 004e6e88
    POP EBX                             ; 004e6e89
    RET                                 ; 004e6e8a
    MOV EBP,0x5c7000                    ; 004e6e8b
        ;   Label: LAB_004e6e8b
    MOV EAX,0x5cc                       ; 004e6e90
    PUSH 0x5c7013                       ; 004e6e95
    MOV dword ptr [0x01d71de0],EBP      ; 004e6e9a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004e6ea0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e6ea5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e6eaa
    POP EBP                             ; 004e6ead
    POP ESI                             ; 004e6eae
    POP EBX                             ; 004e6eaf
    RET                                 ; 004e6eb0

