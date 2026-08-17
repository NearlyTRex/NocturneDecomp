; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00526020(double vel_x,double vel_y,double vel_z)
;
; Parameters:
; double           Stack[0x4]:8   vel_x
; double           Stack[0xc]:8   vel_y
; double           Stack[0x14]:8   vel_z
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526020 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00526020
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526026
    SUB EAX,EDX                         ; 0052602d
    SHL EAX,0x2                         ; 0052602f
    MOV EDX,EAX                         ; 00526032
    SHL EAX,0x3                         ; 00526034
    ADD EAX,EDX                         ; 00526037
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526039
    MOV dword ptr [EAX + 0x2dc1b9c],EDX ; 0052603d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526043
    MOV dword ptr [EAX + 0x2dc1ba0],EDX ; 00526047
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052604d
    MOV dword ptr [EAX + 0x2dc1ba4],EDX ; 00526051
    MOV EDX,dword ptr [ESP + 0x10]      ; 00526057
    MOV dword ptr [EAX + 0x2dc1ba8],EDX ; 0052605b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00526061
    MOV dword ptr [EAX + 0x2dc1bac],EDX ; 00526065
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052606b
    MOV dword ptr [EAX + 0x2dc1bb0],EDX ; 0052606f
    XOR EDX,EDX                         ; 00526075
    MOV dword ptr [EAX + 0x2dc1bb4],EDX ; 00526077
    MOV dword ptr [EAX + 0x2dc1bb8],EDX ; 0052607d
    RET                                 ; 00526083

