; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_FUN_004e9f20(CHaystack *this_ptr,float delta_time)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
;
; XREF[1]:
;   core_haystack.cpp_FUN_004e9250 at 004e92dc
;
; Referenced Globals:
;   undefined1* switchdataD_004e9ef8 = 004e9f54
;   TerminatedCString s_box_swing_wav_005e4587
;   TerminatedCString s_box_punch_wav_005e4596
;   undefined4 DAT_01d06a0c
;   undefined4 DAT_01d06a10
;
; Called Functions:
;   core_actor.cpp_FUN_0040cd00
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_haystack.cpp_FUN_004ea060
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   sound_sndmain.cpp_FUN_00574010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9f20
        ;   Label: core_haystack.cpp_FUN_004e9f20
    PUSH ESI                            ; 004e9f21
    PUSH EDI                            ; 004e9f22
    PUSH EBP                            ; 004e9f23
    MOV EBP,ESP                         ; 004e9f24
    AND ESP,0xfffffff8                  ; 004e9f26
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e9f29
    LEA ESI,[EBX + 0x158]               ; 004e9f2c
    LEA EAX,[EBP + 0x18]                ; 004e9f32
        ;   Label: LAB_004e9f32
    PUSH EAX                            ; 004e9f35
    PUSH ESI                            ; 004e9f36
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004e9f37
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    MOV EDX,EAX                         ; 004e9f3c
    SUB EAX,0x65                        ; 004e9f3e
    ADD ESP,0x8                         ; 004e9f41
    CMP EAX,0x7                         ; 004e9f44
    JA 0x004ea043                       ; 004e9f47
        ;   XREF to: 004ea043 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e9ef8]  ; 004e9f4d | caseD_65 | caseD_66 | caseD_6b
        ;   Label: switchD
    MOV EDI,dword ptr [0x01d06a0c]      ; 004e9f54 | DAT_01d06a0c
        ;   Label: caseD_65
    PUSH EDI                            ; 004e9f5a
    PUSH EBX                            ; 004e9f5b
    CALL core_haystack.cpp_FUN_004ea060 ; 004e9f5c
        ;   XREF to: 004ea060 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_FUN_004ea060(CHaystack * this_ptr, int bone_index)
    MOV EDX,dword ptr [EBX + 0x1ffb0]   ; 004e9f61
    ADD ESP,0x8                         ; 004e9f67
    TEST EDX,EDX                        ; 004e9f6a
    SETZ AL                             ; 004e9f6c
        ;   Label: LAB_004e9f6c
    AND EAX,0xff                        ; 004e9f6f
    MOV dword ptr [EBX + 0x1ffb0],EAX   ; 004e9f74
    FLD float ptr [EBP + 0x18]          ; 004e9f7a
        ;   Label: LAB_004e9f7a
    FLDZ                                ; 004e9f7d
    FCOMPP                              ; 004e9f7f
    FNSTSW AX                           ; 004e9f81
    SAHF                                ; 004e9f83
    JC 0x004e9f32                       ; 004e9f84
        ;   XREF to: 004e9f32 (CONDITIONAL_JUMP)  ; LAB_004e9f32
    MOV ESP,EBP                         ; 004e9f86
    POP EBP                             ; 004e9f88
    POP EDI                             ; 004e9f89
    POP ESI                             ; 004e9f8a
    POP EBX                             ; 004e9f8b
    RET                                 ; 004e9f8c
    MOV EDX,dword ptr [0x01d06a10]      ; 004e9f8d | DAT_01d06a10
        ;   Label: caseD_66
    PUSH EDX                            ; 004e9f93
    PUSH EBX                            ; 004e9f94
    CALL core_haystack.cpp_FUN_004ea060 ; 004e9f95
        ;   XREF to: 004ea060 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_FUN_004ea060(CHaystack * this_ptr, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1ffb0]   ; 004e9f9a
    ADD ESP,0x8                         ; 004e9fa0
    TEST ECX,ECX                        ; 004e9fa3
    JMP 0x004e9f6c                      ; 004e9fa5
        ;   XREF to: 004e9f6c (UNCONDITIONAL_JUMP)  ; LAB_004e9f6c
    PUSH 0x42200000                     ; 004e9fa7
        ;   Label: caseD_67
    SUB ESP,0x8                         ; 004e9fac
    FLD float ptr [EBX + 0x28]          ; 004e9faf
    FSTP double ptr [ESP]               ; 004e9fb2
    SUB ESP,0x8                         ; 004e9fb5
    FLD float ptr [EBX + 0x24]          ; 004e9fb8
    FSTP double ptr [ESP]               ; 004e9fbb
    SUB ESP,0x8                         ; 004e9fbe
    FLD float ptr [EBX + 0x20]          ; 004e9fc1
    FSTP double ptr [ESP]               ; 004e9fc4
    CALL sound_sndmain.cpp_FUN_00574010 ; 004e9fc7
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00574010()
    ADD ESP,0x1c                        ; 004e9fcc
    TEST EAX,EAX                        ; 004e9fcf
    JZ 0x004e9f7a                       ; 004e9fd1
        ;   XREF to: 004e9f7a (CONDITIONAL_JUMP)  ; LAB_004e9f7a
    PUSH 0x5e4587                       ; 004e9fd3 | = "box-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e9fd8
    PUSH EBX                            ; 004e9fde
    CALL dword ptr [EAX + 0x2c]         ; 004e9fdf
    ADD ESP,0x8                         ; 004e9fe2
    JMP 0x004e9f7a                      ; 004e9fe5
        ;   XREF to: 004e9f7a (UNCONDITIONAL_JUMP)  ; LAB_004e9f7a
    PUSH 0x42200000                     ; 004e9fe7
        ;   Label: caseD_68
    SUB ESP,0x8                         ; 004e9fec
    FLD float ptr [EBX + 0x28]          ; 004e9fef
    FSTP double ptr [ESP]               ; 004e9ff2
    SUB ESP,0x8                         ; 004e9ff5
    FLD float ptr [EBX + 0x24]          ; 004e9ff8
    FSTP double ptr [ESP]               ; 004e9ffb
    SUB ESP,0x8                         ; 004e9ffe
    FLD float ptr [EBX + 0x20]          ; 004ea001
    FSTP double ptr [ESP]               ; 004ea004
    CALL sound_sndmain.cpp_FUN_00574010 ; 004ea007
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00574010()
    ADD ESP,0x1c                        ; 004ea00c
    TEST EAX,EAX                        ; 004ea00f
    JZ 0x004e9f7a                       ; 004ea011
        ;   XREF to: 004e9f7a (CONDITIONAL_JUMP)  ; LAB_004e9f7a
    PUSH 0x3ecccccd                     ; 004ea017
    CALL core_actor.cpp_FUN_0040cd00    ; 004ea01c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004ea021
    TEST EAX,EAX                        ; 004ea024
    JZ 0x004e9f7a                       ; 004ea026
        ;   XREF to: 004e9f7a (CONDITIONAL_JUMP)  ; LAB_004e9f7a
    PUSH 0x5e4596                       ; 004ea02c | = "box-punch?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ea031
    PUSH EBX                            ; 004ea037
    CALL dword ptr [EAX + 0x2c]         ; 004ea038
    ADD ESP,0x8                         ; 004ea03b
    JMP 0x004e9f7a                      ; 004ea03e
        ;   XREF to: 004e9f7a (UNCONDITIONAL_JUMP)  ; LAB_004e9f7a
    PUSH EDX                            ; 004ea043
        ;   Label: default
    PUSH EBX                            ; 004ea044
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004ea045
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004ea04a
    JMP 0x004e9f7a                      ; 004ea04d
        ;   XREF to: 004e9f7a (UNCONDITIONAL_JUMP)  ; LAB_004e9f7a

