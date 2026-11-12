; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getAudioFormat_FUN_00558330(int *bits_per_sample,int *channels,int *sample_rate)
;
; Parameters:
; int *            Stack[0x4]:4   bits_per_sample
; int *            Stack[0x8]:4   channels
; int *            Stack[0xc]:4   sample_rate
;
; XREF[5]:
;   sound_sndmain.cpp_FUN_00558370 at 00558379
;   sound_sndmain.cpp_FUN_00558390 at 00558399
;   sound_sndmain.cpp_FUN_005583b0 at 005583b9
;   sound_sndmain.cpp_readIni_FUN_00559220 at 005593a3
;   sound_sndmain.cpp_writeIni_FUN_00559520 at 005595be
;
; Referenced Globals:
;   undefined4 DAT_00604228
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558330
        ;   Label: sound_sndmain.cpp_getAudioFormat_FUN_00558330
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558331
    MOV ECX,dword ptr [ESP + 0xc]       ; 00558335
    MOV EDX,dword ptr [ESP + 0x10]      ; 00558339
    TEST EBX,EBX                        ; 0055833d
    JNZ 0x00558352                      ; 0055833f
        ;   XREF to: 00558352 (CONDITIONAL_JUMP)  ; LAB_00558352
    TEST ECX,ECX                        ; 00558341
        ;   Label: LAB_00558341
    JZ 0x0055834c                       ; 00558343
        ;   XREF to: 0055834c (CONDITIONAL_JUMP)  ; LAB_0055834c
    MOV EAX,[0x0060422c]                ; 00558345 | DAT_0060422c
    MOV dword ptr [ECX],EAX             ; 0055834a
    TEST EDX,EDX                        ; 0055834c
        ;   Label: LAB_0055834c
    JNZ 0x0055835b                      ; 0055834e
        ;   XREF to: 0055835b (CONDITIONAL_JUMP)  ; LAB_0055835b
    POP EBX                             ; 00558350
    RET                                 ; 00558351
    MOV EAX,[0x00604228]                ; 00558352 | DAT_00604228
        ;   Label: LAB_00558352
    MOV dword ptr [EBX],EAX             ; 00558357
    JMP 0x00558341                      ; 00558359
        ;   XREF to: 00558341 (UNCONDITIONAL_JUMP)  ; LAB_00558341
    MOV EAX,[0x00604230]                ; 0055835b | DAT_00604230
        ;   Label: LAB_0055835b
    MOV dword ptr [EDX],EAX             ; 00558360
    POP EBX                             ; 00558362
    RET                                 ; 00558363

