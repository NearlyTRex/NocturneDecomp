; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00584f10(CTempleStone *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   undefined4 g_CActorDestinationClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584f10
        ;   Label: core_stone.cpp_CTempleStone_canPickup_FUN_00584f10
    PUSH EBP                            ; 00584f11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00584f12
    MOV EDX,dword ptr [0x0152c398]      ; 00584f16 | g_CActorDestinationClassInfo.name_hash
    PUSH EDX                            ; 00584f1c
    MOV ECX,dword ptr [EBX + 0x678]     ; 00584f1d
    PUSH ECX                            ; 00584f23
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00584f24
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00584f29
    TEST EAX,EAX                        ; 00584f2c
    JZ 0x00584f39                       ; 00584f2e
        ;   XREF to: 00584f39 (CONDITIONAL_JUMP)  ; LAB_00584f39
    CMP dword ptr [EAX + 0x184],0x0     ; 00584f30
    JNZ 0x00584f4b                      ; 00584f37
        ;   XREF to: 00584f4b (CONDITIONAL_JUMP)  ; LAB_00584f4b
    CMP dword ptr [EBX + 0x314],0x3     ; 00584f39
        ;   Label: LAB_00584f39
    JNZ 0x00584f50                      ; 00584f40
        ;   XREF to: 00584f50 (CONDITIONAL_JUMP)  ; LAB_00584f50
    MOV EAX,dword ptr [EBX + 0x314]     ; 00584f42
        ;   Label: LAB_00584f42
    POP EBP                             ; 00584f48
    POP EBX                             ; 00584f49
    RET                                 ; 00584f4a
    XOR EAX,EAX                         ; 00584f4b
        ;   Label: LAB_00584f4b
    POP EBP                             ; 00584f4d
    POP EBX                             ; 00584f4e
    RET                                 ; 00584f4f
    PUSH 0x5f6393                       ; 00584f50
        ;   Label: LAB_00584f50
    MOV EBP,dword ptr [ESP + 0x14]      ; 00584f55
    PUSH EBP                            ; 00584f59
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00584f5a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00584f5f
    TEST EAX,EAX                        ; 00584f62
    JNZ 0x00584f42                      ; 00584f64
        ;   XREF to: 00584f42 (CONDITIONAL_JUMP)  ; LAB_00584f42
    POP EBP                             ; 00584f66
    POP EBX                             ; 00584f67
    RET                                 ; 00584f68

