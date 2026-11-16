; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_00468a90(CWeapon *weapon)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   weapon
;
; Referenced Globals:
;   undefined4 g_CMeleeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468a90
        ;   Label: core_doc.cpp_getWeaponInteractionType_FUN_00468a90
    TEST EDX,EDX                        ; 00468a94
    JZ 0x00468ab0                       ; 00468a96
        ;   XREF to: 00468ab0 (CONDITIONAL_JUMP)  ; LAB_00468ab0
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 00468a98
    CMP EAX,0x8                         ; 00468a9e
    JA 0x00468ad0                       ; 00468aa1
        ;   XREF to: 00468ad0 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x468a60]  ; 00468aa3 | caseD_5 | caseD_6 | caseD_8
        ;   Label: switchD
    MOV EAX,0x1                         ; 00468aaa
        ;   Label: caseD_0
    RET                                 ; 00468aaf
    XOR EAX,EAX                         ; 00468ab0
        ;   Label: LAB_00468ab0
    RET                                 ; 00468ab2
    MOV ECX,dword ptr [0x01d1e2dc]      ; 00468ab3 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_7
    PUSH ECX                            ; 00468ab9
    PUSH EDX                            ; 00468aba
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00468abb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00468ac0
    TEST EAX,EAX                        ; 00468ac3
    JZ 0x00468ab0                       ; 00468ac5
        ;   XREF to: 00468ab0 (CONDITIONAL_JUMP)  ; LAB_00468ab0
    CMP dword ptr [EAX + 0x588],0x0     ; 00468ac7
    JZ 0x00468ab0                       ; 00468ace
        ;   XREF to: 00468ab0 (CONDITIONAL_JUMP)  ; LAB_00468ab0
    MOV EAX,0x3                         ; 00468ad0
        ;   Label: caseD_1
    RET                                 ; 00468ad5

