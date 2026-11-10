; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMobster * core_mobster_cpp_CMobster_dtor_FUN_005004f0(CMobster *this_ptr,uint flags)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMobsterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005004f0
        ;   Label: core_mobster.cpp_CMobster_dtor_FUN_005004f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005004f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005004f5
    JNZ 0x0050055d                      ; 005004fa
        ;   XREF to: 0050055d (CONDITIONAL_JUMP)  ; LAB_0050055d
    PUSH 0x0                            ; 005004fc
    ADD EBX,0x3a20                      ; 005004fe
    PUSH EBX                            ; 00500504
    CALL core_armour.cpp_FUN_0040f2b0   ; 00500505
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0050050a
    PUSH 0x0                            ; 0050050d
    SUB EAX,0x9c8                       ; 0050050f
    PUSH EAX                            ; 00500514
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 00500515
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0050051a
    PUSH 0x0                            ; 0050051d
    SUB EAX,0x34c                       ; 0050051f
    PUSH EAX                            ; 00500524
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00500525
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050052a
    PUSH 0x0                            ; 0050052d
    SUB EAX,0x2a58                      ; 0050052f
    PUSH EAX                            ; 00500534
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00500535
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050053a
    PUSH 0x1                            ; 0050053d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0050053f
    PUSH EBX                            ; 00500545
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00500546
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050054b
    MOV DL,byte ptr [ESP + 0xc]         ; 0050054e
    MOV EBX,EAX                         ; 00500552
    TEST DL,0x2                         ; 00500554
    JNZ 0x00500578                      ; 00500557
        ;   XREF to: 00500578 (CONDITIONAL_JUMP)  ; LAB_00500578
    MOV EAX,EBX                         ; 00500559
    POP EBX                             ; 0050055b
    RET                                 ; 0050055c
    PUSH 0x5fa3a0                       ; 0050055d | g_CMobsterTypeInfo
        ;   Label: LAB_0050055d
    PUSH EBX                            ; 00500562
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00500563
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00500568
    PUSH EAX                            ; 0050056b
    CALL crt_unknown.c_FUN_005b7fce     ; 0050056c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00500571
    MOV EAX,EBX                         ; 00500574
    POP EBX                             ; 00500576
    RET                                 ; 00500577
    PUSH EAX                            ; 00500578
        ;   Label: LAB_00500578
    CALL crt_unknown.c_FUN_005b7fdc     ; 00500579
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0050057e
    MOV EAX,EBX                         ; 00500581
    POP EBX                             ; 00500583
    RET                                 ; 00500584

