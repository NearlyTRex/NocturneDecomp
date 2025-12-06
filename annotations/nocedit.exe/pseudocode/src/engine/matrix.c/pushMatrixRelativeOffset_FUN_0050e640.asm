; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640(int offset_x, int offset_y, int offset_z)
;
; Parameters:
; int              Stack[0x4]:4   offset_x
; int              Stack[0x8]:4   offset_y
; int              Stack[0xc]:4   offset_z
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00635b73
;   TerminatedCString s_Matrix_unbalance3_00635b86
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

    PUSH EBX                            ; 0050e640
        ;   Label: engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640
    PUSH ESI                            ; 0050e641
    PUSH EBP                            ; 0050e642
    MOV EAX,[0x02f0d3c0]                ; 0050e643 | int g_MatrixStackIndex
    MOV EDX,dword ptr [0x02d052b8]      ; 0050e648 | int g_RelativeX
    MOV ECX,dword ptr [0x02d052bc]      ; 0050e64e | int g_RelativeY
    MOV dword ptr [EAX*0x4 + 0x2f0d52c],EDX ; 0050e654 | int[10] g_MatrixStack_RelX
    MOV EDX,dword ptr [0x02d052bc]      ; 0050e65b | int g_RelativeY
    MOV EBX,dword ptr [0x02d052c0]      ; 0050e661 | int g_RelativeZ
    MOV dword ptr [EAX*0x4 + 0x2f0d554],EDX ; 0050e667 | int[10] g_MatrixStack_RelY
    MOV EDX,dword ptr [0x02d052c0]      ; 0050e66e | int g_RelativeZ
    MOV ESI,dword ptr [0x02f0d3c0]      ; 0050e674 | int g_MatrixStackIndex
    MOV dword ptr [EAX*0x4 + 0x2f0d57c],EDX ; 0050e67a | int[10] g_MatrixStack_RelZ
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050e681
    MOV EDX,dword ptr [0x02d052b8]      ; 0050e685 | int g_RelativeX
    INC ESI                             ; 0050e68b
    SUB EDX,EAX                         ; 0050e68c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050e68e
    MOV dword ptr [0x02f0d3c0],ESI      ; 0050e692 | int g_MatrixStackIndex
    SUB ECX,EAX                         ; 0050e698
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e69a
    MOV dword ptr [0x02d052b8],EDX      ; 0050e69e | int g_RelativeX
    SUB EBX,EAX                         ; 0050e6a4
    MOV dword ptr [0x02d052bc],ECX      ; 0050e6a6 | int g_RelativeY
    MOV dword ptr [0x02d052c0],EBX      ; 0050e6ac | int g_RelativeZ
    CMP ESI,0x9                         ; 0050e6b2
    JG 0x0050e6bb                       ; 0050e6b5 | LAB_0050e6bb
        ;   XREF to: 0050e6bb (CONDITIONAL_JUMP)
    POP EBP                             ; 0050e6b7
    POP ESI                             ; 0050e6b8
    POP EBX                             ; 0050e6b9
    RET                                 ; 0050e6ba
    MOV EBP,0x635b73                    ; 0050e6bb | = "..\\engine\\matrix.c" | s_engine_matrix_c_00635b73 = ..\engine\matrix.c
        ;   Label: LAB_0050e6bb
    MOV EAX,0x5cc                       ; 0050e6c0
    PUSH 0x635b86                       ; 0050e6c5 | = "Matrix unbalance3" | s_Matrix_unbalance3_00635b86 = Matrix unbalance3
    MOV dword ptr [0x02f0ca48],EBP      ; 0050e6ca | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0050e6d0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050e6d5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0050e6da
    POP EBP                             ; 0050e6dd
    POP ESI                             ; 0050e6de
    POP EBX                             ; 0050e6df
    RET                                 ; 0050e6e0

