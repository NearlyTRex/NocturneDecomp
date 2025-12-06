; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0()
;
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e607f
;
; Referenced Globals:
;   TerminatedCString s_float_00656cec
;   TerminatedCString s_voicuhuman_wav_00656cf2
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e74c0
        ;   Label: core_vampboss.cpp_SomethingVoicuHumanWav_FUN_005e74c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e74c1
    PUSH 0x0                            ; 005e74c5
    PUSH 0x656cec                       ; 005e74c7 | = "float" | s_float_00656cec = float
    LEA EAX,[EBX + 0x158]               ; 005e74cc
    PUSH EAX                            ; 005e74d2
    MOV dword ptr [EBX + 0xcdcc0],0x3   ; 005e74d3
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 005e74dd | void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e74e2
    PUSH 0x656cf2                       ; 005e74e5 | = "voicuhuman.wav" | s_voicuhuman_wav_00656cf2 = voicuhuman.wav
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e74ea
    PUSH EBX                            ; 005e74f0
    MOV dword ptr [EBX + 0xce91c],0x0   ; 005e74f1
    CALL dword ptr [EAX + 0x24]         ; 005e74fb
    ADD ESP,0x8                         ; 005e74fe
    POP EBX                             ; 005e7501
    RET                                 ; 005e7502

