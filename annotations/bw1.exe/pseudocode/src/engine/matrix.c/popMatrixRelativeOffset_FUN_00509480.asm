; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_00509480(void)
;
;
; Referenced Globals:
;   int g_INT_01c51d2c
;   int g_INT_01c51d30
;   int g_INT_01c51d34
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;   int g_INT_01d1dd74
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d1dd74]      ; 00509480 | g_INT_01d1dd74
        ;   Label: engine_matrix.c_popMatrixRelativeOffset_FUN_00509480
    DEC EDX                             ; 00509486
    MOV dword ptr [0x01d1dd74],EDX      ; 00509487 | g_INT_01d1dd74
    TEST EDX,EDX                        ; 0050948d
    JL 0x005094bd                       ; 0050948f
        ;   XREF to: 005094bd (CONDITIONAL_JUMP)  ; LAB_005094bd
    MOV EAX,[0x01d1dd74]                ; 00509491 | g_INT_01d1dd74
        ;   Label: LAB_00509491
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1dee0] ; 00509496
    MOV dword ptr [0x01c51d2c],EDX      ; 0050949d | g_INT_01c51d2c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1df08] ; 005094a3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d1df30] ; 005094aa
    MOV dword ptr [0x01c51d30],EDX      ; 005094b1 | g_INT_01c51d30
    MOV [0x01c51d34],EAX                ; 005094b7 | g_INT_01c51d34
    RET                                 ; 005094bc
    PUSH ESI                            ; 005094bd
        ;   Label: LAB_005094bd
    PUSH EBX                            ; 005094be
    MOV EBX,0x5e7839                    ; 005094bf
    MOV ESI,0x5d9                       ; 005094c4
    PUSH 0x5e784c                       ; 005094c9
    MOV dword ptr [0x01d1d400],EBX      ; 005094ce | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005094d4 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 005094da
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 005094df
    POP EBX                             ; 005094e2
    POP ESI                             ; 005094e3
    JMP 0x00509491                      ; 005094e4
        ;   XREF to: 00509491 (UNCONDITIONAL_JUMP)  ; LAB_00509491

