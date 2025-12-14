; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
;
; Parameters:
; CSfxOptions *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70 at 005add76
;   sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00 at 005ade06
;   sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10 at 005a8c25
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a8ed4
;
; Referenced Globals:
;   double DOUBLE_00663138 = -1
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8830
        ;   Label: sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8831
    MOV dword ptr [EBX],0x0             ; 005a8835
    MOV dword ptr [EBX + 0x14],0x0      ; 005a883b
    MOV dword ptr [EBX + 0x18],0x0      ; 005a8842
    MOV dword ptr [EBX + 0x1c],0x0      ; 005a8849
    MOV dword ptr [EBX + 0x20],0x0      ; 005a8850
    MOV dword ptr [EBX + 0x34],0x0      ; 005a8857
    MOV dword ptr [EBX + 0x38],0x0      ; 005a885e
    MOV dword ptr [EBX + 0x3c],0x0      ; 005a8865
    MOV dword ptr [EBX + 0x40],0x0      ; 005a886c
    MOV dword ptr [EBX + 0x44],0x3f800000 ; 005a8873
    PUSH 0x8                            ; 005a887a
    MOV dword ptr [EBX + 0x48],0x3f800000 ; 005a887c
    LEA EAX,[EBX + 0x54]                ; 005a8883
    FLD double ptr [EBX + 0x14]         ; 005a8886
    FLD double ptr [EBX + 0x34]         ; 005a8889
    PUSH 0x0                            ; 005a888c
    FXCH                                ; 005a888e
    FSTP double ptr [EBX + 0xc]         ; 005a8890
    FSTP double ptr [EBX + 0x2c]        ; 005a8893
    FLD double ptr [EBX + 0xc]          ; 005a8896
    FLD double ptr [EBX + 0x2c]         ; 005a8899
    PUSH EAX                            ; 005a889c
    FXCH                                ; 005a889d
    FSTP double ptr [EBX + 0x4]         ; 005a889f
    FSTP double ptr [EBX + 0x24]        ; 005a88a2
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a88a5
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x60],0x0      ; 005a88aa
    MOV dword ptr [EBX + 0x64],0x0      ; 005a88b1
    MOV dword ptr [EBX + 0x68],0x0      ; 005a88b8
    FLD double ptr [0x00663138]         ; 005a88bf | DOUBLE_00663138
    MOV dword ptr [EBX + 0x6c],0x0      ; 005a88c5
    ADD ESP,0xc                         ; 005a88cc
    FSTP double ptr [EBX + 0x4c]        ; 005a88cf
    POP EBX                             ; 005a88d2
    RET                                 ; 005a88d3

