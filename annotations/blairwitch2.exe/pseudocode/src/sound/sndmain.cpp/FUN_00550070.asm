; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00550070(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_CSfxOptions_ctor_FUN_00554a30 at 00554a36
;   sound_sndmain.cpp_CSfxSlot_ctor_FUN_00554a60 at 00554a66
;   sound_sndmain.cpp_FUN_00550420 at 00550438
;   sound_sndmain.cpp_FUN_005506b0 at 005506e8
;
; Referenced Globals:
;   undefined4 DAT_005fbc14
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550070
        ;   Label: sound_sndmain.cpp_FUN_00550070
    MOV EBX,dword ptr [ESP + 0x8]       ; 00550071
    MOV dword ptr [EBX],0x0             ; 00550075
    MOV dword ptr [EBX + 0x14],0x0      ; 0055007b
    MOV dword ptr [EBX + 0x18],0x0      ; 00550082
    MOV dword ptr [EBX + 0x1c],0x0      ; 00550089
    MOV dword ptr [EBX + 0x20],0x0      ; 00550090
    MOV dword ptr [EBX + 0x2c],0x0      ; 00550097
    MOV dword ptr [EBX + 0x30],0x0      ; 0055009e
    MOV dword ptr [EBX + 0x34],0x0      ; 005500a5
    MOV dword ptr [EBX + 0x38],0x3f800000 ; 005500ac
    PUSH 0x8                            ; 005500b3
    MOV dword ptr [EBX + 0x3c],0x3f800000 ; 005500b5
    LEA EAX,[EBX + 0x44]                ; 005500bc
    FLD double ptr [EBX + 0x14]         ; 005500bf
    FLD float ptr [EBX + 0x2c]          ; 005500c2
    PUSH 0x0                            ; 005500c5
    FXCH                                ; 005500c7
    FSTP double ptr [EBX + 0xc]         ; 005500c9
    FSTP float ptr [EBX + 0x28]         ; 005500cc
    FLD double ptr [EBX + 0xc]          ; 005500cf
    FLD float ptr [EBX + 0x28]          ; 005500d2
    PUSH EAX                            ; 005500d5
    FXCH                                ; 005500d6
    FSTP double ptr [EBX + 0x4]         ; 005500d8
    FSTP float ptr [EBX + 0x24]         ; 005500db
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005500de
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x50],0x0      ; 005500e3
    MOV dword ptr [EBX + 0x54],0x0      ; 005500ea
    MOV dword ptr [EBX + 0x58],0x0      ; 005500f1
    FLD float ptr [0x005fbc14]          ; 005500f8 | DAT_005fbc14
    MOV dword ptr [EBX + 0x5c],0x0      ; 005500fe
    ADD ESP,0xc                         ; 00550105
    FSTP float ptr [EBX + 0x40]         ; 00550108
    POP EBX                             ; 0055010b
    RET                                 ; 0055010c

