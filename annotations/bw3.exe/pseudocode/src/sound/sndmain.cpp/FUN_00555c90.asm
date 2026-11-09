; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00555c90(double pos_x,double pos_y,double pos_z)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
;
; XREF[2]:
;   core_fire.cpp_FUN_00499eb0 at 00499f49
;   core_sound.cpp_FUN_0055f020 at 0055f5f8
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555c90 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_FUN_00555c90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555c96
    SUB EAX,EDX                         ; 00555c9d
    SHL EAX,0x5                         ; 00555c9f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555ca2
    MOV dword ptr [EAX + 0x2ceb924],EDX ; 00555ca6
    MOV EDX,dword ptr [ESP + 0x8]       ; 00555cac
    MOV dword ptr [EAX + 0x2ceb928],EDX ; 00555cb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555cb6
    MOV dword ptr [EAX + 0x2ceb92c],EDX ; 00555cba
    MOV EDX,dword ptr [ESP + 0x10]      ; 00555cc0
    MOV dword ptr [EAX + 0x2ceb930],EDX ; 00555cc4
    MOV EDX,dword ptr [ESP + 0x14]      ; 00555cca
    MOV dword ptr [EAX + 0x2ceb934],EDX ; 00555cce
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555cd4
    MOV dword ptr [EAX + 0x2ceb938],EDX ; 00555cd8
    XOR EDX,EDX                         ; 00555cde
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555ce0
    MOV dword ptr [EAX + 0x2ceb940],EDX ; 00555ce6
    RET                                 ; 00555cec

