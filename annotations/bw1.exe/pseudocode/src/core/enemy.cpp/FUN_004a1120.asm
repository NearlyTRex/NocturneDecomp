; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_enemy_cpp_FUN_004a1120(void)
;
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1120
        ;   Label: core_enemy.cpp_FUN_004a1120
    PUSH ESI                            ; 004a1121
    PUSH EDI                            ; 004a1122
    PUSH EBP                            ; 004a1123
    SUB ESP,0x4                         ; 004a1124
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a1127
    PUSH EDX                            ; 004a112b
    XOR EDI,EDI                         ; 004a112c
    XOR ESI,ESI                         ; 004a112e
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004a1130
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a1135
    XOR EBP,EBP                         ; 004a1138
    MOV dword ptr [ESP],EAX             ; 004a113a
    MOV EAX,[0x00622c18]                ; 004a113d | g_CDemonSetPtr
        ;   Label: LAB_004a113d
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 004a1142
    JL 0x004a1154                       ; 004a1148
        ;   XREF to: 004a1154 (CONDITIONAL_JUMP)  ; LAB_004a1154
    MOV EAX,EBP                         ; 004a114a
    ADD ESP,0x4                         ; 004a114c
    POP EBP                             ; 004a114f
    POP EDI                             ; 004a1150
    POP ESI                             ; 004a1151
    POP EBX                             ; 004a1152
    RET                                 ; 004a1153
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 004a1154
        ;   Label: LAB_004a1154
    MOV EAX,dword ptr [ESP]             ; 004a115b
    PUSH EAX                            ; 004a115e
    PUSH EBX                            ; 004a115f
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004a1160
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004a1165
    TEST EAX,EAX                        ; 004a1168
    JZ 0x004a1196                       ; 004a116a
        ;   XREF to: 004a1196 (CONDITIONAL_JUMP)  ; LAB_004a1196
    PUSH EBX                            ; 004a116c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a116d
    CALL dword ptr [EAX + 0x10c]        ; 004a1173
    ADD ESP,0x4                         ; 004a1179
    TEST EAX,EAX                        ; 004a117c
    JNZ 0x004a1196                      ; 004a117e
        ;   XREF to: 004a1196 (CONDITIONAL_JUMP)  ; LAB_004a1196
    MOV EDX,dword ptr [0x01d06ab4]      ; 004a1180 | DAT_01d06ab4
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004a1186
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004a118c
    JNZ 0x004a1196                      ; 004a1193
        ;   XREF to: 004a1196 (CONDITIONAL_JUMP)  ; LAB_004a1196
    INC EBP                             ; 004a1195
    INC EDI                             ; 004a1196
        ;   Label: LAB_004a1196
    ADD ESI,0x4                         ; 004a1197
    JMP 0x004a113d                      ; 004a119a
        ;   XREF to: 004a113d (UNCONDITIONAL_JUMP)  ; LAB_004a113d

