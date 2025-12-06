; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x, double vel_y, double vel_z)
;
; Parameters:
; double           Stack[0x4]:8   vel_x
; double           Stack[0xc]:8   vel_y
; double           Stack[0x14]:8   vel_z
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxOptions[0].velocity.x
;   undefined4 g_SfxOptions[0].velocity.x+4
;   undefined4 g_SfxOptions[0].velocity.y
;   undefined4 g_SfxOptions[0].velocity.y+4
;   undefined4 g_SfxOptions[0].velocity.z
;   undefined4 g_SfxOptions[0].velocity.z+4
;   undefined4 g_SfxLastSlot.field_20[44]
;   undefined4 g_SfxLastSlot.field_20[48]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a89a0 | int g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0
    SHL EAX,0x4                         ; 005a89a5
    MOV EDX,EAX                         ; 005a89a8
    SHL EAX,0x3                         ; 005a89aa
    SUB EAX,EDX                         ; 005a89ad
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a89af
    MOV dword ptr [EAX + 0x3f624cc],EDX ; 005a89b3 | g_SfxOptions[0].velocity.x
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a89b9
    MOV dword ptr [EAX + 0x3f624d0],EDX ; 005a89bd | g_SfxOptions[0].velocity.x+4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a89c3
    MOV dword ptr [EAX + 0x3f624d4],EDX ; 005a89c7 | g_SfxOptions[0].velocity.y
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a89cd
    MOV dword ptr [EAX + 0x3f624d8],EDX ; 005a89d1 | g_SfxOptions[0].velocity.y+4
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a89d7
    MOV dword ptr [EAX + 0x3f624dc],EDX ; 005a89db | g_SfxOptions[0].velocity.z
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a89e1
    MOV dword ptr [EAX + 0x3f624e0],EDX ; 005a89e5 | g_SfxOptions[0].velocity.z+4
    XOR EDX,EDX                         ; 005a89eb
    MOV dword ptr [EAX + 0x3f624e4],EDX ; 005a89ed | g_SfxLastSlot.field_20[44]
    MOV dword ptr [EAX + 0x3f624e8],EDX ; 005a89f3 | g_SfxLastSlot.field_20[48]
    RET                                 ; 005a89f9

