; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_charactr_cpp_FUN_0042b970(undefined4 param_1,float param_2)
;
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0042b970
        ;   Label: core_charactr.cpp_FUN_0042b970
    PUSH dword ptr [ESP + 0x10]         ; 0042b973
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0042b977
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0042b97c
    FLD float ptr [ESP + 0xc]           ; 0042b980
    ADD ESP,0x4                         ; 0042b984
    FLD float ptr [ESP + 0x14]          ; 0042b987
    FXCH                                ; 0042b98b
    FST float ptr [ESP + 0x10]          ; 0042b98d
    FXCH                                ; 0042b991
    FCHS                                ; 0042b993
    FSTP float ptr [ESP]                ; 0042b995
    FCOMP float ptr [ESP]               ; 0042b998
    FNSTSW AX                           ; 0042b99b
    SAHF                                ; 0042b99d
    JC 0x0042b9bd                       ; 0042b99e
        ;   XREF to: 0042b9bd (CONDITIONAL_JUMP)  ; LAB_0042b9bd
    FLD float ptr [ESP + 0x10]          ; 0042b9a0
    FCOMP float ptr [ESP + 0x14]        ; 0042b9a4
    FNSTSW AX                           ; 0042b9a8
    SAHF                                ; 0042b9aa
    JBE 0x0042b9c2                      ; 0042b9ab
        ;   XREF to: 0042b9c2 (CONDITIONAL_JUMP)  ; LAB_0042b9c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042b9ad
    MOV dword ptr [ESP + 0x4],EAX       ; 0042b9b1
        ;   Label: LAB_0042b9b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b9b5
    ADD ESP,0xc                         ; 0042b9b9
    RET                                 ; 0042b9bc
    MOV EAX,dword ptr [ESP]             ; 0042b9bd
        ;   Label: LAB_0042b9bd
    JMP 0x0042b9b1                      ; 0042b9c0
        ;   XREF to: 0042b9b1 (UNCONDITIONAL_JUMP)  ; LAB_0042b9b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042b9c2
        ;   Label: LAB_0042b9c2
    MOV dword ptr [ESP + 0x4],EAX       ; 0042b9c6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b9ca
    ADD ESP,0xc                         ; 0042b9ce
    RET                                 ; 0042b9d1

