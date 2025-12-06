; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d * velocity_source_ptr)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   velocity_source_ptr
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[44]
;   undefined4 g_SfxLastSlot.field_20[48]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8a30 | int g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30
    SHL EAX,0x4                         ; 005a8a35
    MOV EDX,EAX                         ; 005a8a38
    SHL EAX,0x3                         ; 005a8a3a
    SUB EAX,EDX                         ; 005a8a3d
    MOV dword ptr [EAX + 0x3f624e8],0x2 ; 005a8a3f | g_SfxLastSlot.field_20[48]
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8a49
    MOV dword ptr [EAX + 0x3f624e4],EDX ; 005a8a4d | g_SfxLastSlot.field_20[44]
    RET                                 ; 005a8a53

