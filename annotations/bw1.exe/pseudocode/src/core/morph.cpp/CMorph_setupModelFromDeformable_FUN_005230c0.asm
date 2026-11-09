; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[7]:
;   core_biggs.cpp_FUN_00414ab0 at 00414ae8
;   core_mimic.cpp_FUN_0050f290 at 0050f503
;   core_moloch.cpp_FUN_00520430 at 0052049b
;   core_moloch.cpp_FUN_005204e0 at 00520b94
;   core_passngr.cpp_FUN_00532930 at 005329a1
;   core_succubus.cpp_FUN_00591ff0 at 00592259
;   core_vampboss.cpp_FUN_005a52a0 at 005a5390
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490
;   core_morph.cpp_CMorphModel_free_FUN_00522170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005230c0
        ;   Label: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005230c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005230c5
    SUB EAX,EDX                         ; 005230cc
    SHL EAX,0x6                         ; 005230ce
    ADD EAX,EDX                         ; 005230d1
    MOV EBX,dword ptr [ESP + 0x8]       ; 005230d3
    SHL EAX,0x3                         ; 005230d7
    ADD EBX,EAX                         ; 005230da
    PUSH EBX                            ; 005230dc
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 005230dd
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005230e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005230e5
    PUSH EDX                            ; 005230e9
    PUSH EBX                            ; 005230ea
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490 ; 005230eb
        ;   XREF to: 00522490 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 005230f0
    POP EBX                             ; 005230f3
    RET                                 ; 005230f4

