; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434a80(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[39]:
;   FUN_004115b0 at 00411849
;   FUN_00412ba0 at 00412e46
;   FUN_00414b30 at 00414d9e
;   FUN_00415340 at 004153b5
;   FUN_0041bb40 at 0041bf12
;   FUN_00423b70 at 00423d3f
;   FUN_00428ae0 at 00428bb6
;   FUN_00445cb0 at 004464ef
;   FUN_00448570 at 004487e4
;   FUN_00459100 at 00459224
;   ... and 29 more
;
; Referenced Globals:
;   undefined4 s_Bip01_L_Foot_005d5f2e+1
;   TerminatedCString s_Bip01_R_Foot_005d5f3c
;   TerminatedCString s_Bip01_L_Foot_005d5f49
;   TerminatedCString s_Bip01_R_Foot_005d5f56
;
; Called Functions:
;   FUN_005634f0
;   FUN_00569040
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434a80
        ;   Label: FUN_00434a80
    PUSH ESI                            ; 00434a81
    PUSH EDI                            ; 00434a82
    PUSH EBP                            ; 00434a83
    SUB ESP,0x60                        ; 00434a84
    MOV EBX,dword ptr [ESP + 0x74]      ; 00434a87
    MOV EAX,dword ptr [ESP + 0x78]      ; 00434a8b
    LEA ESI,[EBX + 0x158]               ; 00434a8f
    CMP EAX,0x7                         ; 00434a95
    JNC 0x00434c37                      ; 00434a98
        ;   XREF to: 00434c37 (CONDITIONAL_JUMP)  ; LAB_00434c37
    CMP EAX,0x1                         ; 00434a9e
    JNZ 0x00434aac                      ; 00434aa1
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434aa3
    JNZ 0x00434ab4                      ; 00434aaa
        ;   XREF to: 00434ab4 (CONDITIONAL_JUMP)  ; LAB_00434ab4
    ADD ESP,0x60                        ; 00434aac
        ;   Label: LAB_00434aac
    POP EBP                             ; 00434aaf
    POP EDI                             ; 00434ab0
    POP ESI                             ; 00434ab1
    POP EBX                             ; 00434ab2
    RET                                 ; 00434ab3
    PUSH 0x0                            ; 00434ab4
        ;   Label: LAB_00434ab4
    PUSH 0x5d5f2f                       ; 00434ab6 | s_Bip01_L_Foot_005d5f2e+1
    PUSH ESI                            ; 00434abb
    CALL FUN_00569f30                   ; 00434abc
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00434ac1
    PUSH EAX                            ; 00434ac4
    CALL FUN_005634f0                   ; 00434ac5
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00434aca
    TEST EAX,EAX                        ; 00434acd
    JL 0x00434aac                       ; 00434acf
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x3f000000                     ; 00434ad1
    PUSH EAX                            ; 00434ad6
    PUSH ESI                            ; 00434ad7
    LEA ESI,[ESP + 0x48]                ; 00434ad8
    MOV EBP,dword ptr [EBX + 0x154]     ; 00434adc
    CALL FUN_00569040                   ; 00434ae2
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 00434ae7
    LEA EAX,[ESP + 0x28]                ; 00434aea
    PUSH EAX                            ; 00434aee
    LEA EDI,[ESP + 0x2c]                ; 00434aef
    LEA ESI,[ESP + 0x44]                ; 00434af3
    PUSH EBX                            ; 00434af7
    MOVSD ES:EDI,ESI                    ; 00434af8
    MOVSD ES:EDI,ESI                    ; 00434af9
    MOVSD ES:EDI,ESI                    ; 00434afa
    CALL dword ptr [EBP + 0x24]         ; 00434afb
    ADD ESP,0xc                         ; 00434afe
    ADD ESP,0x60                        ; 00434b01
    POP EBP                             ; 00434b04
    POP EDI                             ; 00434b05
    POP ESI                             ; 00434b06
    POP EBX                             ; 00434b07
    RET                                 ; 00434b08
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434b09
        ;   Label: LAB_00434b09
    JZ 0x00434aac                       ; 00434b10
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x0                            ; 00434b12
    PUSH 0x5d5f3c                       ; 00434b14 | = "Bip01 R Foot"
    PUSH ESI                            ; 00434b19
    CALL FUN_00569f30                   ; 00434b1a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00434b1f
    PUSH EAX                            ; 00434b22
    CALL FUN_005634f0                   ; 00434b23
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00434b28
    TEST EAX,EAX                        ; 00434b2b
    JL 0x00434aac                       ; 00434b2d
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x3f000000                     ; 00434b33
    PUSH EAX                            ; 00434b38
    PUSH ESI                            ; 00434b39
    LEA ESI,[ESP + 0xc]                 ; 00434b3a
    MOV EBP,dword ptr [EBX + 0x154]     ; 00434b3e
    CALL FUN_00569040                   ; 00434b44
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 00434b49
    LEA EAX,[ESP + 0x58]                ; 00434b4c
    PUSH EAX                            ; 00434b50
    LEA EDI,[ESP + 0x5c]                ; 00434b51
    LEA ESI,[ESP + 0x8]                 ; 00434b55
    PUSH EBX                            ; 00434b59
    MOVSD ES:EDI,ESI                    ; 00434b5a
    MOVSD ES:EDI,ESI                    ; 00434b5b
    MOVSD ES:EDI,ESI                    ; 00434b5c
    CALL dword ptr [EBP + 0x24]         ; 00434b5d
    ADD ESP,0xc                         ; 00434b60
    ADD ESP,0x60                        ; 00434b63
    POP EBP                             ; 00434b66
    POP EDI                             ; 00434b67
    POP ESI                             ; 00434b68
    POP EBX                             ; 00434b69
    RET                                 ; 00434b6a
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434b6b
        ;   Label: LAB_00434b6b
    JZ 0x00434aac                       ; 00434b72
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x0                            ; 00434b78
    PUSH 0x5d5f49                       ; 00434b7a | = "Bip01 L Foot"
    PUSH ESI                            ; 00434b7f
    CALL FUN_00569f30                   ; 00434b80
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00434b85
    PUSH EAX                            ; 00434b88
    CALL FUN_005634f0                   ; 00434b89
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00434b8e
    TEST EAX,EAX                        ; 00434b91
    JL 0x00434aac                       ; 00434b93
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x3f333333                     ; 00434b99
    PUSH EAX                            ; 00434b9e
    PUSH ESI                            ; 00434b9f
    LEA ESI,[ESP + 0x3c]                ; 00434ba0
    MOV EBP,dword ptr [EBX + 0x154]     ; 00434ba4
    CALL FUN_00569040                   ; 00434baa
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 00434baf
    LEA EAX,[ESP + 0x1c]                ; 00434bb2
    PUSH EAX                            ; 00434bb6
    LEA EDI,[ESP + 0x20]                ; 00434bb7
    LEA ESI,[ESP + 0x38]                ; 00434bbb
    PUSH EBX                            ; 00434bbf
    MOVSD ES:EDI,ESI                    ; 00434bc0
    MOVSD ES:EDI,ESI                    ; 00434bc1
    MOVSD ES:EDI,ESI                    ; 00434bc2
    CALL dword ptr [EBP + 0x24]         ; 00434bc3
    ADD ESP,0xc                         ; 00434bc6
    ADD ESP,0x60                        ; 00434bc9
    POP EBP                             ; 00434bcc
    POP EDI                             ; 00434bcd
    POP ESI                             ; 00434bce
    POP EBX                             ; 00434bcf
    RET                                 ; 00434bd0
    CMP dword ptr [EBX + 0x2500],0x0    ; 00434bd1
        ;   Label: LAB_00434bd1
    JZ 0x00434aac                       ; 00434bd8
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x0                            ; 00434bde
    PUSH 0x5d5f56                       ; 00434be0 | = "Bip01 R Foot"
    PUSH ESI                            ; 00434be5
    CALL FUN_00569f30                   ; 00434be6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00434beb
    PUSH EAX                            ; 00434bee
    CALL FUN_005634f0                   ; 00434bef
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00434bf4
    TEST EAX,EAX                        ; 00434bf7
    JL 0x00434aac                       ; 00434bf9
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    PUSH 0x3f333333                     ; 00434bff
    PUSH EAX                            ; 00434c04
    PUSH ESI                            ; 00434c05
    LEA ESI,[ESP + 0x18]                ; 00434c06
    MOV EBP,dword ptr [EBX + 0x154]     ; 00434c0a
    CALL FUN_00569040                   ; 00434c10
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 00434c15
    LEA EAX,[ESP + 0x4c]                ; 00434c18
    PUSH EAX                            ; 00434c1c
    LEA EDI,[ESP + 0x50]                ; 00434c1d
    LEA ESI,[ESP + 0x14]                ; 00434c21
    PUSH EBX                            ; 00434c25
    MOVSD ES:EDI,ESI                    ; 00434c26
    MOVSD ES:EDI,ESI                    ; 00434c27
    MOVSD ES:EDI,ESI                    ; 00434c28
    CALL dword ptr [EBP + 0x24]         ; 00434c29
    ADD ESP,0xc                         ; 00434c2c
    ADD ESP,0x60                        ; 00434c2f
    POP EBP                             ; 00434c32
    POP EDI                             ; 00434c33
    POP ESI                             ; 00434c34
    POP EBX                             ; 00434c35
    RET                                 ; 00434c36
    JBE 0x00434b09                      ; 00434c37
        ;   XREF to: 00434b09 (CONDITIONAL_JUMP)  ; LAB_00434b09
        ;   Label: LAB_00434c37
    CMP EAX,0x1f                        ; 00434c3d
    JC 0x00434aac                       ; 00434c40
        ;   XREF to: 00434aac (CONDITIONAL_JUMP)  ; LAB_00434aac
    JBE 0x00434b6b                      ; 00434c46
        ;   XREF to: 00434b6b (CONDITIONAL_JUMP)  ; LAB_00434b6b
    CMP EAX,0x25                        ; 00434c4c
    JZ 0x00434bd1                       ; 00434c4f
        ;   XREF to: 00434bd1 (CONDITIONAL_JUMP)  ; LAB_00434bd1
    ADD ESP,0x60                        ; 00434c51
    POP EBP                             ; 00434c54
    POP EDI                             ; 00434c55
    POP ESI                             ; 00434c56
    POP EBX                             ; 00434c57
    RET                                 ; 00434c58

