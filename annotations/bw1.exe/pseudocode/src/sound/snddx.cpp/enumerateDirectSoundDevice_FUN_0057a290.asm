; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290(int param_1,char *param_2)
;
;
; XREF[2]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340 at 0057a374
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 at 0057532a
;
; Referenced Globals:
;   TerminatedCString s_DirectSound_s_005f5693
;   undefined4 DAT_006235d0
;
; Called Functions:
;   crt_dsound.c_DirectSoundEnumerateA
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a290
        ;   Label: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0057a290
    PUSH ESI                            ; 0057a291
    MOV ESI,dword ptr [ESP + 0xc]       ; 0057a292
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057a296
    CMP dword ptr [0x006235d0],0x0      ; 0057a29a | DAT_006235d0
    JL 0x0057a2b4                       ; 0057a2a1
        ;   XREF to: 0057a2b4 (CONDITIONAL_JUMP)  ; LAB_0057a2b4
    TEST ESI,ESI                        ; 0057a2a3
        ;   Label: LAB_0057a2a3
    JL 0x0057a2af                       ; 0057a2a5
        ;   XREF to: 0057a2af (CONDITIONAL_JUMP)  ; LAB_0057a2af
    CMP ESI,dword ptr [0x006235d0]      ; 0057a2a7 | DAT_006235d0
    JL 0x0057a2c9                       ; 0057a2ad
        ;   XREF to: 0057a2c9 (CONDITIONAL_JUMP)  ; LAB_0057a2c9
    XOR EAX,EAX                         ; 0057a2af
        ;   Label: LAB_0057a2af
    POP ESI                             ; 0057a2b1
    POP EBX                             ; 0057a2b2
    RET                                 ; 0057a2b3
    XOR ECX,ECX                         ; 0057a2b4
        ;   Label: LAB_0057a2b4
    PUSH ECX                            ; 0057a2b6
    PUSH 0x579f70                       ; 0057a2b7 | LAB_00579f70
    MOV dword ptr [0x006235d0],ECX      ; 0057a2bc | DAT_006235d0
    CALL crt_dsound.c_DirectSoundEnumerateA ; 0057a2c2
        ;   XREF to: 005cf85c (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundEnumerateA(LPDSENUMCALLBACKA lp_ds_enum_callback, LPVOID lp_context)
    JMP 0x0057a2a3                      ; 0057a2c7
        ;   XREF to: 0057a2a3 (UNCONDITIONAL_JUMP)  ; LAB_0057a2a3
    MOV dword ptr [EBX + 0x104],ESI     ; 0057a2c9
        ;   Label: LAB_0057a2c9
    LEA EAX,[ESI*0x8 + 0x0]             ; 0057a2cf
    ADD EAX,ESI                         ; 0057a2d6
    SHL EAX,0x3                         ; 0057a2d8
    SUB EAX,ESI                         ; 0057a2db
    SHL EAX,0x2                         ; 0057a2dd
    MOV dword ptr [EBX + 0x100],0x1     ; 0057a2e0
    MOV EDX,dword ptr [EAX + 0x2c8115c] ; 0057a2ea
    MOV dword ptr [EBX + 0x10c],0x0     ; 0057a2f0
    MOV dword ptr [EBX + 0x108],EDX     ; 0057a2fa
    MOV EDX,dword ptr [EAX + 0x2c81158] ; 0057a300
    MOV dword ptr [EBX + 0x114],EDX     ; 0057a306
    MOV EDX,dword ptr [EAX + 0x2c81044] ; 0057a30c
    ADD EAX,0x2c81044                   ; 0057a312
    ADD EAX,0x14                        ; 0057a317
    PUSH EAX                            ; 0057a31a
    PUSH 0x5f5693                       ; 0057a31b | = "DirectSound: %s"
    PUSH EBX                            ; 0057a320
    MOV dword ptr [EBX + 0x110],EDX     ; 0057a321
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057a327
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x1                         ; 0057a32c
    ADD ESP,0xc                         ; 0057a331
    POP ESI                             ; 0057a334
    POP EBX                             ; 0057a335
    RET                                 ; 0057a336

