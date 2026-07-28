; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90(CDemonCamera *this_ptr,CDemonLight *light_source)
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
;   core_set.cpp_FUN_00509a80 at 00509b56
;
; Referenced Globals:
;   undefined4 DAT_014b7194
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444c90
        ;   Label: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
    PUSH ESI                            ; 00444c91
    PUSH EDI                            ; 00444c92
    PUSH EBP                            ; 00444c93
    MOV EBP,ESP                         ; 00444c94
    SUB ESP,0x24                        ; 00444c96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00444c99
    XOR EDX,EDX                         ; 00444c9c
    MOV ECX,dword ptr [EAX + 0x154]     ; 00444c9e
    MOV dword ptr [EBP + -0xc],EDX      ; 00444ca4
    TEST ECX,ECX                        ; 00444ca7
    JLE 0x00444d0f                      ; 00444ca9
        ;   XREF to: 00444d0f (CONDITIONAL_JUMP)  ; LAB_00444d0f
    MOV EBX,0xa9d078                    ; 00444cab
    MOV EAX,dword ptr [EBP + 0x18]      ; 00444cb0
    MOV dword ptr [EBP + -0x8],EDX      ; 00444cb3
    MOV dword ptr [EBP + -0x10],EBX     ; 00444cb6
    MOV dword ptr [EBP + -0x4],EAX      ; 00444cb9
    MOV EDX,dword ptr [EBP + -0x4]      ; 00444cbc
        ;   Label: LAB_00444cbc
    MOV EAX,dword ptr [EBP + -0x4]      ; 00444cbf
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00444cc2
    MOV EAX,dword ptr [EAX + 0x1888]    ; 00444cc8
    SUB EAX,EDI                         ; 00444cce
    INC EAX                             ; 00444cd0
    MOV dword ptr [EBP + -0x14],EAX     ; 00444cd1
    CMP dword ptr [EBP + -0x14],0x0     ; 00444cd4
    JG 0x00444d16                       ; 00444cd8
        ;   XREF to: 00444d16 (CONDITIONAL_JUMP)  ; LAB_00444d16
    MOV EBX,dword ptr [EBP + -0x4]      ; 00444cda
        ;   Label: LAB_00444cda
    MOV ESI,dword ptr [EBP + -0x10]     ; 00444cdd
    MOV EDI,dword ptr [EBP + -0x8]      ; 00444ce0
    MOV EAX,dword ptr [EBP + -0xc]      ; 00444ce3
    MOV EDX,dword ptr [EBP + 0x14]      ; 00444ce6
    ADD EBX,0x4                         ; 00444ce9
    ADD ESI,0x140                       ; 00444cec
    ADD EDI,0x500                       ; 00444cf2
    INC EAX                             ; 00444cf8
    MOV ECX,dword ptr [EDX + 0x154]     ; 00444cf9
    MOV dword ptr [EBP + -0x4],EBX      ; 00444cff
    MOV dword ptr [EBP + -0x10],ESI     ; 00444d02
    MOV dword ptr [EBP + -0x8],EDI      ; 00444d05
    MOV dword ptr [EBP + -0xc],EAX      ; 00444d08
    CMP EAX,ECX                         ; 00444d0b
    JL 0x00444cbc                       ; 00444d0d
        ;   XREF to: 00444cbc (CONDITIONAL_JUMP)  ; LAB_00444cbc
    MOV ESP,EBP                         ; 00444d0f
        ;   Label: LAB_00444d0f
    POP EBP                             ; 00444d11
    POP EDI                             ; 00444d12
    POP ESI                             ; 00444d13
    POP EBX                             ; 00444d14
    RET                                 ; 00444d15
    MOV EAX,dword ptr [EBP + 0x18]      ; 00444d16
        ;   Label: LAB_00444d16
    MOV ECX,dword ptr [EBP + -0x8]      ; 00444d19
    MOV EAX,dword ptr [EAX + 0x1c48]    ; 00444d1c
    LEA EDX,[EDI*0x4 + 0x0]             ; 00444d22
    ADD EAX,ECX                         ; 00444d29
    ADD EAX,EDX                         ; 00444d2b
    MOV dword ptr [EBP + -0x24],EAX     ; 00444d2d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00444d30
    MOV EDX,dword ptr [EBP + 0x18]      ; 00444d33
    MOV EAX,dword ptr [EAX + 0x14c8]    ; 00444d36
    MOV EDX,dword ptr [EDX + 0x1c4c]    ; 00444d3c
    SHL EAX,0x2                         ; 00444d42
    ADD EDX,ECX                         ; 00444d45
    ADD EDX,EAX                         ; 00444d47
    MOV dword ptr [EBP + -0x20],EDX     ; 00444d49
    MOV EDX,dword ptr [EBP + -0x4]      ; 00444d4c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00444d4f
    MOV EDX,dword ptr [EDX + 0x14c8]    ; 00444d52
    MOV EAX,dword ptr [EAX + 0x1c50]    ; 00444d58
    SHL EDX,0x2                         ; 00444d5e
    ADD EAX,ECX                         ; 00444d61
    ADD EAX,EDX                         ; 00444d63
    MOV dword ptr [EBP + -0x1c],EAX     ; 00444d65
    MOV EDX,dword ptr [EBP + -0x4]      ; 00444d68
    MOV EAX,dword ptr [EBP + -0x10]     ; 00444d6b
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 00444d6e
    ADD EAX,EDI                         ; 00444d74
    MOV dword ptr [EBP + -0x18],EAX     ; 00444d76
    MOV EAX,dword ptr [EBP + 0x18]      ; 00444d79
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00444d7c
    MOV [0x014b7194],EAX                ; 00444d82 | DAT_014b7194
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00444d87
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00444d8d
    MOV EAX,dword ptr [EBX]             ; 00444d93
        ;   Label: LAB_00444d93
    ADD EBX,0x20                        ; 00444d95
    SUB ECX,0x8                         ; 00444d98
    JG 0x00444d93                       ; 00444d9b
        ;   XREF to: 00444d93 (CONDITIONAL_JUMP)  ; LAB_00444d93
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00444d9d
    MOV EBX,dword ptr [EBP + 0xffffffe0] ; 00444da3
    MOV EAX,dword ptr [EBX]             ; 00444da9
        ;   Label: LAB_00444da9
    ADD EBX,0x20                        ; 00444dab
    SUB ECX,0x8                         ; 00444dae
    JG 0x00444da9                       ; 00444db1
        ;   XREF to: 00444da9 (CONDITIONAL_JUMP)  ; LAB_00444da9
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00444db3
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00444db9
    MOV EAX,dword ptr [EBX]             ; 00444dbf
        ;   Label: LAB_00444dbf
    ADD EBX,0x20                        ; 00444dc1
    SUB ECX,0x8                         ; 00444dc4
    JG 0x00444dbf                       ; 00444dc7
        ;   XREF to: 00444dbf (CONDITIONAL_JUMP)  ; LAB_00444dbf
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00444dc9
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 00444dcf
    MOV ESI,dword ptr [EBP + 0xffffffe0] ; 00444dd5
    MOV EDX,dword ptr [EBP + 0xffffffe4] ; 00444ddb
    MOV EDI,dword ptr [EBP + 0xffffffe8] ; 00444de1
    PUSH EBP                            ; 00444de7
    MOV EAX,dword ptr [EBX]             ; 00444de8
        ;   Label: LAB_00444de8
    CMP EAX,0x0                         ; 00444dea
    JBE 0x00444e06                      ; 00444ded
        ;   XREF to: 00444e06 (CONDITIONAL_JUMP)  ; LAB_00444e06
    MOV EBP,dword ptr [ESI]             ; 00444def
    MOVZX EAX,word ptr [EBP]            ; 00444df1
    CMP EAX,dword ptr [EBX]             ; 00444df5
    JC 0x00444e06                       ; 00444df7
        ;   XREF to: 00444e06 (CONDITIONAL_JUMP)  ; LAB_00444e06
    MOV EBP,dword ptr [0x014b7194]      ; 00444df9 | DAT_014b7194
    ADD EBP,dword ptr [EDX]             ; 00444dff
    MOV AL,byte ptr [EBP]               ; 00444e01
    ADD byte ptr [EDI],AL               ; 00444e04
    ADD EBX,0x4                         ; 00444e06
        ;   Label: LAB_00444e06
    ADD ESI,0x4                         ; 00444e09
    ADD EDX,0x4                         ; 00444e0c
    INC EDI                             ; 00444e0f
    SUB ECX,0x1                         ; 00444e10
    JG 0x00444de8                       ; 00444e13
        ;   XREF to: 00444de8 (CONDITIONAL_JUMP)  ; LAB_00444de8
    POP EBP                             ; 00444e15
    JMP 0x00444cda                      ; 00444e16
        ;   XREF to: 00444cda (UNCONDITIONAL_JUMP)  ; LAB_00444cda

