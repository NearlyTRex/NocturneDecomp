; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_0046c980(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_007c5330
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c980
        ;   Label: core_doc.cpp_FUN_0046c980
    SUB ESP,0x4                         ; 0046c981
    MOV EDX,dword ptr [0x007c5330]      ; 0046c984 | DAT_007c5330
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c98a
    PUSH EDX                            ; 0046c98e
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0046c98f
    PUSH ECX                            ; 0046c995
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0046c996
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0046c99b
    TEST EAX,EAX                        ; 0046c99e
    JZ 0x0046c9c1                       ; 0046c9a0
        ;   XREF to: 0046c9c1 (CONDITIONAL_JUMP)  ; LAB_0046c9c1
    MOV EBX,dword ptr [EAX + 0x678]     ; 0046c9a2
    CMP EBX,0x2                         ; 0046c9a8
    JZ 0x0046c9b2                       ; 0046c9ab
        ;   XREF to: 0046c9b2 (CONDITIONAL_JUMP)  ; LAB_0046c9b2
    CMP EBX,0x3                         ; 0046c9ad
    JNZ 0x0046c9c1                      ; 0046c9b0
        ;   XREF to: 0046c9c1 (CONDITIONAL_JUMP)  ; LAB_0046c9c1
    MOV dword ptr [ESP],0xbf860a92      ; 0046c9b2
        ;   Label: LAB_0046c9b2
    MOV EAX,dword ptr [ESP]             ; 0046c9b9
    ADD ESP,0x4                         ; 0046c9bc
    POP EBX                             ; 0046c9bf
    RET                                 ; 0046c9c0
    MOV dword ptr [ESP],0xbfc80fc6      ; 0046c9c1
        ;   Label: LAB_0046c9c1
    MOV EAX,dword ptr [ESP]             ; 0046c9c8
    ADD ESP,0x4                         ; 0046c9cb
    POP EBX                             ; 0046c9ce
    RET                                 ; 0046c9cf

