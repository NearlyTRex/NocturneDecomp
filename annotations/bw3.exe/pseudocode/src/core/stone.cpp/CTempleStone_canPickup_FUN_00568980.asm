; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00568980(CTempleStone *this_ptr,CDemonActor *picker)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   undefined4 g_CActorDestinationClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568980
        ;   Label: core_stone.cpp_CTempleStone_canPickup_FUN_00568980
    PUSH EBP                            ; 00568981
    MOV EBX,dword ptr [ESP + 0xc]       ; 00568982
    MOV EDX,dword ptr [0x01548bfc]      ; 00568986 | g_CActorDestinationClassInfo.name_hash
    PUSH EDX                            ; 0056898c
    MOV ECX,dword ptr [EBX + 0x6e8]     ; 0056898d
    PUSH ECX                            ; 00568993
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00568994
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00568999
    TEST EAX,EAX                        ; 0056899c
    JZ 0x005689a9                       ; 0056899e
        ;   XREF to: 005689a9 (CONDITIONAL_JUMP)  ; LAB_005689a9
    CMP dword ptr [EAX + 0x184],0x0     ; 005689a0
    JNZ 0x005689bb                      ; 005689a7
        ;   XREF to: 005689bb (CONDITIONAL_JUMP)  ; LAB_005689bb
    CMP dword ptr [EBX + 0x314],0x3     ; 005689a9
        ;   Label: LAB_005689a9
    JNZ 0x005689c0                      ; 005689b0
        ;   XREF to: 005689c0 (CONDITIONAL_JUMP)  ; LAB_005689c0
    MOV EAX,dword ptr [EBX + 0x314]     ; 005689b2
        ;   Label: LAB_005689b2
    POP EBP                             ; 005689b8
    POP EBX                             ; 005689b9
    RET                                 ; 005689ba
    XOR EAX,EAX                         ; 005689bb
        ;   Label: LAB_005689bb
    POP EBP                             ; 005689bd
    POP EBX                             ; 005689be
    RET                                 ; 005689bf
    PUSH 0x5d5cbf                       ; 005689c0
        ;   Label: LAB_005689c0
    MOV EBP,dword ptr [ESP + 0x14]      ; 005689c5
    PUSH EBP                            ; 005689c9
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 005689ca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005689cf
    TEST EAX,EAX                        ; 005689d2
    JNZ 0x005689b2                      ; 005689d4
        ;   XREF to: 005689b2 (CONDITIONAL_JUMP)  ; LAB_005689b2
    POP EBP                             ; 005689d6
    POP EBX                             ; 005689d7
    RET                                 ; 005689d8

