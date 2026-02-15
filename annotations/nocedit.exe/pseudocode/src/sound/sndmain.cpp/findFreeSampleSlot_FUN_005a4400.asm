; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_findFreeSampleSlot_FUN_005a4400(void)
;
;
; Referenced Globals:
;   int g_LastSampleAccessIndex
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f6297c
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62afc
;   undefined4 DAT_03f62b00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f62828]      ; 005a4400 | g_LastSampleAccessIndex
        ;   Label: sound_sndmain.cpp_findFreeSampleSlot_FUN_005a4400
    XOR EAX,EAX                         ; 005a4406
    INC EDX                             ; 005a4408
        ;   Label: LAB_005a4408
    CMP EDX,0x40                        ; 005a4409
    JL 0x005a4410                       ; 005a440c
        ;   XREF to: 005a4410 (CONDITIONAL_JUMP)  ; LAB_005a4410
    XOR EDX,EDX                         ; 005a440e
    IMUL ECX,EDX,0x180                  ; 005a4410
        ;   Label: LAB_005a4410
    CMP dword ptr [ECX + 0x3f6297c],0x0 ; 005a4416 | DAT_03f6297c | DAT_03f62afc
    JZ 0x005a442e                       ; 005a441d
        ;   XREF to: 005a442e (CONDITIONAL_JUMP)  ; LAB_005a442e
    INC EAX                             ; 005a441f
        ;   Label: LAB_005a441f
    CMP EAX,0x40                        ; 005a4420
    JL 0x005a4408                       ; 005a4423
        ;   XREF to: 005a4408 (CONDITIONAL_JUMP)  ; LAB_005a4408
    XOR EAX,EAX                         ; 005a4425
    MOV dword ptr [0x03f62828],EDX      ; 005a4427 | g_LastSampleAccessIndex
    RET                                 ; 005a442d
    CMP dword ptr [ECX + 0x3f62980],0x0 ; 005a442e | DAT_03f62b00
        ;   Label: LAB_005a442e
    JNZ 0x005a441f                      ; 005a4435
        ;   XREF to: 005a441f (CONDITIONAL_JUMP)  ; LAB_005a441f
    MOV EAX,0x3f6282c                   ; 005a4437 | g_SfxSamples
    ADD EAX,ECX                         ; 005a443c | DAT_03f629ac
    MOV dword ptr [0x03f62828],EDX      ; 005a443e | g_LastSampleAccessIndex
    RET                                 ; 005a4444

