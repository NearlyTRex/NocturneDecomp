; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drip_cpp_CDrip_archive_FUN_004621d0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_0057de01
;   TerminatedCString s_type_0057de0b
;   TerminatedCString s_autoDrop_0057de10
;   TerminatedCString s_homePos_0057de19
;   TerminatedCString s_vel_0057de21
;   TerminatedCString s_minAutoDripTime_0057de25
;   TerminatedCString s_maxAutoDripTime_0057de35
;   TerminatedCString s_dripRadius_0057de45
;   TerminatedCString s_damage_0057de50
;   TerminatedCString s_hitSound_0057de57
;   TerminatedCString s_noRockFlag_0057de60
;   int g_INT_005b064c = 0x6
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004621d0
        ;   Label: core_drip.cpp_CDrip_archive_FUN_004621d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004621d1
    CMP dword ptr [0x005b064c],0x2      ; 004621d5 | g_INT_005b064c
    JGE 0x004622d2                      ; 004621dc
        ;   XREF to: 004622d2 (CONDITIONAL_JUMP)  ; LAB_004622d2
    PUSH 0x57de01                       ; 004621e2 | = "modelName"
        ;   Label: LAB_004621e2
    LEA EAX,[EBX + 0x150]               ; 004621e7
    PUSH EAX                            ; 004621ed
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004621ee
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004621f3
    PUSH 0x57de0b                       ; 004621f6 | = "type"
    LEA EAX,[EBX + 0x2cc]               ; 004621fb
    PUSH EAX                            ; 00462201
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00462202
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00462207
    PUSH 0x57de10                       ; 0046220a | = "autoDrop"
    LEA EAX,[EBX + 0x2d0]               ; 0046220f
    PUSH EAX                            ; 00462215
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00462216
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046221b
    PUSH 0x57de19                       ; 0046221e | = "homePos"
    LEA EAX,[EBX + 0x2f0]               ; 00462223
    PUSH EAX                            ; 00462229
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0046222a
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046222f
    PUSH 0x57de21                       ; 00462232 | = "vel"
    LEA EAX,[EBX + 0x2fc]               ; 00462237
    PUSH EAX                            ; 0046223d
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0046223e
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    MOV ECX,dword ptr [0x005b064c]      ; 00462243 | g_INT_005b064c
    ADD ESP,0x8                         ; 00462249
    CMP ECX,0x3                         ; 0046224c
    JL 0x0046228d                       ; 0046224f
        ;   XREF to: 0046228d (CONDITIONAL_JUMP)  ; LAB_0046228d
    PUSH 0x57de25                       ; 00462251 | = "minAutoDripTime"
    LEA EAX,[EBX + 0x2d8]               ; 00462256
    PUSH EAX                            ; 0046225c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0046225d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00462262
    PUSH 0x57de35                       ; 00462265 | = "maxAutoDripTime"
    LEA EAX,[EBX + 0x2dc]               ; 0046226a
    PUSH EAX                            ; 00462270
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00462271
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00462276
    PUSH 0x57de45                       ; 00462279 | = "dripRadius"
    LEA EAX,[EBX + 0x2e0]               ; 0046227e
    PUSH EAX                            ; 00462284
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00462285
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0046228a
    CMP dword ptr [0x005b064c],0x4      ; 0046228d | g_INT_005b064c
        ;   Label: LAB_0046228d
    JL 0x004622aa                       ; 00462294
        ;   XREF to: 004622aa (CONDITIONAL_JUMP)  ; LAB_004622aa
    PUSH 0x57de50                       ; 00462296 | = "damage"
    LEA EAX,[EBX + 0x308]               ; 0046229b
    PUSH EAX                            ; 004622a1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004622a2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004622a7
    CMP dword ptr [0x005b064c],0x5      ; 004622aa | g_INT_005b064c
        ;   Label: LAB_004622aa
    JL 0x004622c7                       ; 004622b1
        ;   XREF to: 004622c7 (CONDITIONAL_JUMP)  ; LAB_004622c7
    PUSH 0x57de57                       ; 004622b3 | = "hitSound"
    LEA EAX,[EBX + 0x30c]               ; 004622b8
    PUSH EAX                            ; 004622be
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004622bf
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004622c4
    CMP dword ptr [0x005b064c],0x6      ; 004622c7 | g_INT_005b064c
        ;   Label: LAB_004622c7
    JGE 0x004622e0                      ; 004622ce
        ;   XREF to: 004622e0 (CONDITIONAL_JUMP)  ; LAB_004622e0
    POP EBX                             ; 004622d0
    RET                                 ; 004622d1
    PUSH EBX                            ; 004622d2
        ;   Label: LAB_004622d2
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004622d3
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004622d8
    JMP 0x004621e2                      ; 004622db
        ;   XREF to: 004621e2 (UNCONDITIONAL_JUMP)  ; LAB_004621e2
    PUSH 0x57de60                       ; 004622e0 | = "noRockFlag"
        ;   Label: LAB_004622e0
    ADD EBX,0x32c                       ; 004622e5
    PUSH EBX                            ; 004622eb
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004622ec
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004622f1
    POP EBX                             ; 004622f4
    RET                                 ; 004622f5

