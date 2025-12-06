; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_matrix.c_vectorLength3DToInt_FUN_0050dad0(CVector3i * vector_ptr)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vector_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 0050dad0
        ;   Label: engine_matrix.c_vectorLength3DToInt_FUN_0050dad0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050dad3
    FILD dword ptr [EAX]                ; 0050dad7
    FMUL ST0                            ; 0050dad9
    FILD dword ptr [EAX + 0x4]          ; 0050dadb
    FMUL ST0                            ; 0050dade
    FADDP                               ; 0050dae0
    FILD dword ptr [EAX + 0x8]          ; 0050dae2
    FMUL ST0                            ; 0050dae5
    FADDP                               ; 0050dae7
    FSQRT                               ; 0050dae9
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050daeb | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x18]        ; 0050daf0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050daf4
    ADD ESP,0x1c                        ; 0050daf8
    RET                                 ; 0050dafb

