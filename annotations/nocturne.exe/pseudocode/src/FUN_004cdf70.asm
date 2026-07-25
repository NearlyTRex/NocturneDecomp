; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cdf70(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 004cdf70
        ;   Label: FUN_004cdf70
    MOV EAX,dword ptr [ESP + 0x20]      ; 004cdf73
    FILD dword ptr [EAX]                ; 004cdf77
    FMUL ST0                            ; 004cdf79
    FILD dword ptr [EAX + 0x4]          ; 004cdf7b
    FMUL ST0                            ; 004cdf7e
    FADDP                               ; 004cdf80
    FILD dword ptr [EAX + 0x8]          ; 004cdf82
    FMUL ST0                            ; 004cdf85
    FADDP                               ; 004cdf87
    FSQRT                               ; 004cdf89
    CALL crt_math.c_round_FUN_00563a30  ; 004cdf8b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x18]        ; 004cdf90
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cdf94
    ADD ESP,0x1c                        ; 004cdf98
    RET                                 ; 004cdf9b

