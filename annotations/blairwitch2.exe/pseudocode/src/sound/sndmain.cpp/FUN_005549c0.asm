; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_005549c0(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x404]:1  local_404
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[42]:
;   sound_snddx.cpp_FUN_00554e50 at 00554f5a
;   sound_snddx.cpp_FUN_00555130 at 00555227
;   sound_snddx.cpp_FUN_005552a0 at 0055532e
;   sound_snddx.cpp_FUN_00555560 at 00555955
;   sound_snddx.cpp_FUN_00555a80 at 00555b2c
;   sound_snddx.cpp_FUN_00555b60 at 00555bfc
;   sound_snddx.cpp_FUN_00555ce0 at 00555f8b
;   sound_snddx.cpp_FUN_00556050 at 0055618d
;   sound_snddx.cpp_FUN_005561b0 at 00556247
;   sound_snddx.cpp_FUN_00556290 at 0055649f
;   ... and 32 more
;
; Referenced Globals:
;   TerminatedCString s_SOUND_005e94bf
;   undefined4 DAT_005e94c7
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;   wincore_winrun.cpp_FUN_0058ffc0
;
; *****************************************************************************

section .text

    SUB ESP,0x404                       ; 005549c0
        ;   Label: sound_sndmain.cpp_FUN_005549c0
    LEA EAX,[ESP + 0x40c]               ; 005549c6
    MOV dword ptr [ESP + 0x400],EAX     ; 005549cd
    LEA EAX,[ESP + 0x400]               ; 005549d4
    PUSH EAX                            ; 005549db
    MOV EDX,dword ptr [ESP + 0x40c]     ; 005549dc
    PUSH EDX                            ; 005549e3
    LEA EAX,[ESP + 0x8]                 ; 005549e4
    PUSH EAX                            ; 005549e8
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 005549e9
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 005549ee
    XOR ECX,ECX                         ; 005549f1
    PUSH 0x5e94bf                       ; 005549f3 | = "SOUND: "
    MOV dword ptr [ESP + 0x404],ECX     ; 005549f8
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 005549ff
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a04
    MOV EAX,ESP                         ; 00554a07
    PUSH EAX                            ; 00554a09
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 00554a0a
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a0f
    PUSH 0x5e94c7                       ; 00554a12 | DAT_005e94c7
    CALL wincore_winrun.cpp_FUN_0058ffc0 ; 00554a17
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058ffc0()
    ADD ESP,0x4                         ; 00554a1c
    ADD ESP,0x404                       ; 00554a1f
    RET                                 ; 00554a25

