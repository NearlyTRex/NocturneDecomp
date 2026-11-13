; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_setupItems_FUN_004f9b20(int param_1)
;
;
; XREF[1]:
;   core_hero.cpp_CHero_setup_FUN_004eaa10 at 004eaa3e
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_005e66f7
;   TerminatedCString s_CInventory_setupItems_we_005e6707
;   undefined4 g_CGasMaskClassInfo.name_hash
;   undefined4 g_CGogglesClassInfo.name_hash
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9b20
        ;   Label: core_inv.cpp_setupItems_FUN_004f9b20
    PUSH ESI                            ; 004f9b21
    PUSH EDI                            ; 004f9b22
    PUSH EBP                            ; 004f9b23
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9b24
    CMP dword ptr [EBX + 0x458],0x0     ; 004f9b28
    JNZ 0x004f9b84                      ; 004f9b2f
        ;   XREF to: 004f9b84 (CONDITIONAL_JUMP)  ; LAB_004f9b84
    MOV EBP,dword ptr [EBX + 0x10]      ; 004f9b31
        ;   Label: LAB_004f9b31
    XOR EDI,EDI                         ; 004f9b34
    TEST EBP,EBP                        ; 004f9b36
    JLE 0x004f9b7f                      ; 004f9b38
        ;   XREF to: 004f9b7f (CONDITIONAL_JUMP)  ; LAB_004f9b7f
    MOV EBP,EBX                         ; 004f9b3a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f9b3c
        ;   Label: LAB_004f9b3c
    PUSH ESI                            ; 004f9b3f
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f9b40
    CALL dword ptr [EAX]                ; 004f9b46
    MOV EDX,dword ptr [EBX + 0x460]     ; 004f9b48
    ADD ESP,0x4                         ; 004f9b4e
    TEST EDX,EDX                        ; 004f9b51
    JZ 0x004f9ba9                       ; 004f9b53
        ;   XREF to: 004f9ba9 (CONDITIONAL_JUMP)  ; LAB_004f9ba9
    CMP dword ptr [EBX + 0x45c],0x0     ; 004f9b55
        ;   Label: LAB_004f9b55
    JNZ 0x004f9b74                      ; 004f9b5c
        ;   XREF to: 004f9b74 (CONDITIONAL_JUMP)  ; LAB_004f9b74
    MOV EDX,dword ptr [0x01cd0d40]      ; 004f9b5e | g_CGasMaskClassInfo.name_hash
    PUSH EDX                            ; 004f9b64
    PUSH ESI                            ; 004f9b65
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f9b66
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f9b6b
    MOV dword ptr [EBX + 0x45c],EAX     ; 004f9b6e
    INC EDI                             ; 004f9b74
        ;   Label: LAB_004f9b74
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f9b75
    ADD EBP,0x4                         ; 004f9b78
    CMP EDI,EAX                         ; 004f9b7b
    JL 0x004f9b3c                       ; 004f9b7d
        ;   XREF to: 004f9b3c (CONDITIONAL_JUMP)  ; LAB_004f9b3c
    POP EBP                             ; 004f9b7f
        ;   Label: LAB_004f9b7f
    POP EDI                             ; 004f9b80
    POP ESI                             ; 004f9b81
    POP EBX                             ; 004f9b82
    RET                                 ; 004f9b83
    MOV ECX,0x5e66f7                    ; 004f9b84 | = "..\\core\\inv.cpp"
        ;   Label: LAB_004f9b84
    MOV ESI,0x6c0                       ; 004f9b89
    PUSH 0x5e6707                       ; 004f9b8e | = "CInventory::setupItems - we should ow..."
    MOV dword ptr [0x01d1d400],ECX      ; 004f9b93 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004f9b99 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f9b9f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f9ba4
    JMP 0x004f9b31                      ; 004f9ba7
        ;   XREF to: 004f9b31 (UNCONDITIONAL_JUMP)  ; LAB_004f9b31
    MOV ECX,dword ptr [0x01cd0e38]      ; 004f9ba9 | g_CGogglesClassInfo.name_hash
        ;   Label: LAB_004f9ba9
    PUSH ECX                            ; 004f9baf
    PUSH ESI                            ; 004f9bb0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f9bb1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f9bb6
    MOV dword ptr [EBX + 0x460],EAX     ; 004f9bb9
    JMP 0x004f9b55                      ; 004f9bbf
        ;   XREF to: 004f9b55 (UNCONDITIONAL_JUMP)  ; LAB_004f9b55

