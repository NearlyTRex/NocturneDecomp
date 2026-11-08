; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1e10(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4a89
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_0040ce40
;   FUN_004625a0
;   FUN_004a3af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1e10
        ;   Label: FUN_004d1e10
    PUSH ESI                            ; 004d1e11
    PUSH EDI                            ; 004d1e12
    SUB ESP,0x30                        ; 004d1e13
    MOV EBX,dword ptr [ESP + 0x40]      ; 004d1e16
    FLD1                                ; 004d1e1a
    LEA EDX,[EBX + 0x20]                ; 004d1e1c
    LEA EDI,[ESP + 0xc]                 ; 004d1e1f
    MOV ESI,ESP                         ; 004d1e23
    MOV EAX,dword ptr [EDX]             ; 004d1e25
    FADD float ptr [EDX + 0x4]          ; 004d1e27
    MOV dword ptr [ESP],EAX             ; 004d1e2a
    FSTP float ptr [ESP + 0x4]          ; 004d1e2d
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d1e31
    LEA EDX,[ESP + 0x18]                ; 004d1e34
    MOV dword ptr [ESP + 0x8],EAX       ; 004d1e38
    LEA EAX,[ESP + 0xc]                 ; 004d1e3c
    MOVSD ES:EDI,ESI                    ; 004d1e40
    MOVSD ES:EDI,ESI                    ; 004d1e41
    MOVSD ES:EDI,ESI                    ; 004d1e42
    CMP EDX,EAX                         ; 004d1e43
    JZ 0x004d1e5f                       ; 004d1e45
        ;   XREF to: 004d1e5f (CONDITIONAL_JUMP)  ; LAB_004d1e5f
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d1e47
    MOV dword ptr [ESP + 0x18],EAX      ; 004d1e4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d1e4f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d1e53
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d1e57
    MOV dword ptr [ESP + 0x20],EAX      ; 004d1e5b
    PUSH 0x3                            ; 004d1e5f
        ;   Label: LAB_004d1e5f
    PUSH 0x0                            ; 004d1e61
    PUSH 0x1                            ; 004d1e63
    PUSH 0x2cfd900                      ; 004d1e65
    LEA EAX,[ESP + 0x28]                ; 004d1e6a
    PUSH EAX                            ; 004d1e6e
    MOV EDX,dword ptr [0x005fc5a0]      ; 004d1e6f | DAT_005fc5a0
    PUSH EDX                            ; 004d1e75
    CALL FUN_004a3af0                   ; 004d1e76
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3af0()
    ADD ESP,0x18                        ; 004d1e7b
    LEA EAX,[EBX + 0x158]               ; 004d1e7e
    PUSH EAX                            ; 004d1e84
    CALL FUN_004625a0                   ; 004d1e85
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    ADD ESP,0x4                         ; 004d1e8a
    FLD float ptr [ESP + 0x44]          ; 004d1e8d
    FMUL float ptr [0x005c4a89]         ; 004d1e91 | DAT_005c4a89
    PUSH 0x3f866666                     ; 004d1e97
    MOV EAX,dword ptr [EAX + 0x100]     ; 004d1e9c
    PUSH 0x3f733333                     ; 004d1ea2
    LEA ESI,[EAX + -0x1]                ; 004d1ea7
    FSTP float ptr [ESP + 0x2c]         ; 004d1eaa
    CALL FUN_0040ce40                   ; 004d1eae
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x34],EAX      ; 004d1eb3
    FLD float ptr [ESP + 0x34]          ; 004d1eb7
    ADD ESP,0x8                         ; 004d1ebb
    MOV dword ptr [ESP + 0x2c],ESI      ; 004d1ebe
    FMUL float ptr [ESP + 0x24]         ; 004d1ec2
    FILD dword ptr [ESP + 0x2c]         ; 004d1ec6
    FXCH                                ; 004d1eca
    FADD float ptr [EBX + 0x2dc]        ; 004d1ecc
    FXCH                                ; 004d1ed2
    FSTP float ptr [ESP + 0x28]         ; 004d1ed4
    FST float ptr [EBX + 0x2dc]         ; 004d1ed8
    FCOMP float ptr [ESP + 0x28]        ; 004d1ede
    FNSTSW AX                           ; 004d1ee2
    SAHF                                ; 004d1ee4
    JNC 0x004d1eee                      ; 004d1ee5
        ;   XREF to: 004d1eee (CONDITIONAL_JUMP)  ; LAB_004d1eee
    ADD ESP,0x30                        ; 004d1ee7
    POP EDI                             ; 004d1eea
    POP ESI                             ; 004d1eeb
    POP EBX                             ; 004d1eec
    RET                                 ; 004d1eed
    FLD float ptr [EBX + 0x2dc]         ; 004d1eee
        ;   Label: LAB_004d1eee
    FSUB float ptr [ESP + 0x28]         ; 004d1ef4
    FSTP float ptr [EBX + 0x2dc]        ; 004d1ef8
    ADD ESP,0x30                        ; 004d1efe
    POP EDI                             ; 004d1f01
    POP ESI                             ; 004d1f02
    POP EBX                             ; 004d1f03
    RET                                 ; 004d1f04

