; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[2]:
;   core_hero.cpp_CHero_FUN_004f3b20 at 004f3b7e
;   core_hero.cpp_FUN_004f3910 at 004f391f
;
; Referenced Globals:
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005014a0
        ;   Label: core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
    PUSH ESI                            ; 005014a1
    PUSH EDI                            ; 005014a2
    PUSH EBP                            ; 005014a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005014a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005014a8
    MOV EDX,dword ptr [EDI + 0x8]       ; 005014ac
    XOR ESI,ESI                         ; 005014af
    TEST EDX,EDX                        ; 005014b1
    JLE 0x005014e9                      ; 005014b3 | LAB_005014e9
        ;   XREF to: 005014e9 (CONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 005014b5
    MOV EAX,[0x02dcd7d0]                ; 005014b7 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_005014b7
    PUSH EAX                            ; 005014bc
    MOV EDX,dword ptr [EBX + 0xc]       ; 005014bd
    PUSH EDX                            ; 005014c0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005014c1 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005014c6
    TEST EAX,EAX                        ; 005014c9
    JZ 0x005014ee                       ; 005014cb | LAB_005014ee
        ;   XREF to: 005014ee (CONDITIONAL_JUMP)
    TEST dword ptr [EAX + 0x2d4],EBP    ; 005014cd
    JZ 0x005014ee                       ; 005014d3 | LAB_005014ee
        ;   XREF to: 005014ee (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005014d5
    MOV EAX,dword ptr [EBX + 0xc]       ; 005014d7
    PUSH EAX                            ; 005014da
    PUSH EDI                            ; 005014db
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 005014dc | void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005014e1
    CMP ESI,dword ptr [EDI + 0x8]       ; 005014e4
    JL 0x005014b7                       ; 005014e7 | LAB_005014b7
        ;   XREF to: 005014b7 (CONDITIONAL_JUMP)
    POP EBP                             ; 005014e9
        ;   Label: LAB_005014e9
    POP EDI                             ; 005014ea
    POP ESI                             ; 005014eb
    POP EBX                             ; 005014ec
    RET                                 ; 005014ed
    INC ESI                             ; 005014ee
        ;   Label: LAB_005014ee
    ADD EBX,0x4                         ; 005014ef
    CMP ESI,dword ptr [EDI + 0x8]       ; 005014f2
    JL 0x005014b7                       ; 005014f5 | LAB_005014b7
        ;   XREF to: 005014b7 (CONDITIONAL_JUMP)
    POP EBP                             ; 005014f7
    POP EDI                             ; 005014f8
    POP ESI                             ; 005014f9
    POP EBX                             ; 005014fa
    RET                                 ; 005014fb

