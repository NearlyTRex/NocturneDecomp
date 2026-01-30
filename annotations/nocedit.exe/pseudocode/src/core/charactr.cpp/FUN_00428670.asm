; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_charactr_cpp_FUN_00428670(void)
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

    SUB ESP,0xc                         ; 00428670
        ;   Label: core_charactr.cpp_FUN_00428670
    PUSH dword ptr [ESP + 0x10]         ; 00428673
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00428677
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xc],EAX       ; 0042867c
    FLD float ptr [ESP + 0xc]           ; 00428680
    ADD ESP,0x4                         ; 00428684
    FLD float ptr [ESP + 0x14]          ; 00428687
    FXCH                                ; 0042868b
    FST float ptr [ESP + 0x10]          ; 0042868d
    FXCH                                ; 00428691
    FCHS                                ; 00428693
    FSTP float ptr [ESP]                ; 00428695
    FCOMP float ptr [ESP]               ; 00428698
    FNSTSW AX                           ; 0042869b
    SAHF                                ; 0042869d
    JC 0x004286bd                       ; 0042869e
        ;   XREF to: 004286bd (CONDITIONAL_JUMP)  ; LAB_004286bd
    FLD float ptr [ESP + 0x10]          ; 004286a0
    FCOMP float ptr [ESP + 0x14]        ; 004286a4
    FNSTSW AX                           ; 004286a8
    SAHF                                ; 004286aa
    JBE 0x004286c2                      ; 004286ab
        ;   XREF to: 004286c2 (CONDITIONAL_JUMP)  ; LAB_004286c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004286ad
    MOV dword ptr [ESP + 0x4],EAX       ; 004286b1
        ;   Label: LAB_004286b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004286b5
    ADD ESP,0xc                         ; 004286b9
    RET                                 ; 004286bc
    MOV EAX,dword ptr [ESP]             ; 004286bd
        ;   Label: LAB_004286bd
    JMP 0x004286b1                      ; 004286c0
        ;   XREF to: 004286b1 (UNCONDITIONAL_JUMP)  ; LAB_004286b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004286c2
        ;   Label: LAB_004286c2
    MOV dword ptr [ESP + 0x4],EAX       ; 004286c6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004286ca
    ADD ESP,0xc                         ; 004286ce
    RET                                 ; 004286d1

