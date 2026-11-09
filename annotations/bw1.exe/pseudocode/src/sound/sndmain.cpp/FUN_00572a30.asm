; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00572a30(uint param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572a30 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572a30
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572a36
    SUB EAX,EDX                         ; 00572a3d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572a3f
    SHL EAX,0x5                         ; 00572a43
    NOT EDX                             ; 00572a46
    AND dword ptr [EAX + 0x2c78d3c],EDX ; 00572a48
    RET                                 ; 00572a4e

