; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005a7290(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005a5550 at 005a5cbf
;
; Referenced Globals:
;   TerminatedCString s_float_005f8f19
;   TerminatedCString s_voicuhuman_wav_005f8f1f
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7290
        ;   Label: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_005a7290
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a7291
    PUSH 0x0                            ; 005a7295
    PUSH 0x5f8f19                       ; 005a7297 | = "float"
    LEA EAX,[EBX + 0x158]               ; 005a729c
    PUSH EAX                            ; 005a72a2
    MOV dword ptr [EBX + 0xbe79c],0x3   ; 005a72a3
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 005a72ad
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005a72b2
    PUSH 0x5f8f1f                       ; 005a72b5 | = "voicuhuman.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a72ba
    PUSH EBX                            ; 005a72c0
    MOV dword ptr [EBX + 0xbf3f8],0x0   ; 005a72c1
    CALL dword ptr [EAX + 0x2c]         ; 005a72cb
    ADD ESP,0x8                         ; 005a72ce
    POP EBX                             ; 005a72d1
    RET                                 ; 005a72d2

