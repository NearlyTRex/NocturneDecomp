; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
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
;   core_set.cpp_FUN_00550580 at 0055064e
;
; Referenced Globals:
;   undefined4 DAT_0152a954
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451a30
        ;   Label: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00451a30
    PUSH ESI                            ; 00451a31
    PUSH EDI                            ; 00451a32
    PUSH EBP                            ; 00451a33
    MOV EBP,ESP                         ; 00451a34
    SUB ESP,0x24                        ; 00451a36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00451a39
    XOR EDX,EDX                         ; 00451a3c
    MOV ECX,dword ptr [EAX + 0x154]     ; 00451a3e
    MOV dword ptr [EBP + -0xc],EDX      ; 00451a44
    TEST ECX,ECX                        ; 00451a47
    JLE 0x00451aaf                      ; 00451a49
        ;   XREF to: 00451aaf (CONDITIONAL_JUMP)  ; LAB_00451aaf
    MOV EBX,0xb10718                    ; 00451a4b
    MOV EAX,dword ptr [EBP + 0x18]      ; 00451a50
    MOV dword ptr [EBP + -0x8],EDX      ; 00451a53
    MOV dword ptr [EBP + -0x10],EBX     ; 00451a56
    MOV dword ptr [EBP + -0x4],EAX      ; 00451a59
    MOV EDX,dword ptr [EBP + -0x4]      ; 00451a5c
        ;   Label: LAB_00451a5c
    MOV EAX,dword ptr [EBP + -0x4]      ; 00451a5f
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00451a62
    MOV EAX,dword ptr [EAX + 0x1888]    ; 00451a68
    SUB EAX,EDI                         ; 00451a6e
    INC EAX                             ; 00451a70
    MOV dword ptr [EBP + -0x14],EAX     ; 00451a71
    CMP dword ptr [EBP + -0x14],0x0     ; 00451a74
    JG 0x00451ab6                       ; 00451a78
        ;   XREF to: 00451ab6 (CONDITIONAL_JUMP)  ; LAB_00451ab6
    MOV EBX,dword ptr [EBP + -0x4]      ; 00451a7a
        ;   Label: LAB_00451a7a
    MOV ESI,dword ptr [EBP + -0x10]     ; 00451a7d
    MOV EDI,dword ptr [EBP + -0x8]      ; 00451a80
    MOV EAX,dword ptr [EBP + -0xc]      ; 00451a83
    MOV EDX,dword ptr [EBP + 0x14]      ; 00451a86
    ADD EBX,0x4                         ; 00451a89
    ADD ESI,0x140                       ; 00451a8c
    ADD EDI,0x500                       ; 00451a92
    INC EAX                             ; 00451a98
    MOV ECX,dword ptr [EDX + 0x154]     ; 00451a99
    MOV dword ptr [EBP + -0x4],EBX      ; 00451a9f
    MOV dword ptr [EBP + -0x10],ESI     ; 00451aa2
    MOV dword ptr [EBP + -0x8],EDI      ; 00451aa5
    MOV dword ptr [EBP + -0xc],EAX      ; 00451aa8
    CMP EAX,ECX                         ; 00451aab
    JL 0x00451a5c                       ; 00451aad
        ;   XREF to: 00451a5c (CONDITIONAL_JUMP)  ; LAB_00451a5c
    MOV ESP,EBP                         ; 00451aaf
        ;   Label: LAB_00451aaf
    POP EBP                             ; 00451ab1
    POP EDI                             ; 00451ab2
    POP ESI                             ; 00451ab3
    POP EBX                             ; 00451ab4
    RET                                 ; 00451ab5
    MOV EAX,dword ptr [EBP + 0x18]      ; 00451ab6
        ;   Label: LAB_00451ab6
    MOV ECX,dword ptr [EBP + -0x8]      ; 00451ab9
    MOV EAX,dword ptr [EAX + 0x1c48]    ; 00451abc
    LEA EDX,[EDI*0x4 + 0x0]             ; 00451ac2
    ADD EAX,ECX                         ; 00451ac9
    ADD EAX,EDX                         ; 00451acb
    MOV dword ptr [EBP + -0x24],EAX     ; 00451acd
    MOV EAX,dword ptr [EBP + -0x4]      ; 00451ad0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00451ad3
    MOV EAX,dword ptr [EAX + 0x14c8]    ; 00451ad6
    MOV EDX,dword ptr [EDX + 0x1c4c]    ; 00451adc
    SHL EAX,0x2                         ; 00451ae2
    ADD EDX,ECX                         ; 00451ae5
    ADD EDX,EAX                         ; 00451ae7
    MOV dword ptr [EBP + -0x20],EDX     ; 00451ae9
    MOV EDX,dword ptr [EBP + -0x4]      ; 00451aec
    MOV EAX,dword ptr [EBP + 0x18]      ; 00451aef
    MOV EDX,dword ptr [EDX + 0x14c8]    ; 00451af2
    MOV EAX,dword ptr [EAX + 0x1c50]    ; 00451af8
    SHL EDX,0x2                         ; 00451afe
    ADD EAX,ECX                         ; 00451b01
    ADD EAX,EDX                         ; 00451b03
    MOV dword ptr [EBP + -0x1c],EAX     ; 00451b05
    MOV EDX,dword ptr [EBP + -0x4]      ; 00451b08
    MOV EAX,dword ptr [EBP + -0x10]     ; 00451b0b
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00451b0e
    ADD EAX,EDI                         ; 00451b14
    MOV dword ptr [EBP + -0x18],EAX     ; 00451b16
    MOV EAX,dword ptr [EBP + 0x18]      ; 00451b19
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00451b1c
    MOV [0x0152a954],EAX                ; 00451b22 | DAT_0152a954
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00451b27
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00451b2d
    MOV EAX,dword ptr [EBX]             ; 00451b33
        ;   Label: LAB_00451b33
    ADD EBX,0x20                        ; 00451b35
    SUB ECX,0x8                         ; 00451b38
    JG 0x00451b33                       ; 00451b3b
        ;   XREF to: 00451b33 (CONDITIONAL_JUMP)  ; LAB_00451b33
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00451b3d
    MOV EBX,dword ptr [EBP + 0xffffffe0] ; 00451b43
    MOV EAX,dword ptr [EBX]             ; 00451b49
        ;   Label: LAB_00451b49
    ADD EBX,0x20                        ; 00451b4b
    SUB ECX,0x8                         ; 00451b4e
    JG 0x00451b49                       ; 00451b51
        ;   XREF to: 00451b49 (CONDITIONAL_JUMP)  ; LAB_00451b49
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00451b53
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00451b59
    MOV EAX,dword ptr [EBX]             ; 00451b5f
        ;   Label: LAB_00451b5f
    ADD EBX,0x20                        ; 00451b61
    SUB ECX,0x8                         ; 00451b64
    JG 0x00451b5f                       ; 00451b67
        ;   XREF to: 00451b5f (CONDITIONAL_JUMP)  ; LAB_00451b5f
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00451b69
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00451b6f
    MOV ESI,dword ptr [EBP + 0xffffffe0] ; 00451b75
    MOV EDX,dword ptr [EBP + 0xffffffe4] ; 00451b7b
    MOV EDI,dword ptr [EBP + 0xffffffe8] ; 00451b81
    PUSH EBP                            ; 00451b87
    MOV EAX,dword ptr [EBX]             ; 00451b88
        ;   Label: LAB_00451b88
    CMP EAX,0x0                         ; 00451b8a
    JBE 0x00451ba6                      ; 00451b8d
        ;   XREF to: 00451ba6 (CONDITIONAL_JUMP)  ; LAB_00451ba6
    MOV EBP,dword ptr [ESI]             ; 00451b8f
    MOVZX EAX,word ptr [EBP]            ; 00451b91
    CMP EAX,dword ptr [EBX]             ; 00451b95
    JC 0x00451ba6                       ; 00451b97
        ;   XREF to: 00451ba6 (CONDITIONAL_JUMP)  ; LAB_00451ba6
    MOV EBP,dword ptr [0x0152a954]      ; 00451b99 | DAT_0152a954
    ADD EBP,dword ptr [EDX]             ; 00451b9f
    MOV AL,byte ptr [EBP]               ; 00451ba1
    ADD byte ptr [EDI],AL               ; 00451ba4
    ADD EBX,0x4                         ; 00451ba6
        ;   Label: LAB_00451ba6
    ADD ESI,0x4                         ; 00451ba9
    ADD EDX,0x4                         ; 00451bac
    INC EDI                             ; 00451baf
    SUB ECX,0x1                         ; 00451bb0
    JG 0x00451b88                       ; 00451bb3
        ;   XREF to: 00451b88 (CONDITIONAL_JUMP)  ; LAB_00451b88
    POP EBP                             ; 00451bb5
    JMP 0x00451a7a                      ; 00451bb6
        ;   XREF to: 00451a7a (UNCONDITIONAL_JUMP)  ; LAB_00451a7a

