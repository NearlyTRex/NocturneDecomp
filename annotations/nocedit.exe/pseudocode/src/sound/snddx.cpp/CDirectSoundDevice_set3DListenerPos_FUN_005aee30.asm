; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30(CDirectSoundDevice * this_ptr, double x, double y, double z)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   x
; double           Stack[0x10]:8   y
; double           Stack[0x18]:8   z
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

    MOV EDX,dword ptr [0x03f6a9bc]      ; 005aee30 | IDirectSound3DListener * g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
    TEST EDX,EDX                        ; 005aee36
    JNZ 0x005aee3b                      ; 005aee38 | LAB_005aee3b
        ;   XREF to: 005aee3b (CONDITIONAL_JUMP)
    RET                                 ; 005aee3a
    PUSH 0x0                            ; 005aee3b
        ;   Label: LAB_005aee3b
    FLD double ptr [ESP + 0x1c]         ; 005aee3d
    MOV EAX,EDX                         ; 005aee41
    SUB ESP,0x4                         ; 005aee43
    MOV EDX,dword ptr [EDX]             ; 005aee46
    FSTP float ptr [ESP]                ; 005aee48
    FLD double ptr [ESP + 0x18]         ; 005aee4b
    SUB ESP,0x4                         ; 005aee4f
    FSTP float ptr [ESP]                ; 005aee52
    FLD double ptr [ESP + 0x14]         ; 005aee55
    SUB ESP,0x4                         ; 005aee59
    FSTP float ptr [ESP]                ; 005aee5c
    PUSH EAX                            ; 005aee5f
    CALL dword ptr [EDX + 0x38]         ; 005aee60
    RET                                 ; 005aee63

