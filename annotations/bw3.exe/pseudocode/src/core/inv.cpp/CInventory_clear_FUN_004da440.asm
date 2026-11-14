; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_clear_FUN_004da440(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_dtor_FUN_004da420 at 004da426
;   core_inv.cpp_CInventory_initialize_FUN_004da4e0 at 004da4eb
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc762
;
; Called Functions:
;   core_inv.cpp_CInventory_removeItem_FUN_004dbaa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da440
        ;   Label: core_inv.cpp_CInventory_clear_FUN_004da440
    PUSH EBP                            ; 004da441
    MOV EBX,dword ptr [ESP + 0xc]       ; 004da442
    CMP dword ptr [EBX + 0x10],0x0      ; 004da446
    JLE 0x004da474                      ; 004da44a
        ;   XREF to: 004da474 (CONDITIONAL_JUMP)  ; LAB_004da474
    PUSH EDI                            ; 004da44c
    PUSH ESI                            ; 004da44d
    CMP dword ptr [EBX + 0x458],0x0     ; 004da44e
        ;   Label: LAB_004da44e
    SETZ AL                             ; 004da455
    AND EAX,0xff                        ; 004da458
    PUSH EAX                            ; 004da45d
    MOV ESI,dword ptr [EBX + 0x14]      ; 004da45e
    PUSH ESI                            ; 004da461
    PUSH EBX                            ; 004da462
    CALL core_inv.cpp_CInventory_removeItem_FUN_004dbaa0 ; 004da463
        ;   XREF to: 004dbaa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004dbaa0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EDI,dword ptr [EBX + 0x10]      ; 004da468
    ADD ESP,0xc                         ; 004da46b
    TEST EDI,EDI                        ; 004da46e
    JG 0x004da44e                       ; 004da470
        ;   XREF to: 004da44e (CONDITIONAL_JUMP)  ; LAB_004da44e
    POP ESI                             ; 004da472
    POP EDI                             ; 004da473
    MOV dword ptr [EBX + 0x33c],0x0     ; 004da474
        ;   Label: LAB_004da474
    MOV dword ptr [EBX + 0x458],0x0     ; 004da47e
    MOV EBP,dword ptr [EBX + 0x464]     ; 004da488
    MOV dword ptr [EBX + 0x338],0x0     ; 004da48e
    TEST EBP,EBP                        ; 004da498
    JZ 0x004da4aa                       ; 004da49a
        ;   XREF to: 004da4aa (CONDITIONAL_JUMP)  ; LAB_004da4aa
    MOV EAX,EBP                         ; 004da49c
    JNZ 0x004da4b4                      ; 004da49e
        ;   XREF to: 004da4b4 (CONDITIONAL_JUMP)  ; LAB_004da4b4
    MOV dword ptr [EBX + 0x464],0x0     ; 004da4a0
    MOV dword ptr [EBX + 0xc],0x0       ; 004da4aa
        ;   Label: LAB_004da4aa
    POP EBP                             ; 004da4b1
    POP EBX                             ; 004da4b2
    RET                                 ; 004da4b3
    PUSH 0x2                            ; 004da4b4
        ;   Label: LAB_004da4b4
    MOV EDX,dword ptr [EBP + 0x154]     ; 004da4b6
    PUSH EBP                            ; 004da4bc
    CALL dword ptr [EDX + 0xd0]         ; 004da4bd
    ADD ESP,0x8                         ; 004da4c3
    MOV dword ptr [EBX + 0x464],0x0     ; 004da4c6
    MOV dword ptr [EBX + 0xc],0x0       ; 004da4d0
    POP EBP                             ; 004da4d7
    POP EBX                             ; 004da4d8
    RET                                 ; 004da4d9

