; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(CHaystack *this_ptr,float delta_time)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[1]:
;   core_haystack.cpp_FUN_004b32d0 at 004b336d
;
; Referenced Globals:
;   undefined1* switchdataD_004b3dd4 = 004b3e34
;   TerminatedCString s_box_swing_wav_0058560d
;   TerminatedCString s_box_punch_wav_0058561c
;   undefined4 DAT_01cae04c
;   undefined4 DAT_01cae050
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3e00
        ;   Label: core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00
    PUSH ESI                            ; 004b3e01
    PUSH EDI                            ; 004b3e02
    PUSH EBP                            ; 004b3e03
    MOV EBP,ESP                         ; 004b3e04
    AND ESP,0xfffffff8                  ; 004b3e06
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b3e09
    LEA ESI,[EBX + 0x150]               ; 004b3e0c
    LEA EAX,[EBP + 0x18]                ; 004b3e12
        ;   Label: LAB_004b3e12
    PUSH EAX                            ; 004b3e15
    PUSH ESI                            ; 004b3e16
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004b3e17
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004b3e1c
    SUB EAX,0x65                        ; 004b3e1e
    ADD ESP,0x8                         ; 004b3e21
    CMP EAX,0x7                         ; 004b3e24
    JA 0x004b3f27                       ; 004b3e27
        ;   XREF to: 004b3f27 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b3dd4]  ; 004b3e2d | caseD_65 | caseD_66 | caseD_6b
        ;   Label: switchD
    MOV EDI,dword ptr [0x01cae04c]      ; 004b3e34 | DAT_01cae04c
        ;   Label: caseD_65
    PUSH EDI                            ; 004b3e3a
    PUSH EBX                            ; 004b3e3b
    CALL core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40 ; 004b3e3c
        ;   XREF to: 004b3f40 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack * this_ptr, int bone_index)
    MOV EDX,dword ptr [EBX + 0x1fa40]   ; 004b3e41
    ADD ESP,0x8                         ; 004b3e47
    TEST EDX,EDX                        ; 004b3e4a
    SETZ AL                             ; 004b3e4c
        ;   Label: LAB_004b3e4c
    AND EAX,0xff                        ; 004b3e4f
    MOV dword ptr [EBX + 0x1fa40],EAX   ; 004b3e54
    FLD float ptr [EBP + 0x18]          ; 004b3e5a
        ;   Label: LAB_004b3e5a
    FLDZ                                ; 004b3e5d
    FCOMPP                              ; 004b3e5f
    FNSTSW AX                           ; 004b3e61
    SAHF                                ; 004b3e63
    JC 0x004b3e12                       ; 004b3e64
        ;   XREF to: 004b3e12 (CONDITIONAL_JUMP)  ; LAB_004b3e12
    MOV ESP,EBP                         ; 004b3e66
    POP EBP                             ; 004b3e68
    POP EDI                             ; 004b3e69
    POP ESI                             ; 004b3e6a
    POP EBX                             ; 004b3e6b
    RET                                 ; 004b3e6c
    MOV EDX,dword ptr [0x01cae050]      ; 004b3e6d | DAT_01cae050
        ;   Label: caseD_66
    PUSH EDX                            ; 004b3e73
    PUSH EBX                            ; 004b3e74
    CALL core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40 ; 004b3e75
        ;   XREF to: 004b3f40 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack * this_ptr, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1fa40]   ; 004b3e7a
    ADD ESP,0x8                         ; 004b3e80
    TEST ECX,ECX                        ; 004b3e83
    JMP 0x004b3e4c                      ; 004b3e85
        ;   XREF to: 004b3e4c (UNCONDITIONAL_JUMP)  ; LAB_004b3e4c
    PUSH 0x40440000                     ; 004b3e87
        ;   Label: caseD_67
    PUSH 0x0                            ; 004b3e8c
    SUB ESP,0x8                         ; 004b3e8e
    FLD float ptr [EBX + 0x28]          ; 004b3e91
    FSTP double ptr [ESP]               ; 004b3e94
    SUB ESP,0x8                         ; 004b3e97
    FLD float ptr [EBX + 0x24]          ; 004b3e9a
    FSTP double ptr [ESP]               ; 004b3e9d
    SUB ESP,0x8                         ; 004b3ea0
    FLD float ptr [EBX + 0x20]          ; 004b3ea3
    FSTP double ptr [ESP]               ; 004b3ea6
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 004b3ea9
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 004b3eae
    TEST EAX,EAX                        ; 004b3eb1
    JZ 0x004b3e5a                       ; 004b3eb3
        ;   XREF to: 004b3e5a (CONDITIONAL_JUMP)  ; LAB_004b3e5a
    PUSH 0x58560d                       ; 004b3eb5 | = "box-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b3eba
    PUSH EBX                            ; 004b3ec0
    CALL dword ptr [EAX + 0x24]         ; 004b3ec1
    ADD ESP,0x8                         ; 004b3ec4
    JMP 0x004b3e5a                      ; 004b3ec7
        ;   XREF to: 004b3e5a (UNCONDITIONAL_JUMP)  ; LAB_004b3e5a
    PUSH 0x40440000                     ; 004b3ec9
        ;   Label: caseD_68
    PUSH 0x0                            ; 004b3ece
    SUB ESP,0x8                         ; 004b3ed0
    FLD float ptr [EBX + 0x28]          ; 004b3ed3
    FSTP double ptr [ESP]               ; 004b3ed6
    SUB ESP,0x8                         ; 004b3ed9
    FLD float ptr [EBX + 0x24]          ; 004b3edc
    FSTP double ptr [ESP]               ; 004b3edf
    SUB ESP,0x8                         ; 004b3ee2
    FLD float ptr [EBX + 0x20]          ; 004b3ee5
    FSTP double ptr [ESP]               ; 004b3ee8
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 004b3eeb
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 004b3ef0
    TEST EAX,EAX                        ; 004b3ef3
    JZ 0x004b3e5a                       ; 004b3ef5
        ;   XREF to: 004b3e5a (CONDITIONAL_JUMP)  ; LAB_004b3e5a
    PUSH 0x3ecccccd                     ; 004b3efb
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004b3f00
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004b3f05
    TEST EAX,EAX                        ; 004b3f08
    JZ 0x004b3e5a                       ; 004b3f0a
        ;   XREF to: 004b3e5a (CONDITIONAL_JUMP)  ; LAB_004b3e5a
    PUSH 0x58561c                       ; 004b3f10 | = "box-punch?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b3f15
    PUSH EBX                            ; 004b3f1b
    CALL dword ptr [EAX + 0x24]         ; 004b3f1c
    ADD ESP,0x8                         ; 004b3f1f
    JMP 0x004b3e5a                      ; 004b3f22
        ;   XREF to: 004b3e5a (UNCONDITIONAL_JUMP)  ; LAB_004b3e5a
    PUSH EDX                            ; 004b3f27
        ;   Label: default
    PUSH EBX                            ; 004b3f28
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004b3f29
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004b3f2e
    JMP 0x004b3e5a                      ; 004b3f31
        ;   XREF to: 004b3e5a (UNCONDITIONAL_JUMP)  ; LAB_004b3e5a

