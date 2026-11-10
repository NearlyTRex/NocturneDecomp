; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a25f0(CDemonActor *param_1,float *param_2,CVector3f *param_3,CVector3f *param_4,undefined4 param_5)
;
;
; Referenced Globals:
;   TerminatedCString s_a_wood_wav_005c09c0
;   undefined4 DAT_006045f8
;   undefined4 DAT_01c8eea8
;   undefined4 DAT_01c8eeac
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_fire.cpp_CStake_init_FUN_00497a50
;   core_fire.cpp_CStake_spawn_FUN_00497ac0
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a25f0
        ;   Label: core_fire.cpp_FUN_004a25f0
    PUSH ESI                            ; 004a25f1
    PUSH EDI                            ; 004a25f2
    PUSH EBP                            ; 004a25f3
    SUB ESP,0x64                        ; 004a25f4
    MOV EBP,dword ptr [ESP + 0x7c]      ; 004a25f7
    MOV EAX,dword ptr [ESP + 0x88]      ; 004a25fb
    XOR EBX,EBX                         ; 004a2602
    CMP EAX,0xa                         ; 004a2604
    JA 0x004a2615                       ; 004a2607
        ;   XREF to: 004a2615 (CONDITIONAL_JUMP)  ; LAB_004a2615
    JMP dword ptr [EAX*0x4 + 0x4a25b8]  ; 004a2609
    MOV EDX,dword ptr [ESP + 0x80]      ; 004a2615
        ;   Label: LAB_004a2615
    PUSH EDX                            ; 004a261c
    LEA EAX,[ESP + 0x4]                 ; 004a261d
    PUSH EAX                            ; 004a2621
    MOV EDI,0x3f333333                  ; 004a2622
    LEA ESI,[ESP + 0x30]                ; 004a2627
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004a262b
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004a2630
    XOR ECX,ECX                         ; 004a2633
    LEA EAX,[ESP + 0x4c]                ; 004a2635
    MOV dword ptr [ESP + 0x4c],ECX      ; 004a2639
    PUSH EAX                            ; 004a263d
    LEA EAX,[ESP + 0x4]                 ; 004a263e
    MOV dword ptr [ESP + 0x54],ECX      ; 004a2642
    PUSH EAX                            ; 004a2646
    MOV dword ptr [ESP + 0x5c],EDI      ; 004a2647
    LEA EDI,[ESP + 0x48]                ; 004a264b
    CALL core_dirmat.cpp_FUN_0045b800   ; 004a264f
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x30]                ; 004a2654
    ADD ESP,0x8                         ; 004a2658
    MOVSD ES:EDI,ESI                    ; 004a265b
    MOVSD ES:EDI,ESI                    ; 004a265c
    MOVSD ES:EDI,ESI                    ; 004a265d
    FLD float ptr [EBP]                 ; 004a265e
    FLD float ptr [EBP + 0x4]           ; 004a2661
    FLD float ptr [EBP + 0x8]           ; 004a2664
    LEA EDI,[ESP + 0x58]                ; 004a2667
    LEA ESI,[ESP + 0x34]                ; 004a266b
    FXCH ST2                            ; 004a266f
    FSUB float ptr [ESP + 0x40]         ; 004a2671
    FXCH                                ; 004a2675
    FSUB float ptr [ESP + 0x44]         ; 004a2677
    FXCH ST2                            ; 004a267b
    FSUB float ptr [ESP + 0x48]         ; 004a267d
    FXCH                                ; 004a2681
    FSTP float ptr [ESP + 0x34]         ; 004a2683
    FXCH                                ; 004a2687
    FSTP float ptr [ESP + 0x38]         ; 004a2689
    FSTP float ptr [ESP + 0x3c]         ; 004a268d
    MOVSD ES:EDI,ESI                    ; 004a2691
    MOVSD ES:EDI,ESI                    ; 004a2692
    MOVSD ES:EDI,ESI                    ; 004a2693
    TEST EBX,EBX                        ; 004a2694
    JZ 0x004a270a                       ; 004a2696
        ;   XREF to: 004a270a (CONDITIONAL_JUMP)  ; LAB_004a270a
    MOV ECX,dword ptr [ESP + 0x84]      ; 004a2698
    PUSH ECX                            ; 004a269f
    MOV EBX,dword ptr [ESP + 0x84]      ; 004a26a0
    PUSH EBX                            ; 004a26a7
    LEA EAX,[ESP + 0x60]                ; 004a26a8
    MOV EDX,dword ptr [0x01c8eeac]      ; 004a26ac | DAT_01c8eeac
    PUSH EAX                            ; 004a26b2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a26b3
    ADD EAX,EDX                         ; 004a26ba
    SHL EAX,0x2                         ; 004a26bc
    SUB EAX,EDX                         ; 004a26bf
    SHL EAX,0x5                         ; 004a26c1
    ADD EAX,0x1c8eeb0                   ; 004a26c4
    PUSH EAX                            ; 004a26c9
    CALL core_fire.cpp_CStake_spawn_FUN_00497ac0 ; 004a26ca
        ;   XREF to: 00497ac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_spawn_FUN_00497ac0(CStake * this_ptr, CVector3f * spawn_position, CVector3f * orientation_angles, CVector3f * surface_normal)
    ADD ESP,0x10                        ; 004a26cf
    MOV ESI,dword ptr [0x01c8eeac]      ; 004a26d2 | DAT_01c8eeac
        ;   Label: LAB_004a26d2
    INC ESI                             ; 004a26d8
    MOV dword ptr [0x01c8eeac],ESI      ; 004a26d9 | DAT_01c8eeac
    CMP ESI,0x100                       ; 004a26df
    JL 0x004a26ef                       ; 004a26e5
        ;   XREF to: 004a26ef (CONDITIONAL_JUMP)  ; LAB_004a26ef
    XOR EBP,EBP                         ; 004a26e7
    MOV dword ptr [0x01c8eeac],EBP      ; 004a26e9 | DAT_01c8eeac
    MOV EAX,[0x01c8eea8]                ; 004a26ef | DAT_01c8eea8
        ;   Label: LAB_004a26ef
    CMP EAX,0x100                       ; 004a26f4
    JL 0x004a2766                       ; 004a26f9
        ;   XREF to: 004a2766 (CONDITIONAL_JUMP)  ; LAB_004a2766
    ADD ESP,0x64                        ; 004a26fb
        ;   Label: LAB_004a26fb
    POP EBP                             ; 004a26fe
    POP EDI                             ; 004a26ff
    POP ESI                             ; 004a2700
    POP EBX                             ; 004a2701
    RET                                 ; 004a2702
    LEA EAX,[ESP + 0x58]                ; 004a270a
        ;   Label: LAB_004a270a
    PUSH 0x3e6b851f                     ; 004a270e
    PUSH EAX                            ; 004a2713
    PUSH 0x5c09c0                       ; 004a2714 | = "a-wood?.wav"
    MOV EBP,dword ptr [ESP + 0x84]      ; 004a2719
    PUSH EBP                            ; 004a2720
    MOV EAX,[0x006045f8]                ; 004a2721 | DAT_006045f8
    PUSH EAX                            ; 004a2726
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004a2727
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004a272c
    MOV EDX,dword ptr [ESP + 0x80]      ; 004a272f
    PUSH EDX                            ; 004a2736
    LEA EAX,[ESP + 0x5c]                ; 004a2737
    MOV EDX,dword ptr [0x01c8eeac]      ; 004a273b | DAT_01c8eeac
    PUSH EAX                            ; 004a2741
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2742
    ADD EAX,EDX                         ; 004a2749
    SHL EAX,0x2                         ; 004a274b
    SUB EAX,EDX                         ; 004a274e
    SHL EAX,0x5                         ; 004a2750
    ADD EAX,0x1c8eeb0                   ; 004a2753
    PUSH EAX                            ; 004a2758
    CALL core_fire.cpp_CStake_init_FUN_00497a50 ; 004a2759
        ;   XREF to: 00497a50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_init_FUN_00497a50(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
    ADD ESP,0xc                         ; 004a275e
    JMP 0x004a26d2                      ; 004a2761
        ;   XREF to: 004a26d2 (UNCONDITIONAL_JUMP)  ; LAB_004a26d2
    LEA EDX,[EAX + 0x1]                 ; 004a2766
        ;   Label: LAB_004a2766
    MOV dword ptr [0x01c8eea8],EDX      ; 004a2769 | DAT_01c8eea8
    ADD ESP,0x64                        ; 004a276f
    POP EBP                             ; 004a2772
    POP EDI                             ; 004a2773
    POP ESI                             ; 004a2774
    POP EBX                             ; 004a2775
    RET                                 ; 004a2776

