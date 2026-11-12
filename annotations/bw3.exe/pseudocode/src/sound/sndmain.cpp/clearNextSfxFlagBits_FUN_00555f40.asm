; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint flag_mask)
;
; Parameters:
; uint             Stack[0x4]:4   flag_mask
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555f40 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00555f40
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555f46
    SUB EAX,EDX                         ; 00555f4d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555f4f
    SHL EAX,0x5                         ; 00555f53
    NOT EDX                             ; 00555f56
    AND dword ptr [EAX + 0x2ceb96c],EDX ; 00555f58
    RET                                 ; 00555f5e

