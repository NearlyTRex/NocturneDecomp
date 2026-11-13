; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004cfc80(CHero *param_1)
;
;
; XREF[2]:
;   core_doc.cpp_FUN_00450c60 at 004528ce
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00564df1
;
; Referenced Globals:
;   undefined4 s_N_CHealthItem_005d9d52+2
;   TerminatedCString s_CAmmo_005d9d60
;   TerminatedCString s_CBoxActor_005d9d66
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00
;   core_inv.cpp_CInventory_select_FUN_004dc8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfc80
        ;   Label: core_hero.cpp_FUN_004cfc80
    PUSH ESI                            ; 004cfc81
    PUSH EBP                            ; 004cfc82
    MOV EBP,ESP                         ; 004cfc83
    MOV ESI,dword ptr [EBP + 0x10]      ; 004cfc85
    LEA EBX,[ESI + 0x2437c]             ; 004cfc88
    MOV EAX,dword ptr [EBX + 0x468]     ; 004cfc8e
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004cfc94
    TEST EAX,EAX                        ; 004cfc9b
    JNZ 0x004cfca3                      ; 004cfc9d
        ;   XREF to: 004cfca3 (CONDITIONAL_JUMP)  ; LAB_004cfca3
    POP EBP                             ; 004cfc9f
    POP ESI                             ; 004cfca0
    POP EBX                             ; 004cfca1
    RET                                 ; 004cfca2
    PUSH 0x5d9d54                       ; 004cfca3 | s_N_CHealthItem_005d9d52+2
        ;   Label: LAB_004cfca3
    PUSH EAX                            ; 004cfca8
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004cfca9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004cfcae
    TEST EAX,EAX                        ; 004cfcb1
    JNZ 0x004cfd0d                      ; 004cfcb3
        ;   XREF to: 004cfd0d (CONDITIONAL_JUMP)  ; LAB_004cfd0d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004cfcb5
    PUSH 0x5d9d60                       ; 004cfcbb | = "CAmmo"
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004cfcc0
    PUSH EAX                            ; 004cfcc7
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004cfcc8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004cfccd
    TEST EAX,EAX                        ; 004cfcd0
    JNZ 0x004cfd0d                      ; 004cfcd2
        ;   XREF to: 004cfd0d (CONDITIONAL_JUMP)  ; LAB_004cfd0d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004cfcd4
    PUSH 0x5d9d66                       ; 004cfcda | = "CBoxActor"
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004cfcdf
    PUSH EAX                            ; 004cfce6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004cfce7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004cfcec
    TEST EAX,EAX                        ; 004cfcef
    JNZ 0x004cfd0d                      ; 004cfcf1
        ;   XREF to: 004cfd0d (CONDITIONAL_JUMP)  ; LAB_004cfd0d
    PUSH ESI                            ; 004cfcf3
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004cfcf4
    CALL dword ptr [EAX + 0x154]        ; 004cfcfa
    ADD ESP,0x4                         ; 004cfd00
    TEST EAX,EAX                        ; 004cfd03
    JZ 0x004cfd2e                       ; 004cfd05
        ;   XREF to: 004cfd2e (CONDITIONAL_JUMP)  ; LAB_004cfd2e
    XOR EAX,EAX                         ; 004cfd07
    POP EBP                             ; 004cfd09
    POP ESI                             ; 004cfd0a
    POP EBX                             ; 004cfd0b
    RET                                 ; 004cfd0c
    MOV EAX,dword ptr [ESI + 0x247e4]   ; 004cfd0d
        ;   Label: LAB_004cfd0d
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x24978] ; 004cfd13
    PUSH EAX                            ; 004cfd1a
    ADD ESI,0x2437c                     ; 004cfd1b
    PUSH ESI                            ; 004cfd21
    CALL core_inv.cpp_CInventory_select_FUN_004dc8c0 ; 004cfd22
        ;   XREF to: 004dc8c0 (UNCONDITIONAL_CALL)  ; undefined4 core_inv.cpp_CInventory_select_FUN_004dc8c0(CInventory * this_ptr, CDemonActor * param_2)
    ADD ESP,0x8                         ; 004cfd27
    POP EBP                             ; 004cfd2a
    POP ESI                             ; 004cfd2b
    POP EBX                             ; 004cfd2c
    RET                                 ; 004cfd2d
    PUSH ESI                            ; 004cfd2e
        ;   Label: LAB_004cfd2e
    CALL core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00 ; 004cfd2f
        ;   XREF to: 004cfb00 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero * this_ptr)
    ADD ESP,0x4                         ; 004cfd34
    TEST EAX,EAX                        ; 004cfd37
    JZ 0x004cfd41                       ; 004cfd39
        ;   XREF to: 004cfd41 (CONDITIONAL_JUMP)  ; LAB_004cfd41
    XOR EAX,EAX                         ; 004cfd3b
    POP EBP                             ; 004cfd3d
    POP ESI                             ; 004cfd3e
    POP EBX                             ; 004cfd3f
    RET                                 ; 004cfd40
    MOV EAX,dword ptr [EBX + 0x468]     ; 004cfd41
        ;   Label: LAB_004cfd41
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004cfd47
    PUSH EAX                            ; 004cfd4e
    PUSH EBX                            ; 004cfd4f
    CALL core_inv.cpp_CInventory_select_FUN_004dc8c0 ; 004cfd50
        ;   XREF to: 004dc8c0 (UNCONDITIONAL_CALL)  ; undefined4 core_inv.cpp_CInventory_select_FUN_004dc8c0(CInventory * this_ptr, CDemonActor * param_2)
    ADD ESP,0x8                         ; 004cfd55
    POP EBP                             ; 004cfd58
    POP ESI                             ; 004cfd59
    POP EBX                             ; 004cfd5a
    RET                                 ; 004cfd5b

