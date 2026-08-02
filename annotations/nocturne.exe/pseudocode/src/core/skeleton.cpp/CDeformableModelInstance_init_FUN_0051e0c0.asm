; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; XREF[52]:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 at 0040cab1
;   core_armour.cpp_CArmour_ctor_FUN_0040f960 at 0040f98d
;   core_baron.cpp_CBaron_ctor_FUN_004101d0 at 004101f4
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00412100 at 00412122
;   core_batman.cpp_CBatman_ctor_FUN_004133e0 at 0041340f
;   core_beast.cpp_CBeast_ctor_FUN_00415050 at 00415072
;   core_biggs.cpp_CBiggs_ctor_FUN_00415370 at 004153b8
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630 at 00418674
;   core_bride.cpp_CBride_ctor_FUN_0041fbb0 at 0041fbd2
;   core_bugs.cpp_CBugs_ctor_FUN_00421040 at 00421109
;   ... and 42 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0
;   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e0c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
    PUSH ESI                            ; 0051e0c1
    PUSH EDI                            ; 0051e0c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051e0c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051e0c7
    LEA EDI,[EBX + 0x2260]              ; 0051e0cb
    PUSH EDI                            ; 0051e0d1
    MOV AL,byte ptr [ESI]               ; 0051e0d2
        ;   Label: LAB_0051e0d2
    MOV byte ptr [EDI],AL               ; 0051e0d4
    CMP AL,0x0                          ; 0051e0d6
    JZ 0x0051e0ea                       ; 0051e0d8
        ;   XREF to: 0051e0ea (CONDITIONAL_JUMP)  ; LAB_0051e0ea
    MOV AL,byte ptr [ESI + 0x1]         ; 0051e0da
    ADD ESI,0x2                         ; 0051e0dd
    MOV byte ptr [EDI + 0x1],AL         ; 0051e0e0
    ADD EDI,0x2                         ; 0051e0e3
    CMP AL,0x0                          ; 0051e0e6
    JNZ 0x0051e0d2                      ; 0051e0e8
        ;   XREF to: 0051e0d2 (CONDITIONAL_JUMP)  ; LAB_0051e0d2
    POP EDI                             ; 0051e0ea
        ;   Label: LAB_0051e0ea
    PUSH EBX                            ; 0051e0eb
    MOV dword ptr [EBX + 0x22b0],0x0    ; 0051e0ec
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90 ; 0051e0f6
        ;   XREF to: 0051dc90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051e0fb
    PUSH EBX                            ; 0051e0fe
    CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0 ; 0051e0ff
        ;   XREF to: 0051dcb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051e104
    MOV dword ptr [EBX + 0x2230],0xffffffff ; 0051e107
    POP EDI                             ; 0051e111
    POP ESI                             ; 0051e112
    POP EBX                             ; 0051e113
    RET                                 ; 0051e114

