; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042ff70(CDemonActor *param_1)
;
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 at 00430fd9
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 at 00489c79
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c9400 at 004c965a
;
; Referenced Globals:
;   TerminatedCString s_glass_1_wav_2_0_005b8388
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_enemy.cpp_FUN_00489c90
;   core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0054f7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ff70
        ;   Label: core_charactr.cpp_FUN_0042ff70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042ff71
    PUSH 0x5b8388                       ; 0042ff75 | = "glass-1.wav@2.0"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ff7a
    PUSH EBX                            ; 0042ff80
    CALL dword ptr [EAX + 0x2c]         ; 0042ff81
    LEA EDX,[EBX + 0x158]               ; 0042ff84
    LEA EAX,[EBX + 0x24a8]              ; 0042ff8a
    MOV CL,byte ptr [EAX]               ; 0042ff90
    ADD ESP,0x8                         ; 0042ff92
    TEST CL,CL                          ; 0042ff95
    JZ 0x0042ffac                       ; 0042ff97
        ;   XREF to: 0042ffac (CONDITIONAL_JUMP)  ; LAB_0042ffac
    PUSH 0x0                            ; 0042ff99
    LEA EAX,[EBX + 0x30]                ; 0042ff9b
    PUSH EAX                            ; 0042ff9e
    LEA EAX,[EBX + 0x20]                ; 0042ff9f
    PUSH EAX                            ; 0042ffa2
    PUSH EDX                            ; 0042ffa3
    CALL core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0054f7f0 ; 0042ffa4
        ;   XREF to: 0054f7f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0054f7f0(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)
    ADD ESP,0x10                        ; 0042ffa9
    MOV EDX,dword ptr [0x01c5bc48]      ; 0042ffac | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_0042ffac
    PUSH EDX                            ; 0042ffb2
    PUSH EBX                            ; 0042ffb3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0042ffb4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042ffb9
    TEST EAX,EAX                        ; 0042ffbc
    JNZ 0x0042ffc9                      ; 0042ffbe
        ;   XREF to: 0042ffc9 (CONDITIONAL_JUMP)  ; LAB_0042ffc9
    MOV dword ptr [EBX + 0x70],0x2      ; 0042ffc0
    POP EBX                             ; 0042ffc7
    RET                                 ; 0042ffc8
    PUSH EAX                            ; 0042ffc9
        ;   Label: LAB_0042ffc9
    CALL core_enemy.cpp_FUN_00489c90    ; 0042ffca
        ;   XREF to: 00489c90 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489c90()
    ADD ESP,0x4                         ; 0042ffcf
    MOV dword ptr [EBX + 0x70],0x2      ; 0042ffd2
    POP EBX                             ; 0042ffd9
    RET                                 ; 0042ffda

