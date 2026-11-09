; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_enemy_cpp_FUN_0048a12e(CDemonActor *param_1)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_actor.cpp_FUN_00408870
;   core_actor.cpp_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0048a12e
        ;   Label: core_enemy.cpp_FUN_0048a12e
    PUSH EBX                            ; 0048a130
    PUSH ESI                            ; 0048a131
    PUSH EDI                            ; 0048a132
    PUSH EBP                            ; 0048a133
    SUB ESP,0x4                         ; 0048a134
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048a137
    PUSH EDX                            ; 0048a13b
    XOR EDI,EDI                         ; 0048a13c
    XOR ESI,ESI                         ; 0048a13e
    CALL core_actor.cpp_FUN_00408870    ; 0048a140
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048a145
    XOR EBP,EBP                         ; 0048a148
    MOV dword ptr [ESP],EAX             ; 0048a14a
    MOV EAX,[0x00603b28]                ; 0048a14d | g_CDemonSetPtr
        ;   Label: LAB_0048a14d
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 0048a152
    JL 0x0048a164                       ; 0048a158
        ;   XREF to: 0048a164 (CONDITIONAL_JUMP)  ; LAB_0048a164
    MOV EAX,EBP                         ; 0048a15a
    ADD ESP,0x4                         ; 0048a15c
    POP EBP                             ; 0048a15f
    POP EDI                             ; 0048a160
    POP ESI                             ; 0048a161
    POP EBX                             ; 0048a162
    RET                                 ; 0048a163
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 0048a164
        ;   Label: LAB_0048a164
    MOV EAX,dword ptr [ESP]             ; 0048a16b
    PUSH EAX                            ; 0048a16e
    PUSH EBX                            ; 0048a16f
    CALL core_actor.cpp_FUN_0040c790    ; 0048a170
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0048a175
    TEST EAX,EAX                        ; 0048a178
    JZ 0x0048a1a6                       ; 0048a17a
        ;   XREF to: 0048a1a6 (CONDITIONAL_JUMP)  ; LAB_0048a1a6
    PUSH EBX                            ; 0048a17c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a17d
    CALL dword ptr [EAX + 0x10c]        ; 0048a183
    ADD ESP,0x4                         ; 0048a189
    TEST EAX,EAX                        ; 0048a18c
    JNZ 0x0048a1a6                      ; 0048a18e
        ;   XREF to: 0048a1a6 (CONDITIONAL_JUMP)  ; LAB_0048a1a6
    MOV EDX,dword ptr [0x01d5ba14]      ; 0048a190 | DAT_01d5ba14
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0048a196
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 0048a19c
    JNZ 0x0048a1a6                      ; 0048a1a3
        ;   XREF to: 0048a1a6 (CONDITIONAL_JUMP)  ; LAB_0048a1a6
    INC EBP                             ; 0048a1a5
    INC EDI                             ; 0048a1a6
        ;   Label: LAB_0048a1a6
    ADD ESI,0x4                         ; 0048a1a7
    JMP 0x0048a14d                      ; 0048a1aa
        ;   XREF to: 0048a14d (UNCONDITIONAL_JUMP)  ; LAB_0048a14d

