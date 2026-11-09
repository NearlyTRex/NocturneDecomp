; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004e6ec0(void)
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

    MOV EDX,dword ptr [0x01d726a0]      ; 004e6ec0 | DAT_01d726a0
        ;   Label: engine_matrix.c_popMatrixRelativeOffset_FUN_004e6ec0
    DEC EDX                             ; 004e6ec6
    MOV dword ptr [0x01d726a0],EDX      ; 004e6ec7 | DAT_01d726a0
    TEST EDX,EDX                        ; 004e6ecd
    JL 0x004e6efd                       ; 004e6ecf
        ;   XREF to: 004e6efd (CONDITIONAL_JUMP)  ; LAB_004e6efd
    MOV EAX,[0x01d726a0]                ; 004e6ed1 | DAT_01d726a0
        ;   Label: LAB_004e6ed1
    MOV EDX,dword ptr [EAX*0x4 + 0x1d7280c] ; 004e6ed6
    MOV dword ptr [0x01c6e2cc],EDX      ; 004e6edd | DAT_01c6e2cc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72834] ; 004e6ee3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7285c] ; 004e6eea
    MOV dword ptr [0x01c6e2d0],EDX      ; 004e6ef1 | DAT_01c6e2d0
    MOV [0x01c6e2d4],EAX                ; 004e6ef7 | DAT_01c6e2d4
    RET                                 ; 004e6efc
    PUSH ESI                            ; 004e6efd
        ;   Label: LAB_004e6efd
    PUSH EBX                            ; 004e6efe
    MOV EBX,0x5c7025                    ; 004e6eff
    MOV ESI,0x5d9                       ; 004e6f04
    PUSH 0x5c7038                       ; 004e6f09
    MOV dword ptr [0x01d71de0],EBX      ; 004e6f0e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e6f14 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e6f1a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e6f1f
    POP EBX                             ; 004e6f22
    POP ESI                             ; 004e6f23
    JMP 0x004e6ed1                      ; 004e6f24
        ;   XREF to: 004e6ed1 (UNCONDITIONAL_JUMP)  ; LAB_004e6ed1

