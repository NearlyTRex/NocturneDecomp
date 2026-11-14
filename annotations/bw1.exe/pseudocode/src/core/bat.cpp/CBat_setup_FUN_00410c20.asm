; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_setup_FUN_00410c20(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00411060
;   core_course.cpp_CCourse_load_FUN_00447db0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410c20
        ;   Label: core_bat.cpp_CBat_setup_FUN_00410c20
    SUB ESP,0x4                         ; 00410c21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00410c24
    LEA EAX,[EBX + 0x188]               ; 00410c28
    PUSH EAX                            ; 00410c2e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00410c2f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00410c34
    LEA EAX,[EBX + 0x158]               ; 00410c37
    PUSH EAX                            ; 00410c3d
    LEA EAX,[EBX + 0x178]               ; 00410c3e
    PUSH EAX                            ; 00410c44
    CALL core_course.cpp_CCourse_load_FUN_00447db0 ; 00410c45
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00447db0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00410c4a
    PUSH EBX                            ; 00410c4d
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 00410c4e
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410c53
    PUSH EBX                            ; 00410c56
    CALL core_bat.cpp_CBat_updateCoursePosition_FUN_00411060 ; 00410c57
        ;   XREF to: 00411060 (UNCONDITIONAL_CALL)  ; void core_bat.cpp_CBat_updateCoursePosition_FUN_00411060(CBat * this_ptr)
    ADD ESP,0x4                         ; 00410c5c
    PUSH dword ptr [EBX + 0x37c]        ; 00410c5f
    PUSH dword ptr [EBX + 0x378]        ; 00410c65
    MOV dword ptr [EBX + 0x380],0x0     ; 00410c6b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00410c75
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00410c7a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410c7e
    MOV dword ptr [EBX + 0x384],EAX     ; 00410c82
    ADD ESP,0x8                         ; 00410c88
    ADD ESP,0x4                         ; 00410c8b
    POP EBX                             ; 00410c8e
    RET                                 ; 00410c8f

