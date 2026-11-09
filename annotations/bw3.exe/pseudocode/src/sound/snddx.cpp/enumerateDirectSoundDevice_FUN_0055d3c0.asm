; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(int param_1,int param_2)
;
;
; XREF[2]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0055d470 at 0055d4a4
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 at 0055849a
;
; Referenced Globals:
;   TerminatedCString s_DirectSound_s_005d4eec
;   undefined4 DAT_00604510
;
; Called Functions:
;   crt_dsound.c_DirectSoundEnumerateA
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d3c0
        ;   Label: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0
    PUSH ESI                            ; 0055d3c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0055d3c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055d3c6
    CMP dword ptr [0x00604510],0x0      ; 0055d3ca | DAT_00604510
    JL 0x0055d3e4                       ; 0055d3d1
        ;   XREF to: 0055d3e4 (CONDITIONAL_JUMP)  ; LAB_0055d3e4
    TEST ESI,ESI                        ; 0055d3d3
        ;   Label: LAB_0055d3d3
    JL 0x0055d3df                       ; 0055d3d5
        ;   XREF to: 0055d3df (CONDITIONAL_JUMP)  ; LAB_0055d3df
    CMP ESI,dword ptr [0x00604510]      ; 0055d3d7 | DAT_00604510
    JL 0x0055d3f9                       ; 0055d3dd
        ;   XREF to: 0055d3f9 (CONDITIONAL_JUMP)  ; LAB_0055d3f9
    XOR EAX,EAX                         ; 0055d3df
        ;   Label: LAB_0055d3df
    POP ESI                             ; 0055d3e1
    POP EBX                             ; 0055d3e2
    RET                                 ; 0055d3e3
    XOR ECX,ECX                         ; 0055d3e4
        ;   Label: LAB_0055d3e4
    PUSH ECX                            ; 0055d3e6
    PUSH 0x55d0e0                       ; 0055d3e7 | LAB_0055d0e0
    MOV dword ptr [0x00604510],ECX      ; 0055d3ec | DAT_00604510
    CALL crt_dsound.c_DirectSoundEnumerateA ; 0055d3f2
        ;   XREF to: 005b25ec (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundEnumerateA(LPDSENUMCALLBACKA lp_ds_enum_callback, LPVOID lp_context)
    JMP 0x0055d3d3                      ; 0055d3f7
        ;   XREF to: 0055d3d3 (UNCONDITIONAL_JUMP)  ; LAB_0055d3d3
    MOV dword ptr [EBX + 0x104],ESI     ; 0055d3f9
        ;   Label: LAB_0055d3f9
    LEA EAX,[ESI*0x8 + 0x0]             ; 0055d3ff
    ADD EAX,ESI                         ; 0055d406
    SHL EAX,0x3                         ; 0055d408
    SUB EAX,ESI                         ; 0055d40b
    SHL EAX,0x2                         ; 0055d40d
    MOV dword ptr [EBX + 0x100],0x1     ; 0055d410
    MOV EDX,dword ptr [EAX + 0x2cf3d8c] ; 0055d41a
    MOV dword ptr [EBX + 0x10c],0x0     ; 0055d420
    MOV dword ptr [EBX + 0x108],EDX     ; 0055d42a
    MOV EDX,dword ptr [EAX + 0x2cf3d88] ; 0055d430
    MOV dword ptr [EBX + 0x114],EDX     ; 0055d436
    MOV EDX,dword ptr [EAX + 0x2cf3c74] ; 0055d43c
    ADD EAX,0x2cf3c74                   ; 0055d442
    ADD EAX,0x14                        ; 0055d447
    PUSH EAX                            ; 0055d44a
    PUSH 0x5d4eec                       ; 0055d44b | = "DirectSound: %s"
    PUSH EBX                            ; 0055d450
    MOV dword ptr [EBX + 0x110],EDX     ; 0055d451
    CALL crt_unknown.c_FUN_005a28c0     ; 0055d457
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV EAX,0x1                         ; 0055d45c
    ADD ESP,0xc                         ; 0055d461
    POP ESI                             ; 0055d464
    POP EBX                             ; 0055d465
    RET                                 ; 0055d466

