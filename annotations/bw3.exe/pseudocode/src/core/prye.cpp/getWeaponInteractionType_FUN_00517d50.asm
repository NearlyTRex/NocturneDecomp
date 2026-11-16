; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_prye_cpp_getWeaponInteractionType_FUN_00517d50(CWeapon *weapon)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   weapon
;
; Referenced Globals:
;   undefined4 g_CHolycrossClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517d50
        ;   Label: core_prye.cpp_getWeaponInteractionType_FUN_00517d50
    PUSH ESI                            ; 00517d51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00517d52
    TEST EBX,EBX                        ; 00517d56
    JZ 0x00517d74                       ; 00517d58
        ;   XREF to: 00517d74 (CONDITIONAL_JUMP)  ; LAB_00517d74
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00517d5a
    CMP EAX,0x8                         ; 00517d60
    JA 0x00517db2                       ; 00517d63
        ;   XREF to: 00517db2 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x517d20]  ; 00517d65 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV EAX,0x1                         ; 00517d6c
        ;   Label: caseD_0
    POP ESI                             ; 00517d71
        ;   Label: LAB_00517d71
    POP EBX                             ; 00517d72
    RET                                 ; 00517d73
    XOR EAX,EAX                         ; 00517d74
        ;   Label: LAB_00517d74
    POP ESI                             ; 00517d76
    POP EBX                             ; 00517d77
    RET                                 ; 00517d78
    MOV EDX,dword ptr [0x01d72c08]      ; 00517d79 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH EDX                            ; 00517d7f
    PUSH EBX                            ; 00517d80
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00517d81
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00517d86
    TEST EAX,EAX                        ; 00517d89
    JZ 0x00517d9e                       ; 00517d8b
        ;   XREF to: 00517d9e (CONDITIONAL_JUMP)  ; LAB_00517d9e
    CMP dword ptr [EAX + 0x5a4],0x0     ; 00517d8d
    JZ 0x00517d9e                       ; 00517d94
        ;   XREF to: 00517d9e (CONDITIONAL_JUMP)  ; LAB_00517d9e
    MOV EAX,0x3                         ; 00517d96
    POP ESI                             ; 00517d9b
    POP EBX                             ; 00517d9c
    RET                                 ; 00517d9d
    MOV ESI,dword ptr [0x01d5bae8]      ; 00517d9e | g_CHolycrossClassInfo.name_hash
        ;   Label: LAB_00517d9e
    PUSH ESI                            ; 00517da4
    PUSH EBX                            ; 00517da5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00517da6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00517dab
    TEST EAX,EAX                        ; 00517dae
    JZ 0x00517d71                       ; 00517db0
        ;   XREF to: 00517d71 (CONDITIONAL_JUMP)  ; LAB_00517d71
    MOV EAX,0x3                         ; 00517db2
        ;   Label: caseD_1
    POP ESI                             ; 00517db7
    POP EBX                             ; 00517db8
    RET                                 ; 00517db9

