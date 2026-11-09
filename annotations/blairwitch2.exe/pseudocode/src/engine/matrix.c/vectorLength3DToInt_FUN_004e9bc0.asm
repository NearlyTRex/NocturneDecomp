; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e9bc0(CVector3i *vector_ptr)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vector_ptr
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 004e9bc0
        ;   Label: engine_matrix.c_vectorLength3DToInt_FUN_004e9bc0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e9bc3
    FILD dword ptr [EAX]                ; 004e9bc7
    FMUL ST0                            ; 004e9bc9
    FILD dword ptr [EAX + 0x4]          ; 004e9bcb
    FMUL ST0                            ; 004e9bce
    FADDP                               ; 004e9bd0
    FILD dword ptr [EAX + 0x8]          ; 004e9bd2
    FMUL ST0                            ; 004e9bd5
    FADDP                               ; 004e9bd7
    FSQRT                               ; 004e9bd9
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e9bdb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 004e9be0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e9be4
    ADD ESP,0x1c                        ; 004e9be8
    RET                                 ; 004e9beb

