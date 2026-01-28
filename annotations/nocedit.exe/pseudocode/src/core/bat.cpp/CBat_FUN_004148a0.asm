; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bat_cpp_CBat_FUN_004148a0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004148a0
        ;   Label: core_bat.cpp_CBat_FUN_004148a0
    SUB ESP,0x4                         ; 004148a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004148a4
    LEA EAX,[EBX + 0x188]               ; 004148a8
    PUSH EAX                            ; 004148ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004148af
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004148b4
    LEA EAX,[EBX + 0x158]               ; 004148b7
    PUSH EAX                            ; 004148bd
    LEA EAX,[EBX + 0x178]               ; 004148be
    PUSH EAX                            ; 004148c4
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 004148c5
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004148ca
    PUSH EBX                            ; 004148cd
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004148ce
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

