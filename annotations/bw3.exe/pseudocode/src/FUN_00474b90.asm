; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00474b90(int param_1,float *param_2,float param_3,undefined4 *param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053bc80 at 0053bf38
;
; Referenced Globals:
;   undefined4 DAT_005bca19
;   undefined4 DAT_005bca1d
;
; Called Functions:
;   FUN_004545f0
;   FUN_00473b60
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474b90
        ;   Label: FUN_00474b90
    PUSH ESI                            ; 00474b91
    PUSH EDI                            ; 00474b92
    PUSH EBP                            ; 00474b93
    SUB ESP,0x54                        ; 00474b94
    MOV EBP,dword ptr [ESP + 0x68]      ; 00474b97
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00474b9b
    LEA EDI,[ESP + 0x18]                ; 00474b9f
    MOV ESI,EAX                         ; 00474ba3
    MOVSD ES:EDI,ESI                    ; 00474ba5
    MOVSD ES:EDI,ESI                    ; 00474ba6
    MOVSD ES:EDI,ESI                    ; 00474ba7
    FLD float ptr [ESP + 0x1c]          ; 00474ba8
    LEA EDI,[ESP + 0xc]                 ; 00474bac
    MOV ESI,EAX                         ; 00474bb0
    FADD float ptr [0x005bca19]         ; 00474bb2 | DAT_005bca19
    MOVSD ES:EDI,ESI                    ; 00474bb8
    MOVSD ES:EDI,ESI                    ; 00474bb9
    MOVSD ES:EDI,ESI                    ; 00474bba
    FST float ptr [ESP + 0x1c]          ; 00474bbb
    FSUB float ptr [EBP + 0x14]         ; 00474bbf
    FLD1                                ; 00474bc2
    FDIV float ptr [EBP + 0x2c]         ; 00474bc4
    FLD float ptr [ESP + 0x18]          ; 00474bc7
    FSUB float ptr [EBP + 0x10]         ; 00474bcb
    FST float ptr [ESP + 0x28]          ; 00474bce
    FSUB float ptr [ESP + 0x70]         ; 00474bd2
    FLD1                                ; 00474bd6
    FDIV float ptr [EBP + 0x28]         ; 00474bd8
    FLD float ptr [ESP + 0x20]          ; 00474bdb
    FLD float ptr [ESP + 0x10]          ; 00474bdf
    FADD float ptr [0x005bca1d]         ; 00474be3 | DAT_005bca1d
    FXCH                                ; 00474be9
    FSUB float ptr [EBP + 0x18]         ; 00474beb
    FST float ptr [ESP + 0x2c]          ; 00474bee
    FSUB float ptr [ESP + 0x70]         ; 00474bf2
    FXCH                                ; 00474bf6
    FSTP float ptr [ESP + 0x10]         ; 00474bf8
    FLD1                                ; 00474bfc
    FDIV float ptr [EBP + 0x30]         ; 00474bfe
    FLD float ptr [ESP + 0x10]          ; 00474c01
    FSUB float ptr [EBP + 0x14]         ; 00474c05
    FXCH ST5                            ; 00474c08
    FSTP float ptr [ESP + 0x34]         ; 00474c0a
    FXCH ST5                            ; 00474c0e
    FMUL float ptr [ESP + 0x34]         ; 00474c10
    FXCH ST4                            ; 00474c14
    FMUL float ptr [ESP + 0x34]         ; 00474c16
    FXCH ST3                            ; 00474c1a
    FMUL ST2                            ; 00474c1c
    FXCH ST5                            ; 00474c1e
    FSTP float ptr [ESP + 0x34]         ; 00474c20
    FMUL float ptr [ESP + 0x34]         ; 00474c24
    FLD float ptr [ESP + 0x28]          ; 00474c28
    FADD float ptr [ESP + 0x70]         ; 00474c2c
    FLD float ptr [ESP + 0x2c]          ; 00474c30
    FADD float ptr [ESP + 0x70]         ; 00474c34
    FXCH                                ; 00474c38
    FMULP ST3                           ; 00474c3a
    FMUL float ptr [ESP + 0x34]         ; 00474c3c
    MOV EDX,0xf149f2ca                  ; 00474c40
    XOR EDI,EDI                         ; 00474c45
    FXCH ST4                            ; 00474c47
    CALL FUN_005a3120                   ; 00474c49
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 00474c4e
    CALL FUN_005a3120                   ; 00474c50
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 00474c55
    FISTP dword ptr [ESP + 0x4c]        ; 00474c57
    FXCH ST2                            ; 00474c5b
    FISTP dword ptr [ESP + 0x3c]        ; 00474c5d
    MOV dword ptr [ESP + 0x24],EDX      ; 00474c61
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00474c65
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00474c69
    FXCH ST3                            ; 00474c6d
    CALL FUN_005a3120                   ; 00474c6f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474c74
    CALL FUN_005a3120                   ; 00474c76
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 00474c7b
    CALL FUN_005a3120                   ; 00474c7d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 00474c82
    CALL FUN_005a3120                   ; 00474c84
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474c89
    FISTP dword ptr [ESP + 0x40]        ; 00474c8b
    FXCH ST2                            ; 00474c8f
    FISTP dword ptr [ESP + 0x48]        ; 00474c91
    FISTP dword ptr [ESP + 0x44]        ; 00474c95
    FISTP dword ptr [ESP + 0x50]        ; 00474c99
    CMP EAX,ECX                         ; 00474c9d
    JL 0x00474d69                       ; 00474c9f
        ;   XREF to: 00474d69 (CONDITIONAL_JUMP)  ; LAB_00474d69
    MOV EDX,dword ptr [ESP + 0x44]      ; 00474ca5
        ;   Label: LAB_00474ca5
    MOV ESI,dword ptr [ESP + 0x40]      ; 00474ca9
    CMP ESI,EDX                         ; 00474cad
    JG 0x00474d0d                       ; 00474caf
        ;   XREF to: 00474d0d (CONDITIONAL_JUMP)  ; LAB_00474d0d
    MOV EDX,dword ptr [ESP + 0x50]      ; 00474cb1
        ;   Label: LAB_00474cb1
    MOV EBX,dword ptr [ESP + 0x48]      ; 00474cb5
    CMP EBX,EDX                         ; 00474cb9
    JG 0x00474d04                       ; 00474cbb
        ;   XREF to: 00474d04 (CONDITIONAL_JUMP)  ; LAB_00474d04
    PUSH EBX                            ; 00474cbd
        ;   Label: LAB_00474cbd
    MOV EAX,dword ptr [ESP + 0x50]      ; 00474cbe
    PUSH EAX                            ; 00474cc2
    PUSH ESI                            ; 00474cc3
    PUSH EBP                            ; 00474cc4
    CALL FUN_00473b60                   ; 00474cc5
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00474cca
    TEST EAX,EAX                        ; 00474ccd
    JZ 0x00474cfb                       ; 00474ccf
        ;   XREF to: 00474cfb (CONDITIONAL_JUMP)  ; LAB_00474cfb
    LEA EDX,[ESP + 0x30]                ; 00474cd1
    PUSH EDX                            ; 00474cd5
    LEA EDX,[ESP + 0x4]                 ; 00474cd6
    PUSH EDX                            ; 00474cda
    LEA EDX,[ESP + 0x2c]                ; 00474cdb
    PUSH EDX                            ; 00474cdf
    LEA EDX,[ESP + 0x24]                ; 00474ce0
    PUSH dword ptr [ESP + 0x7c]         ; 00474ce4
    PUSH EDX                            ; 00474ce8
    PUSH EAX                            ; 00474ce9
    CALL FUN_004545f0                   ; 00474cea
        ;   XREF to: 004545f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004545f0()
    ADD ESP,0x18                        ; 00474cef
    TEST EAX,EAX                        ; 00474cf2
    JZ 0x00474cfb                       ; 00474cf4
        ;   XREF to: 00474cfb (CONDITIONAL_JUMP)  ; LAB_00474cfb
    MOV EDI,0x1                         ; 00474cf6
    MOV ECX,dword ptr [ESP + 0x50]      ; 00474cfb
        ;   Label: LAB_00474cfb
    INC EBX                             ; 00474cff
    CMP EBX,ECX                         ; 00474d00
    JLE 0x00474cbd                      ; 00474d02
        ;   XREF to: 00474cbd (CONDITIONAL_JUMP)  ; LAB_00474cbd
    MOV ECX,dword ptr [ESP + 0x44]      ; 00474d04
        ;   Label: LAB_00474d04
    INC ESI                             ; 00474d08
    CMP ESI,ECX                         ; 00474d09
    JLE 0x00474cb1                      ; 00474d0b
        ;   XREF to: 00474cb1 (CONDITIONAL_JUMP)  ; LAB_00474cb1
    TEST EDI,EDI                        ; 00474d0d
        ;   Label: LAB_00474d0d
    JZ 0x00474d54                       ; 00474d0f
        ;   XREF to: 00474d54 (CONDITIONAL_JUMP)  ; LAB_00474d54
    MOV EBX,dword ptr [ESP + 0x78]      ; 00474d11
    TEST EBX,EBX                        ; 00474d15
    JZ 0x00474d32                       ; 00474d17
        ;   XREF to: 00474d32 (CONDITIONAL_JUMP)  ; LAB_00474d32
    MOV EAX,ESP                         ; 00474d19
    CMP EAX,EBX                         ; 00474d1b
    JZ 0x00474d32                       ; 00474d1d
        ;   XREF to: 00474d32 (CONDITIONAL_JUMP)  ; LAB_00474d32
    MOV EAX,dword ptr [ESP]             ; 00474d1f
    MOV dword ptr [EBX],EAX             ; 00474d22
    MOV EAX,dword ptr [ESP + 0x4]       ; 00474d24
    MOV dword ptr [EBX + 0x4],EAX       ; 00474d28
    MOV EAX,dword ptr [ESP + 0x8]       ; 00474d2b
    MOV dword ptr [EBX + 0x8],EAX       ; 00474d2f
    MOV EDI,dword ptr [ESP + 0x74]      ; 00474d32
        ;   Label: LAB_00474d32
    TEST EDI,EDI                        ; 00474d36
    JZ 0x00474d40                       ; 00474d38
        ;   XREF to: 00474d40 (CONDITIONAL_JUMP)  ; LAB_00474d40
    MOV EAX,dword ptr [ESP + 0x30]      ; 00474d3a
    MOV dword ptr [EDI],EAX             ; 00474d3e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00474d40
        ;   Label: LAB_00474d40
    MOV dword ptr [ESP + 0x38],EAX      ; 00474d44
    MOV EAX,dword ptr [ESP + 0x38]      ; 00474d48
    ADD ESP,0x54                        ; 00474d4c
    POP EBP                             ; 00474d4f
    POP EDI                             ; 00474d50
    POP ESI                             ; 00474d51
    POP EBX                             ; 00474d52
    RET                                 ; 00474d53
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00474d54
        ;   Label: LAB_00474d54
    DEC EBX                             ; 00474d58
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00474d59
    MOV dword ptr [ESP + 0x4c],EBX      ; 00474d5d
    CMP EBX,ESI                         ; 00474d61
    JGE 0x00474ca5                      ; 00474d63
        ;   XREF to: 00474ca5 (CONDITIONAL_JUMP)  ; LAB_00474ca5
    MOV EDI,dword ptr [ESP + 0x74]      ; 00474d69
        ;   Label: LAB_00474d69
    TEST EDI,EDI                        ; 00474d6d
    JZ 0x00474d77                       ; 00474d6f
        ;   XREF to: 00474d77 (CONDITIONAL_JUMP)  ; LAB_00474d77
    MOV dword ptr [EDI],0x1             ; 00474d71
    MOV EBP,dword ptr [ESP + 0x78]      ; 00474d77
        ;   Label: LAB_00474d77
    TEST EBP,EBP                        ; 00474d7b
    JZ 0x00474d94                       ; 00474d7d
        ;   XREF to: 00474d94 (CONDITIONAL_JUMP)  ; LAB_00474d94
    MOV dword ptr [EBP + 0x4],0x3f800000 ; 00474d7f
    MOV dword ptr [EBP + 0x8],0x0       ; 00474d86
    MOV dword ptr [EBP],0x0             ; 00474d8d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00474d94
        ;   Label: LAB_00474d94
    MOV dword ptr [ESP + 0x38],EAX      ; 00474d98
    MOV EAX,dword ptr [ESP + 0x38]      ; 00474d9c
    ADD ESP,0x54                        ; 00474da0
    POP EBP                             ; 00474da3
    POP EDI                             ; 00474da4
    POP ESI                             ; 00474da5
    POP EBX                             ; 00474da6
    RET                                 ; 00474da7

