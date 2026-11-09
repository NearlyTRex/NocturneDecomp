; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00555d20(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555d20 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_FUN_00555d20
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555d26
    SUB EAX,EDX                         ; 00555d2d
    SHL EAX,0x5                         ; 00555d2f
    MOV dword ptr [EAX + 0x2ceb940],0x2 ; 00555d32
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555d3c
    MOV dword ptr [EAX + 0x2ceb93c],EDX ; 00555d40
    RET                                 ; 00555d46

