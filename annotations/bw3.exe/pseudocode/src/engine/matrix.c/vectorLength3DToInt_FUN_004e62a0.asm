; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_004e62a0(CVector3i *vector_ptr)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vector_ptr
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 004e62a0
        ;   Label: engine_matrix.c_vectorLength3DToInt_FUN_004e62a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e62a3
    FILD dword ptr [EAX]                ; 004e62a7
    FMUL ST0                            ; 004e62a9
    FILD dword ptr [EAX + 0x4]          ; 004e62ab
    FMUL ST0                            ; 004e62ae
    FADDP                               ; 004e62b0
    FILD dword ptr [EAX + 0x8]          ; 004e62b2
    FMUL ST0                            ; 004e62b5
    FADDP                               ; 004e62b7
    FSQRT                               ; 004e62b9
    CALL crt_math.c_round_FUN_005a3120  ; 004e62bb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 004e62c0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e62c4
    ADD ESP,0x1c                        ; 004e62c8
    RET                                 ; 004e62cb

