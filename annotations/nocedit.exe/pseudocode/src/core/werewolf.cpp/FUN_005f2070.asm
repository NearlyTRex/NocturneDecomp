; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_werewolf_cpp_FUN_005f2070(void)
;
;
; XREF[1]:
;   core_werewolf.cpp_CWerewolf_FUN_005f20d0 at 005f210b
;
; Referenced Globals:
;   undefined4 g_CWerewolfClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2070
        ;   Label: core_werewolf.cpp_FUN_005f2070
    MOV EDX,dword ptr [0x03f96b94]      ; 005f2071 | g_CWerewolfClassInfo.name_hash
    PUSH EDX                            ; 005f2077
    MOV ECX,dword ptr [ESP + 0xc]       ; 005f2078
    PUSH ECX                            ; 005f207c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f207d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,dword ptr [EAX + 0xbebc]    ; 005f2082
    ADD ESP,0x8                         ; 005f2088
    TEST EBX,EBX                        ; 005f208b
    JZ 0x005f20a5                       ; 005f208d
        ;   XREF to: 005f20a5 (CONDITIONAL_JUMP)  ; LAB_005f20a5
    CMP EBX,0x1                         ; 005f208f
    JNZ 0x005f20b1                      ; 005f2092
        ;   XREF to: 005f20b1 (CONDITIONAL_JUMP)  ; LAB_005f20b1
    MOV dword ptr [EAX + 0xbebc],0x2    ; 005f2094
    MOV EAX,0x1                         ; 005f209e
        ;   Label: LAB_005f209e
    POP EBX                             ; 005f20a3
    RET                                 ; 005f20a4
    MOV dword ptr [EAX + 0xbebc],0x1    ; 005f20a5
        ;   Label: LAB_005f20a5
    JMP 0x005f209e                      ; 005f20af
        ;   XREF to: 005f209e (UNCONDITIONAL_JUMP)  ; LAB_005f209e
    MOV dword ptr [EAX + 0xbebc],0x0    ; 005f20b1
        ;   Label: LAB_005f20b1
    MOV EAX,0x1                         ; 005f20bb
    POP EBX                             ; 005f20c0
    RET                                 ; 005f20c1

