; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0(CVampireBoss *this_ptr,uint flags)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CVampireBossTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_cloth.cpp_FUN_005b1480
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80
;   core_necklace.cpp_FUN_005ade00
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkafter_armour.cpp_FUN_0040f2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005837e0
        ;   Label: core_vampboss.cpp_CVampireBoss_dtor_FUN_005837e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005837e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005837e5
    JNZ 0x005838a1                      ; 005837ea
        ;   XREF to: 005838a1 (CONDITIONAL_JUMP)  ; LAB_005838a1
    PUSH 0x0                            ; 005837f0
    ADD EBX,0xc2f40                     ; 005837f2
    PUSH EBX                            ; 005837f8
    CALL core_morph.cpp_CMorph_dtor_FUN_005b6e80 ; 005837f9
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_005b6e80(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005837fe
    PUSH 0x0                            ; 00583801
    SUB EAX,0x3ab34                     ; 00583803
    PUSH EAX                            ; 00583808
    CALL core_necklace.cpp_FUN_005ade00 ; 00583809
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 0058380e
    PUSH 0x0                            ; 00583811
    SUB EAX,0x3ab30                     ; 00583813
    PUSH EAX                            ; 00583818
    CALL core_necklace.cpp_FUN_005ade00 ; 00583819
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 0058381e
    PUSH 0x0                            ; 00583821
    SUB EAX,0x3ab30                     ; 00583823
    PUSH EAX                            ; 00583828
    CALL core_necklace.cpp_FUN_005ade00 ; 00583829
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 0058382e
    PUSH 0x0                            ; 00583831
    SUB EAX,0x22b4                      ; 00583833
    PUSH EAX                            ; 00583838
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00583839
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058383e
    PUSH 0x0                            ; 00583841
    SUB EAX,0xd0d8                      ; 00583843
    PUSH EAX                            ; 00583848
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 00583849
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0058384e
    PUSH 0x0                            ; 00583851
    SUB EAX,0x9c8                       ; 00583853
    PUSH EAX                            ; 00583858
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 00583859
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0058385e
    PUSH 0x0                            ; 00583861
    SUB EAX,0x34c                       ; 00583863
    PUSH EAX                            ; 00583868
    CALL core_cloth.cpp_FUN_005b1480    ; 00583869
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058386e
    PUSH 0x0                            ; 00583871
    SUB EAX,0x2a58                      ; 00583873
    PUSH EAX                            ; 00583878
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00583879
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058387e
    PUSH 0x1                            ; 00583881
    LEA EBX,[EAX + 0xfffffd4c]          ; 00583883
    PUSH EBX                            ; 00583889
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0058388a
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0058388f
    MOV DL,byte ptr [ESP + 0xc]         ; 00583892
    MOV EBX,EAX                         ; 00583896
    TEST DL,0x2                         ; 00583898
    JNZ 0x005838bc                      ; 0058389b
        ;   XREF to: 005838bc (CONDITIONAL_JUMP)  ; LAB_005838bc
    MOV EAX,EBX                         ; 0058389d
    POP EBX                             ; 0058389f
    RET                                 ; 005838a0
    PUSH 0x5fd9a0                       ; 005838a1 | g_CVampireBossTypeInfo
        ;   Label: LAB_005838a1
    PUSH EBX                            ; 005838a6
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005838a7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005838ac
    PUSH EAX                            ; 005838af
    CALL crt_unknown.c_FUN_005b7fce     ; 005838b0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005838b5
    MOV EAX,EBX                         ; 005838b8
    POP EBX                             ; 005838ba
    RET                                 ; 005838bb
    PUSH EAX                            ; 005838bc
        ;   Label: LAB_005838bc
    CALL crt_unknown.c_FUN_005b7fdc     ; 005838bd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005838c2
    MOV EAX,EBX                         ; 005838c5
    POP EBX                             ; 005838c7
    RET                                 ; 005838c8

