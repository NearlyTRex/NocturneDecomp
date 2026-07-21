; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bcfd0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059f6d0
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

    PUSH EBX                            ; 004bcfd0
        ;   Label: FUN_004bcfd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bcfd1
    TEST byte ptr [ESP + 0xc],0x4       ; 004bcfd5
    JNZ 0x004bd061                      ; 004bcfda
        ;   XREF to: 004bd061 (CONDITIONAL_JUMP)  ; LAB_004bd061
    PUSH 0x0                            ; 004bcfe0
    ADD EBX,0x33c4                      ; 004bcfe2
    PUSH EBX                            ; 004bcfe8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004bcfe9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 004bcfee
    PUSH 0x0                            ; 004bcff1
    SUB EAX,0x4b0                       ; 004bcff3
    PUSH EAX                            ; 004bcff8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004bcff9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 004bcffe
    PUSH 0x0                            ; 004bd001
    SUB EAX,0x20c                       ; 004bd003
    PUSH EAX                            ; 004bd008
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004bd009
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004bd00e
    PUSH 0x0                            ; 004bd011
    SUB EAX,0xb4                        ; 004bd013
    PUSH EAX                            ; 004bd018
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004bd019
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004bd01e
    PUSH 0x0                            ; 004bd021
    SUB EAX,0x1c8                       ; 004bd023
    PUSH EAX                            ; 004bd028
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004bd029
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 004bd02e
    PUSH 0x0                            ; 004bd031
    SUB EAX,0x293c                      ; 004bd033
    PUSH EAX                            ; 004bd038
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004bd039
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004bd03e
    PUSH 0x1                            ; 004bd041
    LEA EBX,[EAX + 0xfffffeb0]          ; 004bd043
    PUSH EBX                            ; 004bd049
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004bd04a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004bd04f
    MOV DL,byte ptr [ESP + 0xc]         ; 004bd052
    MOV EBX,EAX                         ; 004bd056
    TEST DL,0x2                         ; 004bd058
    JNZ 0x004bd07c                      ; 004bd05b
        ;   XREF to: 004bd07c (CONDITIONAL_JUMP)  ; LAB_004bd07c
    MOV EAX,EBX                         ; 004bd05d
    POP EBX                             ; 004bd05f
    RET                                 ; 004bd060
    PUSH 0x59f6d0                       ; 004bd061 | DAT_0059f6d0
        ;   Label: LAB_004bd061
    PUSH EBX                            ; 004bd066
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004bd067
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004bd06c
    PUSH EAX                            ; 004bd06f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004bd070
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004bd075
    MOV EAX,EBX                         ; 004bd078
    POP EBX                             ; 004bd07a
    RET                                 ; 004bd07b
    PUSH EAX                            ; 004bd07c
        ;   Label: LAB_004bd07c
    CALL FUN_00564494                   ; 004bd07d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004bd082
    MOV EAX,EBX                         ; 004bd085
    POP EBX                             ; 004bd087
    RET                                 ; 004bd088

