; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_getWeaponInteractionType_FUN_0044fec0(CWeapon *weapon)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   weapon
;
; Referenced Globals:
;   undefined4 g_CMeleeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044fec0
        ;   Label: core_doc.cpp_getWeaponInteractionType_FUN_0044fec0
    TEST EDX,EDX                        ; 0044fec4
    JZ 0x0044fee0                       ; 0044fec6
        ;   XREF to: 0044fee0 (CONDITIONAL_JUMP)  ; LAB_0044fee0
    MOV EAX,dword ptr [EDX + 0x43c]     ; 0044fec8
    CMP EAX,0xd                         ; 0044fece
    JA 0x0044ff06                       ; 0044fed1
        ;   XREF to: 0044ff06 (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x44fe80]  ; 0044fed3 | caseD_c | caseD_b | caseD_d
        ;   Label: switchD
    MOV EAX,0x1                         ; 0044feda
        ;   Label: caseD_0
    RET                                 ; 0044fedf
    XOR EAX,EAX                         ; 0044fee0
        ;   Label: LAB_0044fee0
    RET                                 ; 0044fee2
    MOV ECX,dword ptr [0x01d0557c]      ; 0044fee3 | g_CMeleeClassInfo.name_hash
        ;   Label: caseD_6
    PUSH ECX                            ; 0044fee9
    PUSH EDX                            ; 0044feea
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0044feeb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0044fef0
    TEST EAX,EAX                        ; 0044fef3
    JZ 0x0044fee0                       ; 0044fef5
        ;   XREF to: 0044fee0 (CONDITIONAL_JUMP)  ; LAB_0044fee0
    CMP dword ptr [EAX + 0x6e4],0x0     ; 0044fef7
    JZ 0x0044fee0                       ; 0044fefe
        ;   XREF to: 0044fee0 (CONDITIONAL_JUMP)  ; LAB_0044fee0
    MOV EAX,0x5                         ; 0044ff00
    RET                                 ; 0044ff05
    MOV EAX,0x3                         ; 0044ff06
        ;   Label: caseD_1
    RET                                 ; 0044ff0b

