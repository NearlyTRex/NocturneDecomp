; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; XREF[61]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f544
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970 at 0040b9a1
;   core_armour.cpp_CArmour_ctor_FUN_004121a0 at 004121cd
;   core_baron.cpp_CBaron_ctor_FUN_00412bc0 at 00412be4
;   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 at 00415112
;   core_batman.cpp_CBatman_ctor_FUN_00416450 at 0041647f
;   core_beast.cpp_CBeast_ctor_FUN_00418220 at 00418242
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 at 00418608
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b2dd
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 at 0041bc04
;   ... and 51 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
;   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0840
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
    PUSH ESI                            ; 005a0841
    PUSH EDI                            ; 005a0842
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a0843
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a0847
    LEA EDI,[EBX + 0x2260]              ; 005a084b
    PUSH EDI                            ; 005a0851
    MOV AL,byte ptr [ESI]               ; 005a0852
        ;   Label: LAB_005a0852
    MOV byte ptr [EDI],AL               ; 005a0854
    CMP AL,0x0                          ; 005a0856
    JZ 0x005a086a                       ; 005a0858
        ;   XREF to: 005a086a (CONDITIONAL_JUMP)  ; LAB_005a086a
    MOV AL,byte ptr [ESI + 0x1]         ; 005a085a
    ADD ESI,0x2                         ; 005a085d
    MOV byte ptr [EDI + 0x1],AL         ; 005a0860
    ADD EDI,0x2                         ; 005a0863
    CMP AL,0x0                          ; 005a0866
    JNZ 0x005a0852                      ; 005a0868
        ;   XREF to: 005a0852 (CONDITIONAL_JUMP)  ; LAB_005a0852
    POP EDI                             ; 005a086a
        ;   Label: LAB_005a086a
    PUSH EBX                            ; 005a086b
    MOV dword ptr [EBX + 0x22b0],0x0    ; 005a086c
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410 ; 005a0876
        ;   XREF to: 005a0410 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a087b
    PUSH EBX                            ; 005a087e
    CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430 ; 005a087f
        ;   XREF to: 005a0430 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0884
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 005a0887
    POP EDI                             ; 005a0891
    POP ESI                             ; 005a0892
    POP EBX                             ; 005a0893
    RET                                 ; 005a0894

