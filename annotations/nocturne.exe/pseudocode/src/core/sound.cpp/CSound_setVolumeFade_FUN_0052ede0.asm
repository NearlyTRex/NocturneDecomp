; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_time
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b4d5
;
; Referenced Globals:
;   undefined4 DAT_02dc9c9c
;   undefined4 DAT_02dc9ca0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ede0
        ;   Label: core_sound.cpp_CSound_setVolumeFade_FUN_0052ede0
    MOV [0x02dc9c9c],EAX                ; 0052ede4 | DAT_02dc9c9c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ede9
    MOV [0x02dc9ca0],EAX                ; 0052eded | DAT_02dc9ca0
    RET                                 ; 0052edf2

