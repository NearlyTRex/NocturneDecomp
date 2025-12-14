; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d4c90()
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_gabriela.cpp_FUN_004d2ea0 at 004d32e7
;   core_gabriela.cpp_FUN_004d4d80 at 004d4ea0
;
; Referenced Globals:
;   undefined4 g_CLightActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4c90
        ;   Label: core_gabriela.cpp_FUN_004d4c90
    SUB ESP,0x4                         ; 004d4c91
    MOV EDX,dword ptr [0x00822c84]      ; 004d4c94 | g_CLightActorClassInfo.name_hash
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d4c9a
    PUSH EDX                            ; 004d4c9e
    MOV ECX,dword ptr [EAX + 0x24b4]    ; 004d4c9f
    PUSH ECX                            ; 004d4ca5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d4ca6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d4cab
    TEST EAX,EAX                        ; 004d4cae
    JZ 0x004d4cd1                       ; 004d4cb0
        ;   XREF to: 004d4cd1 (CONDITIONAL_JUMP)  ; LAB_004d4cd1
    MOV EBX,dword ptr [EAX + 0x66c]     ; 004d4cb2
    CMP EBX,0x2                         ; 004d4cb8
    JZ 0x004d4cc2                       ; 004d4cbb
        ;   XREF to: 004d4cc2 (CONDITIONAL_JUMP)  ; LAB_004d4cc2
    CMP EBX,0x3                         ; 004d4cbd
    JNZ 0x004d4cd1                      ; 004d4cc0
        ;   XREF to: 004d4cd1 (CONDITIONAL_JUMP)  ; LAB_004d4cd1
    MOV dword ptr [ESP],0xbf860a92      ; 004d4cc2
        ;   Label: LAB_004d4cc2
    MOV EAX,dword ptr [ESP]             ; 004d4cc9
    ADD ESP,0x4                         ; 004d4ccc
    POP EBX                             ; 004d4ccf
    RET                                 ; 004d4cd0
    MOV dword ptr [ESP],0xbfc80fc6      ; 004d4cd1
        ;   Label: LAB_004d4cd1
    MOV EAX,dword ptr [ESP]             ; 004d4cd8
    ADD ESP,0x4                         ; 004d4cdb
    POP EBX                             ; 004d4cde
    RET                                 ; 004d4cdf

