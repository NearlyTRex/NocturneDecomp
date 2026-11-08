; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427b40(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00426030 at 004260f8
;
; Referenced Globals:
;   undefined4 s_s_swarming_on_s_at_LOD_d_005d5177+1
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007c55f4
;   undefined4 DAT_007c55f8
;   undefined4 DAT_007c55fc
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01c3f6a0
;   undefined4 DAT_01d06b10
;
; Called Functions:
;   FUN_0040c600
;   FUN_0040cc60
;   FUN_00425970
;   FUN_00445430
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427b40
        ;   Label: FUN_00427b40
    PUSH ESI                            ; 00427b41
    PUSH EDI                            ; 00427b42
    PUSH EBP                            ; 00427b43
    SUB ESP,0x8                         ; 00427b44
    MOV EBX,dword ptr [ESP + 0x20]      ; 00427b47
    MOV EDX,dword ptr [0x01d06b10]      ; 00427b4b | DAT_01d06b10
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427b51
    PUSH EDX                            ; 00427b55
    MOV dword ptr [EAX + 0x12ea8],0x0   ; 00427b56
    PUSH EBX                            ; 00427b60
    MOV dword ptr [EAX + 0x12ea4],0x0   ; 00427b61
    CALL FUN_0040c600                   ; 00427b6b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00427b70
    TEST EAX,EAX                        ; 00427b73
    JZ 0x00427b86                       ; 00427b75
        ;   XREF to: 00427b86 (CONDITIONAL_JUMP)  ; LAB_00427b86
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427b77
    ADD EAX,0x158                       ; 00427b7b
    MOV dword ptr [EDX + 0x12ea8],EAX   ; 00427b80
    MOV ECX,dword ptr [0x01c3f6a0]      ; 00427b86 | DAT_01c3f6a0
        ;   Label: LAB_00427b86
    PUSH ECX                            ; 00427b8c
    PUSH EBX                            ; 00427b8d
    CALL FUN_0040c600                   ; 00427b8e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00427b93
    TEST EAX,EAX                        ; 00427b96
    JZ 0x00427bb4                       ; 00427b98
        ;   XREF to: 00427bb4 (CONDITIONAL_JUMP)  ; LAB_00427bb4
    MOV CL,byte ptr [EAX + 0x24a8]      ; 00427b9a
    LEA EDX,[EAX + 0x158]               ; 00427ba0
    TEST CL,CL                          ; 00427ba6
    JZ 0x00427bb4                       ; 00427ba8
        ;   XREF to: 00427bb4 (CONDITIONAL_JUMP)  ; LAB_00427bb4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427baa
    MOV dword ptr [EAX + 0x12ea8],EDX   ; 00427bae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427bb4
        ;   Label: LAB_00427bb4
    CMP dword ptr [EAX + 0x12ea8],0x0   ; 00427bb8
    JZ 0x00427daa                       ; 00427bbf
        ;   XREF to: 00427daa (CONDITIONAL_JUMP)  ; LAB_00427daa
    MOV dword ptr [EAX + 0xc268],0x1    ; 00427bc5
    MOV dword ptr [EAX + 0x12ea4],EBX   ; 00427bcf
    MOV EAX,dword ptr [EAX + 0x12ea4]   ; 00427bd5
    MOV EAX,dword ptr [EAX + 0x64]      ; 00427bdb
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427bde
    INC EAX                             ; 00427be2
    MOV dword ptr [EDX + 0x12edc],0x0   ; 00427be3
    MOV dword ptr [EDX + 0x64],EAX      ; 00427bed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427bf0
        ;   Label: LAB_00427bf0
    MOV EDI,dword ptr [EAX + 0x12ea8]   ; 00427bf4
    PUSH EDI                            ; 00427bfa
    CALL FUN_00569eb0                   ; 00427bfb
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00427c00
    MOV EDX,EAX                         ; 00427c03
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427c05
    MOV EAX,dword ptr [EAX + 0x12edc]   ; 00427c09
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2c] ; 00427c0f
    CMP EDX,0x2bc                       ; 00427c13
    JG 0x00427db2                       ; 00427c19
        ;   XREF to: 00427db2 (CONDITIONAL_JUMP)  ; LAB_00427db2
    PUSH EAX                            ; 00427c1f
    PUSH EBX                            ; 00427c20
    MOV EBP,dword ptr [ESP + 0x24]      ; 00427c21
    PUSH EBP                            ; 00427c25
    PUSH 0x5d5178                       ; 00427c26 | s_s_swarming_on_s_at_LOD_d_005d5177+1
    MOV EAX,[0x00611100]                ; 00427c2b | PTR_DAT_00611100
    PUSH EAX                            ; 00427c30 | DAT_007db5f0
    CALL FUN_00445430                   ; 00427c31
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 00427c36
    MOV EDX,dword ptr [EBP + 0x12ea8]   ; 00427c39
    PUSH EDX                            ; 00427c3f
    CALL FUN_00569eb0                   ; 00427c40
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV EDX,dword ptr [EBP + 0x12edc]   ; 00427c45
    ADD ESP,0x4                         ; 00427c4b
    MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c] ; 00427c4e
    PUSH ECX                            ; 00427c52
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x54] ; 00427c53
    PUSH EBX                            ; 00427c57
    PUSH EBP                            ; 00427c58
    CALL FUN_00425970                   ; 00427c59
        ;   XREF to: 00425970 (UNCONDITIONAL_CALL)  ; undefined FUN_00425970()
    ADD ESP,0xc                         ; 00427c5e
    MOV EDI,dword ptr [EBP + 0x12edc]   ; 00427c61
    PUSH EDI                            ; 00427c67
    MOV ESI,EBP                         ; 00427c68
    MOV EBP,dword ptr [EBP + 0x12ea8]   ; 00427c6a
    PUSH EBP                            ; 00427c70
    MOV EBX,ESI                         ; 00427c71
    CALL FUN_00569890                   ; 00427c73
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 00427c78
    MOV EDX,ESI                         ; 00427c7b
    MOV EBX,dword ptr [EBX + 0x12ea8]   ; 00427c7d
    XOR EAX,EAX                         ; 00427c83
    MOV ECX,dword ptr [EDX + 0x12ee0]   ; 00427c85
    MOV EBX,dword ptr [EBX + 0x2324]    ; 00427c8b
    TEST ECX,ECX                        ; 00427c91
    JLE 0x00427cb0                      ; 00427c93
        ;   XREF to: 00427cb0 (CONDITIONAL_JUMP)  ; LAB_00427cb0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00427c95
    XOR EDX,EDX                         ; 00427c99
    MOV dword ptr [EDX + 0x7c55f4],EAX  ; 00427c9b | DAT_007c55f4 | DAT_007c55f8
        ;   Label: LAB_00427c9b
    INC EAX                             ; 00427ca1
    MOV EBP,dword ptr [ECX + 0x12ee0]   ; 00427ca2
    ADD EDX,0x4                         ; 00427ca8
    CMP EAX,EBP                         ; 00427cab
    JL 0x00427c9b                       ; 00427cad
        ;   XREF to: 00427c9b (CONDITIONAL_JUMP)  ; LAB_00427c9b
    NOP                                 ; 00427caf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427cb0
        ;   Label: LAB_00427cb0
    MOV EAX,dword ptr [EAX + 0x12ee0]   ; 00427cb4
    SUB EAX,0x2                         ; 00427cba
    MOV dword ptr [ESP + 0x4],EAX       ; 00427cbd
    TEST EAX,EAX                        ; 00427cc1
    JL 0x00427d16                       ; 00427cc3
        ;   XREF to: 00427d16 (CONDITIONAL_JUMP)  ; LAB_00427d16
    MOV EBP,dword ptr [ESP + 0x4]       ; 00427cc5
        ;   Label: LAB_00427cc5
    TEST EBP,EBP                        ; 00427cc9
    JL 0x00427d09                       ; 00427ccb
        ;   XREF to: 00427d09 (CONDITIONAL_JUMP)  ; LAB_00427d09
    SHL EBP,0x2                         ; 00427ccd
    XOR EAX,EAX                         ; 00427cd0
    IMUL EDX,dword ptr [EAX + 0x7c55f4],0xc ; 00427cd2 | DAT_007c55f4 | DAT_007c55f8
        ;   Label: LAB_00427cd2
    IMUL ECX,dword ptr [EAX + 0x7c55f8],0xc ; 00427cd9 | DAT_007c55f8 | DAT_007c55fc
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00427ce0
    CMP EDX,dword ptr [ECX + EBX*0x1 + 0x4] ; 00427ce4
    JLE 0x00427d02                      ; 00427ce8
        ;   XREF to: 00427d02 (CONDITIONAL_JUMP)  ; LAB_00427d02
    LEA ECX,[EAX + 0x4]                 ; 00427cea
    ADD ECX,0x7c55f4                    ; 00427ced | DAT_007c55f4
    MOV EDX,0x7c55f4                    ; 00427cf3 | DAT_007c55f4
    MOV ESI,dword ptr [ECX]             ; 00427cf8 | DAT_007c55f8
    MOV EDI,dword ptr [EDX + EAX*0x1]   ; 00427cfa | DAT_007c55f4
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 00427cfd | DAT_007c55f4
    MOV dword ptr [ECX],EDI             ; 00427d00 | DAT_007c55f8
    ADD EAX,0x4                         ; 00427d02
        ;   Label: LAB_00427d02
    CMP EAX,EBP                         ; 00427d05
    JLE 0x00427cd2                      ; 00427d07
        ;   XREF to: 00427cd2 (CONDITIONAL_JUMP)  ; LAB_00427cd2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00427d09
        ;   Label: LAB_00427d09
    DEC EDX                             ; 00427d0d
    MOV dword ptr [ESP + 0x4],EDX       ; 00427d0e
    TEST EDX,EDX                        ; 00427d12
    JGE 0x00427cc5                      ; 00427d14
        ;   XREF to: 00427cc5 (CONDITIONAL_JUMP)  ; LAB_00427cc5
    MOV EDX,dword ptr [0x007c55f4]      ; 00427d16 | DAT_007c55f4
        ;   Label: LAB_00427d16
    LEA EAX,[EDX*0x4 + 0x0]             ; 00427d1c
    SUB EAX,EDX                         ; 00427d23
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00427d25
    ADD EAX,0x2a                        ; 00427d29
    MOV dword ptr [ESP],EAX             ; 00427d2c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427d2f
    XOR ESI,ESI                         ; 00427d33
    MOV EDI,dword ptr [EAX + 0xc26c]    ; 00427d35
    XOR EBP,EBP                         ; 00427d3b
    TEST EDI,EDI                        ; 00427d3d
    JLE 0x00427daa                      ; 00427d3f
        ;   XREF to: 00427daa (CONDITIONAL_JUMP)  ; LAB_00427daa
    MOV EDI,EAX                         ; 00427d41
    MOV dword ptr [EDI + 0xc29c],0xffffffff ; 00427d43
        ;   Label: LAB_00427d43
    MOV EAX,dword ptr [ESI*0x4 + 0x7c55f4] ; 00427d4d | DAT_007c55f4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427d54
    MOV dword ptr [EDI + 0xc2a0],EAX    ; 00427d58
    MOV ECX,0xf                         ; 00427d5e
    MOV EDX,dword ptr [EDX + 0x12ee0]   ; 00427d63
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427d69
    SAR EDX,0x1f                        ; 00427d6d
    MOV EAX,dword ptr [EAX + 0x12ee0]   ; 00427d70
    IDIV ECX                            ; 00427d76
    PUSH EAX                            ; 00427d78
    PUSH 0x0                            ; 00427d79
    CALL FUN_0040cc60                   ; 00427d7b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 00427d80
    MOV dword ptr [EDI + 0xc2ac],EAX    ; 00427d83
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427d89
    INC ESI                             ; 00427d8d
    CMP ESI,dword ptr [EAX + 0x12ee0]   ; 00427d8e
    JL 0x00427dea                       ; 00427d94
        ;   XREF to: 00427dea (CONDITIONAL_JUMP)  ; LAB_00427dea
    XOR ESI,ESI                         ; 00427d96
        ;   Label: LAB_00427d96
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00427d98
        ;   Label: LAB_00427d98
    INC EBP                             ; 00427d9c
    MOV EDX,dword ptr [EAX + 0xc26c]    ; 00427d9d
    ADD EDI,0x40                        ; 00427da3
    CMP EBP,EDX                         ; 00427da6
    JL 0x00427d43                       ; 00427da8
        ;   XREF to: 00427d43 (CONDITIONAL_JUMP)  ; LAB_00427d43
    ADD ESP,0x8                         ; 00427daa
        ;   Label: LAB_00427daa
    POP EBP                             ; 00427dad
    POP EDI                             ; 00427dae
    POP ESI                             ; 00427daf
    POP EBX                             ; 00427db0
    RET                                 ; 00427db1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427db2
        ;   Label: LAB_00427db2
    MOV ESI,dword ptr [EDX + 0x12ea8]   ; 00427db6
    INC EAX                             ; 00427dbc
    PUSH ESI                            ; 00427dbd
    MOV dword ptr [EDX + 0x12edc],EAX   ; 00427dbe
    CALL FUN_00569eb0                   ; 00427dc4
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00427dc9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00427dcc
    MOV EAX,dword ptr [EAX]             ; 00427dd0
    CMP EAX,dword ptr [EDX + 0x12edc]   ; 00427dd2
    JG 0x00427bf0                       ; 00427dd8
        ;   XREF to: 00427bf0 (CONDITIONAL_JUMP)  ; LAB_00427bf0
    MOV dword ptr [EDX + 0x12ea8],0x0   ; 00427dde
    JMP 0x00427daa                      ; 00427de8
        ;   XREF to: 00427daa (UNCONDITIONAL_JUMP)  ; LAB_00427daa
    IMUL EAX,dword ptr [ESI*0x4 + 0x7c55f4],0xc ; 00427dea | DAT_007c55f8
        ;   Label: LAB_00427dea
    MOV ECX,dword ptr [ESP]             ; 00427df2
    CMP ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00427df5
    JL 0x00427d96                       ; 00427df9
        ;   XREF to: 00427d96 (CONDITIONAL_JUMP)  ; LAB_00427d96
    JMP 0x00427d98                      ; 00427dfb
        ;   XREF to: 00427d98 (UNCONDITIONAL_JUMP)  ; LAB_00427d98

