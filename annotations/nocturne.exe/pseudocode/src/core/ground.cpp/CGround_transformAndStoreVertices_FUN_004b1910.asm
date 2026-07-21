; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_transformAndStoreVertices_FUN_004b1910(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;   core_ground.cpp_CGround_render_FUN_004b2110 at 004b2157
;
; Referenced Globals:
;   undefined4 DAT_01cc5118
;   undefined4 DAT_01cc511c
;   undefined4 DAT_01cc5120
;   undefined4 DAT_01cc5124
;   undefined4 DAT_01cc5128
;   undefined4 DAT_01cc512c
;   undefined4 DAT_01cc5130
;   undefined4 DAT_01cc5134
;   undefined4 DAT_01cc5138
;
; Called Functions:
;   core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1910
        ;   Label: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910
    PUSH ESI                            ; 004b1911
    PUSH EDI                            ; 004b1912
    PUSH EBP                            ; 004b1913
    SUB ESP,0x5c                        ; 004b1914
    MOV ESI,dword ptr [ESP + 0x70]      ; 004b1917
    MOV EAX,dword ptr [ESI + 0x14]      ; 004b191b
    IMUL EAX,dword ptr [ESI + 0x1c]     ; 004b191e
    SHL EAX,0x8                         ; 004b1922
    MOV dword ptr [ESP + 0x3c],EAX      ; 004b1925
    MOV dword ptr [ESP + 0x40],EAX      ; 004b1929
    MOV dword ptr [ESP + 0x44],EAX      ; 004b192d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1931
    MOV EAX,[0x01cc5118]                ; 004b1935 | DAT_01cc5118
    IMUL EDX                            ; 004b193a
    SHRD EAX,EDX,0x10                   ; 004b193c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1940
    MOV ECX,EAX                         ; 004b1944
    MOV EAX,[0x01cc5124]                ; 004b1946 | DAT_01cc5124
    IMUL EDX                            ; 004b194b
    SHRD EAX,EDX,0x10                   ; 004b194d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1951
    ADD ECX,EAX                         ; 004b1955
    MOV EAX,[0x01cc5130]                ; 004b1957 | DAT_01cc5130
    IMUL EDX                            ; 004b195c
    SHRD EAX,EDX,0x10                   ; 004b195e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1962
    ADD ECX,EAX                         ; 004b1966
    MOV EAX,[0x01cc511c]                ; 004b1968 | DAT_01cc511c
    MOV dword ptr [ESP],ECX             ; 004b196d
    IMUL EDX                            ; 004b1970
    SHRD EAX,EDX,0x10                   ; 004b1972
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1976
    MOV ECX,EAX                         ; 004b197a
    MOV EAX,[0x01cc5128]                ; 004b197c | DAT_01cc5128
    IMUL EDX                            ; 004b1981
    SHRD EAX,EDX,0x10                   ; 004b1983
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1987
    ADD ECX,EAX                         ; 004b198b
    MOV EAX,[0x01cc5134]                ; 004b198d | DAT_01cc5134
    IMUL EDX                            ; 004b1992
    SHRD EAX,EDX,0x10                   ; 004b1994
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1998
    ADD ECX,EAX                         ; 004b199c
    MOV EAX,[0x01cc5120]                ; 004b199e | DAT_01cc5120
    MOV dword ptr [ESP + 0x4],ECX       ; 004b19a3
    IMUL EDX                            ; 004b19a7
    SHRD EAX,EDX,0x10                   ; 004b19a9
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b19ad
    MOV ECX,EAX                         ; 004b19b1
    MOV EAX,[0x01cc512c]                ; 004b19b3 | DAT_01cc512c
    IMUL EDX                            ; 004b19b8
    SHRD EAX,EDX,0x10                   ; 004b19ba
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b19be
    ADD ECX,EAX                         ; 004b19c2
    MOV EAX,[0x01cc5138]                ; 004b19c4 | DAT_01cc5138
    IMUL EDX                            ; 004b19c9
    SHRD EAX,EDX,0x10                   ; 004b19cb
    ADD ECX,EAX                         ; 004b19cf
    MOV dword ptr [ESP + 0x8],ECX       ; 004b19d1
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004b19d5
    NEG ECX                             ; 004b19d9
    MOV EAX,[0x01cc5118]                ; 004b19db | DAT_01cc5118
    MOV EDX,ECX                         ; 004b19e0
    MOV dword ptr [ESP + 0x3c],ECX      ; 004b19e2
    IMUL EDX                            ; 004b19e6
    SHRD EAX,EDX,0x10                   ; 004b19e8
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b19ec
    MOV ECX,EAX                         ; 004b19f0
    MOV EAX,[0x01cc5124]                ; 004b19f2 | DAT_01cc5124
    IMUL EDX                            ; 004b19f7
    SHRD EAX,EDX,0x10                   ; 004b19f9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b19fd
    ADD ECX,EAX                         ; 004b1a01
    MOV EAX,[0x01cc5130]                ; 004b1a03 | DAT_01cc5130
    IMUL EDX                            ; 004b1a08
    SHRD EAX,EDX,0x10                   ; 004b1a0a
    ADD ECX,EAX                         ; 004b1a0e
    MOV dword ptr [ESP + 0xc],ECX       ; 004b1a10
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1a14
    MOV EAX,[0x01cc511c]                ; 004b1a18 | DAT_01cc511c
    IMUL EDX                            ; 004b1a1d
    SHRD EAX,EDX,0x10                   ; 004b1a1f
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b1a23
    MOV ECX,EAX                         ; 004b1a27
    MOV EAX,[0x01cc5128]                ; 004b1a29 | DAT_01cc5128
    IMUL EDX                            ; 004b1a2e
    SHRD EAX,EDX,0x10                   ; 004b1a30
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1a34
    ADD ECX,EAX                         ; 004b1a38
    MOV EAX,[0x01cc5134]                ; 004b1a3a | DAT_01cc5134
    IMUL EDX                            ; 004b1a3f
    SHRD EAX,EDX,0x10                   ; 004b1a41
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1a45
    ADD ECX,EAX                         ; 004b1a49
    MOV EAX,[0x01cc5120]                ; 004b1a4b | DAT_01cc5120
    MOV dword ptr [ESP + 0x10],ECX      ; 004b1a50
    IMUL EDX                            ; 004b1a54
    SHRD EAX,EDX,0x10                   ; 004b1a56
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b1a5a
    MOV ECX,EAX                         ; 004b1a5e
    MOV EAX,[0x01cc512c]                ; 004b1a60 | DAT_01cc512c
    MOV EBX,dword ptr [ESP + 0x40]      ; 004b1a65
    IMUL EDX                            ; 004b1a69
    SHRD EAX,EDX,0x10                   ; 004b1a6b
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1a6f
    ADD ECX,EAX                         ; 004b1a73
    MOV EAX,[0x01cc5138]                ; 004b1a75 | DAT_01cc5138
    NEG EBX                             ; 004b1a7a
    IMUL EDX                            ; 004b1a7c
    SHRD EAX,EDX,0x10                   ; 004b1a7e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1a82
    ADD ECX,EAX                         ; 004b1a86
    MOV EAX,[0x01cc5118]                ; 004b1a88 | DAT_01cc5118
    MOV dword ptr [ESP + 0x14],ECX      ; 004b1a8d
    IMUL EDX                            ; 004b1a91
    SHRD EAX,EDX,0x10                   ; 004b1a93
    MOV ECX,EAX                         ; 004b1a97
    MOV EDX,EBX                         ; 004b1a99
    MOV EAX,[0x01cc5124]                ; 004b1a9b | DAT_01cc5124
    IMUL EDX                            ; 004b1aa0
    SHRD EAX,EDX,0x10                   ; 004b1aa2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1aa6
    ADD ECX,EAX                         ; 004b1aaa
    MOV EAX,[0x01cc5130]                ; 004b1aac | DAT_01cc5130
    IMUL EDX                            ; 004b1ab1
    SHRD EAX,EDX,0x10                   ; 004b1ab3
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1ab7
    ADD ECX,EAX                         ; 004b1abb
    MOV EAX,[0x01cc511c]                ; 004b1abd | DAT_01cc511c
    MOV dword ptr [ESP + 0x18],ECX      ; 004b1ac2
    IMUL EDX                            ; 004b1ac6
    SHRD EAX,EDX,0x10                   ; 004b1ac8
    MOV ECX,EAX                         ; 004b1acc
    MOV EDX,EBX                         ; 004b1ace
    MOV EAX,[0x01cc5128]                ; 004b1ad0 | DAT_01cc5128
    IMUL EDX                            ; 004b1ad5
    SHRD EAX,EDX,0x10                   ; 004b1ad7
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1adb
    ADD ECX,EAX                         ; 004b1adf
    MOV EAX,[0x01cc5134]                ; 004b1ae1 | DAT_01cc5134
    IMUL EDX                            ; 004b1ae6
    SHRD EAX,EDX,0x10                   ; 004b1ae8
    ADD ECX,EAX                         ; 004b1aec
    MOV dword ptr [ESP + 0x40],EBX      ; 004b1aee
    MOV dword ptr [ESP + 0x1c],ECX      ; 004b1af2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004b1af6
    MOV EAX,[0x01cc5120]                ; 004b1afa | DAT_01cc5120
    IMUL EDX                            ; 004b1aff
    SHRD EAX,EDX,0x10                   ; 004b1b01
    MOV ECX,EAX                         ; 004b1b05
    MOV EDX,EBX                         ; 004b1b07
    MOV EAX,[0x01cc512c]                ; 004b1b09 | DAT_01cc512c
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004b1b0e
    IMUL EDX                            ; 004b1b12
    SHRD EAX,EDX,0x10                   ; 004b1b14
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1b18
    ADD ECX,EAX                         ; 004b1b1c
    MOV EAX,[0x01cc5138]                ; 004b1b1e | DAT_01cc5138
    NEG EDI                             ; 004b1b23
    IMUL EDX                            ; 004b1b25
    SHRD EAX,EDX,0x10                   ; 004b1b27
    MOV EDX,EDI                         ; 004b1b2b
    ADD ECX,EAX                         ; 004b1b2d
    MOV EAX,[0x01cc5118]                ; 004b1b2f | DAT_01cc5118
    MOV dword ptr [ESP + 0x20],ECX      ; 004b1b34
    IMUL EDX                            ; 004b1b38
    SHRD EAX,EDX,0x10                   ; 004b1b3a
    MOV ECX,EAX                         ; 004b1b3e
    MOV EDX,EBX                         ; 004b1b40
    MOV EAX,[0x01cc5124]                ; 004b1b42 | DAT_01cc5124
    IMUL EDX                            ; 004b1b47
    SHRD EAX,EDX,0x10                   ; 004b1b49
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1b4d
    ADD ECX,EAX                         ; 004b1b51
    MOV EAX,[0x01cc5130]                ; 004b1b53 | DAT_01cc5130
    IMUL EDX                            ; 004b1b58
    SHRD EAX,EDX,0x10                   ; 004b1b5a
    MOV EDX,EDI                         ; 004b1b5e
    ADD ECX,EAX                         ; 004b1b60
    MOV EAX,[0x01cc511c]                ; 004b1b62 | DAT_01cc511c
    MOV dword ptr [ESP + 0x24],ECX      ; 004b1b67
    IMUL EDX                            ; 004b1b6b
    SHRD EAX,EDX,0x10                   ; 004b1b6d
    MOV ECX,EAX                         ; 004b1b71
    MOV EDX,EBX                         ; 004b1b73
    MOV EAX,[0x01cc5128]                ; 004b1b75 | DAT_01cc5128
    IMUL EDX                            ; 004b1b7a
    SHRD EAX,EDX,0x10                   ; 004b1b7c
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1b80
    ADD ECX,EAX                         ; 004b1b84
    MOV EAX,[0x01cc5134]                ; 004b1b86 | DAT_01cc5134
    IMUL EDX                            ; 004b1b8b
    SHRD EAX,EDX,0x10                   ; 004b1b8d
    MOV EDX,EDI                         ; 004b1b91
    ADD ECX,EAX                         ; 004b1b93
    MOV EAX,[0x01cc5120]                ; 004b1b95 | DAT_01cc5120
    MOV dword ptr [ESP + 0x28],ECX      ; 004b1b9a
    IMUL EDX                            ; 004b1b9e
    SHRD EAX,EDX,0x10                   ; 004b1ba0
    MOV ECX,EAX                         ; 004b1ba4
    MOV EDX,EBX                         ; 004b1ba6
    MOV EAX,[0x01cc512c]                ; 004b1ba8 | DAT_01cc512c
    IMUL EDX                            ; 004b1bad
    SHRD EAX,EDX,0x10                   ; 004b1baf
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b1bb3
    ADD ECX,EAX                         ; 004b1bb7
    MOV EAX,[0x01cc5138]                ; 004b1bb9 | DAT_01cc5138
    IMUL EDX                            ; 004b1bbe
    SHRD EAX,EDX,0x10                   ; 004b1bc0
    ADD ECX,EAX                         ; 004b1bc4
    MOV dword ptr [ESP + 0x3c],EDI      ; 004b1bc6
    MOV dword ptr [ESP + 0x2c],ECX      ; 004b1bca
    MOV ECX,0x3e7                       ; 004b1bce
    XOR EBP,EBP                         ; 004b1bd3
    MOV EBX,0x3e7                       ; 004b1bd5
    MOV dword ptr [ESP + 0x34],EBP      ; 004b1bda
    MOV dword ptr [ESP + 0x38],EBP      ; 004b1bde
    MOV dword ptr [ESP + 0x58],ECX      ; 004b1be2
    MOV dword ptr [ESP + 0x30],EBP      ; 004b1be6
    MOV dword ptr [ESP + 0x54],EBX      ; 004b1bea
    MOV ECX,0xfffffc19                  ; 004b1bee
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004b1bf3
    XOR EBX,EBX                         ; 004b1bf6
    SHL EAX,0x8                         ; 004b1bf8
    MOV EBP,ECX                         ; 004b1bfb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b1bfd
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 004b1c01
        ;   Label: LAB_004b1c01
    MOV EDX,EAX                         ; 004b1c04
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004b1c06
    SAR EDX,0x1f                        ; 004b1c0a
    IDIV EDI                            ; 004b1c0d
    MOV EDI,EAX                         ; 004b1c0f
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004b1c11
    MOV EDX,EAX                         ; 004b1c15
    SAR EDX,0x1f                        ; 004b1c17
    IDIV dword ptr [ESP + 0x4c]         ; 004b1c1a
    CMP EDI,dword ptr [ESP + 0x58]      ; 004b1c1e
    JL 0x004b1cf5                       ; 004b1c22
        ;   XREF to: 004b1cf5 (CONDITIONAL_JUMP)  ; LAB_004b1cf5
    CMP EAX,dword ptr [ESP + 0x54]      ; 004b1c28
        ;   Label: LAB_004b1c28
    JGE 0x004b1c32                      ; 004b1c2c
        ;   XREF to: 004b1c32 (CONDITIONAL_JUMP)  ; LAB_004b1c32
    MOV dword ptr [ESP + 0x54],EAX      ; 004b1c2e
    CMP EDI,ECX                         ; 004b1c32
        ;   Label: LAB_004b1c32
    JLE 0x004b1c38                      ; 004b1c34
        ;   XREF to: 004b1c38 (CONDITIONAL_JUMP)  ; LAB_004b1c38
    MOV ECX,EDI                         ; 004b1c36
    CMP EAX,EBP                         ; 004b1c38
        ;   Label: LAB_004b1c38
    JLE 0x004b1c3e                      ; 004b1c3a
        ;   XREF to: 004b1c3e (CONDITIONAL_JUMP)  ; LAB_004b1c3e
    MOV EBP,EAX                         ; 004b1c3c
    ADD EBX,0xc                         ; 004b1c3e
        ;   Label: LAB_004b1c3e
    CMP EBX,0x3c                        ; 004b1c41
    JNZ 0x004b1c01                      ; 004b1c44
        ;   XREF to: 004b1c01 (CONDITIONAL_JUMP)  ; LAB_004b1c01
    MOV EDI,dword ptr [ESP + 0x54]      ; 004b1c46
    MOV EBX,dword ptr [ESP + 0x58]      ; 004b1c4a
    ADD ECX,0x2                         ; 004b1c4e
    ADD EBP,0x2                         ; 004b1c51
    MOV EAX,dword ptr [ESI + 0x10]      ; 004b1c54
    SUB EDI,0x2                         ; 004b1c57
    SUB EBX,0x2                         ; 004b1c5a
    MOV dword ptr [ESI + 0x40],ECX      ; 004b1c5d
    MOV dword ptr [ESP + 0x50],EAX      ; 004b1c60
    MOV dword ptr [ESI + 0x48],EBP      ; 004b1c64
    MOV dword ptr [ESP + 0x54],EDI      ; 004b1c67
    MOV EBP,EAX                         ; 004b1c6b
    MOV dword ptr [ESI + 0x3c],EBX      ; 004b1c6d
    MOV dword ptr [ESP + 0x58],EBX      ; 004b1c70
    MOV dword ptr [ESI + 0x44],EDI      ; 004b1c74
    NEG EBP                             ; 004b1c77
    MOV EAX,dword ptr [ESI + 0x3c]      ; 004b1c79
    MOV dword ptr [ESP + 0x50],EBP      ; 004b1c7c
    CMP EAX,EBP                         ; 004b1c80
    JLE 0x004b1c88                      ; 004b1c82
        ;   XREF to: 004b1c88 (CONDITIONAL_JUMP)  ; LAB_004b1c88
    MOV dword ptr [ESP + 0x50],EAX      ; 004b1c84
    MOV ECX,dword ptr [ESI + 0x40]      ; 004b1c88
        ;   Label: LAB_004b1c88
    MOV EBP,dword ptr [ESI + 0x10]      ; 004b1c8b
    CMP EBP,ECX                         ; 004b1c8e
    JLE 0x004b1c94                      ; 004b1c90
        ;   XREF to: 004b1c94 (CONDITIONAL_JUMP)  ; LAB_004b1c94
    MOV EBP,ECX                         ; 004b1c92
    MOV EAX,dword ptr [ESI + 0x14]      ; 004b1c94
        ;   Label: LAB_004b1c94
    MOV EBX,dword ptr [ESI + 0x44]      ; 004b1c97
    NEG EAX                             ; 004b1c9a
    CMP EAX,EBX                         ; 004b1c9c
    JGE 0x004b1ca2                      ; 004b1c9e
        ;   XREF to: 004b1ca2 (CONDITIONAL_JUMP)  ; LAB_004b1ca2
    MOV EAX,EBX                         ; 004b1ca0
    MOV ECX,dword ptr [ESI + 0x14]      ; 004b1ca2
        ;   Label: LAB_004b1ca2
    MOV dword ptr [ESP + 0x48],ECX      ; 004b1ca5
    MOV EDI,dword ptr [ESP + 0x48]      ; 004b1ca9
    MOV ECX,dword ptr [ESI + 0x48]      ; 004b1cad
    CMP ECX,EDI                         ; 004b1cb0
    JGE 0x004b1cb8                      ; 004b1cb2
        ;   XREF to: 004b1cb8 (CONDITIONAL_JUMP)  ; LAB_004b1cb8
    MOV dword ptr [ESP + 0x48],ECX      ; 004b1cb4
    MOV EDX,dword ptr [ESP + 0x48]      ; 004b1cb8
        ;   Label: LAB_004b1cb8
    MOV EDI,EAX                         ; 004b1cbc
    CMP EAX,EDX                         ; 004b1cbe
    JG 0x004b1ced                       ; 004b1cc0
        ;   XREF to: 004b1ced (CONDITIONAL_JUMP)  ; LAB_004b1ced
    MOV EBX,dword ptr [ESP + 0x50]      ; 004b1cc2
        ;   Label: LAB_004b1cc2
    CMP EBP,EBX                         ; 004b1cc6
    JL 0x004b1ce4                       ; 004b1cc8
        ;   XREF to: 004b1ce4 (CONDITIONAL_JUMP)  ; LAB_004b1ce4
    MOV EAX,dword ptr [ESI + 0x30]      ; 004b1cca
        ;   Label: LAB_004b1cca
    ADD EAX,EDI                         ; 004b1ccd
    PUSH EAX                            ; 004b1ccf
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004b1cd0
    ADD EAX,EBX                         ; 004b1cd3
    PUSH EAX                            ; 004b1cd5
    PUSH ESI                            ; 004b1cd6
    INC EBX                             ; 004b1cd7
    CALL core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820 ; 004b1cd8
        ;   XREF to: 004b1820 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820()
    ADD ESP,0xc                         ; 004b1cdd
    CMP EBX,EBP                         ; 004b1ce0
    JLE 0x004b1cca                      ; 004b1ce2
        ;   XREF to: 004b1cca (CONDITIONAL_JUMP)  ; LAB_004b1cca
    MOV ECX,dword ptr [ESP + 0x48]      ; 004b1ce4
        ;   Label: LAB_004b1ce4
    INC EDI                             ; 004b1ce8
    CMP EDI,ECX                         ; 004b1ce9
    JLE 0x004b1cc2                      ; 004b1ceb
        ;   XREF to: 004b1cc2 (CONDITIONAL_JUMP)  ; LAB_004b1cc2
    ADD ESP,0x5c                        ; 004b1ced
        ;   Label: LAB_004b1ced
    POP EBP                             ; 004b1cf0
    POP EDI                             ; 004b1cf1
    POP ESI                             ; 004b1cf2
    POP EBX                             ; 004b1cf3
    RET                                 ; 004b1cf4
    MOV dword ptr [ESP + 0x58],EDI      ; 004b1cf5
        ;   Label: LAB_004b1cf5
    JMP 0x004b1c28                      ; 004b1cf9
        ;   XREF to: 004b1c28 (UNCONDITIONAL_JUMP)  ; LAB_004b1c28

