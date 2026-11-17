; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00555c50(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   x_front
; float            Stack[0xc]:4   y_front
; float            Stack[0x10]:4   z_front
; float            Stack[0x14]:4   x_top
; float            Stack[0x18]:4   y_top
; float            Stack[0x1c]:4   z_top
; float            Stack[0x20]:4   x_right
; float            Stack[0x24]:4   y_right
; float            Stack[0x28]:4   z_right
;
; Referenced Globals:
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0264a5d0]      ; 00555c50 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00555c50
    TEST EDX,EDX                        ; 00555c56
    JNZ 0x00555c5b                      ; 00555c58
        ;   XREF to: 00555c5b (CONDITIONAL_JUMP)  ; LAB_00555c5b
    RET                                 ; 00555c5a
    PUSH 0x1                            ; 00555c5b
        ;   Label: LAB_00555c5b
    PUSH dword ptr [ESP + 0x20]         ; 00555c5d
    PUSH dword ptr [ESP + 0x20]         ; 00555c61
    PUSH dword ptr [ESP + 0x20]         ; 00555c65
    PUSH dword ptr [ESP + 0x38]         ; 00555c69
    MOV EAX,EDX                         ; 00555c6d
    PUSH dword ptr [ESP + 0x38]         ; 00555c6f
    MOV EDX,dword ptr [EDX]             ; 00555c73
    PUSH dword ptr [ESP + 0x38]         ; 00555c75
    PUSH EAX                            ; 00555c79
    CALL dword ptr [EDX + 0x34]         ; 00555c7a
    RET                                 ; 00555c7d

