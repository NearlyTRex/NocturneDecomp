; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * core_sentinel_cpp_CSentinel_dtor_FUN_00532520(CSentinel *this_ptr,uint flags)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSentinelTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532520
        ;   Label: core_sentinel.cpp_CSentinel_dtor_FUN_00532520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00532521
    TEST byte ptr [ESP + 0xc],0x4       ; 00532525
    JNZ 0x0053257d                      ; 0053252a
        ;   XREF to: 0053257d (CONDITIONAL_JUMP)  ; LAB_0053257d
    PUSH 0x0                            ; 0053252c
    ADD EBX,0x385c                      ; 0053252e
    PUSH EBX                            ; 00532534
    CALL unkafter_armour.cpp_FUN_00410370 ; 00532535
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0053253a
    PUSH 0x0                            ; 0053253d
    SUB EAX,0x954                       ; 0053253f
    PUSH EAX                            ; 00532544
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00532545
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053254a
    PUSH 0x0                            ; 0053254d
    SUB EAX,0x2db0                      ; 0053254f
    PUSH EAX                            ; 00532554
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00532555
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053255a
    PUSH 0x1                            ; 0053255d
    LEA EBX,[EAX + 0xfffffea8]          ; 0053255f
    PUSH EBX                            ; 00532565
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00532566
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053256b
    MOV DL,byte ptr [ESP + 0xc]         ; 0053256e
    MOV EBX,EAX                         ; 00532572
    TEST DL,0x2                         ; 00532574
    JNZ 0x00532598                      ; 00532577
        ;   XREF to: 00532598 (CONDITIONAL_JUMP)  ; LAB_00532598
    MOV EAX,EBX                         ; 00532579
    POP EBX                             ; 0053257b
    RET                                 ; 0053257c
    PUSH 0x5e3b70                       ; 0053257d | g_CSentinelTypeInfo
        ;   Label: LAB_0053257d
    PUSH EBX                            ; 00532582
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00532583
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00532588
    PUSH EAX                            ; 0053258b
    CALL crt_unknown.c_FUN_005a30b6     ; 0053258c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00532591
    MOV EAX,EBX                         ; 00532594
    POP EBX                             ; 00532596
    RET                                 ; 00532597
    PUSH EAX                            ; 00532598
        ;   Label: LAB_00532598
    CALL crt_unknown.c_FUN_005a30c4     ; 00532599
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0053259e
    MOV EAX,EBX                         ; 005325a1
    POP EBX                             ; 005325a3
    RET                                 ; 005325a4

