; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_archive_FUN_00411b50(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_courseFilename_00578790
;   TerminatedCString s_param_0057879f
;   TerminatedCString s_speed_005787a5
;   TerminatedCString s_flapSpeedMult_005787ab
;   TerminatedCString s_courseSpeed_005787b9
;   TerminatedCString s_modelName_005787c5
;   TerminatedCString s_periodicSoundTimerMin_005787cf
;   TerminatedCString s_periodicSoundTimerMax_005787e5
;   double DOUBLE_005787ff = 30
;   int g_INT_005acf94 = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411b50
        ;   Label: core_bat.cpp_CBat_archive_FUN_00411b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411b51
    PUSH EBX                            ; 00411b55
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00411b56
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411b5b
    PUSH 0x578790                       ; 00411b5e | = "courseFilename"
    LEA EAX,[EBX + 0x150]               ; 00411b63
    PUSH EAX                            ; 00411b69
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00411b6a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00411b6f
    PUSH 0x57879f                       ; 00411b72 | = "param"
    LEA EAX,[EBX + 0x2fc]               ; 00411b77
    PUSH EAX                            ; 00411b7d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411b7e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005acf94]      ; 00411b83 | g_INT_005acf94
    ADD ESP,0x8                         ; 00411b89
    LEA EAX,[EBX + 0x304]               ; 00411b8c
    CMP EDX,0x3                         ; 00411b92
    JL 0x00411be1                       ; 00411b95
        ;   XREF to: 00411be1 (CONDITIONAL_JUMP)  ; LAB_00411be1
    PUSH 0x5787ab                       ; 00411b97 | = "flapSpeedMult"
    PUSH EAX                            ; 00411b9c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411b9d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411ba2
    PUSH 0x5787b9                       ; 00411ba5 | = "courseSpeed"
    LEA EAX,[EBX + 0x300]               ; 00411baa
    PUSH EAX                            ; 00411bb0
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411bb1
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411bb6
    CMP dword ptr [0x005acf94],0x2      ; 00411bb9 | g_INT_005acf94
        ;   Label: LAB_00411bb9
    JL 0x00411bd6                       ; 00411bc0
        ;   XREF to: 00411bd6 (CONDITIONAL_JUMP)  ; LAB_00411bd6
    PUSH 0x5787c5                       ; 00411bc2 | = "modelName"
    LEA EAX,[EBX + 0x180]               ; 00411bc7
    PUSH EAX                            ; 00411bcd
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00411bce
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411bd3
    CMP dword ptr [0x005acf94],0x4      ; 00411bd6 | g_INT_005acf94
        ;   Label: LAB_00411bd6
    JGE 0x00411c03                      ; 00411bdd
        ;   XREF to: 00411c03 (CONDITIONAL_JUMP)  ; LAB_00411c03
    POP EBX                             ; 00411bdf
    RET                                 ; 00411be0
    PUSH 0x5787a5                       ; 00411be1 | = "speed"
        ;   Label: LAB_00411be1
    PUSH EAX                            ; 00411be6
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411be7
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    FLD float ptr [EBX + 0x304]         ; 00411bec
    FMUL double ptr [0x005787ff]        ; 00411bf2 | DOUBLE_005787ff
    ADD ESP,0x8                         ; 00411bf8
    FSTP float ptr [EBX + 0x300]        ; 00411bfb
    JMP 0x00411bb9                      ; 00411c01
        ;   XREF to: 00411bb9 (UNCONDITIONAL_JUMP)  ; LAB_00411bb9
    PUSH 0x0                            ; 00411c03
        ;   Label: LAB_00411c03
    LEA EAX,[EBX + 0x30c]               ; 00411c05
    PUSH EAX                            ; 00411c0b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00411c0c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00411c11
    PUSH 0x5787cf                       ; 00411c14 | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0x370]               ; 00411c19
    PUSH EAX                            ; 00411c1f
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411c20
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411c25
    PUSH 0x5787e5                       ; 00411c28 | = "periodicSoundTimerMax"
    ADD EBX,0x374                       ; 00411c2d
    PUSH EBX                            ; 00411c33
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00411c34
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00411c39
    POP EBX                             ; 00411c3c
    RET                                 ; 00411c3d

