; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_004ea7e0(void)
;
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_MatrixStackIndex
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d05014]      ; 004ea7e0 | g_MatrixStackIndex
        ;   Label: engine_matrix.c_popMatrixRelativeOffset_FUN_004ea7e0
    DEC EDX                             ; 004ea7e6
    MOV dword ptr [0x01d05014],EDX      ; 004ea7e7 | g_MatrixStackIndex
    TEST EDX,EDX                        ; 004ea7ed
    JL 0x004ea81d                       ; 004ea7ef
        ;   XREF to: 004ea81d (CONDITIONAL_JUMP)  ; LAB_004ea81d
    MOV EAX,[0x01d05014]                ; 004ea7f1 | g_MatrixStackIndex
        ;   Label: LAB_004ea7f1
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05180] ; 004ea7f6
    MOV dword ptr [0x01c38b6c],EDX      ; 004ea7fd | g_RelativeX
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051a8] ; 004ea803
    MOV EAX,dword ptr [EAX*0x4 + 0x1d051d0] ; 004ea80a
    MOV dword ptr [0x01c38b70],EDX      ; 004ea811 | g_RelativeY
    MOV [0x01c38b74],EAX                ; 004ea817 | g_RelativeZ
    RET                                 ; 004ea81c
    PUSH ESI                            ; 004ea81d
        ;   Label: LAB_004ea81d
    PUSH EBX                            ; 004ea81e
    MOV EBX,0x5dc8e9                    ; 004ea81f
    MOV ESI,0x5d9                       ; 004ea824
    PUSH 0x5dc8fc                       ; 004ea829
    MOV dword ptr [0x01d046a0],EBX      ; 004ea82e | g_CurrentFilename
    MOV dword ptr [0x01d046a4],ESI      ; 004ea834 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 004ea83a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 004ea83f
    POP EBX                             ; 004ea842
    POP ESI                             ; 004ea843
    JMP 0x004ea7f1                      ; 004ea844
        ;   XREF to: 004ea7f1 (UNCONDITIONAL_JUMP)  ; LAB_004ea7f1

