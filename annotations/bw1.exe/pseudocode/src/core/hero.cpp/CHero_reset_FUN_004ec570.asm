; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_reset_FUN_004ec570(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_004763c0 at 004763cc
;   core_stranger.cpp_CStranger_reset_FUN_00591ce0 at 00591cec
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec570
        ;   Label: core_hero.cpp_CHero_reset_FUN_004ec570
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ec571
    MOV dword ptr [EBX + 0x1ff74],0x0   ; 004ec575
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004ec57f
    MOV dword ptr [EBX + 0x1ff7c],0x0   ; 004ec589
    MOV dword ptr [EBX + 0x1ff80],0x0   ; 004ec593
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 004ec59d
    PUSH -0x1                           ; 004ec5a7
    MOV dword ptr [EBX + 0x1ff88],0x0   ; 004ec5a9
    LEA EAX,[EBX + 0x1fae8]             ; 004ec5b3
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 004ec5b9
    PUSH EAX                            ; 004ec5c3
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004ec5c4
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310 ; 004ec5ce
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004ec5d3
    PUSH 0x0                            ; 004ec5d6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec5d8
    PUSH EBX                            ; 004ec5de
    CALL dword ptr [EAX + 0x144]        ; 004ec5df
    ADD ESP,0x8                         ; 004ec5e5
    MOV EAX,EBX                         ; 004ec5e8
    LEA EDX,[EBX + 0xf0]                ; 004ec5ea
    ADD EAX,0x78                        ; 004ec5f0
        ;   Label: LAB_004ec5f0
    MOV dword ptr [EAX + 0x2538],0x0    ; 004ec5f3
    CMP EAX,EDX                         ; 004ec5fd
    JNZ 0x004ec5f0                      ; 004ec5ff
        ;   XREF to: 004ec5f0 (CONDITIONAL_JUMP)  ; LAB_004ec5f0
    POP EBX                             ; 004ec601
    RET                                 ; 004ec602

