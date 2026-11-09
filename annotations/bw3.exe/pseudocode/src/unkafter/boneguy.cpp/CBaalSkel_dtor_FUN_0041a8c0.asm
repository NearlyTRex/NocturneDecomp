; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaalSkel * unkafter_boneguy_cpp_CBaalSkel_dtor_FUN_0041a8c0(CBaalSkel *this_ptr,uint flags)
;
; Parameters:
; CBaalSkel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBaalSkelTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a8c0
        ;   Label: unkafter_boneguy.cpp_CBaalSkel_dtor_FUN_0041a8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a8c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a8c5
    JNZ 0x0041a91d                      ; 0041a8ca
        ;   XREF to: 0041a91d (CONDITIONAL_JUMP)  ; LAB_0041a91d
    PUSH 0x0                            ; 0041a8cc
    ADD EBX,0x385c                      ; 0041a8ce
    PUSH EBX                            ; 0041a8d4
    CALL unkafter_armour.cpp_FUN_00410370 ; 0041a8d5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041a8da
    PUSH 0x0                            ; 0041a8dd
    SUB EAX,0x954                       ; 0041a8df
    PUSH EAX                            ; 0041a8e4
    CALL core_cloth.cpp_FUN_0043f900    ; 0041a8e5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a8ea
    PUSH 0x0                            ; 0041a8ed
    SUB EAX,0x2db0                      ; 0041a8ef
    PUSH EAX                            ; 0041a8f4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0041a8f5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a8fa
    PUSH 0x1                            ; 0041a8fd
    LEA EBX,[EAX + 0xfffffea8]          ; 0041a8ff
    PUSH EBX                            ; 0041a905
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0041a906
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a90b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a90e
    MOV EBX,EAX                         ; 0041a912
    TEST DL,0x2                         ; 0041a914
    JNZ 0x0041a938                      ; 0041a917
        ;   XREF to: 0041a938 (CONDITIONAL_JUMP)  ; LAB_0041a938
    MOV EAX,EBX                         ; 0041a919
    POP EBX                             ; 0041a91b
    RET                                 ; 0041a91c
    PUSH 0x5dc850                       ; 0041a91d | g_CBaalSkelTypeInfo
        ;   Label: LAB_0041a91d
    PUSH EBX                            ; 0041a922
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0041a923
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0041a928
    PUSH EAX                            ; 0041a92b
    CALL crt_unknown.c_FUN_005a30b6     ; 0041a92c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041a931
    MOV EAX,EBX                         ; 0041a934
    POP EBX                             ; 0041a936
    RET                                 ; 0041a937
    PUSH EAX                            ; 0041a938
        ;   Label: LAB_0041a938
    CALL crt_unknown.c_FUN_005a30c4     ; 0041a939
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041a93e
    MOV EAX,EBX                         ; 0041a941
    POP EBX                             ; 0041a943
    RET                                 ; 0041a944

