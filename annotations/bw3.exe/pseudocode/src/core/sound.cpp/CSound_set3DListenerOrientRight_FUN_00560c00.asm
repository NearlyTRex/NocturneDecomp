; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_00560c00(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   listener_orient_x
; float            Stack[0xc]:4   listener_orient_y
; float            Stack[0x10]:4   listener_orient_z
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_00560c30 at 00560c5a
;
; Referenced Globals:
;   undefined4 DAT_02cf56a4
;   undefined4 DAT_02cf56a8
;   undefined4 DAT_02cf56ac
;
; Called Functions:
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00560c00
        ;   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_00560c00
    MOV [0x02cf56a4],EAX                ; 00560c04 | DAT_02cf56a4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560c09
    MOV [0x02cf56a8],EAX                ; 00560c0d | DAT_02cf56a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00560c12
    PUSH EAX                            ; 00560c16
    PUSH dword ptr [ESP + 0x10]         ; 00560c17
    PUSH dword ptr [ESP + 0x10]         ; 00560c1b
    MOV [0x02cf56ac],EAX                ; 00560c1f | DAT_02cf56ac
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860 ; 00560c24
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 00560c29
    RET                                 ; 00560c2c

