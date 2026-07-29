; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_02dc9220
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9220],0x0      ; 0052aa40 | DAT_02dc9220
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40
    SETNZ AL                            ; 0052aa47
    AND EAX,0xff                        ; 0052aa4a
    RET                                 ; 0052aa4f

