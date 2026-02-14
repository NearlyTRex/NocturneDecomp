; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   listener_orient_x
; float            Stack[0xc]:4   listener_orient_y
; float            Stack[0x10]:4   listener_orient_z
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 at 005b3cea
;
; Referenced Globals:
;   CVector3f g_SoundListenerOrient
;   undefined4 g_SoundListenerOrient.y
;   undefined4 g_SoundListenerOrient.z
;
; Called Functions:
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3c90
        ;   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_005b3c90
    MOV [0x03f6af88],EAX                ; 005b3c94 | g_SoundListenerOrient
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b3c99
    MOV [0x03f6af8c],EAX                ; 005b3c9d | g_SoundListenerOrient.y
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b3ca2
    PUSH EAX                            ; 005b3ca6
    PUSH dword ptr [ESP + 0x10]         ; 005b3ca7
    PUSH dword ptr [ESP + 0x10]         ; 005b3cab
    MOV [0x03f6af90],EAX                ; 005b3caf | g_SoundListenerOrient.z
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0 ; 005b3cb4
        ;   XREF to: 005ab6e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_005ab6e0(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 005b3cb9
    RET                                 ; 005b3cbc

