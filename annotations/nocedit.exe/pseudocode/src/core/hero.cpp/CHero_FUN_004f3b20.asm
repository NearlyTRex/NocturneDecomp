; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_hero.cpp_CHero_FUN_004f3b20(CHero * this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c6750 at 005c675c
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3b20
        ;   Label: core_hero.cpp_CHero_FUN_004f3b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3b21
    MOV dword ptr [EBX + 0x1fb9c],0x0   ; 004f3b25
    MOV dword ptr [EBX + 0x1fba0],0x0   ; 004f3b2f
    MOV dword ptr [EBX + 0x1fba4],0x0   ; 004f3b39
    MOV dword ptr [EBX + 0x1fba8],0x0   ; 004f3b43
    MOV dword ptr [EBX + 0x1fbac],0x0   ; 004f3b4d
    PUSH -0x1                           ; 004f3b57
    MOV dword ptr [EBX + 0x1fbb0],0x0   ; 004f3b59
    LEA EAX,[EBX + 0x1f738]             ; 004f3b63
    MOV dword ptr [EBX + 0x1fbb4],0x0   ; 004f3b69
    PUSH EAX                            ; 004f3b73
    MOV dword ptr [EBX + 0x2598],0x0    ; 004f3b74
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0 ; 004f3b7e | void core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask)
        ;   XREF to: 005014a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f3b83
    PUSH 0x0                            ; 004f3b86
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3b88
    PUSH EBX                            ; 004f3b8e
    CALL dword ptr [EAX + 0x158]        ; 004f3b8f
    ADD ESP,0x8                         ; 004f3b95
    MOV EAX,EBX                         ; 004f3b98
    LEA EDX,[EBX + 0x88]                ; 004f3b9a
    ADD EAX,0x44                        ; 004f3ba0
        ;   Label: LAB_004f3ba0
    MOV dword ptr [EAX + 0x2470],0x0    ; 004f3ba3
    CMP EAX,EDX                         ; 004f3bad
    JNZ 0x004f3ba0                      ; 004f3baf | LAB_004f3ba0
        ;   XREF to: 004f3ba0 (CONDITIONAL_JUMP)
    POP EBX                             ; 004f3bb1
    RET                                 ; 004f3bb2

