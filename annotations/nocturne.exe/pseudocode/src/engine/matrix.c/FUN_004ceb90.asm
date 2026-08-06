; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004ceb90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00588336
;   TerminatedCString s_Matrix_unbalance4_00588349
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cc5174
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cc5174]      ; 004ceb90 | DAT_01cc5174
        ;   Label: engine_matrix.c_FUN_004ceb90
    DEC EDX                             ; 004ceb96
    MOV dword ptr [0x01cc5174],EDX      ; 004ceb97 | DAT_01cc5174
    TEST EDX,EDX                        ; 004ceb9d
    JL 0x004cebcd                       ; 004ceb9f
        ;   XREF to: 004cebcd (CONDITIONAL_JUMP)  ; LAB_004cebcd
    MOV EAX,[0x01cc5174]                ; 004ceba1 | DAT_01cc5174
        ;   Label: LAB_004ceba1
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc52e0] ; 004ceba6
    MOV dword ptr [0x01c039b8],EDX      ; 004cebad | DAT_01c039b8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5308] ; 004cebb3
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5330] ; 004cebba
    MOV dword ptr [0x01c039bc],EDX      ; 004cebc1 | DAT_01c039bc
    MOV [0x01c039c0],EAX                ; 004cebc7 | DAT_01c039c0
    RET                                 ; 004cebcc
    PUSH ESI                            ; 004cebcd
        ;   Label: LAB_004cebcd
    PUSH EBX                            ; 004cebce
    MOV EBX,0x588336                    ; 004cebcf | = "..\\engine\\matrix.c"
    MOV ESI,0x5d6                       ; 004cebd4
    PUSH 0x588349                       ; 004cebd9 | = "Matrix unbalance4"
    MOV dword ptr [0x01cc4800],EBX      ; 004cebde | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004cebe4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004cebea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004cebef
    POP EBX                             ; 004cebf2
    POP ESI                             ; 004cebf3
    JMP 0x004ceba1                      ; 004cebf4
        ;   XREF to: 004ceba1 (UNCONDITIONAL_JUMP)  ; LAB_004ceba1

