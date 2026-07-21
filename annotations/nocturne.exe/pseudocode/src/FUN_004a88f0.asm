; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a88f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e0a0
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

    PUSH EBX                            ; 004a88f0
        ;   Label: FUN_004a88f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a88f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a88f5
    JNZ 0x004a8981                      ; 004a88fa
        ;   XREF to: 004a8981 (CONDITIONAL_JUMP)  ; LAB_004a8981
    PUSH 0x0                            ; 004a8900
    ADD EBX,0x33c4                      ; 004a8902
    PUSH EBX                            ; 004a8908
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004a8909
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 004a890e
    PUSH 0x0                            ; 004a8911
    SUB EAX,0x4b0                       ; 004a8913
    PUSH EAX                            ; 004a8918
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004a8919
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 004a891e
    PUSH 0x0                            ; 004a8921
    SUB EAX,0x20c                       ; 004a8923
    PUSH EAX                            ; 004a8928
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004a8929
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004a892e
    PUSH 0x0                            ; 004a8931
    SUB EAX,0xb4                        ; 004a8933
    PUSH EAX                            ; 004a8938
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004a8939
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004a893e
    PUSH 0x0                            ; 004a8941
    SUB EAX,0x1c8                       ; 004a8943
    PUSH EAX                            ; 004a8948
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004a8949
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 004a894e
    PUSH 0x0                            ; 004a8951
    SUB EAX,0x293c                      ; 004a8953
    PUSH EAX                            ; 004a8958
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004a8959
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004a895e
    PUSH 0x1                            ; 004a8961
    LEA EBX,[EAX + 0xfffffeb0]          ; 004a8963
    PUSH EBX                            ; 004a8969
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004a896a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004a896f
    MOV DL,byte ptr [ESP + 0xc]         ; 004a8972
    MOV EBX,EAX                         ; 004a8976
    TEST DL,0x2                         ; 004a8978
    JNZ 0x004a899c                      ; 004a897b
        ;   XREF to: 004a899c (CONDITIONAL_JUMP)  ; LAB_004a899c
    MOV EAX,EBX                         ; 004a897d
    POP EBX                             ; 004a897f
    RET                                 ; 004a8980
    PUSH 0x59e0a0                       ; 004a8981 | DAT_0059e0a0
        ;   Label: LAB_004a8981
    PUSH EBX                            ; 004a8986
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004a8987
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004a898c
    PUSH EAX                            ; 004a898f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004a8990
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004a8995
    MOV EAX,EBX                         ; 004a8998
    POP EBX                             ; 004a899a
    RET                                 ; 004a899b
    PUSH EAX                            ; 004a899c
        ;   Label: LAB_004a899c
    CALL FUN_00564494                   ; 004a899d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004a89a2
    MOV EAX,EBX                         ; 004a89a5
    POP EBX                             ; 004a89a7
    RET                                 ; 004a89a8

