; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0(CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity)
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
;   undefined4 DAT_02dc9220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc9220]      ; 0052aaf0 | DAT_02dc9220
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0
    TEST EDX,EDX                        ; 0052aaf6
    JNZ 0x0052aafb                      ; 0052aaf8
        ;   XREF to: 0052aafb (CONDITIONAL_JUMP)  ; LAB_0052aafb
    RET                                 ; 0052aafa
    PUSH 0x0                            ; 0052aafb
        ;   Label: LAB_0052aafb
    FLD double ptr [ESP + 0x1c]         ; 0052aafd
    MOV EAX,EDX                         ; 0052ab01
    SUB ESP,0x4                         ; 0052ab03
    MOV EDX,dword ptr [EDX]             ; 0052ab06
    FSTP float ptr [ESP]                ; 0052ab08
    FLD double ptr [ESP + 0x18]         ; 0052ab0b
    SUB ESP,0x4                         ; 0052ab0f
    FSTP float ptr [ESP]                ; 0052ab12
    FLD double ptr [ESP + 0x14]         ; 0052ab15
    SUB ESP,0x4                         ; 0052ab19
    FSTP float ptr [ESP]                ; 0052ab1c
    PUSH EAX                            ; 0052ab1f
    CALL dword ptr [EDX + 0x40]         ; 0052ab20
    RET                                 ; 0052ab23

