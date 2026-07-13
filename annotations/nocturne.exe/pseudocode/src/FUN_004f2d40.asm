; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2d40(int param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; Referenced Globals:
;   undefined4 DAT_0058d008
;   undefined4 DAT_0058d010
;   undefined4 DAT_0058d018
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2d40
        ;   Label: FUN_004f2d40
    SUB ESP,0x48                        ; 004f2d41
    MOV EBX,dword ptr [ESP + 0x50]      ; 004f2d44
    LEA EAX,[EBX + 0x150]               ; 004f2d48
    PUSH EAX                            ; 004f2d4e
    CALL FUN_00454510                   ; 004f2d4f
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004f2d54
    PUSH EBX                            ; 004f2d57
    CALL FUN_00409fc0                   ; 004f2d58
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    ADD ESP,0x4                         ; 004f2d5d
    LEA EAX,[ESP + 0x18]                ; 004f2d60
    PUSH EAX                            ; 004f2d64
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004f2d65
    PUSH EBX                            ; 004f2d6b
    CALL dword ptr [EDX + 0x14]         ; 004f2d6c
    MOV EDX,EAX                         ; 004f2d6f
    MOV ECX,EAX                         ; 004f2d71
    LEA EAX,[ESP + 0x8]                 ; 004f2d73
    ADD ESP,0x8                         ; 004f2d77
    CMP EAX,EDX                         ; 004f2d7a
    JNZ 0x004f2e1f                      ; 004f2d7c
        ;   XREF to: 004f2e1f (CONDITIONAL_JUMP)  ; LAB_004f2e1f
    LEA EAX,[ESP + 0xc]                 ; 004f2d82
        ;   Label: LAB_004f2d82
    LEA EDX,[ECX + 0xc]                 ; 004f2d86
    CMP EAX,EDX                         ; 004f2d89
    JZ 0x004f2da1                       ; 004f2d8b
        ;   XREF to: 004f2da1 (CONDITIONAL_JUMP)  ; LAB_004f2da1
    MOV EAX,dword ptr [EDX]             ; 004f2d8d
    MOV dword ptr [ESP + 0xc],EAX       ; 004f2d8f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f2d93
    MOV dword ptr [ESP + 0x10],EAX      ; 004f2d96
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f2d9a
    MOV dword ptr [ESP + 0x14],EAX      ; 004f2d9d
    FLD float ptr [ESP + 0x10]          ; 004f2da1
        ;   Label: LAB_004f2da1
    FSUB float ptr [ESP + 0x4]          ; 004f2da5
    FMUL double ptr [0x0058d008]        ; 004f2da9 | DAT_0058d008
    FSQRT                               ; 004f2daf
    FMUL double ptr [0x0058d010]        ; 004f2db1 | DAT_0058d010
    FSTP float ptr [EBX + 0x39c]        ; 004f2db7
    FLD float ptr [ESP]                 ; 004f2dbd
    FADD float ptr [ESP + 0xc]          ; 004f2dc0
    FST float ptr [ESP + 0x30]          ; 004f2dc4
    FLD float ptr [0x0058d018]          ; 004f2dc8 | DAT_0058d018
    FXCH                                ; 004f2dce
    FMUL ST1                            ; 004f2dd0
    FLD float ptr [ESP + 0x8]           ; 004f2dd2
    FLD float ptr [ESP + 0x4]           ; 004f2dd6
    FADD float ptr [ESP + 0x10]         ; 004f2dda
    FXCH                                ; 004f2dde
    FADD float ptr [ESP + 0x14]         ; 004f2de0
    FXCH                                ; 004f2de4
    FST float ptr [ESP + 0x34]          ; 004f2de6
    FMUL ST3                            ; 004f2dea
    FXCH                                ; 004f2dec
    FST float ptr [ESP + 0x38]          ; 004f2dee
    FMULP ST3                           ; 004f2df2
    LEA EDX,[EBX + 0x408]               ; 004f2df4
    LEA EAX,[ESP + 0x3c]                ; 004f2dfa
    FXCH                                ; 004f2dfe
    FSTP float ptr [ESP + 0x3c]         ; 004f2e00
    FSTP float ptr [ESP + 0x40]         ; 004f2e04
    FSTP float ptr [ESP + 0x44]         ; 004f2e08
    CMP EDX,EAX                         ; 004f2e0c
    JNZ 0x004f2e37                      ; 004f2e0e
        ;   XREF to: 004f2e37 (CONDITIONAL_JUMP)  ; LAB_004f2e37
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2e10
    MOV dword ptr [EBX + 0x40c],EAX     ; 004f2e14
    ADD ESP,0x48                        ; 004f2e1a
    POP EBX                             ; 004f2e1d
    RET                                 ; 004f2e1e
    MOV EAX,dword ptr [EDX]             ; 004f2e1f
        ;   Label: LAB_004f2e1f
    MOV dword ptr [ESP],EAX             ; 004f2e21
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f2e24
    MOV dword ptr [ESP + 0x4],EAX       ; 004f2e27
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f2e2b
    MOV dword ptr [ESP + 0x8],EAX       ; 004f2e2e
    JMP 0x004f2d82                      ; 004f2e32
        ;   XREF to: 004f2d82 (UNCONDITIONAL_JUMP)  ; LAB_004f2d82
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f2e37
        ;   Label: LAB_004f2e37
    MOV dword ptr [EDX],EAX             ; 004f2e3b
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f2e3d
    MOV dword ptr [EDX + 0x4],EAX       ; 004f2e41
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f2e44
    MOV dword ptr [EDX + 0x8],EAX       ; 004f2e48
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2e4b
    MOV dword ptr [EBX + 0x40c],EAX     ; 004f2e4f
    ADD ESP,0x48                        ; 004f2e55
    POP EBX                             ; 004f2e58
    RET                                 ; 004f2e59

