; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10(CDirectSoundDevice * this_ptr, double distance_in_feet)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   distance_in_feet
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double g_DirectSoundFeetToMeters = 0.304800000000000
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f6a9bc]      ; 005aef10 | IDirectSound3DListener * g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
    TEST EDX,EDX                        ; 005aef16
    JNZ 0x005aef1b                      ; 005aef18 | LAB_005aef1b
        ;   XREF to: 005aef1b (CONDITIONAL_JUMP)
    RET                                 ; 005aef1a
    FLD double ptr [ESP + 0x8]          ; 005aef1b
        ;   Label: LAB_005aef1b
    FMUL double ptr [0x00651c04]        ; 005aef1f | double g_DirectSoundFeetToMeters
    PUSH 0x0                            ; 005aef25
    MOV EAX,EDX                         ; 005aef27
    SUB ESP,0x4                         ; 005aef29
    MOV EDX,dword ptr [EDX]             ; 005aef2c
    FSTP float ptr [ESP]                ; 005aef2e
    PUSH EAX                            ; 005aef31
    CALL dword ptr [EDX + 0x2c]         ; 005aef32
    RET                                 ; 005aef35

