; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_0050a530(CPassenger *this_ptr,uint flags)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CPassengerVTable = 0050a610
;   WatcomTypeInfo g_CPassengerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_FUN_0043f900
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a530
        ;   Label: core_passngr.cpp_CPassenger_dtor_FUN_0050a530
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050a531
    TEST byte ptr [ESP + 0xc],0x4       ; 0050a535
    JNZ 0x0050a5db                      ; 0050a53a
        ;   XREF to: 0050a5db (CONDITIONAL_JUMP)  ; LAB_0050a5db
    MOV EDX,dword ptr [EBX + 0x207d0]   ; 0050a540
    MOV dword ptr [EBX + 0x154],0x5e2fe4 ; 0050a546 | g_CPassengerVTable
    TEST EDX,EDX                        ; 0050a550
    JZ 0x0050a56a                       ; 0050a552
        ;   XREF to: 0050a56a (CONDITIONAL_JUMP)  ; LAB_0050a56a
    MOV EAX,EDX                         ; 0050a554
    JZ 0x0050a56a                       ; 0050a556
        ;   XREF to: 0050a56a (CONDITIONAL_JUMP)  ; LAB_0050a56a
    PUSH 0x2                            ; 0050a558
    MOV EDX,dword ptr [EDX + 0x154]     ; 0050a55a
    PUSH EAX                            ; 0050a560
    CALL dword ptr [EDX + 0xd0]         ; 0050a561
    ADD ESP,0x8                         ; 0050a567
    PUSH 0x0                            ; 0050a56a
        ;   Label: LAB_0050a56a
    ADD EBX,0x207d4                     ; 0050a56c
    PUSH EBX                            ; 0050a572
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 0050a573
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050a578
    PUSH 0x0                            ; 0050a57b
    SUB EAX,0x13a08                     ; 0050a57d
    PUSH EAX                            ; 0050a582
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 0050a583
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050a588
    PUSH 0x0                            ; 0050a58b
    SUB EAX,0x9570                      ; 0050a58d
    PUSH EAX                            ; 0050a592
    CALL unkafter_armour.cpp_FUN_00410370 ; 0050a593
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0050a598
    PUSH 0x0                            ; 0050a59b
    SUB EAX,0x954                       ; 0050a59d
    PUSH EAX                            ; 0050a5a2
    CALL core_cloth.cpp_FUN_0043f900    ; 0050a5a3
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050a5a8
    PUSH 0x0                            ; 0050a5ab
    SUB EAX,0x2db0                      ; 0050a5ad
    PUSH EAX                            ; 0050a5b2
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0050a5b3
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050a5b8
    PUSH 0x1                            ; 0050a5bb
    LEA EBX,[EAX + 0xfffffea8]          ; 0050a5bd
    PUSH EBX                            ; 0050a5c3
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0050a5c4
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050a5c9
    MOV DL,byte ptr [ESP + 0xc]         ; 0050a5cc
    MOV EBX,EAX                         ; 0050a5d0
    TEST DL,0x2                         ; 0050a5d2
    JNZ 0x0050a5f6                      ; 0050a5d5
        ;   XREF to: 0050a5f6 (CONDITIONAL_JUMP)  ; LAB_0050a5f6
    MOV EAX,EBX                         ; 0050a5d7
    POP EBX                             ; 0050a5d9
    RET                                 ; 0050a5da
    PUSH 0x5e3130                       ; 0050a5db | g_CPassengerTypeInfo
        ;   Label: LAB_0050a5db
    PUSH EBX                            ; 0050a5e0
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0050a5e1
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0050a5e6
    PUSH EAX                            ; 0050a5e9
    CALL crt_unknown.c_FUN_005a30b6     ; 0050a5ea
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0050a5ef
    MOV EAX,EBX                         ; 0050a5f2
    POP EBX                             ; 0050a5f4
    RET                                 ; 0050a5f5
    PUSH EAX                            ; 0050a5f6
        ;   Label: LAB_0050a5f6
    CALL crt_unknown.c_FUN_005a30c4     ; 0050a5f7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0050a5fc
    MOV EAX,EBX                         ; 0050a5ff
    POP EBX                             ; 0050a601
    RET                                 ; 0050a602

