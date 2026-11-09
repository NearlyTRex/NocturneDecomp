; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056bcbe(float *param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005ebc55
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0056bcbe
        ;   Label: core_stranger.cpp_FUN_0056bcbe
    PUSH EBX                            ; 0056bcc0
    PUSH EBP                            ; 0056bcc1
    MOV EBP,ESP                         ; 0056bcc2
    SUB ESP,0x18                        ; 0056bcc4
    AND ESP,0xfffffff8                  ; 0056bcc7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0056bcca
    FLD float ptr [EBP + 0x10]          ; 0056bccd
    FST double ptr [ESP + 0x8]          ; 0056bcd0
    FCOMP double ptr [0x005ebc55]       ; 0056bcd4 | DAT_005ebc55
    FNSTSW AX                           ; 0056bcda
    SAHF                                ; 0056bcdc
    JC 0x0056bd3e                       ; 0056bcdd
        ;   XREF to: 0056bd3e (CONDITIONAL_JUMP)  ; LAB_0056bd3e
    FLD float ptr [EBP + 0x10]          ; 0056bcdf
    FMUL ST0                            ; 0056bce2
    FLD float ptr [EBP + 0x14]          ; 0056bce4
    FMUL ST0                            ; 0056bce7
    FSUBP                               ; 0056bce9
    FSQRT                               ; 0056bceb
    FDIV double ptr [ESP + 0x8]         ; 0056bced
    FLD1                                ; 0056bcf1
    FXCH                                ; 0056bcf3
    FSTP double ptr [ESP]               ; 0056bcf5
    FCOMP double ptr [ESP]              ; 0056bcf8
    FNSTSW AX                           ; 0056bcfb
    SAHF                                ; 0056bcfd
    JBE 0x0056bd3e                      ; 0056bcfe
        ;   XREF to: 0056bd3e (CONDITIONAL_JUMP)  ; LAB_0056bd3e
    FLDZ                                ; 0056bd00
    FCOMP double ptr [ESP]              ; 0056bd02
    FNSTSW AX                           ; 0056bd05
    SAHF                                ; 0056bd07
    JA 0x0056bd3e                       ; 0056bd08
        ;   XREF to: 0056bd3e (CONDITIONAL_JUMP)  ; LAB_0056bd3e
    FLD double ptr [ESP]                ; 0056bd0a
    CALL crt_math.c_acos_FUN_005b9924   ; 0056bd0d
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0056bd12
    FXCH                                ; 0056bd14
    FSTP float ptr [ESP + 0x10]         ; 0056bd16
    FCOMP float ptr [EBP + 0x14]        ; 0056bd1a
    FNSTSW AX                           ; 0056bd1d
    SAHF                                ; 0056bd1f
    JA 0x0056bd43                       ; 0056bd20
        ;   XREF to: 0056bd43 (CONDITIONAL_JUMP)  ; LAB_0056bd43
    FLD float ptr [EBX]                 ; 0056bd22
    FADD float ptr [ESP + 0x10]         ; 0056bd24
    FSTP float ptr [EBX]                ; 0056bd28
        ;   Label: LAB_0056bd28
    PUSH dword ptr [EBX]                ; 0056bd2a
    CALL core_actor.cpp_FUN_0040d0c0    ; 0056bd2c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18],EAX      ; 0056bd31
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056bd35
    MOV dword ptr [EBX],EAX             ; 0056bd39
    ADD ESP,0x4                         ; 0056bd3b
    MOV ESP,EBP                         ; 0056bd3e
        ;   Label: LAB_0056bd3e
    POP EBP                             ; 0056bd40
    POP EBX                             ; 0056bd41
    RET                                 ; 0056bd42
    FLD float ptr [EBX]                 ; 0056bd43
        ;   Label: LAB_0056bd43
    FSUB float ptr [ESP + 0x10]         ; 0056bd45
    JMP 0x0056bd28                      ; 0056bd49
        ;   XREF to: 0056bd28 (UNCONDITIONAL_JUMP)  ; LAB_0056bd28

