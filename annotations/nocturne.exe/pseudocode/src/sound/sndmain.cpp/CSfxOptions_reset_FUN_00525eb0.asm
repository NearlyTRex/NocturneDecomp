; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_005299e0 at 005299e6
;   FUN_00529a20 at 00529a26
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 005265e4
;
; Referenced Globals:
;   undefined4 DAT_005a2148
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525eb0
        ;   Label: sound_sndmain.cpp_CSfxOptions_reset_FUN_00525eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00525eb1
    MOV dword ptr [EBX],0x0             ; 00525eb5
    MOV dword ptr [EBX + 0x14],0x0      ; 00525ebb
    MOV dword ptr [EBX + 0x18],0x0      ; 00525ec2
    MOV dword ptr [EBX + 0x1c],0x0      ; 00525ec9
    MOV dword ptr [EBX + 0x20],0x0      ; 00525ed0
    MOV dword ptr [EBX + 0x34],0x0      ; 00525ed7
    MOV dword ptr [EBX + 0x38],0x0      ; 00525ede
    MOV dword ptr [EBX + 0x3c],0x0      ; 00525ee5
    MOV dword ptr [EBX + 0x40],0x0      ; 00525eec
    MOV dword ptr [EBX + 0x44],0x3f800000 ; 00525ef3
    PUSH 0x8                            ; 00525efa
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 00525efc
    LEA EAX,[EBX + 0x54]                ; 00525f03
    FLD double ptr [EBX + 0x14]         ; 00525f06
    FLD double ptr [EBX + 0x34]         ; 00525f09
    PUSH 0x0                            ; 00525f0c
    FXCH                                ; 00525f0e
    FSTP double ptr [EBX + 0xc]         ; 00525f10
    FSTP double ptr [EBX + 0x2c]        ; 00525f13
    FLD double ptr [EBX + 0xc]          ; 00525f16
    FLD double ptr [EBX + 0x2c]         ; 00525f19
    PUSH EAX                            ; 00525f1c
    FXCH                                ; 00525f1d
    FSTP double ptr [EBX + 0x4]         ; 00525f1f
    FSTP double ptr [EBX + 0x24]        ; 00525f22
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00525f25
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV dword ptr [EBX + 0x60],0x0      ; 00525f2a
    MOV dword ptr [EBX + 0x64],0x0      ; 00525f31
    FLD double ptr [0x005a2148]         ; 00525f38 | DAT_005a2148
    MOV dword ptr [EBX + 0x68],0x0      ; 00525f3e
    ADD ESP,0xc                         ; 00525f45
    FSTP double ptr [EBX + 0x4c]        ; 00525f48
    POP EBX                             ; 00525f4b
    RET                                 ; 00525f4c

