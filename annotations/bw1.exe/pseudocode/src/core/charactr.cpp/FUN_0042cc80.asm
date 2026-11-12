; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_charactr_cpp_FUN_0042cc80(undefined4 param_1,float param_2)
;
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0042cc80
        ;   Label: core_charactr.cpp_FUN_0042cc80
    PUSH dword ptr [ESP + 0x10]         ; 0042cc83
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0042cc87
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0042cc8c
    FLD float ptr [ESP + 0xc]           ; 0042cc90
    ADD ESP,0x4                         ; 0042cc94
    FLD float ptr [ESP + 0x14]          ; 0042cc97
    FXCH                                ; 0042cc9b
    FST float ptr [ESP + 0x10]          ; 0042cc9d
    FXCH                                ; 0042cca1
    FCHS                                ; 0042cca3
    FSTP float ptr [ESP]                ; 0042cca5
    FCOMP float ptr [ESP]               ; 0042cca8
    FNSTSW AX                           ; 0042ccab
    SAHF                                ; 0042ccad
    JC 0x0042cccd                       ; 0042ccae
        ;   XREF to: 0042cccd (CONDITIONAL_JUMP)  ; LAB_0042cccd
    FLD float ptr [ESP + 0x10]          ; 0042ccb0
    FCOMP float ptr [ESP + 0x14]        ; 0042ccb4
    FNSTSW AX                           ; 0042ccb8
    SAHF                                ; 0042ccba
    JBE 0x0042ccd2                      ; 0042ccbb
        ;   XREF to: 0042ccd2 (CONDITIONAL_JUMP)  ; LAB_0042ccd2
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ccbd
    MOV dword ptr [ESP + 0x4],EAX       ; 0042ccc1
        ;   Label: LAB_0042ccc1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ccc5
    ADD ESP,0xc                         ; 0042ccc9
    RET                                 ; 0042cccc
    MOV EAX,dword ptr [ESP]             ; 0042cccd
        ;   Label: LAB_0042cccd
    JMP 0x0042ccc1                      ; 0042ccd0
        ;   XREF to: 0042ccc1 (UNCONDITIONAL_JUMP)  ; LAB_0042ccc1
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042ccd2
        ;   Label: LAB_0042ccd2
    MOV dword ptr [ESP + 0x4],EAX       ; 0042ccd6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ccda
    ADD ESP,0xc                         ; 0042ccde
    RET                                 ; 0042cce1

