; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00562490(CTempleStone *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   undefined4 g_CActorDestinationClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562490
        ;   Label: core_stone.cpp_CTempleStone_canPickup_FUN_00562490
    PUSH EBP                            ; 00562491
    MOV EBX,dword ptr [ESP + 0xc]       ; 00562492
    MOV EDX,dword ptr [0x01510e14]      ; 00562496 | g_CActorDestinationClassInfo.name_hash
    PUSH EDX                            ; 0056249c
    MOV ECX,dword ptr [EBX + 0x7d4]     ; 0056249d
    PUSH ECX                            ; 005624a3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005624a4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005624a9
    TEST EAX,EAX                        ; 005624ac
    JZ 0x005624b9                       ; 005624ae
        ;   XREF to: 005624b9 (CONDITIONAL_JUMP)  ; LAB_005624b9
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005624b0
    JNZ 0x005624cb                      ; 005624b7
        ;   XREF to: 005624cb (CONDITIONAL_JUMP)  ; LAB_005624cb
    CMP dword ptr [EBX + 0x470],0x3     ; 005624b9
        ;   Label: LAB_005624b9
    JNZ 0x005624d0                      ; 005624c0
        ;   XREF to: 005624d0 (CONDITIONAL_JUMP)  ; LAB_005624d0
    MOV EAX,dword ptr [EBX + 0x470]     ; 005624c2
        ;   Label: LAB_005624c2
    POP EBP                             ; 005624c8
    POP EBX                             ; 005624c9
    RET                                 ; 005624ca
    XOR EAX,EAX                         ; 005624cb
        ;   Label: LAB_005624cb
    POP EBP                             ; 005624cd
    POP EBX                             ; 005624ce
    RET                                 ; 005624cf
    PUSH 0x5eb18f                       ; 005624d0
        ;   Label: LAB_005624d0
    MOV EBP,dword ptr [ESP + 0x14]      ; 005624d5
    PUSH EBP                            ; 005624d9
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 005624da
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005624df
    TEST EAX,EAX                        ; 005624e2
    JNZ 0x005624c2                      ; 005624e4
        ;   XREF to: 005624c2 (CONDITIONAL_JUMP)  ; LAB_005624c2
    POP EBP                             ; 005624e6
    POP EBX                             ; 005624e7
    RET                                 ; 005624e8

