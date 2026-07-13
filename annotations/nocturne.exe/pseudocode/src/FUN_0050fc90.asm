; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050fc90(int param_1)
;
;
; Called Functions:
;   FUN_0050ffe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fc90
        ;   Label: FUN_0050fc90
    SUB ESP,0x2c                        ; 0050fc91
    MOV EBX,dword ptr [ESP + 0x34]      ; 0050fc94
    FLD float ptr [EBX + 0x15f2dc]      ; 0050fc98
    FCOMP float ptr [EBX + 0x15f2e0]    ; 0050fc9e
    FNSTSW AX                           ; 0050fca4
    SAHF                                ; 0050fca6
    JNC 0x0050fdbc                      ; 0050fca7
        ;   XREF to: 0050fdbc (CONDITIONAL_JUMP)  ; LAB_0050fdbc
    PUSH EDI                            ; 0050fcad
    PUSH ESI                            ; 0050fcae
    LEA ESI,[EBX + 0x14cd40]            ; 0050fcaf
    LEA EAX,[EBX + 0x15f2e4]            ; 0050fcb5
    CMP ESI,EAX                         ; 0050fcbb
    JZ 0x0050fccf                       ; 0050fcbd
        ;   XREF to: 0050fccf (CONDITIONAL_JUMP)  ; LAB_0050fccf
    MOV EDX,dword ptr [EAX]             ; 0050fcbf
    MOV dword ptr [ESI],EDX             ; 0050fcc1
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050fcc3
    MOV dword ptr [ESI + 0x4],EDX       ; 0050fcc6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050fcc9
    MOV dword ptr [ESI + 0x8],EDX       ; 0050fccc
    LEA EDI,[EBX + 0x14cd34]            ; 0050fccf
        ;   Label: LAB_0050fccf
    PUSH dword ptr [EBX + 0x15f2e0]     ; 0050fcd5
    PUSH EDI                            ; 0050fcdb
    LEA ESI,[EBX + 0x14cd28]            ; 0050fcdc
    PUSH ESI                            ; 0050fce2
    PUSH dword ptr [EBX + 0x15f2dc]     ; 0050fce3
    MOV EAX,dword ptr [EBX + 0x15f2f0]  ; 0050fce9
    PUSH EBX                            ; 0050fcef
    MOV dword ptr [EBX + 0x14cd4c],EAX  ; 0050fcf0
    CALL FUN_0050ffe0                   ; 0050fcf6
        ;   XREF to: 0050ffe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ffe0()
    MOV dword ptr [ESP + 0x44],EAX      ; 0050fcfb
    MOV EAX,dword ptr [ESP + 0x44]      ; 0050fcff
    MOV dword ptr [EBX + 0x15f2dc],EAX  ; 0050fd03
    ADD ESP,0x14                        ; 0050fd09
    FLD float ptr [EBX + 0x15f2dc]      ; 0050fd0c
    FLD1                                ; 0050fd12
    FCOMPP                              ; 0050fd14
    FNSTSW AX                           ; 0050fd16
    SAHF                                ; 0050fd18
    JC 0x0050fda7                       ; 0050fd19
        ;   XREF to: 0050fda7 (CONDITIONAL_JUMP)  ; LAB_0050fda7
    FLD float ptr [EDI]                 ; 0050fd1f
    FSUB float ptr [ESI]                ; 0050fd21
    FSTP float ptr [ESP + 0x14]         ; 0050fd23
    FLD float ptr [EDI + 0x4]           ; 0050fd27
    FSUB float ptr [ESI + 0x4]          ; 0050fd2a
    LEA EAX,[EBX + 0x15f2dc]            ; 0050fd2d
    FSTP float ptr [ESP + 0x18]         ; 0050fd33
    FLD float ptr [EDI + 0x8]           ; 0050fd37
    FSUB float ptr [ESI + 0x8]          ; 0050fd3a
    FLD float ptr [ESP + 0x14]          ; 0050fd3d
    FXCH                                ; 0050fd41
    FSTP float ptr [ESP + 0x1c]         ; 0050fd43
    FMUL float ptr [EAX]                ; 0050fd47
    FLD float ptr [ESP + 0x18]          ; 0050fd49
    FXCH                                ; 0050fd4d
    FSTP float ptr [ESP + 0x20]         ; 0050fd4f
    FMUL float ptr [EAX]                ; 0050fd53
    FLD float ptr [ESP + 0x1c]          ; 0050fd55
    FXCH                                ; 0050fd59
    FSTP float ptr [ESP + 0x24]         ; 0050fd5b
    FMUL float ptr [EAX]                ; 0050fd5f
    FSTP float ptr [ESP + 0x28]         ; 0050fd61
    FLD float ptr [ESI]                 ; 0050fd65
    FADD float ptr [ESP + 0x20]         ; 0050fd67
    FSTP float ptr [ESP + 0x8]          ; 0050fd6b
    FLD float ptr [ESI + 0x4]           ; 0050fd6f
    FADD float ptr [ESP + 0x24]         ; 0050fd72
    LEA EAX,[ESP + 0x8]                 ; 0050fd76
    FSTP float ptr [ESP + 0xc]          ; 0050fd7a
    FLD float ptr [ESI + 0x8]           ; 0050fd7e
    FADD float ptr [ESP + 0x28]         ; 0050fd81
    LEA ESI,[EBX + 0x14cd50]            ; 0050fd85
    FSTP float ptr [ESP + 0x10]         ; 0050fd8b
    CMP ESI,EAX                         ; 0050fd8f
    JZ 0x0050fda7                       ; 0050fd91
        ;   XREF to: 0050fda7 (CONDITIONAL_JUMP)  ; LAB_0050fda7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050fd93
    MOV dword ptr [ESI],EAX             ; 0050fd97
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050fd99
    MOV dword ptr [ESI + 0x4],EAX       ; 0050fd9d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050fda0
    MOV dword ptr [ESI + 0x8],EAX       ; 0050fda4
    MOV EAX,dword ptr [EBX + 0x15f2dc]  ; 0050fda7
        ;   Label: LAB_0050fda7
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050fdad
    POP ESI                             ; 0050fdb1
    POP EDI                             ; 0050fdb2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050fdb3
    ADD ESP,0x2c                        ; 0050fdb7
    POP EBX                             ; 0050fdba
    RET                                 ; 0050fdbb
    MOV dword ptr [ESP + 0x24],0x40000000 ; 0050fdbc
        ;   Label: LAB_0050fdbc
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050fdc4
    ADD ESP,0x2c                        ; 0050fdc8
    POP EBX                             ; 0050fdcb
    RET                                 ; 0050fdcc

