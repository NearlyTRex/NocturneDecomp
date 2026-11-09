; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_FUN_004def40(CInventory *this_ptr,uint key_mask)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[2]:
;   core_hero.cpp_FUN_004d0070 at 004d007f
;   core_hero.cpp_FUN_004d02e0 at 004d033e
;
; Referenced Globals:
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_inv.cpp_FUN_004db8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004def40
        ;   Label: core_inv.cpp_FUN_004def40
    PUSH ESI                            ; 004def41
    PUSH EDI                            ; 004def42
    PUSH EBP                            ; 004def43
    MOV EDI,dword ptr [ESP + 0x14]      ; 004def44
    MOV EBP,dword ptr [ESP + 0x18]      ; 004def48
    MOV EDX,dword ptr [EDI + 0x10]      ; 004def4c
    XOR ESI,ESI                         ; 004def4f
    TEST EDX,EDX                        ; 004def51
    JLE 0x004def89                      ; 004def53
        ;   XREF to: 004def89 (CONDITIONAL_JUMP)  ; LAB_004def89
    MOV EBX,EDI                         ; 004def55
    MOV EAX,[0x01d02f80]                ; 004def57 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004def57
    PUSH EAX                            ; 004def5c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004def5d
    PUSH EDX                            ; 004def60
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004def61
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004def66
    TEST EAX,EAX                        ; 004def69
    JZ 0x004def8e                       ; 004def6b
        ;   XREF to: 004def8e (CONDITIONAL_JUMP)  ; LAB_004def8e
    TEST dword ptr [EAX + 0x430],EBP    ; 004def6d
    JZ 0x004def8e                       ; 004def73
        ;   XREF to: 004def8e (CONDITIONAL_JUMP)  ; LAB_004def8e
    PUSH 0x1                            ; 004def75
    MOV EAX,dword ptr [EBX + 0x14]      ; 004def77
    PUSH EAX                            ; 004def7a
    PUSH EDI                            ; 004def7b
    CALL core_inv.cpp_FUN_004db8e0      ; 004def7c
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    ADD ESP,0xc                         ; 004def81
    CMP ESI,dword ptr [EDI + 0x10]      ; 004def84
    JL 0x004def57                       ; 004def87
        ;   XREF to: 004def57 (CONDITIONAL_JUMP)  ; LAB_004def57
    POP EBP                             ; 004def89
        ;   Label: LAB_004def89
    POP EDI                             ; 004def8a
    POP ESI                             ; 004def8b
    POP EBX                             ; 004def8c
    RET                                 ; 004def8d
    INC ESI                             ; 004def8e
        ;   Label: LAB_004def8e
    ADD EBX,0x4                         ; 004def8f
    CMP ESI,dword ptr [EDI + 0x10]      ; 004def92
    JL 0x004def57                       ; 004def95
        ;   XREF to: 004def57 (CONDITIONAL_JUMP)  ; LAB_004def57
    POP EBP                             ; 004def97
    POP EDI                             ; 004def98
    POP ESI                             ; 004def99
    POP EBX                             ; 004def9a
    RET                                 ; 004def9b

