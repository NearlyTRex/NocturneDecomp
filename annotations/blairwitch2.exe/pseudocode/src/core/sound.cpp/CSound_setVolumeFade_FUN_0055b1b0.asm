; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0055b1b0(CSound *this_ptr,float target_volume,float fade_time)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_time
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048b1cd
;
; Referenced Globals:
;   undefined4 DAT_0264badc
;   undefined4 DAT_0264bae0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b1b0
        ;   Label: core_sound.cpp_CSound_setVolumeFade_FUN_0055b1b0
    MOV [0x0264badc],EAX                ; 0055b1b4 | DAT_0264badc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b1b9
    MOV [0x0264bae0],EAX                ; 0055b1bd | DAT_0264bae0
    RET                                 ; 0055b1c2

