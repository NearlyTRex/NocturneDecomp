; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_00555c80(CDirectSoundDevice *this_ptr,float x_velocity,float y_velocity,float z_velocity)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   x_velocity
; float            Stack[0xc]:4   y_velocity
; float            Stack[0x10]:4   z_velocity
;
; Referenced Globals:
;   IDirectSound3DListener* g_IDirectSound3DListener_PTR_0264a5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264a5d0]      ; 00555c80 | g_IDirectSound3DListener_PTR_0264a5d0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_00555c80
    TEST EDX,EDX                        ; 00555c86
    JNZ 0x00555c8b                      ; 00555c88
        ;   XREF to: 00555c8b (CONDITIONAL_JUMP)  ; LAB_00555c8b
    RET                                 ; 00555c8a
    PUSH 0x1                            ; 00555c8b
        ;   Label: LAB_00555c8b
    PUSH dword ptr [ESP + 0x14]         ; 00555c8d
    MOV EAX,EDX                         ; 00555c91
    PUSH dword ptr [ESP + 0x14]         ; 00555c93
    MOV EDX,dword ptr [EDX]             ; 00555c97
    PUSH dword ptr [ESP + 0x14]         ; 00555c99
    PUSH EAX                            ; 00555c9d
    CALL dword ptr [EDX + 0x40]         ; 00555c9e
    RET                                 ; 00555ca1

