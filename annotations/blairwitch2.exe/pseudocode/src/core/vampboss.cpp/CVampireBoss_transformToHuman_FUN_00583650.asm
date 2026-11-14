; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_00583650(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 0058207f
;
; Referenced Globals:
;   TerminatedCString s_float_005edbbd
;   TerminatedCString s_voicuhuman_wav_005edbc3
;
; Called Functions:
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583650
        ;   Label: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_00583650
    MOV EBX,dword ptr [ESP + 0x8]       ; 00583651
    PUSH 0x0                            ; 00583655
    PUSH 0x5edbbd                       ; 00583657 | = "float"
    LEA EAX,[EBX + 0x2b4]               ; 0058365c
    PUSH EAX                            ; 00583662
    MOV dword ptr [EBX + 0xc2f3c],0x3   ; 00583663
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 0058366d
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00583672
    PUSH 0x5edbc3                       ; 00583675 | = "voicuhuman.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058367a
    PUSH EBX                            ; 00583680
    MOV dword ptr [EBX + 0xc3b98],0x0   ; 00583681
    CALL dword ptr [EAX + 0x34]         ; 0058368b
    ADD ESP,0x8                         ; 0058368e
    POP EBX                             ; 00583691
    RET                                 ; 00583692

