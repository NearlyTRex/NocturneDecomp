; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00555d50(float vel_x,float vel_y,float vel_z)
;
; Parameters:
; float            Stack[0x4]:4   vel_x
; float            Stack[0x8]:4   vel_y
; float            Stack[0xc]:4   vel_z
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555d50 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00555d50
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555d56
    SUB EAX,EDX                         ; 00555d5d
    SHL EAX,0x5                         ; 00555d5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555d62
    MOV dword ptr [EAX + 0x2ceb944],EDX ; 00555d66
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555d6c
    MOV dword ptr [EAX + 0x2ceb948],EDX ; 00555d70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555d76
    MOV dword ptr [EAX + 0x2ceb94c],EDX ; 00555d7a
    XOR EDX,EDX                         ; 00555d80
    MOV dword ptr [EAX + 0x2ceb950],EDX ; 00555d82
    MOV dword ptr [EAX + 0x2ceb954],EDX ; 00555d88
    RET                                 ; 00555d8e

