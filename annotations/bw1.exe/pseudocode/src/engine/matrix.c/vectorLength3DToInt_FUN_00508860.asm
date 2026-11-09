; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_matrix_c_vectorLength3DToInt_FUN_00508860(CVector3i *vector_ptr)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vector_ptr
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 00508860
        ;   Label: engine_matrix.c_vectorLength3DToInt_FUN_00508860
    MOV EAX,dword ptr [ESP + 0x20]      ; 00508863
    FILD dword ptr [EAX]                ; 00508867
    FMUL ST0                            ; 00508869
    FILD dword ptr [EAX + 0x4]          ; 0050886b
    FMUL ST0                            ; 0050886e
    FADDP                               ; 00508870
    FILD dword ptr [EAX + 0x8]          ; 00508872
    FMUL ST0                            ; 00508875
    FADDP                               ; 00508877
    FSQRT                               ; 00508879
    CALL crt_math.c_round_FUN_005c03a0  ; 0050887b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 00508880
    MOV EAX,dword ptr [ESP + 0x18]      ; 00508884
    ADD ESP,0x1c                        ; 00508888
    RET                                 ; 0050888b

