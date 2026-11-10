; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_00469550 at 0046b461
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00587880
;
; Referenced Globals:
;   TerminatedCString s_CHealthItem_005e491d
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004ebeb0
;   core_inv.cpp_CInventory_select_FUN_004f9bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec020
        ;   Label: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020
    PUSH ESI                            ; 004ec021
    PUSH EBP                            ; 004ec022
    MOV EBP,ESP                         ; 004ec023
    MOV ESI,dword ptr [EBP + 0x10]      ; 004ec025
    LEA EBX,[ESI + 0x1fae8]             ; 004ec028
    MOV EAX,dword ptr [EBX + 0x33c]     ; 004ec02e
    TEST EAX,EAX                        ; 004ec034
    JNZ 0x004ec03c                      ; 004ec036
        ;   XREF to: 004ec03c (CONDITIONAL_JUMP)  ; LAB_004ec03c
    POP EBP                             ; 004ec038
    POP ESI                             ; 004ec039
    POP EBX                             ; 004ec03a
    RET                                 ; 004ec03b
    PUSH 0x5e491d                       ; 004ec03c | = "CHealthItem"
        ;   Label: LAB_004ec03c
    PUSH EAX                            ; 004ec041
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004ec042
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ec047
    TEST EAX,EAX                        ; 004ec04a
    JNZ 0x004ec068                      ; 004ec04c
        ;   XREF to: 004ec068 (CONDITIONAL_JUMP)  ; LAB_004ec068
    PUSH ESI                            ; 004ec04e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004ec04f
    CALL dword ptr [EAX + 0x148]        ; 004ec055
    ADD ESP,0x4                         ; 004ec05b
    TEST EAX,EAX                        ; 004ec05e
    JZ 0x004ec07c                       ; 004ec060
        ;   XREF to: 004ec07c (CONDITIONAL_JUMP)  ; LAB_004ec07c
    XOR EAX,EAX                         ; 004ec062
    POP EBP                             ; 004ec064
    POP ESI                             ; 004ec065
    POP EBX                             ; 004ec066
    RET                                 ; 004ec067
    MOV EAX,dword ptr [EBX + 0x33c]     ; 004ec068
        ;   Label: LAB_004ec068
    PUSH EAX                            ; 004ec06e
    PUSH EBX                            ; 004ec06f
    CALL core_inv.cpp_CInventory_select_FUN_004f9bd0 ; 004ec070
        ;   XREF to: 004f9bd0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_select_FUN_004f9bd0(CInventory * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004ec075
    POP EBP                             ; 004ec078
    POP ESI                             ; 004ec079
    POP EBX                             ; 004ec07a
    RET                                 ; 004ec07b
    PUSH ESI                            ; 004ec07c
        ;   Label: LAB_004ec07c
    CALL core_hero.cpp_CHero_findItemUseTarget_FUN_004ebeb0 ; 004ec07d
        ;   XREF to: 004ebeb0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_findItemUseTarget_FUN_004ebeb0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ec082
    TEST EAX,EAX                        ; 004ec085
    JZ 0x004ec068                       ; 004ec087
        ;   XREF to: 004ec068 (CONDITIONAL_JUMP)  ; LAB_004ec068
    XOR EAX,EAX                         ; 004ec089
    POP EBP                             ; 004ec08b
    POP ESI                             ; 004ec08c
    POP EBX                             ; 004ec08d
    RET                                 ; 004ec08e

