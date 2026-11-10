; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_setup_FUN_0040eeb0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0
;   core_course.cpp_FUN_00444970
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eeb0
        ;   Label: core_bat.cpp_CBat_setup_FUN_0040eeb0
    SUB ESP,0x4                         ; 0040eeb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040eeb4
    LEA EAX,[EBX + 0x188]               ; 0040eeb8
    PUSH EAX                            ; 0040eebe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0040eebf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eec4
    LEA EAX,[EBX + 0x158]               ; 0040eec7
    PUSH EAX                            ; 0040eecd
    LEA EAX,[EBX + 0x178]               ; 0040eece
    PUSH EAX                            ; 0040eed4
    CALL core_course.cpp_FUN_00444970   ; 0040eed5
        ;   XREF to: 00444970 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00444970(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040eeda
    PUSH EBX                            ; 0040eedd
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 0040eede
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040eee3
    PUSH EBX                            ; 0040eee6
    CALL core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0 ; 0040eee7
        ;   XREF to: 0040f2f0 (UNCONDITIONAL_CALL)  ; void core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0(CBat * this_ptr)
    ADD ESP,0x4                         ; 0040eeec
    PUSH dword ptr [EBX + 0x37c]        ; 0040eeef
    PUSH dword ptr [EBX + 0x378]        ; 0040eef5
    MOV dword ptr [EBX + 0x380],0x0     ; 0040eefb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040ef05
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0040ef0a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ef0e
    MOV dword ptr [EBX + 0x384],EAX     ; 0040ef12
    ADD ESP,0x8                         ; 0040ef18
    ADD ESP,0x4                         ; 0040ef1b
    POP EBX                             ; 0040ef1e
    RET                                 ; 0040ef1f

