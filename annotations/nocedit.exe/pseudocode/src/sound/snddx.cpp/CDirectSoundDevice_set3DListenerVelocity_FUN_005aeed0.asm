; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0 (CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   x_velocity
; double           Stack[0x10]:8   y_velocity
; double           Stack[0x18]:8   z_velocity
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f6a9bc]      ; 005aeed0 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0
    TEST EDX,EDX                        ; 005aeed6
    JNZ 0x005aeedb                      ; 005aeed8
        ;   XREF to: 005aeedb (CONDITIONAL_JUMP)  ; LAB_005aeedb
    RET                                 ; 005aeeda
    PUSH 0x0                            ; 005aeedb
        ;   Label: LAB_005aeedb
    FLD double ptr [ESP + 0x1c]         ; 005aeedd
    MOV EAX,EDX                         ; 005aeee1
    SUB ESP,0x4                         ; 005aeee3
    MOV EDX,dword ptr [EDX]             ; 005aeee6
    FSTP float ptr [ESP]                ; 005aeee8
    FLD double ptr [ESP + 0x18]         ; 005aeeeb
    SUB ESP,0x4                         ; 005aeeef
    FSTP float ptr [ESP]                ; 005aeef2
    FLD double ptr [ESP + 0x14]         ; 005aeef5
    SUB ESP,0x4                         ; 005aeef9
    FSTP float ptr [ESP]                ; 005aeefc
    PUSH EAX                            ; 005aeeff
    CALL dword ptr [EDX + 0x40]         ; 005aef00
    RET                                 ; 005aef03

