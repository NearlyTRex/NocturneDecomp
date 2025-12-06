; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d5c10()
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d4890 at 004d4c4e
;
; Referenced Globals:
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5c10
        ;   Label: core_gabriela.cpp_FUN_004d5c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d5c11
    MOV EDX,dword ptr [EBX + 0x1fba0]   ; 004d5c15
    TEST EDX,EDX                        ; 004d5c1b
    JNZ 0x004d5c21                      ; 004d5c1d | LAB_004d5c21
        ;   XREF to: 004d5c21 (CONDITIONAL_JUMP)
    POP EBX                             ; 004d5c1f
    RET                                 ; 004d5c20
    MOV ECX,dword ptr [0x008223e0]      ; 004d5c21 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004d5c21
    PUSH ECX                            ; 004d5c27
    PUSH EDX                            ; 004d5c28
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d5c29 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d5c2e
    TEST EAX,EAX                        ; 004d5c31
    JZ 0x004d5c45                       ; 004d5c33 | LAB_004d5c45
        ;   XREF to: 004d5c45 (CONDITIONAL_JUMP)
    LEA EDX,[EBX + 0x1f738]             ; 004d5c35
    PUSH EDX                            ; 004d5c3b
    PUSH EAX                            ; 004d5c3c
    CALL core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 ; 004d5c3d | undefined core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700()
        ;   XREF to: 00411700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d5c42
    MOV dword ptr [EBX + 0x1fba0],0x0   ; 004d5c45
        ;   Label: LAB_004d5c45
    POP EBX                             ; 004d5c4f
    RET                                 ; 004d5c50

