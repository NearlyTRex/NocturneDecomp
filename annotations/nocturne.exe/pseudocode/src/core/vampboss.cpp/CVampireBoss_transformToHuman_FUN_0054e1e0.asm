; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054cd9f
;
; Referenced Globals:
;   TerminatedCString s_float_00597256
;   TerminatedCString s_voicuhuman_wav_0059725c
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e1e0
        ;   Label: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054e1e1
    PUSH 0x0                            ; 0054e1e5
    PUSH 0x597256                       ; 0054e1e7 | = "float"
    LEA EAX,[EBX + 0x150]               ; 0054e1ec
    PUSH EAX                            ; 0054e1f2
    MOV dword ptr [EBX + 0xbe168],0x3   ; 0054e1f3
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 0054e1fd
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0054e202
    PUSH 0x59725c                       ; 0054e205 | = "voicuhuman.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054e20a
    PUSH EBX                            ; 0054e210
    MOV dword ptr [EBX + 0xbedc4],0x0   ; 0054e211
    CALL dword ptr [EAX + 0x24]         ; 0054e21b
    ADD ESP,0x8                         ; 0054e21e
    POP EBX                             ; 0054e221
    RET                                 ; 0054e222

