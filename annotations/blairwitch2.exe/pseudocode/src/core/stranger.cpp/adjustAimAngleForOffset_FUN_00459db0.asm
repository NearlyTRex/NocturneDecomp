; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_00459db0(float *angle,float distance,float offset)
;
; Parameters:
; float *          Stack[0x4]:4   angle
; float            Stack[0x8]:4   distance
; float            Stack[0xc]:4   offset
;
; Referenced Globals:
;   undefined4 DAT_005d0517
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459db0
        ;   Label: core_stranger.cpp_adjustAimAngleForOffset_FUN_00459db0
    PUSH EBP                            ; 00459db1
    MOV EBP,ESP                         ; 00459db2
    SUB ESP,0x18                        ; 00459db4
    AND ESP,0xfffffff8                  ; 00459db7
    MOV EBX,dword ptr [EBP + 0xc]       ; 00459dba
    FLD float ptr [EBP + 0x10]          ; 00459dbd
    FST double ptr [ESP + 0x8]          ; 00459dc0
    FCOMP double ptr [0x005d0517]       ; 00459dc4 | DAT_005d0517
    FNSTSW AX                           ; 00459dca
    SAHF                                ; 00459dcc
    JC 0x00459e2e                       ; 00459dcd
        ;   XREF to: 00459e2e (CONDITIONAL_JUMP)  ; LAB_00459e2e
    FLD float ptr [EBP + 0x10]          ; 00459dcf
    FMUL ST0                            ; 00459dd2
    FLD float ptr [EBP + 0x14]          ; 00459dd4
    FMUL ST0                            ; 00459dd7
    FSUBP                               ; 00459dd9
    FSQRT                               ; 00459ddb
    FDIV double ptr [ESP + 0x8]         ; 00459ddd
    FLD1                                ; 00459de1
    FXCH                                ; 00459de3
    FSTP double ptr [ESP]               ; 00459de5
    FCOMP double ptr [ESP]              ; 00459de8
    FNSTSW AX                           ; 00459deb
    SAHF                                ; 00459ded
    JBE 0x00459e2e                      ; 00459dee
        ;   XREF to: 00459e2e (CONDITIONAL_JUMP)  ; LAB_00459e2e
    FLDZ                                ; 00459df0
    FCOMP double ptr [ESP]              ; 00459df2
    FNSTSW AX                           ; 00459df5
    SAHF                                ; 00459df7
    JA 0x00459e2e                       ; 00459df8
        ;   XREF to: 00459e2e (CONDITIONAL_JUMP)  ; LAB_00459e2e
    FLD double ptr [ESP]                ; 00459dfa
    CALL crt_math.c_acos_FUN_005b9924   ; 00459dfd
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 00459e02
    FXCH                                ; 00459e04
    FSTP float ptr [ESP + 0x10]         ; 00459e06
    FCOMP float ptr [EBP + 0x14]        ; 00459e0a
    FNSTSW AX                           ; 00459e0d
    SAHF                                ; 00459e0f
    JA 0x00459e33                       ; 00459e10
        ;   XREF to: 00459e33 (CONDITIONAL_JUMP)  ; LAB_00459e33
    FLD float ptr [EBX]                 ; 00459e12
    FADD float ptr [ESP + 0x10]         ; 00459e14
    FSTP float ptr [EBX]                ; 00459e18
        ;   Label: LAB_00459e18
    PUSH dword ptr [EBX]                ; 00459e1a
    CALL core_actor.cpp_FUN_0040d0c0    ; 00459e1c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x18],EAX      ; 00459e21
    MOV EAX,dword ptr [ESP + 0x18]      ; 00459e25
    MOV dword ptr [EBX],EAX             ; 00459e29
    ADD ESP,0x4                         ; 00459e2b
    MOV ESP,EBP                         ; 00459e2e
        ;   Label: LAB_00459e2e
    POP EBP                             ; 00459e30
    POP EBX                             ; 00459e31
    RET                                 ; 00459e32
    FLD float ptr [EBX]                 ; 00459e33
        ;   Label: LAB_00459e33
    FSUB float ptr [ESP + 0x10]         ; 00459e35
    JMP 0x00459e18                      ; 00459e39
        ;   XREF to: 00459e18 (UNCONDITIONAL_JUMP)  ; LAB_00459e18

