; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004b68c0(CNPC *this_ptr,uint flags)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CNPCTypeInfo_0059ef00
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b68c0
        ;   Label: core_npc.cpp_CNPC_dtor_FUN_004b68c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b68c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004b68c5
    JNZ 0x004b6961                      ; 004b68ca
        ;   XREF to: 004b6961 (CONDITIONAL_JUMP)  ; LAB_004b6961
    PUSH 0x0                            ; 004b68d0
    ADD EBX,0xbc8c                      ; 004b68d2
    PUSH EBX                            ; 004b68d8
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 004b68d9
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_004efdd0(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b68de
    PUSH 0x0                            ; 004b68e1
    SUB EAX,0x88c8                      ; 004b68e3
    PUSH EAX                            ; 004b68e8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004b68e9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 004b68ee
    PUSH 0x0                            ; 004b68f1
    SUB EAX,0x4b0                       ; 004b68f3
    PUSH EAX                            ; 004b68f8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004b68f9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004b68fe
    PUSH 0x0                            ; 004b6901
    SUB EAX,0x20c                       ; 004b6903
    PUSH EAX                            ; 004b6908
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004b6909
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004b690e
    PUSH 0x0                            ; 004b6911
    SUB EAX,0xb4                        ; 004b6913
    PUSH EAX                            ; 004b6918
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004b6919
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004b691e
    PUSH 0x0                            ; 004b6921
    SUB EAX,0x1c8                       ; 004b6923
    PUSH EAX                            ; 004b6928
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004b6929
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b692e
    PUSH 0x0                            ; 004b6931
    SUB EAX,0x293c                      ; 004b6933
    PUSH EAX                            ; 004b6938
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004b6939
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b693e
    PUSH 0x1                            ; 004b6941
    LEA EBX,[EAX + 0xfffffeb0]          ; 004b6943
    PUSH EBX                            ; 004b6949
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004b694a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b694f
    MOV DL,byte ptr [ESP + 0xc]         ; 004b6952
    MOV EBX,EAX                         ; 004b6956
    TEST DL,0x2                         ; 004b6958
    JNZ 0x004b697c                      ; 004b695b
        ;   XREF to: 004b697c (CONDITIONAL_JUMP)  ; LAB_004b697c
    MOV EAX,EBX                         ; 004b695d
    POP EBX                             ; 004b695f
    RET                                 ; 004b6960
    PUSH 0x59ef00                       ; 004b6961 | g_CNPCTypeInfo_0059ef00
        ;   Label: LAB_004b6961
    PUSH EBX                            ; 004b6966
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004b6967
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004b696c
    PUSH EAX                            ; 004b696f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004b6970
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004b6975
    MOV EAX,EBX                         ; 004b6978
    POP EBX                             ; 004b697a
    RET                                 ; 004b697b
    PUSH EAX                            ; 004b697c
        ;   Label: LAB_004b697c
    CALL crt_unknown.c_FUN_00564494     ; 004b697d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004b6982
    MOV EAX,EBX                         ; 004b6985
    POP EBX                             ; 004b6987
    RET                                 ; 004b6988

