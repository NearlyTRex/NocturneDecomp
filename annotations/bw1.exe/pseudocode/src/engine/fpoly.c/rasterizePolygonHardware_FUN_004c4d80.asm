; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0 at 00405946
;   engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405850 at 00405899
;
; Referenced Globals:
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01cc8ce8
;   undefined4 DAT_01cc8cec
;   undefined4 DAT_01cc8d24
;   undefined4 DAT_01cc906c
;   undefined4 DAT_01cc9070
;
; Called Functions:
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4d80
        ;   Label: engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80
    PUSH ESI                            ; 004c4d81
    PUSH EDI                            ; 004c4d82
    PUSH EBP                            ; 004c4d83
    SUB ESP,0x14                        ; 004c4d84
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004c4d87
    MOV EAX,[0x0061b49c]                ; 004c4d8b | DAT_0061b49c
    XOR EDX,EDX                         ; 004c4d90
    XOR EBP,EBP                         ; 004c4d92
    MOV [0x01cc906c],EAX                ; 004c4d94 | DAT_01cc906c
    MOV dword ptr [0x01cc9070],EDX      ; 004c4d99 | DAT_01cc9070
    MOV dword ptr [ESP + 0x4],EDX       ; 004c4d9f
    TEST EBX,EBX                        ; 004c4da3
    JLE 0x004c4dfb                      ; 004c4da5
        ;   XREF to: 004c4dfb (CONDITIONAL_JUMP)  ; LAB_004c4dfb
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c4da7
    MOV dword ptr [ESP],EAX             ; 004c4dab
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4dae
        ;   Label: LAB_004c4dae
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004c4db2
    INC EAX                             ; 004c4db6
    CMP EAX,ECX                         ; 004c4db7
    JL 0x004c4dbd                       ; 004c4db9
        ;   XREF to: 004c4dbd (CONDITIONAL_JUMP)  ; LAB_004c4dbd
    XOR EAX,EAX                         ; 004c4dbb
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c4dbd
        ;   Label: LAB_004c4dbd
    SHL EAX,0x2                         ; 004c4dc1
    ADD EAX,EBX                         ; 004c4dc4
    MOV EBX,dword ptr [ESP]             ; 004c4dc6
    MOV EDI,dword ptr [EAX]             ; 004c4dc9
    MOV EBX,dword ptr [EBX]             ; 004c4dcb
    MOV EAX,dword ptr [EDI + 0x14]      ; 004c4dcd
    MOV EDX,dword ptr [EBX + 0x14]      ; 004c4dd0
    SAR EAX,0x10                        ; 004c4dd3
    SAR EDX,0x10                        ; 004c4dd6
    CMP EDX,EAX                         ; 004c4dd9
    JNZ 0x004c4f22                      ; 004c4ddb
        ;   XREF to: 004c4f22 (CONDITIONAL_JUMP)  ; LAB_004c4f22
    MOV ESI,dword ptr [ESP]             ; 004c4de1
        ;   Label: LAB_004c4de1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004c4de4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c4de8
    ADD ESI,0x4                         ; 004c4dec
    INC EDI                             ; 004c4def
    MOV dword ptr [ESP],ESI             ; 004c4df0
    MOV dword ptr [ESP + 0x4],EDI       ; 004c4df3
    CMP EDI,EDX                         ; 004c4df7
    JL 0x004c4dae                       ; 004c4df9
        ;   XREF to: 004c4dae (CONDITIONAL_JUMP)  ; LAB_004c4dae
    MOV EAX,0x1cc8cec                   ; 004c4dfb
        ;   Label: LAB_004c4dfb
    MOV ECX,dword ptr [0x01cc906c]      ; 004c4e00 | DAT_01cc906c
    XOR EDX,EDX                         ; 004c4e06
    TEST EBP,EBP                        ; 004c4e08
    JLE 0x004c5033                      ; 004c4e0a
        ;   XREF to: 004c5033 (CONDITIONAL_JUMP)  ; LAB_004c5033
    CMP ECX,dword ptr [EAX]             ; 004c4e10 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4e10
    JNZ 0x004c5027                      ; 004c4e12
        ;   XREF to: 004c5027 (CONDITIONAL_JUMP)  ; LAB_004c5027
    TEST EAX,EAX                        ; 004c4e18
    JZ 0x004c5027                       ; 004c4e1a
        ;   XREF to: 004c5027 (CONDITIONAL_JUMP)  ; LAB_004c5027
    MOV dword ptr [ESP + 0xc],EAX       ; 004c4e20 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4e20
    MOV dword ptr [0x01cc8ce8],EBP      ; 004c4e24 | DAT_01cc8ce8
    TEST EAX,EAX                        ; 004c4e2a
    JZ 0x004c4f14                       ; 004c4e2c
        ;   XREF to: 004c4f14 (CONDITIONAL_JUMP)  ; LAB_004c4f14
    MOV EBX,dword ptr [0x01cc906c]      ; 004c4e32 | DAT_01cc906c
    MOV ECX,EAX                         ; 004c4e38
    XOR EDX,EDX                         ; 004c4e3a
    MOV EAX,0x1cc8cec                   ; 004c4e3c
    TEST EBP,EBP                        ; 004c4e41
    JLE 0x004c5046                      ; 004c4e43
        ;   XREF to: 004c5046 (CONDITIONAL_JUMP)  ; LAB_004c5046
    CMP EBX,dword ptr [EAX]             ; 004c4e49 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4e49
    JNZ 0x004c503a                      ; 004c4e4b
        ;   XREF to: 004c503a (CONDITIONAL_JUMP)  ; LAB_004c503a
    CMP EAX,ECX                         ; 004c4e51
    JZ 0x004c503a                       ; 004c4e53
        ;   XREF to: 004c503a (CONDITIONAL_JUMP)  ; LAB_004c503a
    MOV dword ptr [ESP + 0x10],EAX      ; 004c4e59 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4e59
    MOV dword ptr [0x01cc8ce8],EBP      ; 004c4e5d | DAT_01cc8ce8
    TEST EAX,EAX                        ; 004c4e63
    JZ 0x004c4f14                       ; 004c4e65
        ;   XREF to: 004c4f14 (CONDITIONAL_JUMP)  ; LAB_004c4f14
    MOV EAX,[0x01cc906c]                ; 004c4e6b | DAT_01cc906c
    MOV dword ptr [ESP + 0x8],EAX       ; 004c4e70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c4e74
        ;   Label: LAB_004c4e74
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4e78
    CMP EAX,dword ptr [EDX + 0x4]       ; 004c4e7c
    JL 0x004c4ec0                       ; 004c4e7f
        ;   XREF to: 004c4ec0 (CONDITIONAL_JUMP)  ; LAB_004c4ec0
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c4e81
    MOV EBP,dword ptr [0x01cc8ce8]      ; 004c4e85 | DAT_01cc8ce8
    MOV EBX,EAX                         ; 004c4e8b
    MOV dword ptr [EDX],0xffffffff      ; 004c4e8d
    MOV EAX,0x1cc8cec                   ; 004c4e93
    XOR EDX,EDX                         ; 004c4e98
    TEST EBP,EBP                        ; 004c4e9a
    JLE 0x004c5059                      ; 004c4e9c
        ;   XREF to: 004c5059 (CONDITIONAL_JUMP)  ; LAB_004c5059
    CMP EBX,dword ptr [EAX]             ; 004c4ea2 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4ea2
    JNZ 0x004c504d                      ; 004c4ea4
        ;   XREF to: 004c504d (CONDITIONAL_JUMP)  ; LAB_004c504d
    CMP EAX,ECX                         ; 004c4eaa
    JZ 0x004c504d                       ; 004c4eac
        ;   XREF to: 004c504d (CONDITIONAL_JUMP)  ; LAB_004c504d
    MOV dword ptr [ESP + 0xc],EAX       ; 004c4eb2 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4eb2
    MOV dword ptr [0x01cc8ce8],EBP      ; 004c4eb6 | DAT_01cc8ce8
    TEST EAX,EAX                        ; 004c4ebc
    JZ 0x004c4f14                       ; 004c4ebe
        ;   XREF to: 004c4f14 (CONDITIONAL_JUMP)  ; LAB_004c4f14
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c4ec0
        ;   Label: LAB_004c4ec0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4ec4
    CMP EAX,dword ptr [EDX + 0x4]       ; 004c4ec8
    JL 0x004c5073                       ; 004c4ecb
        ;   XREF to: 004c5073 (CONDITIONAL_JUMP)  ; LAB_004c5073
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c4ed1
    MOV EBP,dword ptr [0x01cc8ce8]      ; 004c4ed5 | DAT_01cc8ce8
    MOV EBX,EAX                         ; 004c4edb
    MOV dword ptr [EDX],0xffffffff      ; 004c4edd
    MOV EAX,0x1cc8cec                   ; 004c4ee3
    XOR EDX,EDX                         ; 004c4ee8
    TEST EBP,EBP                        ; 004c4eea
    JLE 0x004c506c                      ; 004c4eec
        ;   XREF to: 004c506c (CONDITIONAL_JUMP)  ; LAB_004c506c
    CMP EBX,dword ptr [EAX]             ; 004c4ef2 | DAT_01cc8cec | DAT_01cc8d24
        ;   Label: LAB_004c4ef2
    JNZ 0x004c5060                      ; 004c4ef4
        ;   XREF to: 004c5060 (CONDITIONAL_JUMP)  ; LAB_004c5060
    CMP EAX,ECX                         ; 004c4efa
    JZ 0x004c5060                       ; 004c4efc
        ;   XREF to: 004c5060 (CONDITIONAL_JUMP)  ; LAB_004c5060
    MOV dword ptr [ESP + 0x10],EAX      ; 004c4f02 | DAT_01cc8d24 | DAT_01cc8cec
        ;   Label: LAB_004c4f02
    MOV dword ptr [0x01cc8ce8],EBP      ; 004c4f06 | DAT_01cc8ce8
    TEST EAX,EAX                        ; 004c4f0c
    JNZ 0x004c5073                      ; 004c4f0e
        ;   XREF to: 004c5073 (CONDITIONAL_JUMP)  ; LAB_004c5073
    MOV EBP,dword ptr [0x01cc8ce8]      ; 004c4f14 | DAT_01cc8ce8
        ;   Label: LAB_004c4f14
    ADD ESP,0x14                        ; 004c4f1a
    POP EBP                             ; 004c4f1d
    POP EDI                             ; 004c4f1e
    POP ESI                             ; 004c4f1f
    POP EBX                             ; 004c4f20
    RET                                 ; 004c4f21
    MOV ESI,dword ptr [EDI + 0x14]      ; 004c4f22
        ;   Label: LAB_004c4f22
    CMP ESI,dword ptr [EBX + 0x14]      ; 004c4f25
    JGE 0x004c4f36                      ; 004c4f28
        ;   XREF to: 004c4f36 (CONDITIONAL_JUMP)  ; LAB_004c4f36
    MOV ECX,EBX                         ; 004c4f2a
    MOV EBX,EDI                         ; 004c4f2c
    MOV EDI,ECX                         ; 004c4f2e
    MOV ECX,EDX                         ; 004c4f30
    MOV EDX,EAX                         ; 004c4f32
    MOV EAX,ECX                         ; 004c4f34
    IMUL ECX,EBP,0x38                   ; 004c4f36
        ;   Label: LAB_004c4f36
    ADD ECX,0x1cc8cec                   ; 004c4f39
    MOV dword ptr [ECX],EDX             ; 004c4f3f | DAT_01cc8cec
    MOV ESI,dword ptr [0x01cc906c]      ; 004c4f41 | DAT_01cc906c
    MOV dword ptr [ECX + 0x4],EAX       ; 004c4f47
    CMP EDX,ESI                         ; 004c4f4a
    JGE 0x004c4f54                      ; 004c4f4c
        ;   XREF to: 004c4f54 (CONDITIONAL_JUMP)  ; LAB_004c4f54
    MOV dword ptr [0x01cc906c],EDX      ; 004c4f4e | DAT_01cc906c
    CMP EAX,dword ptr [0x01cc9070]      ; 004c4f54 | DAT_01cc9070
        ;   Label: LAB_004c4f54
    JLE 0x004c4f61                      ; 004c4f5a
        ;   XREF to: 004c4f61 (CONDITIONAL_JUMP)  ; LAB_004c4f61
    MOV [0x01cc9070],EAX                ; 004c4f5c | DAT_01cc9070
    MOV EAX,dword ptr [EBX + 0x10]      ; 004c4f61
        ;   Label: LAB_004c4f61
    MOV dword ptr [ECX + 0x8],EAX       ; 004c4f64
    MOV EAX,dword ptr [EBX + 0x18]      ; 004c4f67
    MOV dword ptr [ECX + 0x18],EAX      ; 004c4f6a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004c4f6d
    MOV dword ptr [ECX + 0x20],EAX      ; 004c4f70
    MOV ESI,dword ptr [EDI + 0x14]      ; 004c4f73
    SUB ESI,dword ptr [EBX + 0x14]      ; 004c4f76
    CMP ESI,0x10000                     ; 004c4f79
    JNC 0x004c5017                      ; 004c4f7f
        ;   XREF to: 004c5017 (CONDITIONAL_JUMP)  ; LAB_004c5017
    XOR ESI,ESI                         ; 004c4f85
    MOV EAX,dword ptr [EDI + 0x10]      ; 004c4f87
        ;   Label: LAB_004c4f87
    MOV EDX,dword ptr [EBX + 0x10]      ; 004c4f8a
    SUB EAX,EDX                         ; 004c4f8d
    MOV EDX,EAX                         ; 004c4f8f
    MOV EAX,ESI                         ; 004c4f91
    MOV dword ptr [0x01cc8ce8],EBP      ; 004c4f93 | DAT_01cc8ce8
    IMUL EDX                            ; 004c4f99
    SHRD EAX,EDX,0x10                   ; 004c4f9b
    MOV dword ptr [ECX + 0xc],EAX       ; 004c4f9f
    MOV EAX,dword ptr [EDI + 0x18]      ; 004c4fa2
    MOV EDX,dword ptr [EBX + 0x18]      ; 004c4fa5
    SUB EAX,EDX                         ; 004c4fa8
    MOV EDX,EAX                         ; 004c4faa
    MOV EAX,ESI                         ; 004c4fac
    IMUL EDX                            ; 004c4fae
    SHRD EAX,EDX,0x10                   ; 004c4fb0
    MOV dword ptr [ECX + 0x1c],EAX      ; 004c4fb4
    MOV EDX,dword ptr [EDI + 0x1c]      ; 004c4fb7
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004c4fba
    MOV EAX,ESI                         ; 004c4fbd
    SUB EDX,EDI                         ; 004c4fbf
    IMUL EDX                            ; 004c4fc1
    SHRD EAX,EDX,0x10                   ; 004c4fc3
    MOV dword ptr [ECX + 0x24],EAX      ; 004c4fc7
    MOV EBX,dword ptr [EBX + 0x14]      ; 004c4fca
    AND EBX,0xffff                      ; 004c4fcd
    XOR BX,0xffff                       ; 004c4fd3
    MOV EDX,dword ptr [ECX + 0xc]       ; 004c4fd7
    MOV EAX,EBX                         ; 004c4fda
    IMUL EDX                            ; 004c4fdc
    SHRD EAX,EDX,0x10                   ; 004c4fde
    ADD dword ptr [ECX + 0x8],EAX       ; 004c4fe2
    MOV EAX,EBX                         ; 004c4fe5
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004c4fe7
    IMUL EDX                            ; 004c4fea
    SHRD EAX,EDX,0x10                   ; 004c4fec
    MOV ESI,dword ptr [ECX + 0x18]      ; 004c4ff0
    MOV EDX,dword ptr [ECX + 0x24]      ; 004c4ff3
    ADD ESI,EAX                         ; 004c4ff6
    MOV EAX,EBX                         ; 004c4ff8
    MOV dword ptr [ECX + 0x18],ESI      ; 004c4ffa
    IMUL EDX                            ; 004c4ffd
    SHRD EAX,EDX,0x10                   ; 004c4fff
    MOV EDI,dword ptr [ECX + 0x20]      ; 004c5003
    MOV EBP,dword ptr [0x01cc8ce8]      ; 004c5006 | DAT_01cc8ce8
    ADD EDI,EAX                         ; 004c500c
    INC EBP                             ; 004c500e
    MOV dword ptr [ECX + 0x20],EDI      ; 004c500f
    JMP 0x004c4de1                      ; 004c5012
        ;   XREF to: 004c4de1 (UNCONDITIONAL_JUMP)  ; LAB_004c4de1
    MOV EAX,0xffffffff                  ; 004c5017
        ;   Label: LAB_004c5017
    XOR EDX,EDX                         ; 004c501c
    DIV ESI                             ; 004c501e
    MOV ESI,EAX                         ; 004c5020
    JMP 0x004c4f87                      ; 004c5022
        ;   XREF to: 004c4f87 (UNCONDITIONAL_JUMP)  ; LAB_004c4f87
    INC EDX                             ; 004c5027
        ;   Label: LAB_004c5027
    ADD EAX,0x38                        ; 004c5028
    CMP EDX,EBP                         ; 004c502b
    JL 0x004c4e10                       ; 004c502d
        ;   XREF to: 004c4e10 (CONDITIONAL_JUMP)  ; LAB_004c4e10
    XOR EAX,EAX                         ; 004c5033
        ;   Label: LAB_004c5033
    JMP 0x004c4e20                      ; 004c5035
        ;   XREF to: 004c4e20 (UNCONDITIONAL_JUMP)  ; LAB_004c4e20
    INC EDX                             ; 004c503a
        ;   Label: LAB_004c503a
    ADD EAX,0x38                        ; 004c503b
    CMP EDX,EBP                         ; 004c503e
    JL 0x004c4e49                       ; 004c5040
        ;   XREF to: 004c4e49 (CONDITIONAL_JUMP)  ; LAB_004c4e49
    XOR EAX,EAX                         ; 004c5046
        ;   Label: LAB_004c5046
    JMP 0x004c4e59                      ; 004c5048
        ;   XREF to: 004c4e59 (UNCONDITIONAL_JUMP)  ; LAB_004c4e59
    INC EDX                             ; 004c504d
        ;   Label: LAB_004c504d
    ADD EAX,0x38                        ; 004c504e
    CMP EDX,EBP                         ; 004c5051
    JL 0x004c4ea2                       ; 004c5053
        ;   XREF to: 004c4ea2 (CONDITIONAL_JUMP)  ; LAB_004c4ea2
    XOR EAX,EAX                         ; 004c5059
        ;   Label: LAB_004c5059
    JMP 0x004c4eb2                      ; 004c505b
        ;   XREF to: 004c4eb2 (UNCONDITIONAL_JUMP)  ; LAB_004c4eb2
    INC EDX                             ; 004c5060
        ;   Label: LAB_004c5060
    ADD EAX,0x38                        ; 004c5061 | DAT_01cc8d24
    CMP EDX,EBP                         ; 004c5064
    JL 0x004c4ef2                       ; 004c5066
        ;   XREF to: 004c4ef2 (CONDITIONAL_JUMP)  ; LAB_004c4ef2
    XOR EAX,EAX                         ; 004c506c
        ;   Label: LAB_004c506c
    JMP 0x004c4f02                      ; 004c506e
        ;   XREF to: 004c4f02 (UNCONDITIONAL_JUMP)  ; LAB_004c4f02
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c5073
        ;   Label: LAB_004c5073
    MOV ESI,dword ptr [ESP + 0xc]       ; 004c5077
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c507b
    CALL engine_special.cpp_FUN_00580127 ; 004c507f
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c5084
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c5088
    MOV EAX,dword ptr [EAX + 0xc]       ; 004c508c
    MOV EDI,dword ptr [EDX + 0x8]       ; 004c508f
    MOV ECX,dword ptr [EDX + 0x18]      ; 004c5092
    MOV EBX,dword ptr [EDX + 0x20]      ; 004c5095
    ADD EDI,EAX                         ; 004c5098
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004c509a
    MOV dword ptr [EDX + 0x8],EDI       ; 004c509d
    ADD ECX,EAX                         ; 004c50a0
    MOV EAX,dword ptr [EDX + 0x24]      ; 004c50a2
    MOV dword ptr [EDX + 0x18],ECX      ; 004c50a5
    ADD EBX,EAX                         ; 004c50a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c50aa
    MOV dword ptr [EDX + 0x20],EBX      ; 004c50ae
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c50b1
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c50b5
    MOV EAX,dword ptr [EAX + 0xc]       ; 004c50b9
    INC EBX                             ; 004c50bc
    MOV ESI,dword ptr [EDX + 0x8]       ; 004c50bd
    MOV EDI,dword ptr [EDX + 0x18]      ; 004c50c0
    MOV ECX,dword ptr [EDX + 0x20]      ; 004c50c3
    ADD ESI,EAX                         ; 004c50c6
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004c50c8
    MOV dword ptr [EDX + 0x8],ESI       ; 004c50cb
    ADD EDI,EAX                         ; 004c50ce
    MOV EAX,dword ptr [EDX + 0x24]      ; 004c50d0
    MOV dword ptr [EDX + 0x18],EDI      ; 004c50d3
    ADD ECX,EAX                         ; 004c50d6
    MOV dword ptr [ESP + 0x8],EBX       ; 004c50d8
    MOV dword ptr [EDX + 0x20],ECX      ; 004c50dc
    JMP 0x004c4e74                      ; 004c50df
        ;   XREF to: 004c4e74 (UNCONDITIONAL_JUMP)  ; LAB_004c4e74

