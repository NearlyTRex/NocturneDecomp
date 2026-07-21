; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045b350(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c580
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

    PUSH EBX                            ; 0045b350
        ;   Label: FUN_0045b350
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045b351
    TEST byte ptr [ESP + 0xc],0x4       ; 0045b355
    JNZ 0x0045b3e1                      ; 0045b35a
        ;   XREF to: 0045b3e1 (CONDITIONAL_JUMP)  ; LAB_0045b3e1
    PUSH 0x0                            ; 0045b360
    ADD EBX,0x33c4                      ; 0045b362
    PUSH EBX                            ; 0045b368
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 0045b369
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 0045b36e
    PUSH 0x0                            ; 0045b371
    SUB EAX,0x4b0                       ; 0045b373
    PUSH EAX                            ; 0045b378
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 0045b379
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 0045b37e
    PUSH 0x0                            ; 0045b381
    SUB EAX,0x20c                       ; 0045b383
    PUSH EAX                            ; 0045b388
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0045b389
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 0045b38e
    PUSH 0x0                            ; 0045b391
    SUB EAX,0xb4                        ; 0045b393
    PUSH EAX                            ; 0045b398
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 0045b399
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 0045b39e
    PUSH 0x0                            ; 0045b3a1
    SUB EAX,0x1c8                       ; 0045b3a3
    PUSH EAX                            ; 0045b3a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 0045b3a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 0045b3ae
    PUSH 0x0                            ; 0045b3b1
    SUB EAX,0x293c                      ; 0045b3b3
    PUSH EAX                            ; 0045b3b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 0045b3b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 0045b3be
    PUSH 0x1                            ; 0045b3c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 0045b3c3
    PUSH EBX                            ; 0045b3c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0045b3ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0045b3cf
    MOV DL,byte ptr [ESP + 0xc]         ; 0045b3d2
    MOV EBX,EAX                         ; 0045b3d6
    TEST DL,0x2                         ; 0045b3d8
    JNZ 0x0045b3fc                      ; 0045b3db
        ;   XREF to: 0045b3fc (CONDITIONAL_JUMP)  ; LAB_0045b3fc
    MOV EAX,EBX                         ; 0045b3dd
    POP EBX                             ; 0045b3df
    RET                                 ; 0045b3e0
    PUSH 0x59c580                       ; 0045b3e1 | DAT_0059c580
        ;   Label: LAB_0045b3e1
    PUSH EBX                            ; 0045b3e6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0045b3e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0045b3ec
    PUSH EAX                            ; 0045b3ef
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0045b3f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0045b3f5
    MOV EAX,EBX                         ; 0045b3f8
    POP EBX                             ; 0045b3fa
    RET                                 ; 0045b3fb
    PUSH EAX                            ; 0045b3fc
        ;   Label: LAB_0045b3fc
    CALL FUN_00564494                   ; 0045b3fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0045b402
    MOV EAX,EBX                         ; 0045b405
    POP EBX                             ; 0045b407
    RET                                 ; 0045b408

