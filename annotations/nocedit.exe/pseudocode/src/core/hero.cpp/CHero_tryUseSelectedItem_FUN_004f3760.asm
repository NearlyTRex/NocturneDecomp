; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bd421
;
; Referenced Globals:
;   TerminatedCString s_CHealthItem_0062ecb6
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004f35b0
;   core_inv.cpp_CInventory_select_FUN_004ff800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3760
        ;   Label: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004f3760
    PUSH ESI                            ; 004f3761
    PUSH EBP                            ; 004f3762
    MOV EBP,ESP                         ; 004f3763
    MOV ESI,dword ptr [EBP + 0x10]      ; 004f3765
    LEA EBX,[ESI + 0x1f738]             ; 004f3768
    MOV EAX,dword ptr [EBX + 0x334]     ; 004f376e
    TEST EAX,EAX                        ; 004f3774
    JNZ 0x004f377c                      ; 004f3776
        ;   XREF to: 004f377c (CONDITIONAL_JUMP)  ; LAB_004f377c
    POP EBP                             ; 004f3778
    POP ESI                             ; 004f3779
    POP EBX                             ; 004f377a
    RET                                 ; 004f377b
    PUSH 0x62ecb6                       ; 004f377c | = "CHealthItem"
        ;   Label: LAB_004f377c
    PUSH EAX                            ; 004f3781
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004f3782
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f3787
    TEST EAX,EAX                        ; 004f378a
    JNZ 0x004f37a8                      ; 004f378c
        ;   XREF to: 004f37a8 (CONDITIONAL_JUMP)  ; LAB_004f37a8
    PUSH ESI                            ; 004f378e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f378f
    CALL dword ptr [EAX + 0x15c]        ; 004f3795
    ADD ESP,0x4                         ; 004f379b
    TEST EAX,EAX                        ; 004f379e
    JZ 0x004f37bc                       ; 004f37a0
        ;   XREF to: 004f37bc (CONDITIONAL_JUMP)  ; LAB_004f37bc
    XOR EAX,EAX                         ; 004f37a2
    POP EBP                             ; 004f37a4
    POP ESI                             ; 004f37a5
    POP EBX                             ; 004f37a6
    RET                                 ; 004f37a7
    MOV EAX,dword ptr [EBX + 0x334]     ; 004f37a8
        ;   Label: LAB_004f37a8
    PUSH EAX                            ; 004f37ae
    PUSH EBX                            ; 004f37af
    CALL core_inv.cpp_CInventory_select_FUN_004ff800 ; 004f37b0
        ;   XREF to: 004ff800 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_select_FUN_004ff800(CInventory * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004f37b5
    POP EBP                             ; 004f37b8
    POP ESI                             ; 004f37b9
    POP EBX                             ; 004f37ba
    RET                                 ; 004f37bb
    PUSH ESI                            ; 004f37bc
        ;   Label: LAB_004f37bc
    CALL core_hero.cpp_CHero_findItemUseTarget_FUN_004f35b0 ; 004f37bd
        ;   XREF to: 004f35b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_findItemUseTarget_FUN_004f35b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f37c2
    TEST EAX,EAX                        ; 004f37c5
    JZ 0x004f37a8                       ; 004f37c7
        ;   XREF to: 004f37a8 (CONDITIONAL_JUMP)  ; LAB_004f37a8
    XOR EAX,EAX                         ; 004f37c9
    POP EBP                             ; 004f37cb
    POP ESI                             ; 004f37cc
    POP EBX                             ; 004f37cd
    RET                                 ; 004f37ce

