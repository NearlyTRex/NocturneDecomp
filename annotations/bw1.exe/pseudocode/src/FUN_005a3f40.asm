; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3f40(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8ba0
;   undefined4 DAT_005f8ba4
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00468860
;   FUN_00468950
;   FUN_004a0410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3f40
        ;   Label: FUN_005a3f40
    SUB ESP,0x8                         ; 005a3f41
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a3f44
    PUSH EBX                            ; 005a3f48
    CALL FUN_004a0410                   ; 005a3f49
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 005a3f4e
    ADD EAX,0xc26c                      ; 005a3f51
    PUSH EAX                            ; 005a3f56
    CALL FUN_00468860                   ; 005a3f57
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    LEA EBX,[EAX + 0xffff3d94]          ; 005a3f5c
    ADD ESP,0x4                         ; 005a3f62
    MOV dword ptr [EBX + 0x154],0x607624 ; 005a3f65
    PUSH 0x3f8ccccd                     ; 005a3f6f
    MOV dword ptr [EBX + 0xc268],0x0    ; 005a3f74
    PUSH 0x3f666666                     ; 005a3f7e
    MOV dword ptr [EBX + 0xc3ec],0x0    ; 005a3f83
    CALL FUN_0040cc00                   ; 005a3f8d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a3f92
    FLD float ptr [ESP + 0xc]           ; 005a3f96
    ADD ESP,0x8                         ; 005a3f9a
    PUSH 0x5f8b97                       ; 005a3f9d
    LEA EAX,[EBX + 0xc26c]              ; 005a3fa2
    PUSH EAX                            ; 005a3fa8
    FSTP float ptr [EBX + 0xc3e8]       ; 005a3fa9
    CALL FUN_00468950                   ; 005a3faf
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 005a3fb4
    PUSH 0x3f8ccccd                     ; 005a3fb7
    MOV dword ptr [EBX + 0xc400],0x40a00000 ; 005a3fbc
    PUSH 0x3f666666                     ; 005a3fc6
    MOV dword ptr [EBX + 0xc3fc],0x41700000 ; 005a3fcb
    CALL FUN_0040cc00                   ; 005a3fd5
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a3fda
    FLD float ptr [ESP + 0xc]           ; 005a3fde
    ADD ESP,0x8                         ; 005a3fe2
    FMUL float ptr [0x005f8ba0]         ; 005a3fe5 | DAT_005f8ba0
    PUSH 0x3f8ccccd                     ; 005a3feb
    PUSH 0x3f666666                     ; 005a3ff0
    FSTP float ptr [EBX + 0xc408]       ; 005a3ff5
    CALL FUN_0040cc00                   ; 005a3ffb
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 005a4000
    FLD float ptr [ESP + 0xc]           ; 005a4004
    ADD ESP,0x8                         ; 005a4008
    FMUL float ptr [0x005f8ba4]         ; 005a400b | DAT_005f8ba4
    PUSH 0x3f800000                     ; 005a4011
    FSTP float ptr [ESP + 0x4]          ; 005a4016
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a401a
    PUSH 0x0                            ; 005a401e
    MOV dword ptr [EBX + 0xc404],EAX    ; 005a4020
    CALL FUN_0040cc00                   ; 005a4026
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBX + 0xc410],0x0    ; 005a402b
    MOV dword ptr [EBX + 0xc414],0x0    ; 005a4035
    MOV dword ptr [EBX + 0xc424],0x0    ; 005a403f
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005a4049
    MOV dword ptr [EBX + 0xc49c],0x0    ; 005a4053
    MOV byte ptr [EBX + 0xc428],0x0     ; 005a405d
    MOV dword ptr [EBX + 0xc48c],0x41700000 ; 005a4064
    MOV dword ptr [EBX + 0xc490],0x41f00000 ; 005a406e
    MOV dword ptr [ESP + 0xc],EAX       ; 005a4078
    MOV dword ptr [EBX + 0xc498],0x0    ; 005a407c
    FLD float ptr [ESP + 0xc]           ; 005a4086
    MOV EAX,EBX                         ; 005a408a
    FSTP float ptr [EBX + 0xc40c]       ; 005a408c
    ADD ESP,0x8                         ; 005a4092
    ADD ESP,0x8                         ; 005a4095
    POP EBX                             ; 005a4098
    RET                                 ; 005a4099

