; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428260
        ;   Label: core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260
    SUB ESP,0xc                         ; 00428261
    MOV EBX,dword ptr [ESP + 0x14]      ; 00428264
    MOV EDX,dword ptr [ESP + 0x18]      ; 00428268
    PUSH EDX                            ; 0042826c
    LEA EAX,[ESP + 0x4]                 ; 0042826d
    PUSH EAX                            ; 00428271
    PUSH EBX                            ; 00428272
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00428273
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 00428278
    MOV EDX,ESP                         ; 0042827b
    PUSH dword ptr [ESP + 0x1c]         ; 0042827d
    PUSH EDX                            ; 00428281
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428282
    PUSH EBX                            ; 00428288
    CALL dword ptr [EAX + 0xa4]         ; 00428289
    ADD ESP,0xc                         ; 0042828f
    TEST EAX,EAX                        ; 00428292
    JNZ 0x004282a8                      ; 00428294
        ;   XREF to: 004282a8 (CONDITIONAL_JUMP)  ; LAB_004282a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 00428296
    MOV dword ptr [EAX + 0x4],0x0       ; 0042829a
    XOR EAX,EAX                         ; 004282a1
    ADD ESP,0xc                         ; 004282a3
    POP EBX                             ; 004282a6
    RET                                 ; 004282a7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004282a8
        ;   Label: LAB_004282a8
    PUSH ECX                            ; 004282ac
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004282ad
    PUSH EBX                            ; 004282b3
    CALL dword ptr [EAX + 0x100]        ; 004282b4
    MOV EAX,0x1                         ; 004282ba
    ADD ESP,0x8                         ; 004282bf
    ADD ESP,0xc                         ; 004282c2
    POP EBX                             ; 004282c5
    RET                                 ; 004282c6

