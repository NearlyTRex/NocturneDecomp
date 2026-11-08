; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00543a40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)
;
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005481d0 at 00548218
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e7193
;   TerminatedCString s_CDeformableModel_exactRa_005e71a8
;   undefined4 DAT_005f22b0
;   undefined4 DAT_005fb9a0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_020b58d4
;   undefined4 DAT_020b58d8
;   undefined4 DAT_020b58dc
;   undefined4 DAT_020b58e0
;   undefined4 DAT_020b58e4
;   undefined4 DAT_020b58e8
;   undefined4 DAT_020c4334
;   undefined4 DAT_020ccfdc
;   undefined4 DAT_020ccfe0
;   ... and 4 more
;
; Called Functions:
;   FUN_004779e0
;   FUN_00477a50
;   FUN_004e4500
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543a40
        ;   Label: FUN_00543a40
    PUSH ESI                            ; 00543a41
    PUSH EDI                            ; 00543a42
    PUSH EBP                            ; 00543a43
    MOV EBP,ESP                         ; 00543a44
    SUB ESP,0x7c                        ; 00543a46
    AND ESP,0xfffffff8                  ; 00543a49
    MOV AH,byte ptr [0x020c4334]        ; 00543a4c | DAT_020c4334
    TEST AH,0x1                         ; 00543a52
    JZ 0x00543ccf                       ; 00543a55
        ;   XREF to: 00543ccf (CONDITIONAL_JUMP)  ; LAB_00543ccf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00543a5b
        ;   Label: LAB_00543a5b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00543a5e
    SHL EAX,0x2                         ; 00543a61
    ADD EAX,EDX                         ; 00543a64
    CMP dword ptr [EAX + 0x2c],0x1388   ; 00543a66
    JLE 0x00543a92                      ; 00543a6d
        ;   XREF to: 00543a92 (CONDITIONAL_JUMP)  ; LAB_00543a92
    MOV EBX,0x5e7193                    ; 00543a6f | = "..\\core\\skeleton.cpp"
    MOV ESI,0x6e1                       ; 00543a74
    PUSH 0x5e71a8                       ; 00543a79 | = "CDeformableModel::exactRayTrace - too..."
    MOV dword ptr [0x01d046a0],EBX      ; 00543a7e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00543a84 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00543a8a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00543a8f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00543a92
        ;   Label: LAB_00543a92
    MOV EAX,dword ptr [EBP + 0x14]      ; 00543a95
    SHL EDI,0x2                         ; 00543a98
    ADD EDI,EAX                         ; 00543a9b
    MOV EDX,0x20b58d4                   ; 00543a9d
    MOV ECX,dword ptr [EBP + 0x24]      ; 00543aa2
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00543aa5
    XOR ESI,ESI                         ; 00543aa8
    TEST EBX,EBX                        ; 00543aaa
    JLE 0x00543af0                      ; 00543aac
        ;   XREF to: 00543af0 (CONDITIONAL_JUMP)  ; LAB_00543af0
    MOV EAX,ECX                         ; 00543aae
        ;   Label: LAB_00543aae
    MOV EBX,EDX                         ; 00543ab0
    FILD dword ptr [EAX]                ; 00543ab2
    FMUL float ptr [0x005fb9a0]         ; 00543ab4 | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00543aba | DAT_020b58d4 | DAT_020b58e0
    FILD dword ptr [EAX + 0x4]          ; 00543abc
    FMUL float ptr [0x005fb9a0]         ; 00543abf | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 00543ac5 | DAT_020b58d8 | DAT_020b58e4
    FILD dword ptr [EAX + 0x8]          ; 00543ac8
    FMUL float ptr [0x005fb9a0]         ; 00543acb | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00543ad1 | DAT_020b58dc | DAT_020b58e8
    INC ESI                             ; 00543ad4
    ADD EDX,0xc                         ; 00543ad5
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00543ad8
    ADD ECX,0xc                         ; 00543adb
    CMP ESI,EAX                         ; 00543ade
    JL 0x00543aae                       ; 00543ae0
        ;   XREF to: 00543aae (CONDITIONAL_JUMP)  ; LAB_00543aae
    LEA EAX,[EAX]                       ; 00543ae2
    LEA EDX,[EDX]                       ; 00543ae8
    MOV EAX,EAX                         ; 00543aee
    MOV dword ptr [ESP + 0x70],0x3f8147ae ; 00543af0
        ;   Label: LAB_00543af0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00543af8
    XOR EAX,EAX                         ; 00543afb
    MOV EBX,dword ptr [EDX + 0xc00]     ; 00543afd
    MOV dword ptr [ESP + 0x6c],EAX      ; 00543b03
    TEST EBX,EBX                        ; 00543b07
    JLE 0x00543cc4                      ; 00543b09
        ;   XREF to: 00543cc4 (CONDITIONAL_JUMP)  ; LAB_00543cc4
    MOV EDX,dword ptr [EBP + 0x18]      ; 00543b0f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00543b12
    SHL EDX,0x2                         ; 00543b15
    ADD ECX,EDX                         ; 00543b18
    MOV ESI,dword ptr [EBP + 0x14]      ; 00543b1a
    MOV dword ptr [ESP + 0x64],ECX      ; 00543b1d
    ADD EDX,ESI                         ; 00543b21
    MOV ECX,dword ptr [EBP + 0x28]      ; 00543b23
    MOV dword ptr [ESP + 0x5c],EDX      ; 00543b26
    MOV dword ptr [ESP + 0x60],ECX      ; 00543b2a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00543b2e
        ;   Label: LAB_00543b2e
    MOV EDX,dword ptr [EDX + 0xc24]     ; 00543b32
    ADD EDX,EAX                         ; 00543b38
    MOV dword ptr [ESP + 0x68],EDX      ; 00543b3a
    MOV EDX,dword ptr [ESP + 0x60]      ; 00543b3e
    TEST byte ptr [EDX],0x1             ; 00543b42
    JZ 0x00543c90                       ; 00543b45
        ;   XREF to: 00543c90 (CONDITIONAL_JUMP)  ; LAB_00543c90
    MOV EDI,dword ptr [ESP + 0x68]      ; 00543b4b
    MOV EBX,EAX                         ; 00543b4f
    CMP EAX,EDI                         ; 00543b51
    JGE 0x00543c90                      ; 00543b53
        ;   XREF to: 00543c90 (CONDITIONAL_JUMP)  ; LAB_00543c90
    IMUL EAX,EAX,0x12                   ; 00543b59
    MOV dword ptr [ESP + 0x74],EAX      ; 00543b5c
    MOV EAX,dword ptr [ESP + 0x64]      ; 00543b60
        ;   Label: LAB_00543b60
    MOV ECX,dword ptr [ESP + 0x74]      ; 00543b64
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00543b68
    ADD EAX,ECX                         ; 00543b6b
    XOR EDX,EDX                         ; 00543b6d
    MOV DX,word ptr [EAX + 0x4]         ; 00543b6f
    IMUL EDX,EDX,0xc                    ; 00543b73
    ADD EDX,0x20b58d4                   ; 00543b76
    PUSH EDX                            ; 00543b7c
    XOR EDX,EDX                         ; 00543b7d
    MOV DX,word ptr [EAX + 0x2]         ; 00543b7f
    IMUL EDX,EDX,0xc                    ; 00543b83
    ADD EDX,0x20b58d4                   ; 00543b86
    MOV AX,word ptr [EAX]               ; 00543b8c
    PUSH EDX                            ; 00543b8f
    AND EAX,0xffff                      ; 00543b90
    IMUL EAX,EAX,0xc                    ; 00543b95
    ADD EAX,0x20b58d4                   ; 00543b98
    PUSH EAX                            ; 00543b9d
    LEA EAX,[ESP + 0x18]                ; 00543b9e
    PUSH EAX                            ; 00543ba2
    CALL FUN_004779e0                   ; 00543ba3
        ;   XREF to: 004779e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004779e0()
    ADD ESP,0x10                        ; 00543ba8
    MOV ESI,dword ptr [EBP + 0x20]      ; 00543bab
    PUSH ESI                            ; 00543bae
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00543baf
    PUSH EDI                            ; 00543bb2
    LEA EAX,[ESP + 0x14]                ; 00543bb3
    PUSH EAX                            ; 00543bb7
    CALL FUN_00477a50                   ; 00543bb8
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00477a50()
    MOV dword ptr [ESP + 0x84],EAX      ; 00543bbd
    FLD float ptr [ESP + 0x84]          ; 00543bc4
    ADD ESP,0xc                         ; 00543bcb
    FST float ptr [ESP + 0x8]           ; 00543bce
    FCOMP float ptr [ESP + 0x70]        ; 00543bd2
    FNSTSW AX                           ; 00543bd6
    SAHF                                ; 00543bd8
    JNC 0x00543c78                      ; 00543bd9
        ;   XREF to: 00543c78 (CONDITIONAL_JUMP)  ; LAB_00543c78
    FLD float ptr [ESP + 0x8]           ; 00543bdf
    FLDZ                                ; 00543be3
    FXCH                                ; 00543be5
    FSTP double ptr [ESP]               ; 00543be7
    FCOMP double ptr [ESP]              ; 00543bea
    FNSTSW AX                           ; 00543bed
    SAHF                                ; 00543bef
    JA 0x00543c78                       ; 00543bf0
        ;   XREF to: 00543c78 (CONDITIONAL_JUMP)  ; LAB_00543c78
    FLD1                                ; 00543bf6
    FCOMP double ptr [ESP]              ; 00543bf8
    FNSTSW AX                           ; 00543bfb
    SAHF                                ; 00543bfd
    JC 0x00543c78                       ; 00543bfe
        ;   XREF to: 00543c78 (CONDITIONAL_JUMP)  ; LAB_00543c78
    FLD float ptr [ESP + 0x30]          ; 00543c00
    FLD float ptr [ESP + 0x34]          ; 00543c04
    FLD float ptr [ESP + 0x38]          ; 00543c08
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543c0c
    LEA EDI,[ESP + 0x50]                ; 00543c10
    LEA ESI,[ESP + 0x44]                ; 00543c14
    FXCH ST2                            ; 00543c18
    FCHS                                ; 00543c1a
    FXCH                                ; 00543c1c
    FCHS                                ; 00543c1e
    FXCH ST2                            ; 00543c20
    FCHS                                ; 00543c22
    FXCH                                ; 00543c24
    FSTP float ptr [ESP + 0x44]         ; 00543c26
    FXCH                                ; 00543c2a
    FSTP float ptr [ESP + 0x48]         ; 00543c2c
    FSTP float ptr [ESP + 0x4c]         ; 00543c30
    MOV dword ptr [ESP + 0x70],EAX      ; 00543c34
    LEA EAX,[ESP + 0x50]                ; 00543c38
    MOVSD ES:EDI,ESI                    ; 00543c3c
    MOVSD ES:EDI,ESI                    ; 00543c3d
    MOVSD ES:EDI,ESI                    ; 00543c3e
    CMP EAX,0x20ccfe0                   ; 00543c3f
    JZ 0x00543c61                       ; 00543c44
        ;   XREF to: 00543c61 (CONDITIONAL_JUMP)  ; LAB_00543c61
    MOV EAX,dword ptr [ESP + 0x50]      ; 00543c46
    MOV [0x020ccfe0],EAX                ; 00543c4a | DAT_020ccfe0
    MOV EAX,dword ptr [ESP + 0x54]      ; 00543c4f
    MOV [0x020ccfe4],EAX                ; 00543c53 | DAT_020ccfe4
    MOV EAX,dword ptr [ESP + 0x58]      ; 00543c58
    MOV [0x020ccfe8],EAX                ; 00543c5c | DAT_020ccfe8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00543c61
        ;   Label: LAB_00543c61
    MOV [0x020ccfdc],EAX                ; 00543c65 | DAT_020ccfdc
    MOV EAX,dword ptr [EBP + 0x18]      ; 00543c6a
    MOV dword ptr [0x020ccff0],EBX      ; 00543c6d | DAT_020ccff0
    MOV [0x020ccfec],EAX                ; 00543c73 | DAT_020ccfec
    MOV EAX,dword ptr [ESP + 0x74]      ; 00543c78
        ;   Label: LAB_00543c78
    MOV EDX,dword ptr [ESP + 0x68]      ; 00543c7c
    ADD EAX,0x12                        ; 00543c80
    INC EBX                             ; 00543c83
    MOV dword ptr [ESP + 0x74],EAX      ; 00543c84
    CMP EBX,EDX                         ; 00543c88
    JL 0x00543b60                       ; 00543c8a
        ;   XREF to: 00543b60 (CONDITIONAL_JUMP)  ; LAB_00543b60
    MOV EAX,dword ptr [ESP + 0x68]      ; 00543c90
        ;   Label: LAB_00543c90
    MOV ESI,dword ptr [ESP + 0x60]      ; 00543c94
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00543c98
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00543c9c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00543ca0
    ADD ESI,0x4                         ; 00543ca3
    ADD EDI,0x60                        ; 00543ca6
    INC EDX                             ; 00543ca9
    MOV EBX,dword ptr [ECX + 0xc00]     ; 00543caa
    MOV dword ptr [ESP + 0x60],ESI      ; 00543cb0
    MOV dword ptr [ESP + 0x5c],EDI      ; 00543cb4
    MOV dword ptr [ESP + 0x6c],EDX      ; 00543cb8
    CMP EDX,EBX                         ; 00543cbc
    JL 0x00543b2e                       ; 00543cbe
        ;   XREF to: 00543b2e (CONDITIONAL_JUMP)  ; LAB_00543b2e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00543cc4
        ;   Label: LAB_00543cc4
    MOV ESP,EBP                         ; 00543cc8
    POP EBP                             ; 00543cca
    POP EDI                             ; 00543ccb
    POP ESI                             ; 00543ccc
    POP EBX                             ; 00543ccd
    RET                                 ; 00543cce
    PUSH 0x5f22b0                       ; 00543ccf | DAT_005f22b0
        ;   Label: LAB_00543ccf
    MOV DL,AH                           ; 00543cd4
    PUSH 0x1388                         ; 00543cd6
    OR DL,0x1                           ; 00543cdb
    PUSH 0x20b58d4                      ; 00543cde | DAT_020b58d4
    MOV byte ptr [0x020c4334],DL        ; 00543ce3 | DAT_020c4334
    CALL FUN_005b7f5f                   ; 00543ce9
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00543cee
    JMP 0x00543a5b                      ; 00543cf1
        ;   XREF to: 00543a5b (UNCONDITIONAL_JUMP)  ; LAB_00543a5b

