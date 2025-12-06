; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_005a8520(CSfxSample * this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8520
        ;   Label: sound_sndmain.cpp_CSfxSample_computeDataSize_FUN_005a8520
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a8521
    MOV EBX,dword ptr [ECX + 0x108]     ; 005a8525
    MOV EDX,dword ptr [ECX + 0x104]     ; 005a852b
    IMUL EDX,EBX                        ; 005a8531
    MOV EAX,EDX                         ; 005a8534
    SAR EDX,0x1f                        ; 005a8536
    SHL EDX,0x3                         ; 005a8539
    SBB EAX,EDX                         ; 005a853c
    SAR EAX,0x3                         ; 005a853e
    IMUL EAX,dword ptr [ECX + 0x110]    ; 005a8541
    POP EBX                             ; 005a8548
    RET                                 ; 005a8549

