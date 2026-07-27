; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_enemy_cpp_FUN_0047a150(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01fa7e78
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a150
        ;   Label: core_enemy.cpp_FUN_0047a150
    PUSH ESI                            ; 0047a151
    PUSH EDI                            ; 0047a152
    PUSH EBP                            ; 0047a153
    SUB ESP,0x4                         ; 0047a154
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047a157
    PUSH EDX                            ; 0047a15b
    XOR EDI,EDI                         ; 0047a15c
    XOR ESI,ESI                         ; 0047a15e
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 0047a160
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 0047a165
    XOR EBP,EBP                         ; 0047a168
    MOV dword ptr [ESP],EAX             ; 0047a16a
    MOV EAX,[0x005be368]                ; 0047a16d | DAT_005be368
        ;   Label: LAB_0047a16d
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 0047a172 | DAT_01fa7e78
    JL 0x0047a184                       ; 0047a178
        ;   XREF to: 0047a184 (CONDITIONAL_JUMP)  ; LAB_0047a184
    MOV EAX,EBP                         ; 0047a17a
    ADD ESP,0x4                         ; 0047a17c
    POP EBP                             ; 0047a17f
    POP EDI                             ; 0047a180
    POP ESI                             ; 0047a181
    POP EBX                             ; 0047a182
    RET                                 ; 0047a183
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 0047a184
        ;   Label: LAB_0047a184
    MOV EAX,dword ptr [ESP]             ; 0047a18b
    PUSH EAX                            ; 0047a18e
    PUSH EBX                            ; 0047a18f
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0047a190
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0047a195
    TEST EAX,EAX                        ; 0047a198
    JZ 0x0047a1c6                       ; 0047a19a
        ;   XREF to: 0047a1c6 (CONDITIONAL_JUMP)  ; LAB_0047a1c6
    PUSH EBX                            ; 0047a19c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0047a19d
    CALL dword ptr [EAX + 0x104]        ; 0047a1a3
    ADD ESP,0x4                         ; 0047a1a9
    TEST EAX,EAX                        ; 0047a1ac
    JNZ 0x0047a1c6                      ; 0047a1ae
        ;   XREF to: 0047a1c6 (CONDITIONAL_JUMP)  ; LAB_0047a1c6
    MOV EDX,dword ptr [0x01cae0e8]      ; 0047a1b0 | DAT_01cae0e8
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0047a1b6
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0047a1bc
    JNZ 0x0047a1c6                      ; 0047a1c3
        ;   XREF to: 0047a1c6 (CONDITIONAL_JUMP)  ; LAB_0047a1c6
    INC EBP                             ; 0047a1c5
    INC EDI                             ; 0047a1c6
        ;   Label: LAB_0047a1c6
    ADD ESI,0x4                         ; 0047a1c7
    JMP 0x0047a16d                      ; 0047a1ca
        ;   XREF to: 0047a16d (UNCONDITIONAL_JUMP)  ; LAB_0047a16d

