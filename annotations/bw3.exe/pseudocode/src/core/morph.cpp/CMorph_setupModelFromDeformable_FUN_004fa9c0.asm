; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[8]:
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598977
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a681
;   core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0 at 00527716
;   core_spirbear.cpp_CSpiritBear_setup_FUN_0059aba0 at 0059ad90
;   core_spireagl.cpp_CSpiritEagle_setup_FUN_005992f0 at 005994cc
;   core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060 at 0059a250
;   core_styldemo.cpp_CStylerDemon_setup_FUN_0059e130 at 0059e392
;   core_styler.cpp_CStyler_setup_FUN_0059d7f0 at 0059d99b
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90
;   core_morph.cpp_CMorphModel_free_FUN_004f9a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa9c0
        ;   Label: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa9c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa9c5
    SUB EAX,EDX                         ; 004fa9cc
    SHL EAX,0x6                         ; 004fa9ce
    ADD EAX,EDX                         ; 004fa9d1
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fa9d3
    SHL EAX,0x3                         ; 004fa9d7
    ADD EBX,EAX                         ; 004fa9da
    PUSH EBX                            ; 004fa9dc
    CALL core_morph.cpp_CMorphModel_free_FUN_004f9a70 ; 004fa9dd
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004f9a70(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004fa9e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa9e5
    PUSH EDX                            ; 004fa9e9
    PUSH EBX                            ; 004fa9ea
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90 ; 004fa9eb
        ;   XREF to: 004f9d90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90(CMorphModel * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 004fa9f0
    POP EBX                             ; 004fa9f3
    RET                                 ; 004fa9f4

