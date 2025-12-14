; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vampboss.cpp_FUN_005e58d0()
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005e58d0
        ;   Label: core_vampboss.cpp_FUN_005e58d0
    PUSH dword ptr [ESP + 0x10]         ; 005e58d3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e58d7
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xc],EAX       ; 005e58dc
    FLD float ptr [ESP + 0xc]           ; 005e58e0
    ADD ESP,0x4                         ; 005e58e4
    FLD float ptr [ESP + 0x14]          ; 005e58e7
    FXCH                                ; 005e58eb
    FST float ptr [ESP + 0x10]          ; 005e58ed
    FXCH                                ; 005e58f1
    FCHS                                ; 005e58f3
    FSTP float ptr [ESP]                ; 005e58f5
    FCOMP float ptr [ESP]               ; 005e58f8
    FNSTSW AX                           ; 005e58fb
    SAHF                                ; 005e58fd
    JC 0x005e591d                       ; 005e58fe
        ;   XREF to: 005e591d (CONDITIONAL_JUMP)  ; LAB_005e591d
    FLD float ptr [ESP + 0x10]          ; 005e5900
    FCOMP float ptr [ESP + 0x14]        ; 005e5904
    FNSTSW AX                           ; 005e5908
    SAHF                                ; 005e590a
    JBE 0x005e5922                      ; 005e590b
        ;   XREF to: 005e5922 (CONDITIONAL_JUMP)  ; LAB_005e5922
    MOV EAX,dword ptr [ESP + 0x14]      ; 005e590d
    MOV dword ptr [ESP + 0x4],EAX       ; 005e5911
        ;   Label: LAB_005e5911
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e5915
    ADD ESP,0xc                         ; 005e5919
    RET                                 ; 005e591c
    MOV EAX,dword ptr [ESP]             ; 005e591d
        ;   Label: LAB_005e591d
    JMP 0x005e5911                      ; 005e5920
        ;   XREF to: 005e5911 (UNCONDITIONAL_JUMP)  ; LAB_005e5911
    MOV EAX,dword ptr [ESP + 0x10]      ; 005e5922
        ;   Label: LAB_005e5922
    MOV dword ptr [ESP + 0x4],EAX       ; 005e5926
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e592a
    ADD ESP,0xc                         ; 005e592e
    RET                                 ; 005e5931

