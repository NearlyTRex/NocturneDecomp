; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0057dad0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   listener_orient_x
; float            Stack[0xc]:4   listener_orient_y
; float            Stack[0x10]:4   listener_orient_z
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_0057db00 at 0057db2a
;
; Referenced Globals:
;   undefined4 DAT_02c82a84
;   undefined4 DAT_02c82a88
;   undefined4 DAT_02c82a8c
;
; Called Functions:
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dad0
        ;   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0057dad0
    MOV [0x02c82a84],EAX                ; 0057dad4 | DAT_02c82a84
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057dad9
    MOV [0x02c82a88],EAX                ; 0057dadd | DAT_02c82a88
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057dae2
    PUSH EAX                            ; 0057dae6
    PUSH dword ptr [ESP + 0x10]         ; 0057dae7
    PUSH dword ptr [ESP + 0x10]         ; 0057daeb
    MOV [0x02c82a8c],EAX                ; 0057daef | DAT_02c82a8c
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0 ; 0057daf4
        ;   XREF to: 005756f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0()
    ADD ESP,0xc                         ; 0057daf9
    RET                                 ; 0057dafc

