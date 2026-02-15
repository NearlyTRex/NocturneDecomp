; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_popMatrixRelativeOffset_FUN_0050e6f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635b98
;   TerminatedCString s_Matrix_unbalance4_00635bab
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_MatrixStackIndex
;   int[10] g_MatrixStack_RelX
;   int[10] g_MatrixStack_RelY
;   int[10] g_MatrixStack_RelZ
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02f0d3c0]      ; 0050e6f0 | g_MatrixStackIndex
        ;   Label: engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0
    DEC EDX                             ; 0050e6f6
    MOV dword ptr [0x02f0d3c0],EDX      ; 0050e6f7 | g_MatrixStackIndex
    TEST EDX,EDX                        ; 0050e6fd
    JL 0x0050e72d                       ; 0050e6ff
        ;   XREF to: 0050e72d (CONDITIONAL_JUMP)  ; LAB_0050e72d
    MOV EAX,[0x02f0d3c0]                ; 0050e701 | g_MatrixStackIndex
        ;   Label: LAB_0050e701
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d52c] ; 0050e706 | g_MatrixStack_RelX
    MOV dword ptr [0x02d052b8],EDX      ; 0050e70d | g_RelativeX
    MOV EDX,dword ptr [EAX*0x4 + 0x2f0d554] ; 0050e713 | g_MatrixStack_RelY
    MOV EAX,dword ptr [EAX*0x4 + 0x2f0d57c] ; 0050e71a | g_MatrixStack_RelZ
    MOV dword ptr [0x02d052bc],EDX      ; 0050e721 | g_RelativeY
    MOV [0x02d052c0],EAX                ; 0050e727 | g_RelativeZ
    RET                                 ; 0050e72c
    PUSH ESI                            ; 0050e72d
        ;   Label: LAB_0050e72d
    PUSH EBX                            ; 0050e72e
    MOV EBX,0x635b98                    ; 0050e72f | = "..\\engine\\matrix.c"
    MOV ESI,0x5d9                       ; 0050e734
    PUSH 0x635bab                       ; 0050e739 | = "Matrix unbalance4"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050e73e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050e744 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050e74a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050e74f
    POP EBX                             ; 0050e752
    POP ESI                             ; 0050e753
    JMP 0x0050e701                      ; 0050e754
        ;   XREF to: 0050e701 (UNCONDITIONAL_JUMP)  ; LAB_0050e701

