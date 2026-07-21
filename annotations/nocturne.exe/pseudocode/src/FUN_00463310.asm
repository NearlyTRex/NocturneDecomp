; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463310(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c860
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463310
        ;   Label: FUN_00463310
    MOV EBX,dword ptr [ESP + 0x8]       ; 00463311
    TEST byte ptr [ESP + 0xc],0x4       ; 00463315
    JNZ 0x004633a1                      ; 0046331a
        ;   XREF to: 004633a1 (CONDITIONAL_JUMP)  ; LAB_004633a1
    PUSH 0x0                            ; 00463320
    ADD EBX,0x33c4                      ; 00463322
    PUSH EBX                            ; 00463328
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00463329
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 0046332e
    PUSH 0x0                            ; 00463331
    SUB EAX,0x4b0                       ; 00463333
    PUSH EAX                            ; 00463338
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00463339
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 0046333e
    PUSH 0x0                            ; 00463341
    SUB EAX,0x20c                       ; 00463343
    PUSH EAX                            ; 00463348
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00463349
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 0046334e
    PUSH 0x0                            ; 00463351
    SUB EAX,0xb4                        ; 00463353
    PUSH EAX                            ; 00463358
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00463359
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 0046335e
    PUSH 0x0                            ; 00463361
    SUB EAX,0x1c8                       ; 00463363
    PUSH EAX                            ; 00463368
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00463369
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 0046336e
    PUSH 0x0                            ; 00463371
    SUB EAX,0x293c                      ; 00463373
    PUSH EAX                            ; 00463378
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00463379
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 0046337e
    PUSH 0x1                            ; 00463381
    LEA EBX,[EAX + 0xfffffeb0]          ; 00463383
    PUSH EBX                            ; 00463389
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0046338a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0046338f
    MOV DL,byte ptr [ESP + 0xc]         ; 00463392
    MOV EBX,EAX                         ; 00463396
    TEST DL,0x2                         ; 00463398
    JNZ 0x004633bc                      ; 0046339b
        ;   XREF to: 004633bc (CONDITIONAL_JUMP)  ; LAB_004633bc
    MOV EAX,EBX                         ; 0046339d
    POP EBX                             ; 0046339f
    RET                                 ; 004633a0
    PUSH 0x59c860                       ; 004633a1 | DAT_0059c860
        ;   Label: LAB_004633a1
    PUSH EBX                            ; 004633a6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004633a7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004633ac
    PUSH EAX                            ; 004633af
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004633b0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004633b5
    MOV EAX,EBX                         ; 004633b8
    POP EBX                             ; 004633ba
    RET                                 ; 004633bb
    PUSH EAX                            ; 004633bc
        ;   Label: LAB_004633bc
    CALL FUN_00564494                   ; 004633bd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004633c2
    MOV EAX,EBX                         ; 004633c5
    POP EBX                             ; 004633c7
    RET                                 ; 004633c8

