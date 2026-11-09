; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00555dc0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02ceb91c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02ceb91c]      ; 00555dc0 | DAT_02ceb91c
        ;   Label: sound_sndmain.cpp_FUN_00555dc0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555dc6
    SUB EAX,EDX                         ; 00555dcd
    SHL EAX,0x5                         ; 00555dcf
    MOV dword ptr [EAX + 0x2ceb954],0x2 ; 00555dd2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555ddc
    MOV dword ptr [EAX + 0x2ceb950],EDX ; 00555de0
    RET                                 ; 00555de6

