; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(double pos_x,double pos_y,double pos_z)
;
; Parameters:
; double           Stack[0x4]:8   pos_x
; double           Stack[0xc]:8   pos_y
; double           Stack[0x14]:8   pos_z
;
; XREF[6]:
;   core_fire.cpp_CFireball_onCollision_FUN_004c1690 at 004c1729
;   core_manpuz.cpp_FUN_0050a4f0 at 0050a5d7
;   core_setedit.cpp_CDemonSet_FUN_00580730 at 0058111a
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b26dd
;   sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580 at 005a95b1
;   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 at 005ad467
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.volume
;   undefined4 g_SfxLastSlot.position
;   undefined4 g_SfxLastSlot.loop_count
;   undefined4 g_SfxLastSlot.field_20[0]
;   undefined4 g_SfxLastSlot.field_20[4]
;   undefined4 g_SfxLastSlot.field_20[8]
;   undefined4 g_SfxLastSlot.field_20[12]
;   undefined4 g_SfxLastSlot.field_20[16]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a88e0 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
    SHL EAX,0x4                         ; 005a88e5
    MOV EDX,EAX                         ; 005a88e8
    SHL EAX,0x3                         ; 005a88ea
    SUB EAX,EDX                         ; 005a88ed
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a88ef
    MOV dword ptr [EAX + 0x3f624ac],EDX ; 005a88f3 | g_SfxLastSlot.volume
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a88f9
    MOV dword ptr [EAX + 0x3f624b0],EDX ; 005a88fd | g_SfxLastSlot.position
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8903
    MOV dword ptr [EAX + 0x3f624b4],EDX ; 005a8907 | g_SfxLastSlot.loop_count
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a890d
    MOV dword ptr [EAX + 0x3f624b8],EDX ; 005a8911 | g_SfxLastSlot.field_20[0]
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a8917
    MOV dword ptr [EAX + 0x3f624bc],EDX ; 005a891b | g_SfxLastSlot.field_20[4]
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a8921
    MOV dword ptr [EAX + 0x3f624c0],EDX ; 005a8925 | g_SfxLastSlot.field_20[8]
    XOR EDX,EDX                         ; 005a892b
    MOV dword ptr [EAX + 0x3f624c4],EDX ; 005a892d | g_SfxLastSlot.field_20[12]
    MOV dword ptr [EAX + 0x3f624c8],EDX ; 005a8933 | g_SfxLastSlot.field_20[16]
    RET                                 ; 005a8939

