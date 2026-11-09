; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_0043fce0(int scanline_y,int x_start,int x_end)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
;
; Referenced Globals:
;   undefined4 DAT_00b6679c
;   undefined4 DAT_00b667a0
;   undefined4 DAT_013087d4
;   undefined4 DAT_013087e0
;   undefined4 DAT_013087ec
;   undefined4 DAT_013087f8
;   undefined4 DAT_01308800
;
; Called Functions:
;   core_dcamera.cpp_FUN_0043cbe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043fce0
        ;   Label: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_0043fce0
    PUSH ESI                            ; 0043fce1
    PUSH EDI                            ; 0043fce2
    PUSH EBP                            ; 0043fce3
    MOV EBP,ESP                         ; 0043fce4
    SUB ESP,0x2c                        ; 0043fce6
    AND ESP,0xfffffff8                  ; 0043fce9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043fcec
    MOV EAX,EDI                         ; 0043fcef
    SHL EAX,0x8                         ; 0043fcf1
    MOV ECX,0x91e6d4                    ; 0043fcf4
    MOV ESI,EAX                         ; 0043fcf9
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043fcfb
    SHL ESI,0x4                         ; 0043fcfe
    LEA EBX,[EDX*0x4 + 0x0]             ; 0043fd01
    SUB ESI,EAX                         ; 0043fd08
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043fd0a
    SUB EBX,EDX                         ; 0043fd11
    ADD EAX,EDI                         ; 0043fd13
    SHL EBX,0x2                         ; 0043fd15
    SHL EAX,0x6                         ; 0043fd18
    ADD ECX,ESI                         ; 0043fd1b
    ADD EAX,0xaf5218                    ; 0043fd1d
    ADD ECX,EBX                         ; 0043fd22
    ADD EDX,EAX                         ; 0043fd24
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043fd26
    MOV dword ptr [ESP + 0x28],EDX      ; 0043fd2d
    ADD EAX,EDI                         ; 0043fd31
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043fd33
    SHL EAX,0x8                         ; 0043fd36
    SHL EDX,0x2                         ; 0043fd39
    ADD EAX,0x14c3cd0                   ; 0043fd3c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0043fd41
    ADD EAX,EDX                         ; 0043fd45
    MOV CL,byte ptr [0x01308800]        ; 0043fd47 | DAT_01308800
    MOV dword ptr [ESP + 0x24],EAX      ; 0043fd4d
    MOV EDX,EDI                         ; 0043fd51
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043fd53
    SHL EDX,CL                          ; 0043fd56
    SHL EAX,CL                          ; 0043fd58
    MOV EDX,dword ptr [EDX*0x4 + 0x1c2b64c] ; 0043fd5a
    SHL EAX,0x2                         ; 0043fd61
    ADD ESI,0xa005d4                    ; 0043fd64
    ADD EDX,EAX                         ; 0043fd6a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043fd6c
    MOV dword ptr [ESP + 0x20],EDX      ; 0043fd6f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0043fd73
    ADD EBX,ESI                         ; 0043fd76
    CMP EAX,EDX                         ; 0043fd78
    JGE 0x0043fedc                      ; 0043fd7a
        ;   XREF to: 0043fedc (CONDITIONAL_JUMP)  ; LAB_0043fedc
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043fd80
        ;   Label: LAB_0043fd80
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043fd84
    MOV ESI,dword ptr [EDX]             ; 0043fd88
    CMP ESI,dword ptr [EAX]             ; 0043fd8a
    JBE 0x0043fe8e                      ; 0043fd8c
        ;   XREF to: 0043fe8e (CONDITIONAL_JUMP)  ; LAB_0043fe8e
    FLD float ptr [EBX + 0x4]           ; 0043fd92
    FMUL float ptr [0x013087ec]         ; 0043fd95 | DAT_013087ec
    FLD float ptr [EBX]                 ; 0043fd9b
    FMUL float ptr [0x013087e0]         ; 0043fd9d | DAT_013087e0
    FADDP                               ; 0043fda3
    FLD float ptr [EBX + 0x8]           ; 0043fda5
    FMUL float ptr [0x013087f8]         ; 0043fda8 | DAT_013087f8
    FADDP                               ; 0043fdae
    FLDZ                                ; 0043fdb0
    FCOMPP                              ; 0043fdb2
    FNSTSW AX                           ; 0043fdb4
    SAHF                                ; 0043fdb6
    JA 0x0043fe8e                       ; 0043fdb7
        ;   XREF to: 0043fe8e (CONDITIONAL_JUMP)  ; LAB_0043fe8e
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043fdbd
    PUSH EDI                            ; 0043fdc1
    MOV EAX,[0x013087d4]                ; 0043fdc2 | DAT_013087d4
    PUSH EAX                            ; 0043fdc7
    LEA ESI,[ESP + 0x14]                ; 0043fdc8
    LEA EDI,[ESP + 0x8]                 ; 0043fdcc
    CALL core_dcamera.cpp_FUN_0043cbe0  ; 0043fdd0
        ;   XREF to: 0043cbe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043cbe0()
    LEA ESI,[ESP + 0x14]                ; 0043fdd5
    ADD ESP,0x8                         ; 0043fdd9
    MOVSD ES:EDI,ESI                    ; 0043fddc
    MOVSD ES:EDI,ESI                    ; 0043fddd
    MOVSD ES:EDI,ESI                    ; 0043fdde
    CMP dword ptr [ESP + 0x8],0x0       ; 0043fddf
    JLE 0x0043fe8e                      ; 0043fde4
        ;   XREF to: 0043fe8e (CONDITIONAL_JUMP)  ; LAB_0043fe8e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043fdea
    MOV EAX,[0x013087d4]                ; 0043fdee | DAT_013087d4
    SAR ESI,0x10                        ; 0043fdf3
    IMUL ESI,dword ptr [EAX + 0x1cc0]   ; 0043fdf6
    MOV EDX,dword ptr [ESP]             ; 0043fdfd
    SAR EDX,0x10                        ; 0043fe00
    ADD EDX,ESI                         ; 0043fe03
    MOV ESI,dword ptr [EAX + 0x2f94]    ; 0043fe05
    MOV DX,word ptr [ESI + EDX*0x2]     ; 0043fe0b
    MOV ESI,dword ptr [0x00b6679c]      ; 0043fe0f | DAT_00b6679c
    AND EDX,0xffff                      ; 0043fe15
    CMP EDX,ESI                         ; 0043fe1b
    JGE 0x0043fe8e                      ; 0043fe1d
        ;   XREF to: 0043fe8e (CONDITIONAL_JUMP)  ; LAB_0043fe8e
    MOV EDI,dword ptr [ESP + 0x8]       ; 0043fe1f
    LEA ESI,[EDX + 0x80]                ; 0043fe23
    CMP ESI,EDI                         ; 0043fe29
    JLE 0x0043fe8e                      ; 0043fe2b
        ;   XREF to: 0043fe8e (CONDITIONAL_JUMP)  ; LAB_0043fe8e
    MOV ESI,dword ptr [ESP]             ; 0043fe2d
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 0043fe30
    SAR ESI,CL                          ; 0043fe36
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 0043fe38
    AND ECX,ESI                         ; 0043fe3e
    MOV ESI,dword ptr [ESP + 0x4]       ; 0043fe40
    MOV dword ptr [ESP + 0x18],ECX      ; 0043fe44
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 0043fe48
    SAR ESI,CL                          ; 0043fe4e
    AND ESI,dword ptr [EAX + 0x1c68]    ; 0043fe50
    MOV CL,byte ptr [EAX + 0x1c60]      ; 0043fe56
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043fe5c
    SHL ESI,CL                          ; 0043fe60
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 0043fe62
    ADD ESI,EDI                         ; 0043fe68
    MOVZX ESI,byte ptr [ESI + EAX*0x1]  ; 0043fe6a
    MOV EAX,[0x00b6679c]                ; 0043fe6e | DAT_00b6679c
    SUB EAX,EDX                         ; 0043fe73
    MOV EDX,EAX                         ; 0043fe75
    IMUL EDX,ESI                        ; 0043fe77
    MOV CL,byte ptr [0x00b667a0]        ; 0043fe7a | DAT_00b667a0
    SAR EDX,CL                          ; 0043fe80
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043fe82
    XOR EAX,EAX                         ; 0043fe86
    MOV AL,byte ptr [ECX]               ; 0043fe88
    ADD EAX,EDX                         ; 0043fe8a
    MOV byte ptr [ECX],AL               ; 0043fe8c
    MOV EAX,0x1                         ; 0043fe8e
        ;   Label: LAB_0043fe8e
    MOV ESI,dword ptr [ESP + 0x24]      ; 0043fe93
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043fe97
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043fe9b
    MOV CL,byte ptr [0x01308800]        ; 0043fe9e | DAT_01308800
    ADD EBX,0xc                         ; 0043fea4
    ADD ESI,0x4                         ; 0043fea7
    ADD EDI,0xc                         ; 0043feaa
    INC EDX                             ; 0043fead
    SHL EAX,CL                          ; 0043feae
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043feb0
    SHL EAX,0x2                         ; 0043feb4
    MOV dword ptr [ESP + 0x24],ESI      ; 0043feb7
    MOV dword ptr [ESP + 0x1c],EDI      ; 0043febb
    MOV dword ptr [EBP + 0x18],EDX      ; 0043febf
    ADD ECX,EAX                         ; 0043fec2
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043fec4
    MOV dword ptr [ESP + 0x20],ECX      ; 0043fec8
    INC EAX                             ; 0043fecc
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0043fecd
    MOV dword ptr [ESP + 0x28],EAX      ; 0043fed0
    CMP EDX,ECX                         ; 0043fed4
    JL 0x0043fd80                       ; 0043fed6
        ;   XREF to: 0043fd80 (CONDITIONAL_JUMP)  ; LAB_0043fd80
    MOV ESP,EBP                         ; 0043fedc
        ;   Label: LAB_0043fedc
    POP EBP                             ; 0043fede
    POP EDI                             ; 0043fedf
    POP ESI                             ; 0043fee0
    POP EBX                             ; 0043fee1
    RET                                 ; 0043fee2

