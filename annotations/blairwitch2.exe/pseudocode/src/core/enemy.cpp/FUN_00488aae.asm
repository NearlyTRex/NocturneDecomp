; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_enemy_cpp_FUN_00488aae(undefined4 param_1)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00488aae
        ;   Label: core_enemy.cpp_FUN_00488aae
    PUSH EBX                            ; 00488ab0
    PUSH ESI                            ; 00488ab1
    PUSH EDI                            ; 00488ab2
    PUSH EBP                            ; 00488ab3
    SUB ESP,0x4                         ; 00488ab4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00488ab7
    PUSH EDX                            ; 00488abb
    XOR EDI,EDI                         ; 00488abc
    XOR ESI,ESI                         ; 00488abe
    CALL core_actor.cpp_FUN_00408a50    ; 00488ac0
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 00488ac5
    XOR EBP,EBP                         ; 00488ac8
    MOV dword ptr [ESP],EAX             ; 00488aca
    MOV EAX,[0x0061b5a8]                ; 00488acd | g_CDemonSetPtr
        ;   Label: LAB_00488acd
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 00488ad2
    JL 0x00488ae4                       ; 00488ad8
        ;   XREF to: 00488ae4 (CONDITIONAL_JUMP)  ; LAB_00488ae4
    MOV EAX,EBP                         ; 00488ada
    ADD ESP,0x4                         ; 00488adc
    POP EBP                             ; 00488adf
    POP EDI                             ; 00488ae0
    POP ESI                             ; 00488ae1
    POP EBX                             ; 00488ae2
    RET                                 ; 00488ae3
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 00488ae4
        ;   Label: LAB_00488ae4
    MOV EAX,dword ptr [ESP]             ; 00488aeb
    PUSH EAX                            ; 00488aee
    PUSH EBX                            ; 00488aef
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 00488af0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00488af5
    TEST EAX,EAX                        ; 00488af8
    JZ 0x00488b26                       ; 00488afa
        ;   XREF to: 00488b26 (CONDITIONAL_JUMP)  ; LAB_00488b26
    PUSH EBX                            ; 00488afc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00488afd
    CALL dword ptr [EAX + 0x114]        ; 00488b03
    ADD ESP,0x4                         ; 00488b09
    TEST EAX,EAX                        ; 00488b0c
    JNZ 0x00488b26                      ; 00488b0e
        ;   XREF to: 00488b26 (CONDITIONAL_JUMP)  ; LAB_00488b26
    MOV EDX,dword ptr [0x01cedef4]      ; 00488b10 | DAT_01cedef4
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00488b16
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 00488b1c
    JNZ 0x00488b26                      ; 00488b23
        ;   XREF to: 00488b26 (CONDITIONAL_JUMP)  ; LAB_00488b26
    INC EBP                             ; 00488b25
    INC EDI                             ; 00488b26
        ;   Label: LAB_00488b26
    ADD ESI,0x4                         ; 00488b27
    JMP 0x00488acd                      ; 00488b2a
        ;   XREF to: 00488acd (UNCONDITIONAL_JUMP)  ; LAB_00488acd

