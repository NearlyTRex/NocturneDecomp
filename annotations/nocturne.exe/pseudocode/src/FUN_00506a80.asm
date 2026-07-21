; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00506a80(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a18a0
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

    PUSH EBX                            ; 00506a80
        ;   Label: FUN_00506a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506a81
    TEST byte ptr [ESP + 0xc],0x4       ; 00506a85
    JNZ 0x00506b11                      ; 00506a8a
        ;   XREF to: 00506b11 (CONDITIONAL_JUMP)  ; LAB_00506b11
    PUSH 0x0                            ; 00506a90
    ADD EBX,0x33c4                      ; 00506a92
    PUSH EBX                            ; 00506a98
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00506a99
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 00506a9e
    PUSH 0x0                            ; 00506aa1
    SUB EAX,0x4b0                       ; 00506aa3
    PUSH EAX                            ; 00506aa8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00506aa9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 00506aae
    PUSH 0x0                            ; 00506ab1
    SUB EAX,0x20c                       ; 00506ab3
    PUSH EAX                            ; 00506ab8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00506ab9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 00506abe
    PUSH 0x0                            ; 00506ac1
    SUB EAX,0xb4                        ; 00506ac3
    PUSH EAX                            ; 00506ac8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00506ac9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 00506ace
    PUSH 0x0                            ; 00506ad1
    SUB EAX,0x1c8                       ; 00506ad3
    PUSH EAX                            ; 00506ad8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00506ad9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 00506ade
    PUSH 0x0                            ; 00506ae1
    SUB EAX,0x293c                      ; 00506ae3
    PUSH EAX                            ; 00506ae8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00506ae9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 00506aee
    PUSH 0x1                            ; 00506af1
    LEA EBX,[EAX + 0xfffffeb0]          ; 00506af3
    PUSH EBX                            ; 00506af9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00506afa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 00506aff
    MOV DL,byte ptr [ESP + 0xc]         ; 00506b02
    MOV EBX,EAX                         ; 00506b06
    TEST DL,0x2                         ; 00506b08
    JNZ 0x00506b2c                      ; 00506b0b
        ;   XREF to: 00506b2c (CONDITIONAL_JUMP)  ; LAB_00506b2c
    MOV EAX,EBX                         ; 00506b0d
    POP EBX                             ; 00506b0f
    RET                                 ; 00506b10
    PUSH 0x5a18a0                       ; 00506b11 | DAT_005a18a0
        ;   Label: LAB_00506b11
    PUSH EBX                            ; 00506b16
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00506b17
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00506b1c
    PUSH EAX                            ; 00506b1f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00506b20
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00506b25
    MOV EAX,EBX                         ; 00506b28
    POP EBX                             ; 00506b2a
    RET                                 ; 00506b2b
    PUSH EAX                            ; 00506b2c
        ;   Label: LAB_00506b2c
    CALL FUN_00564494                   ; 00506b2d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00506b32
    MOV EAX,EBX                         ; 00506b35
    POP EBX                             ; 00506b37
    RET                                 ; 00506b38

