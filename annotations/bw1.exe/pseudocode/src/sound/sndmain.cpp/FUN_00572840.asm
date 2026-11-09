; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00572840(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 00572840 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_FUN_00572840
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572846
    SUB EAX,EDX                         ; 0057284d
    SHL EAX,0x5                         ; 0057284f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572852
    MOV dword ptr [EAX + 0x2c78d14],EDX ; 00572856
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057285c
    MOV dword ptr [EAX + 0x2c78d18],EDX ; 00572860
    MOV EDX,dword ptr [ESP + 0xc]       ; 00572866
    MOV dword ptr [EAX + 0x2c78d1c],EDX ; 0057286a
    XOR EDX,EDX                         ; 00572870
    MOV dword ptr [EAX + 0x2c78d20],EDX ; 00572872
    MOV dword ptr [EAX + 0x2c78d24],EDX ; 00572878
    RET                                 ; 0057287e

