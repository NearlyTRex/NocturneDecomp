; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0055a560(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[42]:
;   sound_snddx.cpp_FUN_0055a9f0 at 0055aafa
;   sound_snddx.cpp_FUN_0055acd0 at 0055adc7
;   sound_snddx.cpp_FUN_0055ae40 at 0055aece
;   sound_snddx.cpp_FUN_0055b100 at 0055b4f5
;   sound_snddx.cpp_FUN_0055b620 at 0055b6cc
;   sound_snddx.cpp_FUN_0055b700 at 0055b79c
;   sound_snddx.cpp_FUN_0055b880 at 0055bb21
;   sound_snddx.cpp_FUN_0055bbf0 at 0055bd2d
;   sound_snddx.cpp_FUN_0055bd50 at 0055bde7
;   sound_snddx.cpp_FUN_0055be30 at 0055c03f
;   ... and 32 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005d3fb3
;   undefined4 DAT_005d3fbb
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   wincore_winrun.cpp_FUN_00581c70
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 0055a560
        ;   Label: sound_sndmain.cpp_FUN_0055a560
    LEA EAX,[ESP + 0x40c]               ; 0055a566
    MOV dword ptr [ESP + 0x400],EAX     ; 0055a56d
    LEA EAX,[ESP + 0x400]               ; 0055a574
    PUSH EAX                            ; 0055a57b
    MOV EDX,dword ptr [ESP + 0x40c]     ; 0055a57c
    PUSH EDX                            ; 0055a583
    LEA EAX,[ESP + 0x8]                 ; 0055a584
    PUSH EAX                            ; 0055a588
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0055a589
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005a2898(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0055a58e
    XOR ECX,ECX                         ; 0055a591
    PUSH 0x5d3fb3                       ; 0055a593 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 0055a598
    CALL wincore_winrun.cpp_FUN_00581c70 ; 0055a59f
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5a4
    MOV EAX,ESP                         ; 0055a5a7
    PUSH EAX                            ; 0055a5a9
    CALL wincore_winrun.cpp_FUN_00581c70 ; 0055a5aa
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5af
    PUSH 0x5d3fbb                       ; 0055a5b2 | DAT_005d3fbb
    CALL wincore_winrun.cpp_FUN_00581c70 ; 0055a5b7
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 0055a5bc
    ADD ESP,0x404                       ; 0055a5bf
    RET                                 ; 0055a5c5

