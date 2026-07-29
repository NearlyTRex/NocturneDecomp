; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_FUN_004b5b00(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_00535900 at 005373c1
;
; Referenced Globals:
;   TerminatedCString s_CHealthItem_005858d3
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950
;   core_inv.cpp_CInventory_select_FUN_004c1580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5b00
        ;   Label: core_hero.cpp_FUN_004b5b00
    PUSH ESI                            ; 004b5b01
    PUSH EBP                            ; 004b5b02
    MOV EBP,ESP                         ; 004b5b03
    MOV ESI,dword ptr [EBP + 0x10]      ; 004b5b05
    LEA EBX,[ESI + 0x1f5a0]             ; 004b5b08
    MOV EAX,dword ptr [EBX + 0x334]     ; 004b5b0e
    TEST EAX,EAX                        ; 004b5b14
    JNZ 0x004b5b1c                      ; 004b5b16
        ;   XREF to: 004b5b1c (CONDITIONAL_JUMP)  ; LAB_004b5b1c
    POP EBP                             ; 004b5b18
    POP ESI                             ; 004b5b19
    POP EBX                             ; 004b5b1a
    RET                                 ; 004b5b1b
    PUSH 0x5858d3                       ; 004b5b1c | = "CHealthItem"
        ;   Label: LAB_004b5b1c
    PUSH EAX                            ; 004b5b21
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004b5b22
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b5b27
    TEST EAX,EAX                        ; 004b5b2a
    JNZ 0x004b5b48                      ; 004b5b2c
        ;   XREF to: 004b5b48 (CONDITIONAL_JUMP)  ; LAB_004b5b48
    PUSH ESI                            ; 004b5b2e
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b5b2f
    CALL dword ptr [EAX + 0x140]        ; 004b5b35
    ADD ESP,0x4                         ; 004b5b3b
    TEST EAX,EAX                        ; 004b5b3e
    JZ 0x004b5b5c                       ; 004b5b40
        ;   XREF to: 004b5b5c (CONDITIONAL_JUMP)  ; LAB_004b5b5c
    XOR EAX,EAX                         ; 004b5b42
    POP EBP                             ; 004b5b44
    POP ESI                             ; 004b5b45
    POP EBX                             ; 004b5b46
    RET                                 ; 004b5b47
    MOV EAX,dword ptr [EBX + 0x334]     ; 004b5b48
        ;   Label: LAB_004b5b48
    PUSH EAX                            ; 004b5b4e
    PUSH EBX                            ; 004b5b4f
    CALL core_inv.cpp_CInventory_select_FUN_004c1580 ; 004b5b50
        ;   XREF to: 004c1580 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_select_FUN_004c1580(CInventory * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004b5b55
    POP EBP                             ; 004b5b58
    POP ESI                             ; 004b5b59
    POP EBX                             ; 004b5b5a
    RET                                 ; 004b5b5b
    PUSH ESI                            ; 004b5b5c
        ;   Label: LAB_004b5b5c
    CALL core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950 ; 004b5b5d
        ;   XREF to: 004b5950 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950(CHero * this_ptr)
    ADD ESP,0x4                         ; 004b5b62
    TEST EAX,EAX                        ; 004b5b65
    JZ 0x004b5b48                       ; 004b5b67
        ;   XREF to: 004b5b48 (CONDITIONAL_JUMP)  ; LAB_004b5b48
    XOR EAX,EAX                         ; 004b5b69
    POP EBP                             ; 004b5b6b
    POP ESI                             ; 004b5b6c
    POP EBX                             ; 004b5b6d
    RET                                 ; 004b5b6e

