; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   string s_cow?.wav_0057b412
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c5e0
        ;   Label: core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0
    PUSH ESI                            ; 0043c5e1
    PUSH EDI                            ; 0043c5e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043c5e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0043c5e7
    PUSH EDI                            ; 0043c5eb
    PUSH EBX                            ; 0043c5ec
    CALL core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360 ; 0043c5ed
        ;   XREF to: 0043c360 (UNCONDITIONAL_CALL)  ; undefined core_cow.cpp_CZombieCow_processDismemberment_FUN_0043c360()
    FLD float ptr [EDI + 0x4]           ; 0043c5f2
    ADD ESP,0x8                         ; 0043c5f5
    FSUBR float ptr [EBX + 0x2434]      ; 0043c5f8
    LEA ESI,[EBX + 0x150]               ; 0043c5fe
    FST float ptr [EBX + 0x2434]        ; 0043c604
    FLDZ                                ; 0043c60a
    FCOMPP                              ; 0043c60c
    FNSTSW AX                           ; 0043c60e
    SAHF                                ; 0043c610
    JNC 0x0043c648                      ; 0043c611
        ;   XREF to: 0043c648 (CONDITIONAL_JUMP)  ; LAB_0043c648
    PUSH 0x1                            ; 0043c613
    PUSH 0x3                            ; 0043c615
    PUSH ESI                            ; 0043c617
        ;   Label: LAB_0043c617
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043c618
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043c61d
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 0043c620
        ;   Label: LAB_0043c620
    PUSH EDX                            ; 0043c626
    MOV ECX,dword ptr [0x005bed68]      ; 0043c627 | DAT_005bed68
    PUSH ECX                            ; 0043c62d
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 0043c62e
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0()
    ADD ESP,0x8                         ; 0043c633
    TEST EAX,EAX                        ; 0043c636
    JZ 0x0043c66e                       ; 0043c638
        ;   XREF to: 0043c66e (CONDITIONAL_JUMP)  ; LAB_0043c66e
    PUSH EDI                            ; 0043c63a
    PUSH EBX                            ; 0043c63b
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0043c63c
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0043c641
    POP EDI                             ; 0043c644
    POP ESI                             ; 0043c645
    POP EBX                             ; 0043c646
    RET                                 ; 0043c647
    PUSH ESI                            ; 0043c648
        ;   Label: LAB_0043c648
    MOV dword ptr [EBX + 0x2434],0x0    ; 0043c649
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043c653
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043c658
    ADD ESP,0x4                         ; 0043c65b
    CMP EAX,0x5                         ; 0043c65e
    JZ 0x0043c620                       ; 0043c661
        ;   XREF to: 0043c620 (CONDITIONAL_JUMP)  ; LAB_0043c620
    CMP EAX,0x4                         ; 0043c663
    JZ 0x0043c620                       ; 0043c666
        ;   XREF to: 0043c620 (CONDITIONAL_JUMP)  ; LAB_0043c620
    PUSH 0x1                            ; 0043c668
    PUSH 0x4                            ; 0043c66a
    JMP 0x0043c617                      ; 0043c66c
        ;   XREF to: 0043c617 (UNCONDITIONAL_JUMP)  ; LAB_0043c617
    PUSH 0x57b412                       ; 0043c66e | = "cow?.wav"
        ;   Label: LAB_0043c66e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043c673
    PUSH EBX                            ; 0043c679
    CALL dword ptr [EAX + 0x24]         ; 0043c67a
    ADD ESP,0x8                         ; 0043c67d
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 0043c680
    PUSH EDI                            ; 0043c686
    PUSH EBX                            ; 0043c687
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0043c688
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0043c68d
    POP EDI                             ; 0043c690
    POP ESI                             ; 0043c691
    POP EBX                             ; 0043c692
    RET                                 ; 0043c693

