; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005951c1
;   undefined4 g_CActorDestinationActorType_014b8a1c.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534d60
        ;   Label: core_stone.cpp_CTempleStone_canPickup_FUN_00534d60
    PUSH EBP                            ; 00534d61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00534d62
    MOV EDX,dword ptr [0x014b8a54]      ; 00534d66 | g_CActorDestinationActorType_014b8a1c.name_hash
    PUSH EDX                            ; 00534d6c
    MOV ECX,dword ptr [EBX + 0x664]     ; 00534d6d
    PUSH ECX                            ; 00534d73
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00534d74
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00534d79
    TEST EAX,EAX                        ; 00534d7c
    JZ 0x00534d89                       ; 00534d7e
        ;   XREF to: 00534d89 (CONDITIONAL_JUMP)  ; LAB_00534d89
    CMP dword ptr [EAX + 0x17c],0x0     ; 00534d80
    JNZ 0x00534d9b                      ; 00534d87
        ;   XREF to: 00534d9b (CONDITIONAL_JUMP)  ; LAB_00534d9b
    CMP dword ptr [EBX + 0x30c],0x3     ; 00534d89
        ;   Label: LAB_00534d89
    JNZ 0x00534da0                      ; 00534d90
        ;   XREF to: 00534da0 (CONDITIONAL_JUMP)  ; LAB_00534da0
    MOV EAX,dword ptr [EBX + 0x30c]     ; 00534d92
        ;   Label: LAB_00534d92
    POP EBP                             ; 00534d98
    POP EBX                             ; 00534d99
    RET                                 ; 00534d9a
    XOR EAX,EAX                         ; 00534d9b
        ;   Label: LAB_00534d9b
    POP EBP                             ; 00534d9d
    POP EBX                             ; 00534d9e
    RET                                 ; 00534d9f
    PUSH 0x5951c1                       ; 00534da0 | = "CHero"
        ;   Label: LAB_00534da0
    MOV EBP,dword ptr [ESP + 0x14]      ; 00534da5
    PUSH EBP                            ; 00534da9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00534daa
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00534daf
    TEST EAX,EAX                        ; 00534db2
    JNZ 0x00534d92                      ; 00534db4
        ;   XREF to: 00534d92 (CONDITIONAL_JUMP)  ; LAB_00534d92
    POP EBP                             ; 00534db6
    POP EBX                             ; 00534db7
    RET                                 ; 00534db8

