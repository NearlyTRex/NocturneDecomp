; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_archive_FUN_0040ef20(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_courseFilename_005b6237
;   TerminatedCString s_param_005b6246
;   TerminatedCString s_speed_005b624c
;   TerminatedCString s_flapSpeedMult_005b6252
;   TerminatedCString s_courseSpeed_005b6260
;   TerminatedCString s_modelName_005b626c
;   TerminatedCString s_periodicSoundTimerMin_005b6276
;   TerminatedCString s_periodicSoundTimerMax_005b628c
;   undefined4 DAT_005b62a6
;   int g_CBatClassVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef20
        ;   Label: core_bat.cpp_CBat_archive_FUN_0040ef20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ef21
    PUSH EBX                            ; 0040ef25
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0040ef26
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ef2b
    PUSH 0x5b6237                       ; 0040ef2e | = "courseFilename"
    LEA EAX,[EBX + 0x158]               ; 0040ef33
    PUSH EAX                            ; 0040ef39
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040ef3a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040ef3f
    PUSH 0x5b6246                       ; 0040ef42 | = "param"
    LEA EAX,[EBX + 0x304]               ; 0040ef47
    PUSH EAX                            ; 0040ef4d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040ef4e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x005f0bdc]      ; 0040ef53 | g_CBatClassVersion
    ADD ESP,0x8                         ; 0040ef59
    LEA EAX,[EBX + 0x30c]               ; 0040ef5c
    CMP EDX,0x3                         ; 0040ef62
    JL 0x0040efb1                       ; 0040ef65
        ;   XREF to: 0040efb1 (CONDITIONAL_JUMP)  ; LAB_0040efb1
    PUSH 0x5b6252                       ; 0040ef67 | = "flapSpeedMult"
    PUSH EAX                            ; 0040ef6c
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040ef6d
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040ef72
    PUSH 0x5b6260                       ; 0040ef75 | = "courseSpeed"
    LEA EAX,[EBX + 0x308]               ; 0040ef7a
    PUSH EAX                            ; 0040ef80
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040ef81
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040ef86
    CMP dword ptr [0x005f0bdc],0x2      ; 0040ef89 | g_CBatClassVersion
        ;   Label: LAB_0040ef89
    JL 0x0040efa6                       ; 0040ef90
        ;   XREF to: 0040efa6 (CONDITIONAL_JUMP)  ; LAB_0040efa6
    PUSH 0x5b626c                       ; 0040ef92 | = "modelName"
    LEA EAX,[EBX + 0x188]               ; 0040ef97
    PUSH EAX                            ; 0040ef9d
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0040ef9e
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 0040efa3
    CMP dword ptr [0x005f0bdc],0x4      ; 0040efa6 | g_CBatClassVersion
        ;   Label: LAB_0040efa6
    JGE 0x0040efd3                      ; 0040efad
        ;   XREF to: 0040efd3 (CONDITIONAL_JUMP)  ; LAB_0040efd3
    POP EBX                             ; 0040efaf
    RET                                 ; 0040efb0
    PUSH 0x5b624c                       ; 0040efb1 | = "speed"
        ;   Label: LAB_0040efb1
    PUSH EAX                            ; 0040efb6
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040efb7
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    FLD float ptr [EBX + 0x30c]         ; 0040efbc
    FMUL double ptr [0x005b62a6]        ; 0040efc2 | DAT_005b62a6
    ADD ESP,0x8                         ; 0040efc8
    FSTP float ptr [EBX + 0x308]        ; 0040efcb
    JMP 0x0040ef89                      ; 0040efd1
        ;   XREF to: 0040ef89 (UNCONDITIONAL_JUMP)  ; LAB_0040ef89
    PUSH 0x0                            ; 0040efd3
        ;   Label: LAB_0040efd3
    LEA EAX,[EBX + 0x314]               ; 0040efd5
    PUSH EAX                            ; 0040efdb
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040efdc
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040efe1
    PUSH 0x5b6276                       ; 0040efe4 | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0x378]               ; 0040efe9
    PUSH EAX                            ; 0040efef
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040eff0
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040eff5
    PUSH 0x5b628c                       ; 0040eff8 | = "periodicSoundTimerMax"
    ADD EBX,0x37c                       ; 0040effd
    PUSH EBX                            ; 0040f003
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040f004
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040f009
    POP EBX                             ; 0040f00c
    RET                                 ; 0040f00d

