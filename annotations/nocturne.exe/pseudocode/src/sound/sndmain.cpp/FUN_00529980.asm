; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00529980(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x408]:1  local_408
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[32]:
;   sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60 at 0052acc6
;   sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50 at 0052b145
;   sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880 at 0052b976
;   sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280 at 0052a3d8
;   sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0 at 0052b86e
;   sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0 at 0052bb02
;   sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0 at 0052ae73
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970 at 0052aa19
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0 at 0052a1c3
;   sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450 at 0052a848
;   ... and 22 more
;
; Referenced Globals:
;   TerminatedCString s_s_00593b86
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529980
        ;   Label: sound_sndmain.cpp_FUN_00529980
    SUB ESP,0x404                       ; 00529981
    LEA EAX,[ESP + 0x410]               ; 00529987
    MOV dword ptr [ESP + 0x400],EAX     ; 0052998e
    LEA EAX,[ESP + 0x400]               ; 00529995
    PUSH EAX                            ; 0052999c
    MOV EDX,dword ptr [ESP + 0x410]     ; 0052999d
    PUSH EDX                            ; 005299a4
    LEA EAX,[ESP + 0x8]                 ; 005299a5
    PUSH EAX                            ; 005299a9
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 005299aa
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005299af
    MOV EAX,ESP                         ; 005299b2
    PUSH EAX                            ; 005299b4
    PUSH 0x593b86                       ; 005299b5 | = "%s\n"
    MOV EBX,dword ptr [0x005ad350]      ; 005299ba | g_CConsole_PTR_005ad350
    XOR ECX,ECX                         ; 005299c0
    PUSH EBX                            ; 005299c2 | g_CConsole_0077ad0c
    MOV dword ptr [ESP + 0x40c],ECX     ; 005299c3
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005299ca
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005299cf
    ADD ESP,0x404                       ; 005299d2
    POP EBX                             ; 005299d8
    RET                                 ; 005299d9

