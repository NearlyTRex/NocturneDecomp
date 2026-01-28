; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_stone_cpp_FUN_005bad70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00653164
;   undefined4 g_CActorDestinationClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bad70
        ;   Label: core_stone.cpp_FUN_005bad70
    PUSH EBP                            ; 005bad71
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bad72
    MOV EDX,dword ptr [0x020a4874]      ; 005bad76 | g_CActorDestinationClassInfo.name_hash
    PUSH EDX                            ; 005bad7c
    MOV ECX,dword ptr [EBX + 0x66c]     ; 005bad7d
    PUSH ECX                            ; 005bad83
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005bad84
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005bad89
    TEST EAX,EAX                        ; 005bad8c
    JZ 0x005bad99                       ; 005bad8e
        ;   XREF to: 005bad99 (CONDITIONAL_JUMP)  ; LAB_005bad99
    CMP dword ptr [EAX + 0x184],0x0     ; 005bad90
    JNZ 0x005badab                      ; 005bad97
        ;   XREF to: 005badab (CONDITIONAL_JUMP)  ; LAB_005badab
    CMP dword ptr [EBX + 0x314],0x3     ; 005bad99
        ;   Label: LAB_005bad99
    JNZ 0x005badb0                      ; 005bada0
        ;   XREF to: 005badb0 (CONDITIONAL_JUMP)  ; LAB_005badb0
    MOV EAX,dword ptr [EBX + 0x314]     ; 005bada2
        ;   Label: LAB_005bada2
    POP EBP                             ; 005bada8
    POP EBX                             ; 005bada9
    RET                                 ; 005badaa
    XOR EAX,EAX                         ; 005badab
        ;   Label: LAB_005badab
    POP EBP                             ; 005badad
    POP EBX                             ; 005badae
    RET                                 ; 005badaf
    PUSH 0x653164                       ; 005badb0 | = "CHero"
        ;   Label: LAB_005badb0
    MOV EBP,dword ptr [ESP + 0x14]      ; 005badb5
    PUSH EBP                            ; 005badb9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005badba
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005badbf
    TEST EAX,EAX                        ; 005badc2
    JNZ 0x005bada2                      ; 005badc4
        ;   XREF to: 005bada2 (CONDITIONAL_JUMP)  ; LAB_005bada2
    POP EBP                             ; 005badc6
    POP EBX                             ; 005badc7
    RET                                 ; 005badc8

