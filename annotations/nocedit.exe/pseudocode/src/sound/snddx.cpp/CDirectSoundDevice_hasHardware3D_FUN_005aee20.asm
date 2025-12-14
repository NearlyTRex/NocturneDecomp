; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20(CDirectSoundDevice * this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6a9bc],0x0      ; 005aee20 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20
    SETNZ AL                            ; 005aee27
    AND EAX,0xff                        ; 005aee2a
    RET                                 ; 005aee2f

