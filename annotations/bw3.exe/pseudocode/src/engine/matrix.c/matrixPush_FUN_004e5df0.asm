; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPush_FUN_004e5df0(void)
;
;
; XREF[1]:
;   engine_matrix.c_matrixPush_FUN_0046d070 at 0046d070
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6efe
;   TerminatedCString s_Matrix_unbalance_005c6f11
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2f0
;   undefined4 DAT_01c6e2f4
;   undefined4 DAT_01c6e2f8
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d726a0]                ; 004e5df0 | DAT_01d726a0
        ;   Label: engine_matrix.c_matrixPush_FUN_004e5df0
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e5df5 | DAT_01c6e2cc
    MOV dword ptr [EAX*0x4 + 0x1d7280c],EDX ; 004e5dfb
    MOV EDX,dword ptr [0x01c6e2d0]      ; 004e5e02 | DAT_01c6e2d0
    MOV dword ptr [EAX*0x4 + 0x1d72834],EDX ; 004e5e08
    MOV EDX,dword ptr [0x01c6e2d4]      ; 004e5e0f | DAT_01c6e2d4
    MOV dword ptr [EAX*0x4 + 0x1d7285c],EDX ; 004e5e15
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e5e1c | DAT_01c6e2f0
    MOV dword ptr [EAX*0x4 + 0x1d72884],EDX ; 004e5e22
    MOV EDX,dword ptr [0x01c6e2f4]      ; 004e5e29 | DAT_01c6e2f4
    MOV dword ptr [EAX*0x4 + 0x1d728ac],EDX ; 004e5e2f
    MOV EDX,dword ptr [0x01c6e2f8]      ; 004e5e36 | DAT_01c6e2f8
    MOV dword ptr [EAX*0x4 + 0x1d728d4],EDX ; 004e5e3c
    MOV EDX,dword ptr [0x01c6e2fc]      ; 004e5e43 | DAT_01c6e2fc
    MOV dword ptr [EAX*0x4 + 0x1d726a4],EDX ; 004e5e49
    MOV EDX,dword ptr [0x01c6e300]      ; 004e5e50 | DAT_01c6e300
    MOV dword ptr [EAX*0x4 + 0x1d726cc],EDX ; 004e5e56
    MOV EDX,dword ptr [0x01c6e304]      ; 004e5e5d | DAT_01c6e304
    MOV dword ptr [EAX*0x4 + 0x1d726f4],EDX ; 004e5e63
    MOV EDX,dword ptr [0x01c6e308]      ; 004e5e6a | DAT_01c6e308
    MOV dword ptr [EAX*0x4 + 0x1d7271c],EDX ; 004e5e70
    MOV EDX,dword ptr [0x01c6e30c]      ; 004e5e77 | DAT_01c6e30c
    MOV dword ptr [EAX*0x4 + 0x1d72744],EDX ; 004e5e7d
    MOV EDX,dword ptr [0x01c6e310]      ; 004e5e84 | DAT_01c6e310
    MOV dword ptr [EAX*0x4 + 0x1d7276c],EDX ; 004e5e8a
    MOV EDX,dword ptr [0x01c6e314]      ; 004e5e91 | DAT_01c6e314
    MOV dword ptr [EAX*0x4 + 0x1d72794],EDX ; 004e5e97
    MOV EDX,dword ptr [0x01c6e318]      ; 004e5e9e | DAT_01c6e318
    MOV dword ptr [EAX*0x4 + 0x1d727bc],EDX ; 004e5ea4
    MOV EDX,dword ptr [0x01c6e31c]      ; 004e5eab | DAT_01c6e31c
    MOV dword ptr [EAX*0x4 + 0x1d727e4],EDX ; 004e5eb1
    LEA EDX,[EAX + 0x1]                 ; 004e5eb8
    MOV dword ptr [0x01d726a0],EDX      ; 004e5ebb | DAT_01d726a0
    CMP EDX,0x9                         ; 004e5ec1
    JG 0x004e5ec7                       ; 004e5ec4
        ;   XREF to: 004e5ec7 (CONDITIONAL_JUMP)  ; LAB_004e5ec7
    RET                                 ; 004e5ec6
    PUSH ESI                            ; 004e5ec7
        ;   Label: LAB_004e5ec7
    PUSH EBX                            ; 004e5ec8
    MOV EBX,0x5c6efe                    ; 004e5ec9 | = "..\\engine\\matrix.c"
    MOV ESI,0x34b                       ; 004e5ece
    PUSH 0x5c6f11                       ; 004e5ed3 | = "Matrix unbalance"
    MOV dword ptr [0x01d71de0],EBX      ; 004e5ed8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e5ede | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e5ee4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e5ee9
    POP EBX                             ; 004e5eec
    POP ESI                             ; 004e5eed
    RET                                 ; 004e5eee

