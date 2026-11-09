; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004d09b0(CGround *this_ptr,int world_x,int world_z)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_005723d0 at 00572422
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d09b0
        ;   Label: core_ground.cpp_CGround_getHeightAtPosition_FUN_004d09b0
    PUSH ESI                            ; 004d09b1
    PUSH EDI                            ; 004d09b2
    PUSH EBP                            ; 004d09b3
    SUB ESP,0x14                        ; 004d09b4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004d09b7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004d09bb
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004d09bf
    SHL EBX,0x8                         ; 004d09c2
    LEA EAX,[EBX + -0x1]                ; 004d09c5
    MOV EDX,0x10000                     ; 004d09c8
    AND EAX,ESI                         ; 004d09cd
    IMUL EDX                            ; 004d09cf
    IDIV EBX                            ; 004d09d1
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004d09d3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004d09d6
    SHL EBX,0x8                         ; 004d09da
    MOV EDI,EAX                         ; 004d09dd
    LEA EAX,[EBX + -0x1]                ; 004d09df
    AND EAX,EDX                         ; 004d09e2
    MOV EDX,0x10000                     ; 004d09e4
    IMUL EDX                            ; 004d09e9
    IDIV EBX                            ; 004d09eb
    MOV EBX,EAX                         ; 004d09ed
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004d09ef
    XOR EDX,EDX                         ; 004d09f2
    SHL EBP,0x8                         ; 004d09f4
    MOV EAX,ESI                         ; 004d09f7
    DIV EBP                             ; 004d09f9
    MOV ESI,dword ptr [ECX + 0x8]       ; 004d09fb
    AND ESI,EAX                         ; 004d09fe
    XOR EDX,EDX                         ; 004d0a00
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004d0a02
    DIV EBP                             ; 004d0a06
    MOV EDX,ESI                         ; 004d0a08
    MOV EBP,dword ptr [ECX + 0xc]       ; 004d0a0a
    AND EDX,0x1                         ; 004d0a0d
    AND EAX,EBP                         ; 004d0a10
    MOV dword ptr [ESP + 0xc],EDX       ; 004d0a12
    MOV EDX,EAX                         ; 004d0a16
    AND EDX,0x1                         ; 004d0a18
    MOV dword ptr [ESP + 0x8],EDX       ; 004d0a1b
    LEA EDX,[EAX + 0x1]                 ; 004d0a1f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004d0a22
    MOV dword ptr [ESP + 0x10],EDX      ; 004d0a26
    LEA EDX,[ESI + 0x1]                 ; 004d0a2a
    CMP EBP,dword ptr [ESP + 0x8]       ; 004d0a2d
    JNZ 0x004d0b2b                      ; 004d0a31
        ;   XREF to: 004d0b2b (CONDITIONAL_JUMP)  ; LAB_004d0b2b
    CMP EDI,EBX                         ; 004d0a37
    JLE 0x004d0ab2                      ; 004d0a39
        ;   XREF to: 004d0ab2 (CONDITIONAL_JUMP)  ; LAB_004d0ab2
    MOV EBP,dword ptr [ECX]             ; 004d0a3b
    IMUL EBP,EAX                        ; 004d0a3d
    MOV EAX,dword ptr [ECX + 0x24]      ; 004d0a40
    ADD ESI,EBP                         ; 004d0a43
    MOV dword ptr [ESP + 0x8],EBP       ; 004d0a45
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004d0a49
    MOV EBP,dword ptr [ECX + 0x20]      ; 004d0a4d
    IMUL EBP,ESI                        ; 004d0a50
    MOV dword ptr [ESP],EBP             ; 004d0a53
    MOV ESI,dword ptr [ECX + 0x8]       ; 004d0a56
    MOV EBP,dword ptr [ESP + 0x8]       ; 004d0a59
    AND ESI,EDX                         ; 004d0a5d
    ADD ESI,EBP                         ; 004d0a5f
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004d0a61
    IMUL ESI,dword ptr [ECX + 0x20]     ; 004d0a65
    MOV EBP,dword ptr [ESP + 0x10]      ; 004d0a69
    AND EBP,dword ptr [ECX + 0xc]       ; 004d0a6d
    IMUL EBP,dword ptr [ECX]            ; 004d0a70
    MOV dword ptr [ESP + 0x8],EBP       ; 004d0a73
    AND EDX,dword ptr [ECX + 0xc]       ; 004d0a77
    ADD EDX,dword ptr [ESP + 0x8]       ; 004d0a7a
    MOV ECX,dword ptr [ECX + 0x20]      ; 004d0a7e
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004d0a81
    IMUL ECX,EAX                        ; 004d0a85
    MOV EDX,ESI                         ; 004d0a88
    MOV EAX,dword ptr [ESP]             ; 004d0a8a
    SUB ECX,ESI                         ; 004d0a8d
    SUB EDX,EAX                         ; 004d0a8f
    MOV EAX,EDI                         ; 004d0a91
    MOV ESI,dword ptr [ESP]             ; 004d0a93
    IMUL EDX                            ; 004d0a96
    SHRD EAX,EDX,0x10                   ; 004d0a98
    MOV EDX,ECX                         ; 004d0a9c
    ADD ESI,EAX                         ; 004d0a9e
    MOV EAX,EBX                         ; 004d0aa0
    IMUL EDX                            ; 004d0aa2
    SHRD EAX,EDX,0x10                   ; 004d0aa4
    ADD EAX,ESI                         ; 004d0aa8
    ADD ESP,0x14                        ; 004d0aaa
    POP EBP                             ; 004d0aad
    POP EDI                             ; 004d0aae
    POP ESI                             ; 004d0aaf
    POP EBX                             ; 004d0ab0
    RET                                 ; 004d0ab1
    IMUL EAX,dword ptr [ECX]            ; 004d0ab2
        ;   Label: LAB_004d0ab2
    ADD EAX,ESI                         ; 004d0ab5
    MOV EBP,dword ptr [ECX + 0x24]      ; 004d0ab7
    SHL EAX,0x2                         ; 004d0aba
    ADD EAX,EBP                         ; 004d0abd
    MOVSX EAX,word ptr [EAX]            ; 004d0abf
    MOV dword ptr [ESP + 0xc],EBP       ; 004d0ac2
    MOV EBP,EAX                         ; 004d0ac6
    IMUL EBP,dword ptr [ECX + 0x20]     ; 004d0ac8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d0acc
    AND EAX,dword ptr [ECX + 0xc]       ; 004d0ad0
    IMUL EAX,dword ptr [ECX]            ; 004d0ad3
    MOV dword ptr [ESP + 0x8],EAX       ; 004d0ad6
    AND EDX,dword ptr [ECX + 0x8]       ; 004d0ada
    ADD EDX,dword ptr [ESP + 0x8]       ; 004d0add
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d0ae1
    SHL EDX,0x2                         ; 004d0ae5
    ADD EDX,EAX                         ; 004d0ae8
    MOVSX EDX,word ptr [EDX]            ; 004d0aea
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004d0aed
    ADD ESI,dword ptr [ESP + 0x8]       ; 004d0af1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d0af5
    ADD EAX,dword ptr [ESP + 0xc]       ; 004d0afc
    MOV ECX,dword ptr [ECX + 0x20]      ; 004d0b00
    MOVSX EAX,word ptr [EAX]            ; 004d0b03
    IMUL ECX,EAX                        ; 004d0b06
    MOV EAX,EDI                         ; 004d0b09
    SUB EDX,ECX                         ; 004d0b0b
    SUB ECX,EBP                         ; 004d0b0d
    IMUL EDX                            ; 004d0b0f
    SHRD EAX,EDX,0x10                   ; 004d0b11
    MOV EDX,ECX                         ; 004d0b15
    ADD EBP,EAX                         ; 004d0b17
    MOV EAX,EBX                         ; 004d0b19
    IMUL EDX                            ; 004d0b1b
    SHRD EAX,EDX,0x10                   ; 004d0b1d
    ADD EAX,EBP                         ; 004d0b21
    ADD ESP,0x14                        ; 004d0b23
    POP EBP                             ; 004d0b26
    POP EDI                             ; 004d0b27
    POP ESI                             ; 004d0b28
    POP EBX                             ; 004d0b29
    RET                                 ; 004d0b2a
    MOV EBP,0x10000                     ; 004d0b2b
        ;   Label: LAB_004d0b2b
    SUB EBP,EDI                         ; 004d0b30
    MOV EDI,EBP                         ; 004d0b32
    CMP EBP,EBX                         ; 004d0b34
    JLE 0x004d0bb2                      ; 004d0b36
        ;   XREF to: 004d0bb2 (CONDITIONAL_JUMP)  ; LAB_004d0bb2
    MOV EBP,dword ptr [ECX]             ; 004d0b38
    IMUL EBP,EAX                        ; 004d0b3a
    MOV dword ptr [ESP + 0xc],EBP       ; 004d0b3d
    LEA EAX,[ESI + EBP*0x1]             ; 004d0b41
    SHL EAX,0x2                         ; 004d0b44
    MOV EBP,dword ptr [ECX + 0x24]      ; 004d0b47
    ADD EAX,EBP                         ; 004d0b4a
    MOV dword ptr [ESP + 0x8],EBP       ; 004d0b4c
    MOVSX EAX,word ptr [EAX]            ; 004d0b50
    IMUL EAX,dword ptr [ECX + 0x20]     ; 004d0b53
    AND EDX,dword ptr [ECX + 0x8]       ; 004d0b57
    ADD EDX,dword ptr [ESP + 0xc]       ; 004d0b5a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004d0b5e
    SHL EDX,0x2                         ; 004d0b62
    ADD EDX,EBP                         ; 004d0b65
    MOVSX EDX,word ptr [EDX]            ; 004d0b67
    MOV EBP,dword ptr [ECX + 0x20]      ; 004d0b6a
    IMUL EBP,EDX                        ; 004d0b6d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d0b70
    AND EDX,dword ptr [ECX + 0xc]       ; 004d0b74
    IMUL EDX,dword ptr [ECX]            ; 004d0b77
    ADD ESI,EDX                         ; 004d0b7a
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0b7c
    SHL ESI,0x2                         ; 004d0b80
    ADD ESI,EDX                         ; 004d0b83
    MOV ECX,dword ptr [ECX + 0x20]      ; 004d0b85
    MOVSX ESI,word ptr [ESI]            ; 004d0b88
    IMUL ECX,ESI                        ; 004d0b8b
    MOV EDX,EAX                         ; 004d0b8e
    SUB EDX,EBP                         ; 004d0b90
    SUB ECX,EAX                         ; 004d0b92
    MOV EAX,EDI                         ; 004d0b94
    IMUL EDX                            ; 004d0b96
    SHRD EAX,EDX,0x10                   ; 004d0b98
    MOV EDX,ECX                         ; 004d0b9c
    ADD EBP,EAX                         ; 004d0b9e
    MOV EAX,EBX                         ; 004d0ba0
    IMUL EDX                            ; 004d0ba2
    SHRD EAX,EDX,0x10                   ; 004d0ba4
    ADD EAX,EBP                         ; 004d0ba8
    ADD ESP,0x14                        ; 004d0baa
    POP EBP                             ; 004d0bad
    POP EDI                             ; 004d0bae
    POP ESI                             ; 004d0baf
    POP EBX                             ; 004d0bb0
    RET                                 ; 004d0bb1
    MOV EBP,dword ptr [ECX + 0x8]       ; 004d0bb2
        ;   Label: LAB_004d0bb2
    AND EBP,EDX                         ; 004d0bb5
    IMUL EAX,dword ptr [ECX]            ; 004d0bb7
    ADD EAX,EBP                         ; 004d0bba
    LEA EDX,[EAX*0x4 + 0x0]             ; 004d0bbc
    MOV EAX,dword ptr [ECX + 0x24]      ; 004d0bc3
    MOV dword ptr [ESP + 0x8],EBP       ; 004d0bc6
    MOV EBP,dword ptr [ECX + 0x20]      ; 004d0bca
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004d0bcd
    IMUL EBP,EDX                        ; 004d0bd1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d0bd4
    MOV dword ptr [ESP + 0x4],EBP       ; 004d0bd8
    AND EDX,dword ptr [ECX + 0xc]       ; 004d0bdc
    MOV EBP,dword ptr [ECX]             ; 004d0bdf
    IMUL EBP,EDX                        ; 004d0be1
    MOV dword ptr [ESP + 0xc],EBP       ; 004d0be4
    MOV EDX,EBP                         ; 004d0be8
    ADD EDX,dword ptr [ESP + 0x8]       ; 004d0bea
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004d0bee
    MOV EBP,dword ptr [ECX + 0x20]      ; 004d0bf2
    IMUL EBP,EDX                        ; 004d0bf5
    ADD ESI,dword ptr [ESP + 0xc]       ; 004d0bf8
    MOVSX EAX,word ptr [EAX + ESI*0x4]  ; 004d0bfc
    MOV EDX,EAX                         ; 004d0c00
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004d0c02
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0c06
    SUB EDX,EBP                         ; 004d0c0a
    SUB EBP,EAX                         ; 004d0c0c
    MOV EAX,EDI                         ; 004d0c0e
    MOV ECX,dword ptr [ESP + 0x4]       ; 004d0c10
    IMUL EDX                            ; 004d0c14
    SHRD EAX,EDX,0x10                   ; 004d0c16
    MOV EDX,EBP                         ; 004d0c1a
    ADD ECX,EAX                         ; 004d0c1c
    MOV EAX,EBX                         ; 004d0c1e
    IMUL EDX                            ; 004d0c20
    SHRD EAX,EDX,0x10                   ; 004d0c22
    ADD EAX,ECX                         ; 004d0c26
    ADD ESP,0x14                        ; 004d0c28
    POP EBP                             ; 004d0c2b
    POP EDI                             ; 004d0c2c
    POP ESI                             ; 004d0c2d
    POP EBX                             ; 004d0c2e
    RET                                 ; 004d0c2f

