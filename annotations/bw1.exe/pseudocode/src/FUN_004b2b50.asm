; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b2b50(float *param_1,float *param_2,float *param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004b6f80 at 004b6fb0
;
; Referenced Globals:
;   undefined4 DAT_005fffb0
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0045f3e0
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2b50
        ;   Label: FUN_004b2b50
    PUSH ESI                            ; 004b2b51
    PUSH EDI                            ; 004b2b52
    SUB ESP,0x7c                        ; 004b2b53
    MOV EBX,dword ptr [ESP + 0x8c]      ; 004b2b56
    MOV EDX,dword ptr [ESP + 0x90]      ; 004b2b5d
    MOV ESI,dword ptr [ESP + 0x94]      ; 004b2b64
    LEA EAX,[EBX + 0x4]                 ; 004b2b6b
    CMP EAX,EDX                         ; 004b2b6e
    JZ 0x004b2b82                       ; 004b2b70
        ;   XREF to: 004b2b82 (CONDITIONAL_JUMP)  ; LAB_004b2b82
    MOV ECX,dword ptr [EDX]             ; 004b2b72
    MOV dword ptr [EAX],ECX             ; 004b2b74
    MOV ECX,dword ptr [EDX + 0x4]       ; 004b2b76
    MOV dword ptr [EAX + 0x4],ECX       ; 004b2b79
    MOV ECX,dword ptr [EDX + 0x8]       ; 004b2b7c
    MOV dword ptr [EAX + 0x8],ECX       ; 004b2b7f
    PUSH 0x3f800000                     ; 004b2b82
        ;   Label: LAB_004b2b82
    PUSH 0x3f666666                     ; 004b2b87
    CALL FUN_0040cc00                   ; 004b2b8c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2b91
    FLD float ptr [ESP + 0x80]          ; 004b2b98
    FLD float ptr [0x005fffb0]          ; 004b2b9f | DAT_005fffb0
    ADD ESP,0x8                         ; 004b2ba5
    FMULP                               ; 004b2ba8
    PUSH 0x41980000                     ; 004b2baa
    PUSH 0x0                            ; 004b2baf
    FSTP float ptr [EBX]                ; 004b2bb1
    CALL FUN_0040cc00                   ; 004b2bb3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2bb8
    FLD float ptr [ESP + 0x80]          ; 004b2bbf
    ADD ESP,0x8                         ; 004b2bc6
    LEA EDI,[ESP + 0x40]                ; 004b2bc9
    PUSH 0x3d567750                     ; 004b2bcd
    FSTP float ptr [EBX + 0x1c]         ; 004b2bd2
    PUSH 0xbd567750                     ; 004b2bd5
    MOVSD ES:EDI,ESI                    ; 004b2bda
    MOVSD ES:EDI,ESI                    ; 004b2bdb
    MOVSD ES:EDI,ESI                    ; 004b2bdc
    CALL FUN_0040cc00                   ; 004b2bdd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2be2
    FLD float ptr [ESP + 0x80]          ; 004b2be9
    ADD ESP,0x8                         ; 004b2bf0
    PUSH 0x3d567750                     ; 004b2bf3
    FADD float ptr [ESP + 0x48]         ; 004b2bf8
    PUSH 0xbd567750                     ; 004b2bfc
    FSTP float ptr [ESP + 0x4c]         ; 004b2c01
    CALL FUN_0040cc00                   ; 004b2c05
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2c0a
    FLD float ptr [ESP + 0x80]          ; 004b2c11
    ADD ESP,0x8                         ; 004b2c18
    LEA EAX,[ESP + 0x40]                ; 004b2c1b
    PUSH EAX                            ; 004b2c1f
    LEA EAX,[ESP + 0x4]                 ; 004b2c20
    FADD float ptr [ESP + 0x44]         ; 004b2c24
    PUSH EAX                            ; 004b2c28
    FSTP float ptr [ESP + 0x48]         ; 004b2c29
    CALL FUN_0045f3e0                   ; 004b2c2d
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 004b2c32
    PUSH 0x40cccccd                     ; 004b2c35
    PUSH 0x40a33333                     ; 004b2c3a
    CALL FUN_0040cc00                   ; 004b2c3f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2c44
    FLD float ptr [ESP + 0x80]          ; 004b2c4b
    ADD ESP,0x8                         ; 004b2c52
    FSTP float ptr [ESP + 0x70]         ; 004b2c55
    MOV EAX,dword ptr [ESP + 0x70]      ; 004b2c59
    LEA ESI,[ESP + 0x4c]                ; 004b2c5d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b2c61
    LEA EAX,[ESP + 0x34]                ; 004b2c65
    LEA EDI,[ESP + 0x28]                ; 004b2c69
    PUSH EAX                            ; 004b2c6d
    LEA EAX,[ESP + 0x4]                 ; 004b2c6e
    XOR EDX,EDX                         ; 004b2c72
    PUSH EAX                            ; 004b2c74
    MOV dword ptr [ESP + 0x3c],EDX      ; 004b2c75
    MOV dword ptr [ESP + 0x40],EDX      ; 004b2c79
    CALL FUN_0045f690                   ; 004b2c7d
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x54]                ; 004b2c82
    LEA EAX,[ESP + 0x30]                ; 004b2c86
    ADD ESP,0x8                         ; 004b2c8a
    LEA EDX,[EBX + 0x10]                ; 004b2c8d
    MOVSD ES:EDI,ESI                    ; 004b2c90
    MOVSD ES:EDI,ESI                    ; 004b2c91
    MOVSD ES:EDI,ESI                    ; 004b2c92
    CMP EDX,EAX                         ; 004b2c93
    JZ 0x004b2cab                       ; 004b2c95
        ;   XREF to: 004b2cab (CONDITIONAL_JUMP)  ; LAB_004b2cab
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b2c97
    MOV dword ptr [EDX],EAX             ; 004b2c9b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b2c9d
    MOV dword ptr [EDX + 0x4],EAX       ; 004b2ca1
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b2ca4
    MOV dword ptr [EDX + 0x8],EAX       ; 004b2ca8
    PUSH 0x3dcccccd                     ; 004b2cab
        ;   Label: LAB_004b2cab
    PUSH 0x0                            ; 004b2cb0
    CALL FUN_0040cc00                   ; 004b2cb2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 004b2cb7
    LEA EAX,[EBX + 0x10]                ; 004b2cbe
    FLD float ptr [ESP + 0x80]          ; 004b2cc1
    ADD ESP,0x8                         ; 004b2cc8
    FLD float ptr [EAX]                 ; 004b2ccb
    FXCH                                ; 004b2ccd
    FSTP float ptr [ESP + 0x74]         ; 004b2ccf
    FMUL float ptr [ESP + 0x74]         ; 004b2cd3
    FLD float ptr [EAX + 0x4]           ; 004b2cd7
    FMUL float ptr [ESP + 0x74]         ; 004b2cda
    FLD float ptr [EAX + 0x8]           ; 004b2cde
    FMUL float ptr [ESP + 0x74]         ; 004b2ce1
    LEA EDI,[ESP + 0x58]                ; 004b2ce5
    LEA ESI,[ESP + 0x64]                ; 004b2ce9
    LEA EAX,[EBX + 0x4]                 ; 004b2ced
    FXCH ST2                            ; 004b2cf0
    FSTP float ptr [ESP + 0x64]         ; 004b2cf2
    FSTP float ptr [ESP + 0x68]         ; 004b2cf6
    FSTP float ptr [ESP + 0x6c]         ; 004b2cfa
    MOVSD ES:EDI,ESI                    ; 004b2cfe
    MOVSD ES:EDI,ESI                    ; 004b2cff
    MOVSD ES:EDI,ESI                    ; 004b2d00
    FLD float ptr [EAX]                 ; 004b2d01
    FLD float ptr [EAX + 0x4]           ; 004b2d03
    FLD float ptr [EAX + 0x8]           ; 004b2d06
    FXCH ST2                            ; 004b2d09
    FADD float ptr [ESP + 0x58]         ; 004b2d0b
    FXCH                                ; 004b2d0f
    FADD float ptr [ESP + 0x5c]         ; 004b2d11
    FXCH ST2                            ; 004b2d15
    FADD float ptr [ESP + 0x60]         ; 004b2d17
    FXCH                                ; 004b2d1b
    FSTP float ptr [EAX]                ; 004b2d1d
    FXCH                                ; 004b2d1f
    FSTP float ptr [EAX + 0x4]          ; 004b2d21
    FSTP float ptr [EAX + 0x8]          ; 004b2d24
    MOV EAX,dword ptr [ESP + 0x98]      ; 004b2d27
    MOV dword ptr [EBX + 0x20],EAX      ; 004b2d2e
    ADD ESP,0x7c                        ; 004b2d31
    POP EDI                             ; 004b2d34
    POP ESI                             ; 004b2d35
    POP EBX                             ; 004b2d36
    RET                                 ; 004b2d37

