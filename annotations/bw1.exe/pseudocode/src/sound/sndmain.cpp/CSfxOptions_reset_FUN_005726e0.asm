; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_005726e0(CSfxOptions *this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_CSfxOptions_ctor_FUN_00577460 at 00577466
;   sound_sndmain.cpp_CSfxSlot_ctor_FUN_00577490 at 00577496
;   sound_sndmain.cpp_resetCurrentSfxOptions_FUN_00572a90 at 00572aa8
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00572d64
;
; Referenced Globals:
;   undefined4 DAT_00605af4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005726e0
        ;   Label: sound_sndmain.cpp_CSfxOptions_reset_FUN_005726e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005726e1
    MOV dword ptr [EBX],0x0             ; 005726e5
    MOV dword ptr [EBX + 0x14],0x0      ; 005726eb
    MOV dword ptr [EBX + 0x18],0x0      ; 005726f2
    MOV dword ptr [EBX + 0x1c],0x0      ; 005726f9
    MOV dword ptr [EBX + 0x20],0x0      ; 00572700
    MOV dword ptr [EBX + 0x2c],0x0      ; 00572707
    MOV dword ptr [EBX + 0x30],0x0      ; 0057270e
    MOV dword ptr [EBX + 0x34],0x0      ; 00572715
    MOV dword ptr [EBX + 0x38],0x3f800000 ; 0057271c
    PUSH 0x8                            ; 00572723
    MOV dword ptr [EBX + 0x3c],0x3f800000 ; 00572725
    LEA EAX,[EBX + 0x44]                ; 0057272c
    FLD double ptr [EBX + 0x14]         ; 0057272f
    FLD float ptr [EBX + 0x2c]          ; 00572732
    PUSH 0x0                            ; 00572735
    FXCH                                ; 00572737
    FSTP double ptr [EBX + 0xc]         ; 00572739
    FSTP float ptr [EBX + 0x28]         ; 0057273c
    FLD double ptr [EBX + 0xc]          ; 0057273f
    FLD float ptr [EBX + 0x28]          ; 00572742
    PUSH EAX                            ; 00572745
    FXCH                                ; 00572746
    FSTP double ptr [EBX + 0x4]         ; 00572748
    FSTP float ptr [EBX + 0x24]         ; 0057274b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057274e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x50],0x0      ; 00572753
    MOV dword ptr [EBX + 0x54],0x0      ; 0057275a
    MOV dword ptr [EBX + 0x58],0x0      ; 00572761
    FLD float ptr [0x00605af4]          ; 00572768 | DAT_00605af4
    MOV dword ptr [EBX + 0x5c],0x0      ; 0057276e
    ADD ESP,0xc                         ; 00572775
    FSTP float ptr [EBX + 0x40]         ; 00572778
    POP EBX                             ; 0057277b
    RET                                 ; 0057277c

