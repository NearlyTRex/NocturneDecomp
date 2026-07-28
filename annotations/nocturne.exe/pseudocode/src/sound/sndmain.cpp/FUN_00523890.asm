; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00523890(CSfxSample *param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00523890
        ;   Label: sound_sndmain.cpp_FUN_00523890
    PUSH EDX                            ; 00523894
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00525b70 ; 00523895
        ;   XREF to: 00525b70 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00525b70(CSfxSample * this_ptr)
    MOV dword ptr [EAX + 0x120],0x0     ; 0052389a
    MOV dword ptr [EAX + 0x12c],0x0     ; 005238a4
    MOV dword ptr [EAX + 0x130],0x0     ; 005238ae
    MOV dword ptr [EAX + 0x128],0x0     ; 005238b8
    MOV dword ptr [EAX + 0x134],0xffffffff ; 005238c2
    MOV dword ptr [EAX + 0x14c],0x0     ; 005238cc
    MOV dword ptr [EAX + 0x144],0x0     ; 005238d6
    ADD ESP,0x4                         ; 005238e0
    MOV dword ptr [EAX + 0x154],0x0     ; 005238e3
    RET                                 ; 005238ed

