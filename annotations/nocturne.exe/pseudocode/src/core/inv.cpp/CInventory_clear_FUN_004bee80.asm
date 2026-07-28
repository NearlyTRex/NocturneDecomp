; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_clear_FUN_004bee80(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_initialize_FUN_004bef10 at 004bef1b
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c11a2
;   core_inv.cpp_FUN_004bee60 at 004bee66
;
; Called Functions:
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bee80
        ;   Label: core_inv.cpp_CInventory_clear_FUN_004bee80
    PUSH EBP                            ; 004bee81
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bee82
    CMP dword ptr [EBX + 0x8],0x0       ; 004bee86
    JLE 0x004beeb4                      ; 004bee8a
        ;   XREF to: 004beeb4 (CONDITIONAL_JUMP)  ; LAB_004beeb4
    PUSH EDI                            ; 004bee8c
    PUSH ESI                            ; 004bee8d
    CMP dword ptr [EBX + 0x450],0x0     ; 004bee8e
        ;   Label: LAB_004bee8e
    SETZ AL                             ; 004bee95
    AND EAX,0xff                        ; 004bee98
    PUSH EAX                            ; 004bee9d
    MOV ESI,dword ptr [EBX + 0xc]       ; 004bee9e
    PUSH ESI                            ; 004beea1
    PUSH EBX                            ; 004beea2
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 004beea3
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004c07b0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EDI,dword ptr [EBX + 0x8]       ; 004beea8
    ADD ESP,0xc                         ; 004beeab
    TEST EDI,EDI                        ; 004beeae
    JG 0x004bee8e                       ; 004beeb0
        ;   XREF to: 004bee8e (CONDITIONAL_JUMP)  ; LAB_004bee8e
    POP ESI                             ; 004beeb2
    POP EDI                             ; 004beeb3
    MOV dword ptr [EBX + 0x334],0x0     ; 004beeb4
        ;   Label: LAB_004beeb4
    MOV dword ptr [EBX + 0x450],0x0     ; 004beebe
    MOV EBP,dword ptr [EBX + 0x458]     ; 004beec8
    MOV dword ptr [EBX + 0x330],0x0     ; 004beece
    TEST EBP,EBP                        ; 004beed8
    JZ 0x004beeea                       ; 004beeda
        ;   XREF to: 004beeea (CONDITIONAL_JUMP)  ; LAB_004beeea
    MOV EAX,EBP                         ; 004beedc
    JNZ 0x004beeed                      ; 004beede
        ;   XREF to: 004beeed (CONDITIONAL_JUMP)  ; LAB_004beeed
    MOV dword ptr [EBX + 0x458],0x0     ; 004beee0
    POP EBP                             ; 004beeea
        ;   Label: LAB_004beeea
    POP EBX                             ; 004beeeb
    RET                                 ; 004beeec
    PUSH 0x2                            ; 004beeed
        ;   Label: LAB_004beeed
    MOV EDX,dword ptr [EBP + 0x14c]     ; 004beeef
    PUSH EBP                            ; 004beef5
    CALL dword ptr [EDX + 0xc8]         ; 004beef6
    ADD ESP,0x8                         ; 004beefc
    MOV dword ptr [EBX + 0x458],0x0     ; 004beeff
    POP EBP                             ; 004bef09
    POP EBX                             ; 004bef0a
    RET                                 ; 004bef0b

