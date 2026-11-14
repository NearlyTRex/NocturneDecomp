; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0055b080(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   listener_orient_x
; float            Stack[0xc]:4   listener_orient_y
; float            Stack[0x10]:4   listener_orient_z
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_0055b0b0 at 0055b0da
;
; Referenced Globals:
;   undefined4 DAT_0264b2b4
;   undefined4 DAT_0264b2b8
;   undefined4 DAT_0264b2bc
;
; Called Functions:
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b080
        ;   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0055b080
    MOV [0x0264b2b4],EAX                ; 0055b084 | DAT_0264b2b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b089
    MOV [0x0264b2b8],EAX                ; 0055b08d | DAT_0264b2b8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055b092
    PUSH EAX                            ; 0055b096
    PUSH dword ptr [ESP + 0x10]         ; 0055b097
    PUSH dword ptr [ESP + 0x10]         ; 0055b09b
    MOV [0x0264b2bc],EAX                ; 0055b09f | DAT_0264b2bc
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0 ; 0055b0a4
        ;   XREF to: 00552cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 0055b0a9
    RET                                 ; 0055b0ac

