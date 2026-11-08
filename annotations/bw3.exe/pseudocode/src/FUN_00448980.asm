; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00448980(int param_1,int *param_2,int *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0044f750 at 0044f9f0
;   FUN_004504b0 at 0045054b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448980
        ;   Label: FUN_00448980
    PUSH ESI                            ; 00448981
    PUSH EDI                            ; 00448982
    PUSH EBP                            ; 00448983
    SUB ESP,0x1c                        ; 00448984
    MOV EBP,dword ptr [ESP + 0x30]      ; 00448987
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044898b
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044898f
    CMP dword ptr [ESP + 0x3c],0x0      ; 00448993
    JZ 0x00448b24                       ; 00448998
        ;   XREF to: 00448b24 (CONDITIONAL_JUMP)  ; LAB_00448b24
    MOV EBX,dword ptr [ESI]             ; 0044899e
    MOV EAX,dword ptr [ECX]             ; 004489a0
    SUB EAX,EBX                         ; 004489a2
    MOV EDI,dword ptr [ESI + 0x4]       ; 004489a4
    MOV dword ptr [ESP + 0x14],EAX      ; 004489a7
    MOV EAX,dword ptr [ECX + 0x4]       ; 004489ab
    SUB EAX,EDI                         ; 004489ae
    MOV EDX,dword ptr [ESI + 0x8]       ; 004489b0
    MOV dword ptr [ESP + 0xc],EAX       ; 004489b3
    MOV EAX,dword ptr [ECX + 0x8]       ; 004489b7
    SUB EAX,EDX                         ; 004489ba
    MOV dword ptr [ESP + 0x10],EAX      ; 004489bc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004489c0
    MOV EDX,EAX                         ; 004489c4
    SAR EDX,0x1f                        ; 004489c6
    SHL EDX,0x8                         ; 004489c9
    SBB EAX,EDX                         ; 004489cc
    SAR EAX,0x8                         ; 004489ce
    MOV dword ptr [ESP + 0x3c],EAX      ; 004489d1
    TEST EAX,EAX                        ; 004489d5
    JZ 0x00448b1c                       ; 004489d7
        ;   XREF to: 00448b1c (CONDITIONAL_JUMP)  ; LAB_00448b1c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004489dd
    MOV EDX,EAX                         ; 004489e1
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004489e3
    SAR EDX,0x1f                        ; 004489e7
    IDIV EBX                            ; 004489ea
    MOV dword ptr [ESP + 0x14],EAX      ; 004489ec
    MOV EAX,dword ptr [ESP + 0xc]       ; 004489f0
    MOV EDX,EAX                         ; 004489f4
    SAR EDX,0x1f                        ; 004489f6
    IDIV EBX                            ; 004489f9
    MOV dword ptr [ESP + 0xc],EAX       ; 004489fb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004489ff
    MOV EDX,EAX                         ; 00448a03
    SAR EDX,0x1f                        ; 00448a05
    IDIV EBX                            ; 00448a08
    MOV EDI,ESP                         ; 00448a0a
    MOVSD ES:EDI,ESI                    ; 00448a0c
    MOVSD ES:EDI,ESI                    ; 00448a0d
    MOVSD ES:EDI,ESI                    ; 00448a0e
    MOV ECX,EBX                         ; 00448a0f
    MOV ESI,dword ptr [ESP]             ; 00448a11
    MOV EDI,dword ptr [ESP + 0x4]       ; 00448a14
    MOV EDX,dword ptr [ESP + 0x8]       ; 00448a18
    MOV dword ptr [ESP + 0x10],EAX      ; 00448a1c
    XOR EBX,EBX                         ; 00448a20
    MOV EAX,dword ptr [EBP + 0x1000]    ; 00448a22
    MOV dword ptr [ESP + 0x18],EBX      ; 00448a28
    ADD ESI,EAX                         ; 00448a2c
    MOV EAX,dword ptr [EBP + 0x1004]    ; 00448a2e
    MOV dword ptr [ESP],ESI             ; 00448a34
    ADD EDI,EAX                         ; 00448a37
    MOV EAX,dword ptr [EBP + 0x1008]    ; 00448a39
    XOR ESI,ESI                         ; 00448a3f
    ADD EDX,EAX                         ; 00448a41
    MOV dword ptr [ESP + 0x4],EDI       ; 00448a43
    MOV dword ptr [ESP + 0x8],EDX       ; 00448a47
    TEST ECX,ECX                        ; 00448a4b
    JLE 0x00448b18                      ; 00448a4d
        ;   XREF to: 00448b18 (CONDITIONAL_JUMP)  ; LAB_00448b18
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448a53
        ;   Label: LAB_00448a53
    MOV EDX,EAX                         ; 00448a57
    SAR EDX,0x1f                        ; 00448a59
    SHL EDX,0x8                         ; 00448a5c
    SBB EAX,EDX                         ; 00448a5f
    SAR EAX,0x8                         ; 00448a61
    MOV ECX,EAX                         ; 00448a64
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448a66
    MOV EDX,EAX                         ; 00448a6a
    SAR EDX,0x1f                        ; 00448a6c
    SHL EDX,0x8                         ; 00448a6f
    SBB EAX,EDX                         ; 00448a72
    SAR EAX,0x8                         ; 00448a74
    AND ECX,0xf                         ; 00448a77
    SHL ECX,0x8                         ; 00448a7a
    AND EAX,0xf                         ; 00448a7d
    ADD ECX,EBP                         ; 00448a80
    SHL EAX,0x4                         ; 00448a82
    ADD ECX,EAX                         ; 00448a85
    MOV EAX,dword ptr [ESP]             ; 00448a87
    MOV EDX,EAX                         ; 00448a8a
    SAR EDX,0x1f                        ; 00448a8c
    SHL EDX,0x8                         ; 00448a8f
    SBB EAX,EDX                         ; 00448a92
    SAR EAX,0x8                         ; 00448a94
    AND EAX,0xf                         ; 00448a97
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00448a9a
    MOV EDX,ECX                         ; 00448a9d
    MOV EAX,dword ptr [EBP + 0x101c]    ; 00448a9f
    AND EDX,0xff                        ; 00448aa5
    IMUL EDX                            ; 00448aab
    SHRD EAX,EDX,0x10                   ; 00448aad
    MOV EBX,dword ptr [EBP + 0x1018]    ; 00448ab1
    MOV ECX,EAX                         ; 00448ab7
    TEST EBX,EBX                        ; 00448ab9
    JZ 0x00448ad1                       ; 00448abb
        ;   XREF to: 00448ad1 (CONDITIONAL_JUMP)  ; LAB_00448ad1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00448abd
    CMP EAX,EBX                         ; 00448ac1
    JLE 0x00448b28                      ; 00448ac3
        ;   XREF to: 00448b28 (CONDITIONAL_JUMP)  ; LAB_00448b28
    XOR EAX,EAX                         ; 00448ac5
    MOV EDX,ECX                         ; 00448ac7
        ;   Label: LAB_00448ac7
    IMUL EDX                            ; 00448ac9
    SHRD EAX,EDX,0x10                   ; 00448acb
    MOV ECX,EAX                         ; 00448acf
    MOV EBX,dword ptr [ESP + 0x18]      ; 00448ad1
        ;   Label: LAB_00448ad1
    ADD EBX,ECX                         ; 00448ad5
    MOV dword ptr [ESP + 0x18],EBX      ; 00448ad7
    CMP EBX,0x4000                      ; 00448adb
    JA 0x00448b46                       ; 00448ae1
        ;   XREF to: 00448b46 (CONDITIONAL_JUMP)  ; LAB_00448b46
    MOV EAX,dword ptr [ESP + 0x14]      ; 00448ae3
    MOV EBX,dword ptr [ESP]             ; 00448ae7
    MOV EDI,dword ptr [ESP + 0x4]       ; 00448aea
    MOV EDX,dword ptr [ESP + 0x8]       ; 00448aee
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00448af2
    ADD EBX,EAX                         ; 00448af6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00448af8
    INC ESI                             ; 00448afc
    ADD EDI,EAX                         ; 00448afd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00448aff
    MOV dword ptr [ESP],EBX             ; 00448b03
    ADD EDX,EAX                         ; 00448b06
    MOV dword ptr [ESP + 0x4],EDI       ; 00448b08
    MOV dword ptr [ESP + 0x8],EDX       ; 00448b0c
    CMP ESI,ECX                         ; 00448b10
    JL 0x00448a53                       ; 00448b12
        ;   XREF to: 00448a53 (CONDITIONAL_JUMP)  ; LAB_00448a53
    MOV EAX,dword ptr [ESP + 0x18]      ; 00448b18
        ;   Label: LAB_00448b18
    ADD ESP,0x1c                        ; 00448b1c
        ;   Label: LAB_00448b1c
    POP EBP                             ; 00448b1f
    POP EDI                             ; 00448b20
    POP ESI                             ; 00448b21
    POP EBX                             ; 00448b22
    RET                                 ; 00448b23
    XOR EAX,EAX                         ; 00448b24
        ;   Label: LAB_00448b24
    JMP 0x00448b1c                      ; 00448b26
        ;   XREF to: 00448b1c (UNCONDITIONAL_JUMP)  ; LAB_00448b1c
    TEST EAX,EAX                        ; 00448b28
        ;   Label: LAB_00448b28
    JGE 0x00448b33                      ; 00448b2a
        ;   XREF to: 00448b33 (CONDITIONAL_JUMP)  ; LAB_00448b33
    MOV EAX,0x10000                     ; 00448b2c
    JMP 0x00448ac7                      ; 00448b31
        ;   XREF to: 00448ac7 (UNCONDITIONAL_JUMP)  ; LAB_00448ac7
    MOV EDX,dword ptr [ESP + 0x4]       ; 00448b33
        ;   Label: LAB_00448b33
    MOV EAX,EBX                         ; 00448b37
    SUB EAX,EDX                         ; 00448b39
    MOV EDX,0x10000                     ; 00448b3b
    IMUL EDX                            ; 00448b40
    IDIV EBX                            ; 00448b42
    JMP 0x00448ac7                      ; 00448b44
        ;   XREF to: 00448ac7 (UNCONDITIONAL_JUMP)  ; LAB_00448ac7
    MOV EAX,0x4000                      ; 00448b46
        ;   Label: LAB_00448b46
    ADD ESP,0x1c                        ; 00448b4b
    POP EBP                             ; 00448b4e
    POP EDI                             ; 00448b4f
    POP ESI                             ; 00448b50
    POP EBX                             ; 00448b51
    RET                                 ; 00448b52

