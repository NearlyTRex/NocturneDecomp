; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_FUN_005238f0(CSfxSample *param_1)
;
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005238f0
        ;   Label: sound_sndmain.cpp_FUN_005238f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005238f1
    PUSH EBX                            ; 005238f5
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 005238f6
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005238fb
    MOV EAX,EBX                         ; 005238fe
    POP EBX                             ; 00523900
    RET                                 ; 00523901

