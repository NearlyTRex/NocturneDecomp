; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(float *param_1,float param_2)
;
;
; XREF[4]:
;   core_fire.cpp_initProcess_FUN_00499ee0 at 00499f42
;   core_manpuz.cpp_FUN_004e57f0 at 004e57fe
;   core_trash.cpp_FUN_00576ab0 at 00576acb
;   core_vampboss.cpp_FUN_00581910 at 005829f4
;
; Referenced Globals:
;   undefined4 DAT_01cedee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce100
        ;   Label: core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
    PUSH ESI                            ; 004ce101
    SUB ESP,0xc                         ; 004ce102
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ce105
    FLD float ptr [ESP + 0x1c]          ; 004ce109
    FMUL ST0                            ; 004ce10d
    MOV EDX,dword ptr [0x01cedee0]      ; 004ce10f | DAT_01cedee0
    FSTP float ptr [ESP + 0x1c]         ; 004ce115
    TEST EDX,EDX                        ; 004ce119
    JLE 0x004ce139                      ; 004ce11b
        ;   XREF to: 004ce139 (CONDITIONAL_JUMP)  ; LAB_004ce139
    MOV EBX,dword ptr [0x01cedee0]      ; 004ce11d | DAT_01cedee0
    XOR EDX,EDX                         ; 004ce123
    SHL EBX,0x2                         ; 004ce125
    MOV ESI,dword ptr [EDX + 0x1cedee4] ; 004ce128
        ;   Label: LAB_004ce128
    TEST ESI,ESI                        ; 004ce12e
    JNZ 0x004ce141                      ; 004ce130
        ;   XREF to: 004ce141 (CONDITIONAL_JUMP)  ; LAB_004ce141
    ADD EDX,0x4                         ; 004ce132
        ;   Label: LAB_004ce132
    CMP EDX,EBX                         ; 004ce135
    JL 0x004ce128                       ; 004ce137
        ;   XREF to: 004ce128 (CONDITIONAL_JUMP)  ; LAB_004ce128
    XOR EAX,EAX                         ; 004ce139
        ;   Label: LAB_004ce139
    ADD ESP,0xc                         ; 004ce13b
    POP ESI                             ; 004ce13e
    POP EBX                             ; 004ce13f
    RET                                 ; 004ce140
    MOV EAX,ESI                         ; 004ce141
        ;   Label: LAB_004ce141
    FLD float ptr [EAX + 0x20]          ; 004ce143
    FSUB float ptr [ECX]                ; 004ce146
    FMUL ST0                            ; 004ce148
    FLD float ptr [EAX + 0x24]          ; 004ce14a
    FSUB float ptr [ECX + 0x4]          ; 004ce14d
    FMUL ST0                            ; 004ce150
    FLD float ptr [EAX + 0x28]          ; 004ce152
    FXCH                                ; 004ce155
    FADDP ST2,ST0                       ; 004ce157
    FSUB float ptr [ECX + 0x8]          ; 004ce159
    FMUL ST0                            ; 004ce15c
    FADDP                               ; 004ce15e
    FCOMP float ptr [ESP + 0x1c]        ; 004ce160
    FNSTSW AX                           ; 004ce164
    SAHF                                ; 004ce166
    JNC 0x004ce132                      ; 004ce167
        ;   XREF to: 004ce132 (CONDITIONAL_JUMP)  ; LAB_004ce132
    MOV EAX,0x1                         ; 004ce169
    ADD ESP,0xc                         ; 004ce16e
    POP ESI                             ; 004ce171
    POP EBX                             ; 004ce172
    RET                                 ; 004ce173

