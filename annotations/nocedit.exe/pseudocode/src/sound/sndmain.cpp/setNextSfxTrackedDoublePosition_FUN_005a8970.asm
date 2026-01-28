; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(CVector3d *position_source_ptr)
;
; Parameters:
; CVector3d *      Stack[0x4]:4   position_source_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620 at 005a9635
;
; Referenced Globals:
;   int g_SfxLastSlot
;   undefined4 g_SfxLastSlot.field_20[12]
;   undefined4 g_SfxLastSlot.field_20[16]
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f624a4]                ; 005a8970 | g_SfxLastSlot
        ;   Label: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
    SHL EAX,0x4                         ; 005a8975
    MOV EDX,EAX                         ; 005a8978
    SHL EAX,0x3                         ; 005a897a
    SUB EAX,EDX                         ; 005a897d
    MOV dword ptr [EAX + 0x3f624c8],0x2 ; 005a897f | g_SfxLastSlot.field_20[16]
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8989
    MOV dword ptr [EAX + 0x3f624c4],EDX ; 005a898d | g_SfxLastSlot.field_20[12]
    RET                                 ; 005a8993

