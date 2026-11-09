; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00555bf0(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_CSfxOptions_ctor_FUN_0055a5d0 at 0055a5d6
;   sound_sndmain.cpp_CSfxSlot_ctor_FUN_0055a600 at 0055a606
;   sound_sndmain.cpp_FUN_00555fa0 at 00555fb8
;   sound_sndmain.cpp_FUN_00556240 at 00556278
;
; Referenced Globals:
;   undefined4 DAT_005e4824
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555bf0
        ;   Label: sound_sndmain.cpp_FUN_00555bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00555bf1
    MOV dword ptr [EBX],0x0             ; 00555bf5
    MOV dword ptr [EBX + 0x14],0x0      ; 00555bfb
    MOV dword ptr [EBX + 0x18],0x0      ; 00555c02
    MOV dword ptr [EBX + 0x1c],0x0      ; 00555c09
    MOV dword ptr [EBX + 0x20],0x0      ; 00555c10
    MOV dword ptr [EBX + 0x2c],0x0      ; 00555c17
    MOV dword ptr [EBX + 0x30],0x0      ; 00555c1e
    MOV dword ptr [EBX + 0x34],0x0      ; 00555c25
    MOV dword ptr [EBX + 0x38],0x3f800000 ; 00555c2c
    PUSH 0x8                            ; 00555c33
    MOV dword ptr [EBX + 0x3c],0x3f800000 ; 00555c35
    LEA EAX,[EBX + 0x44]                ; 00555c3c
    FLD double ptr [EBX + 0x14]         ; 00555c3f
    FLD float ptr [EBX + 0x2c]          ; 00555c42
    PUSH 0x0                            ; 00555c45
    FXCH                                ; 00555c47
    FSTP double ptr [EBX + 0xc]         ; 00555c49
    FSTP float ptr [EBX + 0x28]         ; 00555c4c
    FLD double ptr [EBX + 0xc]          ; 00555c4f
    FLD float ptr [EBX + 0x28]          ; 00555c52
    PUSH EAX                            ; 00555c55
    FXCH                                ; 00555c56
    FSTP double ptr [EBX + 0x4]         ; 00555c58
    FSTP float ptr [EBX + 0x24]         ; 00555c5b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00555c5e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x50],0x0      ; 00555c63
    MOV dword ptr [EBX + 0x54],0x0      ; 00555c6a
    MOV dword ptr [EBX + 0x58],0x0      ; 00555c71
    FLD float ptr [0x005e4824]          ; 00555c78 | DAT_005e4824
    MOV dword ptr [EBX + 0x5c],0x0      ; 00555c7e
    ADD ESP,0xc                         ; 00555c85
    FSTP float ptr [EBX + 0x40]         ; 00555c88
    POP EBX                             ; 00555c8b
    RET                                 ; 00555c8c

