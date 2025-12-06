; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_gabriela.cpp_FUN_004d6d40 at 004d6dfb
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b32bc
;   core_sound.cpp_processTrainSounds_FUN_005b2770 at 005b27c6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574210
        ;   Label: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
    MOV dword ptr [EAX + 0x15f694],0xffffffff ; 00574214
    RET                                 ; 0057421e

