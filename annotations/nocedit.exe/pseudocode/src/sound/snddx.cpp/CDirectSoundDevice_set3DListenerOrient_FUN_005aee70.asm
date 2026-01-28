; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70 (CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top, double y_top,double z_top)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   x_front
; double           Stack[0x10]:8   y_front
; double           Stack[0x18]:8   z_front
; double           Stack[0x20]:8   x_top
; double           Stack[0x28]:8   y_top
; double           Stack[0x30]:8   z_top
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   IDirectSound3DListener* g_DirectSound3DListener
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f6a9bc]      ; 005aee70 | g_DirectSound3DListener
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70
    TEST EDX,EDX                        ; 005aee76
    JNZ 0x005aee7b                      ; 005aee78
        ;   XREF to: 005aee7b (CONDITIONAL_JUMP)  ; LAB_005aee7b
    RET                                 ; 005aee7a
    PUSH 0x0                            ; 005aee7b
        ;   Label: LAB_005aee7b
    FLD double ptr [ESP + 0x34]         ; 005aee7d
    MOV EAX,EDX                         ; 005aee81
    SUB ESP,0x4                         ; 005aee83
    MOV EDX,dword ptr [EDX]             ; 005aee86
    FSTP float ptr [ESP]                ; 005aee88
    FLD double ptr [ESP + 0x30]         ; 005aee8b
    SUB ESP,0x4                         ; 005aee8f
    FSTP float ptr [ESP]                ; 005aee92
    FLD double ptr [ESP + 0x2c]         ; 005aee95
    SUB ESP,0x4                         ; 005aee99
    FSTP float ptr [ESP]                ; 005aee9c
    FLD double ptr [ESP + 0x58]         ; 005aee9f
    SUB ESP,0x4                         ; 005aeea3
    FSTP float ptr [ESP]                ; 005aeea6
    FLD double ptr [ESP + 0x54]         ; 005aeea9
    SUB ESP,0x4                         ; 005aeead
    FSTP float ptr [ESP]                ; 005aeeb0
    FLD double ptr [ESP + 0x50]         ; 005aeeb3
    SUB ESP,0x4                         ; 005aeeb7
    FSTP float ptr [ESP]                ; 005aeeba
    PUSH EAX                            ; 005aeebd
    CALL dword ptr [EDX + 0x34]         ; 005aeebe
    RET                                 ; 005aeec1

