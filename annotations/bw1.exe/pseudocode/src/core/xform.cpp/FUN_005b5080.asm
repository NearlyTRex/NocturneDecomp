; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b5080(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[60]:
;   core_baron.cpp_FUN_0040f4d0 at 0040f81c
;   core_baron.cpp_FUN_0040fcf0 at 0040fffa
;   core_batcreat.cpp_FUN_004115b0 at 00411a15
;   core_batman.cpp_FUN_00412ba0 at 004134aa
;   core_boneguy.cpp_FUN_0041bb40 at 0041c2ba
;   core_boneguy.cpp_FUN_0041c720 at 0041c883
;   core_bride.cpp_FUN_00423b70 at 0042418b
;   core_bride.cpp_FUN_00424e20 at 00424e75
;   core_bugs.cpp_FUN_00426ec0 at 0042710b
;   core_carved.cpp_FUN_0042a4f0 at 0042a6c4
;   ... and 50 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b5080
        ;   Label: core_xform.cpp_FUN_005b5080
    SUB ESP,0xc                         ; 005b5081
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b5084
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b5088
    MOV ECX,ESI                         ; 005b508c
    FLD float ptr [EDX + 0x4]           ; 005b508e
    FMUL float ptr [EAX + 0x4]          ; 005b5091
    FLD float ptr [EDX + 0x4]           ; 005b5094
    FMUL float ptr [EAX + 0x14]         ; 005b5097
    FLD float ptr [EDX + 0x4]           ; 005b509a
    FMUL float ptr [EAX + 0x24]         ; 005b509d
    FLD float ptr [EDX]                 ; 005b50a0
    FMUL float ptr [EAX]                ; 005b50a2
    FLD float ptr [EDX]                 ; 005b50a4
    FMUL float ptr [EAX + 0x10]         ; 005b50a6
    FLD float ptr [EDX]                 ; 005b50a9
    FXCH ST2                            ; 005b50ab
    FADDP ST5,ST0                       ; 005b50ad
    FXCH                                ; 005b50af
    FMUL float ptr [EAX + 0x20]         ; 005b50b1
    FLD float ptr [EDX + 0x8]           ; 005b50b4
    FMUL float ptr [EAX + 0x8]          ; 005b50b7
    FXCH ST2                            ; 005b50ba
    FADDP ST4,ST0                       ; 005b50bc
    FADDP ST2,ST0                       ; 005b50be
    FLD float ptr [EDX + 0x8]           ; 005b50c0
    FMUL float ptr [EAX + 0x18]         ; 005b50c3
    FLD float ptr [EDX + 0x8]           ; 005b50c6
    FMUL float ptr [EAX + 0x28]         ; 005b50c9
    MOV EDI,ESI                         ; 005b50cc
    MOV ESI,ESP                         ; 005b50ce
    FXCH ST2                            ; 005b50d0
    FADDP ST5,ST0                       ; 005b50d2
    FADDP ST3,ST0                       ; 005b50d4
    FADDP                               ; 005b50d6
    FXCH ST2                            ; 005b50d8
    FADD float ptr [EAX + 0xc]          ; 005b50da
    FXCH                                ; 005b50dd
    FADD float ptr [EAX + 0x1c]         ; 005b50df
    FXCH ST2                            ; 005b50e2
    FADD float ptr [EAX + 0x2c]         ; 005b50e4
    FXCH ST2                            ; 005b50e7
    FSTP float ptr [ESP + 0x4]          ; 005b50e9
    FXCH                                ; 005b50ed
    FSTP float ptr [ESP + 0x8]          ; 005b50ef
    FSTP float ptr [ESP]                ; 005b50f3
    MOVSD ES:EDI,ESI                    ; 005b50f6
    MOVSD ES:EDI,ESI                    ; 005b50f7
    MOVSD ES:EDI,ESI                    ; 005b50f8
    MOV EAX,ECX                         ; 005b50f9
    ADD ESP,0xc                         ; 005b50fb
    POP EDI                             ; 005b50fe
    RET                                 ; 005b50ff

