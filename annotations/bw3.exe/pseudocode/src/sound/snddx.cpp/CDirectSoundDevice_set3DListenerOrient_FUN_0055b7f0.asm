; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0055b7f0(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)
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

    MOV EDX,dword ptr [0x02cf49d0]      ; 0055b7f0 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0055b7f0
    TEST EDX,EDX                        ; 0055b7f6
    JNZ 0x0055b7fb                      ; 0055b7f8
        ;   XREF to: 0055b7fb (CONDITIONAL_JUMP)  ; LAB_0055b7fb
    RET                                 ; 0055b7fa
    PUSH 0x1                            ; 0055b7fb
        ;   Label: LAB_0055b7fb
    PUSH dword ptr [ESP + 0x20]         ; 0055b7fd
    PUSH dword ptr [ESP + 0x20]         ; 0055b801
    PUSH dword ptr [ESP + 0x20]         ; 0055b805
    PUSH dword ptr [ESP + 0x38]         ; 0055b809
    MOV EAX,EDX                         ; 0055b80d
    PUSH dword ptr [ESP + 0x38]         ; 0055b80f
    MOV EDX,dword ptr [EDX]             ; 0055b813
    PUSH dword ptr [ESP + 0x38]         ; 0055b815
    PUSH EAX                            ; 0055b819
    CALL dword ptr [EDX + 0x34]         ; 0055b81a
    RET                                 ; 0055b81d

