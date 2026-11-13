; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_00453c60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bcc84
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453c60
        ;   Label: core_doc.cpp_FUN_00453c60
    SUB ESP,0x4                         ; 00453c61
    MOV EDX,dword ptr [0x007bcc84]      ; 00453c64 | DAT_007bcc84
    MOV EAX,dword ptr [ESP + 0xc]       ; 00453c6a
    PUSH EDX                            ; 00453c6e
    MOV ECX,dword ptr [EAX + 0x2620]    ; 00453c6f
    PUSH ECX                            ; 00453c75
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00453c76
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00453c7b
    TEST EAX,EAX                        ; 00453c7e
    JZ 0x00453ca1                       ; 00453c80
        ;   XREF to: 00453ca1 (CONDITIONAL_JUMP)  ; LAB_00453ca1
    MOV EBX,dword ptr [EAX + 0x7d4]     ; 00453c82
    CMP EBX,0x2                         ; 00453c88
    JZ 0x00453c92                       ; 00453c8b
        ;   XREF to: 00453c92 (CONDITIONAL_JUMP)  ; LAB_00453c92
    CMP EBX,0x3                         ; 00453c8d
    JNZ 0x00453ca1                      ; 00453c90
        ;   XREF to: 00453ca1 (CONDITIONAL_JUMP)  ; LAB_00453ca1
    MOV dword ptr [ESP],0xbf860a92      ; 00453c92
        ;   Label: LAB_00453c92
    MOV EAX,dword ptr [ESP]             ; 00453c99
    ADD ESP,0x4                         ; 00453c9c
    POP EBX                             ; 00453c9f
    RET                                 ; 00453ca0
    MOV dword ptr [ESP],0xbfc80fc6      ; 00453ca1
        ;   Label: LAB_00453ca1
    MOV EAX,dword ptr [ESP]             ; 00453ca8
    ADD ESP,0x4                         ; 00453cab
    POP EBX                             ; 00453cae
    RET                                 ; 00453caf

