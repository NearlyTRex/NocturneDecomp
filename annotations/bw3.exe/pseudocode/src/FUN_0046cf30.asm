; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cf30(undefined4 param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[44]:
;   FUN_004087f0 at 00408818
;   FUN_0040f590 at 0040f5ba
;   FUN_00412c50 at 00412e45
;   FUN_00414bd0 at 00414caa
;   FUN_0041f8e0 at 0041f955
;   FUN_0041f9f0 at 0041fa65
;   FUN_004215f0 at 004216c0
;   FUN_0042e3a0 at 0042e47d
;   FUN_00445fa0 at 00445fca
;   FUN_0044ef20 at 0044f01a
;   ... and 34 more
;
; Referenced Globals:
;   undefined4 DAT_005bc51b
;   undefined4 DAT_005bc523
;   undefined4 DAT_005bc52b
;
; Called Functions:
;   FUN_004e56b0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cf30
        ;   Label: FUN_0046cf30
    PUSH EBP                            ; 0046cf31
    SUB ESP,0xc                         ; 0046cf32
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046cf35
    MOV EDX,dword ptr [ESP + 0x20]      ; 0046cf39
    TEST EDX,EDX                        ; 0046cf3d
    JNZ 0x0046cfac                      ; 0046cf3f
        ;   XREF to: 0046cfac (CONDITIONAL_JUMP)  ; LAB_0046cfac
    FLD float ptr [0x005bc523]          ; 0046cf41 | DAT_005bc523
    FLD float ptr [EAX + 0x4]           ; 0046cf47
    FMUL ST1                            ; 0046cf4a
    FLD float ptr [EAX + 0x8]           ; 0046cf4c
    FMUL ST2                            ; 0046cf4f
    FLD float ptr [EAX]                 ; 0046cf51
    FMULP ST3                           ; 0046cf53
    FXCH                                ; 0046cf55
    FLD double ptr [0x005bc52b]         ; 0046cf57 | DAT_005bc52b
    FXCH                                ; 0046cf5d
    FMUL ST1                            ; 0046cf5f
    PUSH EDX                            ; 0046cf61
    FXCH ST2                            ; 0046cf62
    FMUL ST1                            ; 0046cf64
    PUSH EDX                            ; 0046cf66
    FXCH ST3                            ; 0046cf67
    FMULP                               ; 0046cf69
    PUSH EDX                            ; 0046cf6b
    FXCH                                ; 0046cf6c
    CALL FUN_005a3120                   ; 0046cf6e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0046cf73
    CALL FUN_005a3120                   ; 0046cf75
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0046cf7a
    FISTP dword ptr [ESP + 0x10]        ; 0046cf7c
    FXCH                                ; 0046cf80
    FISTP dword ptr [ESP + 0xc]         ; 0046cf82
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046cf86
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046cf8a
    PUSH EDX                            ; 0046cf8e
    CALL FUN_005a3120                   ; 0046cf8f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 0046cf94
    FISTP dword ptr [ESP + 0x14]        ; 0046cf95
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046cf99
    PUSH EBX                            ; 0046cf9d
    CALL FUN_004e56b0                   ; 0046cf9e
        ;   XREF to: 004e56b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e56b0()
    ADD ESP,0x18                        ; 0046cfa3
    ADD ESP,0xc                         ; 0046cfa6
    POP EBP                             ; 0046cfa9
    POP EBX                             ; 0046cfaa
    RET                                 ; 0046cfab
    PUSH EDI                            ; 0046cfac
        ;   Label: LAB_0046cfac
    PUSH ESI                            ; 0046cfad
    FLD double ptr [0x005bc51b]         ; 0046cfae | DAT_005bc51b
    FLD float ptr [EDX + 0x8]           ; 0046cfb4
    FMUL ST1                            ; 0046cfb7
    FLD float ptr [EDX + 0x4]           ; 0046cfb9
    FMUL ST2                            ; 0046cfbc
    FLD float ptr [EDX]                 ; 0046cfbe
    FMULP ST3                           ; 0046cfc0
    FLD float ptr [0x005bc523]          ; 0046cfc2 | DAT_005bc523
    FLD float ptr [EAX + 0x4]           ; 0046cfc8
    FMUL ST1                            ; 0046cfcb
    FLD float ptr [EAX + 0x8]           ; 0046cfcd
    FMUL ST2                            ; 0046cfd0
    FLD float ptr [EAX]                 ; 0046cfd2
    FMULP ST3                           ; 0046cfd4
    FXCH                                ; 0046cfd6
    FLD double ptr [0x005bc52b]         ; 0046cfd8 | DAT_005bc52b
    FXCH                                ; 0046cfde
    FMUL ST1                            ; 0046cfe0
    FXCH ST2                            ; 0046cfe2
    FMUL ST1                            ; 0046cfe4
    FXCH ST3                            ; 0046cfe6
    FMULP                               ; 0046cfe8
    FXCH ST4                            ; 0046cfea
    CALL FUN_005a3120                   ; 0046cfec
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 0046cff1
    CALL FUN_005a3120                   ; 0046cff3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST5                            ; 0046cff8
    CALL FUN_005a3120                   ; 0046cffa
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 0046cfff
    FISTP dword ptr [ESP + 0x8]         ; 0046d001
    FXCH ST4                            ; 0046d005
    FISTP dword ptr [ESP + 0x10]        ; 0046d007
    FXCH                                ; 0046d00b
    FISTP dword ptr [ESP + 0xc]         ; 0046d00d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046d011
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046d015
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046d019
    FXCH ST2                            ; 0046d01d
    CALL FUN_005a3120                   ; 0046d01f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0046d024
    CALL FUN_005a3120                   ; 0046d026
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 0046d02b
    FXCH ST2                            ; 0046d02c
    FISTP dword ptr [ESP + 0x10]        ; 0046d02e
    PUSH EBX                            ; 0046d032
    FXCH                                ; 0046d033
    FISTP dword ptr [ESP + 0x18]        ; 0046d035
    PUSH ESI                            ; 0046d039
    MOV EDI,dword ptr [ESP + 0x18]      ; 0046d03a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0046d03e
    PUSH EDI                            ; 0046d042
    CALL FUN_005a3120                   ; 0046d043
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EBP                            ; 0046d048
    FISTP dword ptr [ESP + 0x24]        ; 0046d049
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046d04d
    PUSH EAX                            ; 0046d051
    CALL FUN_004e56b0                   ; 0046d052
        ;   XREF to: 004e56b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e56b0()
    ADD ESP,0x18                        ; 0046d057
    POP ESI                             ; 0046d05a
    POP EDI                             ; 0046d05b
    ADD ESP,0xc                         ; 0046d05c
    POP EBP                             ; 0046d05f
    POP EBX                             ; 0046d060
    RET                                 ; 0046d061

