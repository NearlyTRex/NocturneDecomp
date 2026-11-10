; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_adjustAimAngleForOffset_FUN_0058e90e(float *param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6ec9
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0058e90e
        ;   Label: core_stranger.cpp_adjustAimAngleForOffset_FUN_0058e90e
    PUSH EBX                            ; 0058e910
    PUSH EBP                            ; 0058e911
    MOV EBP,ESP                         ; 0058e912
    SUB ESP,0x18                        ; 0058e914
    AND ESP,0xfffffff8                  ; 0058e917
    MOV EBX,dword ptr [EBP + 0xc]       ; 0058e91a
    FLD float ptr [EBP + 0x10]          ; 0058e91d
    FST double ptr [ESP + 0x8]          ; 0058e920
    FCOMP double ptr [0x005f6ec9]       ; 0058e924 | DAT_005f6ec9
    FNSTSW AX                           ; 0058e92a
    SAHF                                ; 0058e92c
    JC 0x0058e98e                       ; 0058e92d
        ;   XREF to: 0058e98e (CONDITIONAL_JUMP)  ; LAB_0058e98e
    FLD float ptr [EBP + 0x10]          ; 0058e92f
    FMUL ST0                            ; 0058e932
    FLD float ptr [EBP + 0x14]          ; 0058e934
    FMUL ST0                            ; 0058e937
    FSUBP                               ; 0058e939
    FSQRT                               ; 0058e93b
    FDIV double ptr [ESP + 0x8]         ; 0058e93d
    FLD1                                ; 0058e941
    FXCH                                ; 0058e943
    FSTP double ptr [ESP]               ; 0058e945
    FCOMP double ptr [ESP]              ; 0058e948
    FNSTSW AX                           ; 0058e94b
    SAHF                                ; 0058e94d
    JBE 0x0058e98e                      ; 0058e94e
        ;   XREF to: 0058e98e (CONDITIONAL_JUMP)  ; LAB_0058e98e
    FLDZ                                ; 0058e950
    FCOMP double ptr [ESP]              ; 0058e952
    FNSTSW AX                           ; 0058e955
    SAHF                                ; 0058e957
    JA 0x0058e98e                       ; 0058e958
        ;   XREF to: 0058e98e (CONDITIONAL_JUMP)  ; LAB_0058e98e
    FLD double ptr [ESP]                ; 0058e95a
    CALL crt_math.c_acos_FUN_005c1d04   ; 0058e95d
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0058e962
    FXCH                                ; 0058e964
    FSTP float ptr [ESP + 0x10]         ; 0058e966
    FCOMP float ptr [EBP + 0x14]        ; 0058e96a
    FNSTSW AX                           ; 0058e96d
    SAHF                                ; 0058e96f
    JA 0x0058e993                       ; 0058e970
        ;   XREF to: 0058e993 (CONDITIONAL_JUMP)  ; LAB_0058e993
    FLD float ptr [EBX]                 ; 0058e972
    FADD float ptr [ESP + 0x10]         ; 0058e974
    FSTP float ptr [EBX]                ; 0058e978
        ;   Label: LAB_0058e978
    PUSH dword ptr [EBX]                ; 0058e97a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058e97c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x18],EAX      ; 0058e981
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058e985
    MOV dword ptr [EBX],EAX             ; 0058e989
    ADD ESP,0x4                         ; 0058e98b
    MOV ESP,EBP                         ; 0058e98e
        ;   Label: LAB_0058e98e
    POP EBP                             ; 0058e990
    POP EBX                             ; 0058e991
    RET                                 ; 0058e992
    FLD float ptr [EBX]                 ; 0058e993
        ;   Label: LAB_0058e993
    FSUB float ptr [ESP + 0x10]         ; 0058e995
    JMP 0x0058e978                      ; 0058e999
        ;   XREF to: 0058e978 (UNCONDITIONAL_JUMP)  ; LAB_0058e978

