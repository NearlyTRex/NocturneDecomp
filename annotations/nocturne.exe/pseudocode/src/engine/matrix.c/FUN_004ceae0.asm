; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_004ceae0(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_00588311
;   TerminatedCString s_Matrix_unbalance3_00588324
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cc5174
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ceae0
        ;   Label: engine_matrix.c_FUN_004ceae0
    PUSH ESI                            ; 004ceae1
    PUSH EBP                            ; 004ceae2
    MOV EAX,[0x01cc5174]                ; 004ceae3 | DAT_01cc5174
    MOV EDX,dword ptr [0x01c039b8]      ; 004ceae8 | DAT_01c039b8
    MOV ECX,dword ptr [0x01c039bc]      ; 004ceaee | DAT_01c039bc
    MOV dword ptr [EAX*0x4 + 0x1cc52e0],EDX ; 004ceaf4
    MOV EDX,dword ptr [0x01c039bc]      ; 004ceafb | DAT_01c039bc
    MOV EBX,dword ptr [0x01c039c0]      ; 004ceb01 | DAT_01c039c0
    MOV dword ptr [EAX*0x4 + 0x1cc5308],EDX ; 004ceb07
    MOV EDX,dword ptr [0x01c039c0]      ; 004ceb0e | DAT_01c039c0
    MOV ESI,dword ptr [0x01cc5174]      ; 004ceb14 | DAT_01cc5174
    MOV dword ptr [EAX*0x4 + 0x1cc5330],EDX ; 004ceb1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ceb21
    MOV EDX,dword ptr [0x01c039b8]      ; 004ceb25 | DAT_01c039b8
    INC ESI                             ; 004ceb2b
    SUB EDX,EAX                         ; 004ceb2c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ceb2e
    MOV dword ptr [0x01cc5174],ESI      ; 004ceb32 | DAT_01cc5174
    SUB ECX,EAX                         ; 004ceb38
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ceb3a
    MOV dword ptr [0x01c039b8],EDX      ; 004ceb3e | DAT_01c039b8
    SUB EBX,EAX                         ; 004ceb44
    MOV dword ptr [0x01c039bc],ECX      ; 004ceb46 | DAT_01c039bc
    MOV dword ptr [0x01c039c0],EBX      ; 004ceb4c | DAT_01c039c0
    CMP ESI,0x9                         ; 004ceb52
    JG 0x004ceb5b                       ; 004ceb55
        ;   XREF to: 004ceb5b (CONDITIONAL_JUMP)  ; LAB_004ceb5b
    POP EBP                             ; 004ceb57
    POP ESI                             ; 004ceb58
    POP EBX                             ; 004ceb59
    RET                                 ; 004ceb5a
    MOV EBP,0x588311                    ; 004ceb5b | = "..\\engine\\matrix.c"
        ;   Label: LAB_004ceb5b
    MOV EAX,0x5c9                       ; 004ceb60
    PUSH 0x588324                       ; 004ceb65 | = "Matrix unbalance3"
    MOV dword ptr [0x01cc4800],EBP      ; 004ceb6a | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004ceb70 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ceb75
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ceb7a
    POP EBP                             ; 004ceb7d
    POP ESI                             ; 004ceb7e
    POP EBX                             ; 004ceb7f
    RET                                 ; 004ceb80

