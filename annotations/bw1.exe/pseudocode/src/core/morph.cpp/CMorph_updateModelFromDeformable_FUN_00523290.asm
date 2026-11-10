; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   part_index
;
; XREF[6]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00 at 00414e88
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20 at 00510d34
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070 at 0052110a
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_00532cd0 at 00532d70
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0 at 00592bca
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005a6b00 at 005a6c2b
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_00522650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523290
        ;   Label: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_00523290
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523291
    PUSH EDX                            ; 00523295
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523296
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052329a
    SUB EAX,EDX                         ; 005232a1
    SHL EAX,0x6                         ; 005232a3
    MOV ECX,dword ptr [ESP + 0x18]      ; 005232a6
    ADD EAX,EDX                         ; 005232aa
    MOV EBX,dword ptr [ESP + 0xc]       ; 005232ac
    SHL EAX,0x3                         ; 005232b0
    PUSH ECX                            ; 005232b3
    ADD EAX,EBX                         ; 005232b4
    PUSH EAX                            ; 005232b6
    CALL core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_00522650 ; 005232b7
        ;   XREF to: 00522650 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_00522650(CMorphModel * this_ptr, int part_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005232bc
    POP EBX                             ; 005232bf
    RET                                 ; 005232c0

