; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_clear_FUN_004f6fa0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_inv.cpp_CInventory_initialize_FUN_004f7050 at 004f705b
;   core_inv.cpp_CInventory_load_FUN_004f97a0 at 004f97b2
;   core_inv.cpp_FUN_004f6f80 at 004f6f86
;
; Called Functions:
;   core_inv.cpp_FUN_004f8d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6fa0
        ;   Label: core_inv.cpp_CInventory_clear_FUN_004f6fa0
    PUSH EBP                            ; 004f6fa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6fa2
    CMP dword ptr [EBX + 0x10],0x0      ; 004f6fa6
    JLE 0x004f6fd4                      ; 004f6faa
        ;   XREF to: 004f6fd4 (CONDITIONAL_JUMP)  ; LAB_004f6fd4
    PUSH EDI                            ; 004f6fac
    PUSH ESI                            ; 004f6fad
    CMP dword ptr [EBX + 0x458],0x0     ; 004f6fae
        ;   Label: LAB_004f6fae
    SETZ AL                             ; 004f6fb5
    AND EAX,0xff                        ; 004f6fb8
    PUSH EAX                            ; 004f6fbd
    MOV ESI,dword ptr [EBX + 0x14]      ; 004f6fbe
    PUSH ESI                            ; 004f6fc1
    PUSH EBX                            ; 004f6fc2
    CALL core_inv.cpp_FUN_004f8d00      ; 004f6fc3
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EDI,dword ptr [EBX + 0x10]      ; 004f6fc8
    ADD ESP,0xc                         ; 004f6fcb
    TEST EDI,EDI                        ; 004f6fce
    JG 0x004f6fae                       ; 004f6fd0
        ;   XREF to: 004f6fae (CONDITIONAL_JUMP)  ; LAB_004f6fae
    POP ESI                             ; 004f6fd2
    POP EDI                             ; 004f6fd3
    MOV dword ptr [EBX + 0x33c],0x0     ; 004f6fd4
        ;   Label: LAB_004f6fd4
    MOV dword ptr [EBX + 0x458],0x0     ; 004f6fde
    MOV EBP,dword ptr [EBX + 0x464]     ; 004f6fe8
    MOV dword ptr [EBX + 0x338],0x0     ; 004f6fee
    TEST EBP,EBP                        ; 004f6ff8
    JZ 0x004f700a                       ; 004f6ffa
        ;   XREF to: 004f700a (CONDITIONAL_JUMP)  ; LAB_004f700a
    MOV EAX,EBP                         ; 004f6ffc
    JNZ 0x004f702f                      ; 004f6ffe
        ;   XREF to: 004f702f (CONDITIONAL_JUMP)  ; LAB_004f702f
    MOV dword ptr [EBX + 0x464],0x0     ; 004f7000
        ;   Label: LAB_004f7000
    MOV dword ptr [EBX + 0x460],0x0     ; 004f700a
        ;   Label: LAB_004f700a
    MOV dword ptr [EBX + 0x8],0x0       ; 004f7014
    MOV dword ptr [EBX + 0xc],0x0       ; 004f701b
    MOV dword ptr [EBX + 0x45c],0x0     ; 004f7022
    POP EBP                             ; 004f702c
    POP EBX                             ; 004f702d
    RET                                 ; 004f702e
    PUSH 0x2                            ; 004f702f
        ;   Label: LAB_004f702f
    MOV EDX,dword ptr [EBP + 0x154]     ; 004f7031
    PUSH EBP                            ; 004f7037
    CALL dword ptr [EDX + 0xd0]         ; 004f7038
    ADD ESP,0x8                         ; 004f703e
    JMP 0x004f7000                      ; 004f7041
        ;   XREF to: 004f7000 (UNCONDITIONAL_JUMP)  ; LAB_004f7000

