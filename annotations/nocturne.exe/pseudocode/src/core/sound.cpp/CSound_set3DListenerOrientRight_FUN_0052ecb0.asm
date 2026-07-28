; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(CSound *this_ptr,float listener_orient_x,float listener_orient_y,float listener_orient_z)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   listener_orient_x
; float            Stack[0xc]:4   listener_orient_y
; float            Stack[0x10]:4   listener_orient_z
;
; XREF[1]:
;   core_sound.cpp_CSound_setReverbPreset_FUN_0052ece0 at 0052ed0a
;
; Referenced Globals:
;   undefined4 DAT_02dc9474
;   undefined4 DAT_02dc9478
;   undefined4 DAT_02dc947c
;
; Called Functions:
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ecb0
        ;   Label: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
    MOV [0x02dc9474],EAX                ; 0052ecb4 | DAT_02dc9474
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ecb9
    MOV [0x02dc9478],EAX                ; 0052ecbd | DAT_02dc9478
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ecc2
    PUSH EAX                            ; 0052ecc6
    PUSH dword ptr [ESP + 0x10]         ; 0052ecc7
    PUSH dword ptr [ESP + 0x10]         ; 0052eccb
    MOV [0x02dc947c],EAX                ; 0052eccf | DAT_02dc947c
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630 ; 0052ecd4
        ;   XREF to: 00528630 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 0052ecd9
    RET                                 ; 0052ecdc

