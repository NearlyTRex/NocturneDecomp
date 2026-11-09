; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_00560d30(CSound *this_ptr,float target_volume,float fade_time)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   target_volume
; float            Stack[0xc]:4   fade_time
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048ded5
;
; Referenced Globals:
;   undefined4 DAT_02cf5ecc
;   undefined4 DAT_02cf5ed0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00560d30
        ;   Label: core_sound.cpp_CSound_setVolumeFade_FUN_00560d30
    MOV [0x02cf5ecc],EAX                ; 00560d34 | DAT_02cf5ecc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560d39
    MOV [0x02cf5ed0],EAX                ; 00560d3d | DAT_02cf5ed0
    RET                                 ; 00560d42

