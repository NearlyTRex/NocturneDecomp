; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d4410(int param_1)
;
;
; XREF[1]:
;   core_prye.cpp_CPrye_reset_FUN_00526f50 at 00526f5c
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004de6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4410
        ;   Label: core_hero.cpp_FUN_004d4410
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4411
    MOV dword ptr [EBX + 0x20b94],0x0   ; 004d4415
    MOV dword ptr [EBX + 0x20b98],0x0   ; 004d441f
    MOV dword ptr [EBX + 0x20b9c],0x0   ; 004d4429
    MOV dword ptr [EBX + 0x20ba0],0x0   ; 004d4433
    MOV dword ptr [EBX + 0x20ba4],0x0   ; 004d443d
    PUSH -0x1                           ; 004d4447
    MOV dword ptr [EBX + 0x20ba8],0x0   ; 004d4449
    LEA EAX,[EBX + 0x206e8]             ; 004d4453
    MOV dword ptr [EBX + 0x20bac],0x0   ; 004d4459
    PUSH EAX                            ; 004d4463
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004d4464
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_004de6e0 ; 004d446e
        ;   XREF to: 004de6e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_004de6e0(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004d4473
    PUSH 0x0                            ; 004d4476
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d4478
    PUSH EBX                            ; 004d447e
    CALL dword ptr [EAX + 0x144]        ; 004d447f
    ADD ESP,0x8                         ; 004d4485
    MOV EAX,EBX                         ; 004d4488
    LEA EDX,[EBX + 0xf0]                ; 004d448a
    ADD EAX,0x78                        ; 004d4490
        ;   Label: LAB_004d4490
    MOV dword ptr [EAX + 0x2538],0x0    ; 004d4493
    CMP EAX,EDX                         ; 004d449d
    JNZ 0x004d4490                      ; 004d449f
        ;   XREF to: 004d4490 (CONDITIONAL_JUMP)  ; LAB_004d4490
    MOV dword ptr [EBX + 0x20b9c],0x0   ; 004d44a1
    MOV dword ptr [EBX + 0x2704],0x0    ; 004d44ab
    MOV dword ptr [EBX + 0x2740],0x0    ; 004d44b5
    MOV dword ptr [EBX + 0x2760],0x0    ; 004d44bf
    MOV dword ptr [EBX + 0x2764],0x0    ; 004d44c9
    MOV dword ptr [EBX + 0x20b8c],0x0   ; 004d44d3
    POP EBX                             ; 004d44dd
    RET                                 ; 004d44de

