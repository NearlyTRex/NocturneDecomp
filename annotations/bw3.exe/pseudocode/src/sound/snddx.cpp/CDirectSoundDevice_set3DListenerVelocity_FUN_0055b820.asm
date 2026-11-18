; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0055b820(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   x_velocity
; float            Stack[0xc]:4   y_velocity
; float            Stack[0x10]:4   z_velocity
;
; Referenced Globals:
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b820 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0055b820
    TEST EDX,EDX                        ; 0055b826
    JNZ 0x0055b82b                      ; 0055b828
        ;   XREF to: 0055b82b (CONDITIONAL_JUMP)  ; LAB_0055b82b
    RET                                 ; 0055b82a
    PUSH 0x1                            ; 0055b82b
        ;   Label: LAB_0055b82b
    PUSH dword ptr [ESP + 0x14]         ; 0055b82d
    MOV EAX,EDX                         ; 0055b831
    PUSH dword ptr [ESP + 0x14]         ; 0055b833
    MOV EDX,dword ptr [EDX]             ; 0055b837
    PUSH dword ptr [ESP + 0x14]         ; 0055b839
    PUSH EAX                            ; 0055b83d
    CALL dword ptr [EDX + 0x40]         ; 0055b83e
    RET                                 ; 0055b841

