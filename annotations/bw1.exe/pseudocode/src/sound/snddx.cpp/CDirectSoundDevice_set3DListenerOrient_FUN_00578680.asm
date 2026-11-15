; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00578680(CDirectSoundDevice *this_ptr,float x_front,float y_front,float z_front,float x_top,float y_top,float z_top,float x_right,float y_right,float z_right)
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
;   undefined4 DAT_02c81da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c81da0]      ; 00578680 | DAT_02c81da0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_00578680
    TEST EDX,EDX                        ; 00578686
    JNZ 0x0057868b                      ; 00578688
        ;   XREF to: 0057868b (CONDITIONAL_JUMP)  ; LAB_0057868b
    RET                                 ; 0057868a
    PUSH 0x1                            ; 0057868b
        ;   Label: LAB_0057868b
    PUSH dword ptr [ESP + 0x20]         ; 0057868d
    PUSH dword ptr [ESP + 0x20]         ; 00578691
    PUSH dword ptr [ESP + 0x20]         ; 00578695
    PUSH dword ptr [ESP + 0x38]         ; 00578699
    MOV EAX,EDX                         ; 0057869d
    PUSH dword ptr [ESP + 0x38]         ; 0057869f
    MOV EDX,dword ptr [EDX]             ; 005786a3
    PUSH dword ptr [ESP + 0x38]         ; 005786a5
    PUSH EAX                            ; 005786a9
    CALL dword ptr [EDX + 0x34]         ; 005786aa
    RET                                 ; 005786ad

