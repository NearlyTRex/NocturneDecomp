; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dynamite_cpp_CDynamite_process_FUN_0046edc0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined8       Stack[-0x68]:8  local_68
; undefined        Stack[-0x48]:1  local_48
;
; Referenced Globals:
;   undefined4 DAT_0057e4ee
;   undefined4 DAT_0057e4f6
;   undefined4 DAT_0059c91c
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_sound.cpp_CSound_killSound_FUN_0052ebb0
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046edc0
        ;   Label: core_dynamite.cpp_CDynamite_process_FUN_0046edc0
    PUSH ESI                            ; 0046edc1
    PUSH EBP                            ; 0046edc2
    MOV EBP,ESP                         ; 0046edc3
    SUB ESP,0x5c                        ; 0046edc5
    AND ESP,0xfffffff8                  ; 0046edc8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046edcb
    PUSH dword ptr [EBP + 0x14]         ; 0046edce
    PUSH EBX                            ; 0046edd1
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 0046edd2
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_process_FUN_00554030()
    FLD float ptr [EBX + 0x570]         ; 0046edd7
    FLDZ                                ; 0046eddd
    ADD ESP,0x8                         ; 0046eddf
    FCOMPP                              ; 0046ede2
    FNSTSW AX                           ; 0046ede4
    SAHF                                ; 0046ede6
    JA 0x0046ee2b                       ; 0046ede7
        ;   XREF to: 0046ee2b (CONDITIONAL_JUMP)  ; LAB_0046ee2b
    FLD float ptr [EBX + 0x570]         ; 0046ede9
    FSUB float ptr [EBP + 0x14]         ; 0046edef
    FLDZ                                ; 0046edf2
    FXCH                                ; 0046edf4
    FST float ptr [EBX + 0x570]         ; 0046edf6
    FSTP double ptr [ESP]               ; 0046edfc
    FCOMP double ptr [ESP]              ; 0046edff
    FNSTSW AX                           ; 0046ee02
    SAHF                                ; 0046ee04
    JA 0x0046ee31                       ; 0046ee05
        ;   XREF to: 0046ee31 (CONDITIONAL_JUMP)  ; LAB_0046ee31
    FLD float ptr [EBP + 0x14]          ; 0046ee07
    FMUL double ptr [0x0057e4ee]        ; 0046ee0a | DAT_0057e4ee
    FMUL double ptr [ESP]               ; 0046ee10
    FDIV float ptr [0x0059c91c]         ; 0046ee13 | DAT_0059c91c
    SUB ESP,0x4                         ; 0046ee19
    FSTP float ptr [ESP]                ; 0046ee1c
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0046ee1f
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0046ee24
    TEST EAX,EAX                        ; 0046ee27
    JNZ 0x0046ee5d                      ; 0046ee29
        ;   XREF to: 0046ee5d (CONDITIONAL_JUMP)  ; LAB_0046ee5d
    MOV ESP,EBP                         ; 0046ee2b
        ;   Label: LAB_0046ee2b
    POP EBP                             ; 0046ee2d
    POP ESI                             ; 0046ee2e
    POP EBX                             ; 0046ee2f
    RET                                 ; 0046ee30
    MOV ECX,dword ptr [EBX + 0x580]     ; 0046ee31
        ;   Label: LAB_0046ee31
    PUSH ECX                            ; 0046ee37
    MOV ESI,dword ptr [0x005bed68]      ; 0046ee38 | DAT_005bed68
    PUSH ESI                            ; 0046ee3e
    MOV dword ptr [EBX + 0x570],0x0     ; 0046ee3f
    CALL core_sound.cpp_CSound_killSound_FUN_0052ebb0 ; 0046ee49
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_killSound_FUN_0052ebb0()
    ADD ESP,0x8                         ; 0046ee4e
    MOV dword ptr [EBX + 0x580],0x0     ; 0046ee51
    JMP 0x0046ee2b                      ; 0046ee5b
        ;   XREF to: 0046ee2b (UNCONDITIONAL_JUMP)  ; LAB_0046ee2b
    LEA EAX,[ESP + 0x20]                ; 0046ee5d
        ;   Label: LAB_0046ee5d
    PUSH EAX                            ; 0046ee61
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0046ee62
    PUSH EBX                            ; 0046ee68
    CALL dword ptr [EDX + 0x14]         ; 0046ee69
    LEA EDX,[EAX + 0xc]                 ; 0046ee6c
    FLD float ptr [EAX]                 ; 0046ee6f
    FADD float ptr [EDX]                ; 0046ee71
    ADD ESP,0x8                         ; 0046ee73
    FST float ptr [ESP + 0x44]          ; 0046ee76
    FLD float ptr [EAX + 0x4]           ; 0046ee7a
    FADD float ptr [EDX + 0x4]          ; 0046ee7d
    FXCH                                ; 0046ee80
    FLD float ptr [0x0057e4f6]          ; 0046ee82 | DAT_0057e4f6
    FXCH                                ; 0046ee88
    FMUL ST1                            ; 0046ee8a
    FXCH ST2                            ; 0046ee8c
    FST float ptr [ESP + 0x48]          ; 0046ee8e
    FLD float ptr [EAX + 0x8]           ; 0046ee92
    FADD float ptr [EDX + 0x8]          ; 0046ee95
    FXCH                                ; 0046ee98
    FMUL ST2                            ; 0046ee9a
    FXCH                                ; 0046ee9c
    FST float ptr [ESP + 0x4c]          ; 0046ee9e
    FMULP ST2                           ; 0046eea2
    LEA EAX,[ESP + 0x8]                 ; 0046eea4
    FXCH ST2                            ; 0046eea8
    FSTP float ptr [ESP + 0x38]         ; 0046eeaa
    PUSH EAX                            ; 0046eeae
    FXCH                                ; 0046eeaf
    FSTP float ptr [ESP + 0x40]         ; 0046eeb1
    PUSH EBX                            ; 0046eeb5
    FSTP float ptr [ESP + 0x48]         ; 0046eeb6
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0046eeba
    CALL dword ptr [EDX + 0x14]         ; 0046eec0
    ADD ESP,0x8                         ; 0046eec3
    MOV EAX,dword ptr [EAX + 0x14]      ; 0046eec6
    MOV dword ptr [ESP + 0x40],EAX      ; 0046eec9
    LEA EAX,[ESP + 0x38]                ; 0046eecd
    PUSH EAX                            ; 0046eed1
    LEA EAX,[ESP + 0x54]                ; 0046eed2
    PUSH EAX                            ; 0046eed6
    PUSH EBX                            ; 0046eed7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0046eed8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    MOV EBX,EAX                         ; 0046eedd
    LEA EAX,[ESP + 0x44]                ; 0046eedf
    ADD ESP,0xc                         ; 0046eee3
    CMP EAX,EBX                         ; 0046eee6
    JZ 0x0046eefe                       ; 0046eee8
        ;   XREF to: 0046eefe (CONDITIONAL_JUMP)  ; LAB_0046eefe
    MOV EAX,dword ptr [EBX]             ; 0046eeea
    MOV dword ptr [ESP + 0x38],EAX      ; 0046eeec
    MOV EAX,dword ptr [EBX + 0x4]       ; 0046eef0
    MOV dword ptr [ESP + 0x3c],EAX      ; 0046eef3
    MOV EAX,dword ptr [EBX + 0x8]       ; 0046eef7
    MOV dword ptr [ESP + 0x40],EAX      ; 0046eefa
    PUSH 0xffff                         ; 0046eefe
        ;   Label: LAB_0046eefe
    PUSH 0x0                            ; 0046ef03
    PUSH 0x10000                        ; 0046ef05
    PUSH 0x4000                         ; 0046ef0a
    PUSH 0x0                            ; 0046ef0f
    LEA EAX,[ESP + 0x4c]                ; 0046ef11
    PUSH EAX                            ; 0046ef15
    MOV EDX,dword ptr [0x005b80f0]      ; 0046ef16 | DAT_005b80f0
    PUSH EDX                            ; 0046ef1c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0046ef1d
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 0046ef22
    MOV ESP,EBP                         ; 0046ef25
    POP EBP                             ; 0046ef27
    POP ESI                             ; 0046ef28
    POP EBX                             ; 0046ef29
    RET                                 ; 0046ef2a

