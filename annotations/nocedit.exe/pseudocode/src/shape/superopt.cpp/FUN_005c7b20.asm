; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_FUN_005c7b20()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7350 at 005d740b
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_malloc_FUN_006021da
;   shape_superopt.cpp_FUN_005c7dc0
;   shape_superopt.cpp_FUN_005c8160
;   shape_superopt.cpp_FUN_005c8280
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c7b20
        ;   Label: shape_superopt.cpp_FUN_005c7b20
    PUSH EDI                            ; 005c7b21
    PUSH EBP                            ; 005c7b22
    SUB ESP,0x8                         ; 005c7b23
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c7b26
    MOV EDX,dword ptr [EAX]             ; 005c7b2a
    TEST EDX,EDX                        ; 005c7b2c
    JZ 0x005c7b36                       ; 005c7b2e | LAB_005c7b36
        ;   XREF to: 005c7b36 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x4],0x0       ; 005c7b30
    JNZ 0x005c7b3f                      ; 005c7b34 | LAB_005c7b3f
        ;   XREF to: 005c7b3f (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005c7b36
        ;   Label: LAB_005c7b36
    ADD ESP,0x8                         ; 005c7b38
        ;   Label: LAB_005c7b38
    POP EBP                             ; 005c7b3b
    POP EDI                             ; 005c7b3c
    POP ESI                             ; 005c7b3d
    RET                                 ; 005c7b3e
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c7b3f
        ;   Label: LAB_005c7b3f
    SUB EAX,EDX                         ; 005c7b46
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c7b48
    MOV dword ptr [EDX + 0x2c],EAX      ; 005c7b4c
    MOV EDX,dword ptr [EDX]             ; 005c7b4f
    LEA EAX,[EDX*0x8 + 0x0]             ; 005c7b51
    ADD EAX,EDX                         ; 005c7b58
    SHL EAX,0x5                         ; 005c7b5a
    PUSH EAX                            ; 005c7b5d
    CALL crt_memory.c_malloc_FUN_006021da ; 005c7b5e | void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7b63
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c7b66
    MOV dword ptr [EDX + 0x30],EAX      ; 005c7b6a
    TEST EAX,EAX                        ; 005c7b6d
    JZ 0x005c7b38                       ; 005c7b6f | LAB_005c7b38
        ;   XREF to: 005c7b38 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c7b71
    MOV ECX,dword ptr [EDX]             ; 005c7b74
    XOR ESI,ESI                         ; 005c7b76
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c7b78
    MOV ECX,dword ptr [ECX]             ; 005c7b7c
    MOV dword ptr [ESP],ESI             ; 005c7b7e
    MOV EDI,dword ptr [EDX]             ; 005c7b81
    MOV ECX,dword ptr [ECX + 0x4]       ; 005c7b83
    TEST EDI,EDI                        ; 005c7b86
    JBE 0x005c7d68                      ; 005c7b88 | LAB_005c7d68
        ;   XREF to: 005c7d68 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005c7b8e
    MOV dword ptr [ESP + 0x8],ESI       ; 005c7b8f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c7b93
        ;   Label: LAB_005c7b93
    MOV EBP,dword ptr [ESP + 0x8]       ; 005c7b97
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c7b9b
    ADD EDX,EBP                         ; 005c7b9e
    MOV EDX,dword ptr [EDX]             ; 005c7ba0
    MOV EBX,dword ptr [EDX + 0x4]       ; 005c7ba2
    MOV dword ptr [EAX],EBX             ; 005c7ba5
    IMUL EBX,EBX,0x38                   ; 005c7ba7
    LEA ESI,[EAX + 0x10]                ; 005c7baa
    MOV EDI,dword ptr [ECX + EBX*0x1]   ; 005c7bad
    MOV dword ptr [ESI],EDI             ; 005c7bb0
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x4] ; 005c7bb2
    MOV dword ptr [ESI + 0x4],EDI       ; 005c7bb6
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x8] ; 005c7bb9
    MOV dword ptr [ESI + 0x8],EDI       ; 005c7bbd
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0xc] ; 005c7bc0
    MOV dword ptr [ESI + 0xc],EDI       ; 005c7bc4
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x10] ; 005c7bc7
    MOV dword ptr [ESI + 0x10],EDI      ; 005c7bcb
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x14] ; 005c7bce
    MOV dword ptr [ESI + 0x14],EDI      ; 005c7bd2
    LEA ESI,[EDX + 0x10]                ; 005c7bd5
    LEA EBX,[EAX + 0x40]                ; 005c7bd8
    MOV EDI,dword ptr [ESI]             ; 005c7bdb
    MOV dword ptr [EBX],EDI             ; 005c7bdd
    MOV EDI,dword ptr [ESI + 0x4]       ; 005c7bdf
    MOV dword ptr [EBX + 0x4],EDI       ; 005c7be2
    MOV EDI,dword ptr [ESI + 0x8]       ; 005c7be5
    MOV dword ptr [EBX + 0x8],EDI       ; 005c7be8
    MOV EDI,dword ptr [ESI + 0xc]       ; 005c7beb
    MOV dword ptr [EBX + 0xc],EDI       ; 005c7bee
    MOV EBX,dword ptr [EDX + 0x8]       ; 005c7bf1
    MOV dword ptr [EAX + 0x4],EBX       ; 005c7bf4
    IMUL EBX,EBX,0x38                   ; 005c7bf7
    LEA EDI,[EAX + 0x28]                ; 005c7bfa
    MOV EBP,dword ptr [ECX + EBX*0x1]   ; 005c7bfd
    MOV dword ptr [EDI],EBP             ; 005c7c00
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0x4] ; 005c7c02
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7c06
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0x8] ; 005c7c09
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7c0d
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0xc] ; 005c7c10
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7c14
    FLD double ptr [ECX + EBX*0x1 + 0x10] ; 005c7c17
    LEA EBX,[EDX + 0x20]                ; 005c7c1b
    FSTP double ptr [EDI + 0x10]        ; 005c7c1e
    LEA EDI,[EAX + 0x50]                ; 005c7c21
    MOV EBP,dword ptr [EBX]             ; 005c7c24
    MOV dword ptr [EDI],EBP             ; 005c7c26
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c7c28
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7c2b
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c7c2e
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7c31
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c7c34
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7c37
    MOV EDI,dword ptr [EDX + 0x8]       ; 005c7c3a
    MOV dword ptr [EAX + 0x60],EDI      ; 005c7c3d
    IMUL EBP,EDI,0x38                   ; 005c7c40
    ADD EAX,0x60                        ; 005c7c43
    LEA EDI,[EAX + 0x10]                ; 005c7c46
    FLD double ptr [ECX + EBP*0x1]      ; 005c7c49
    FSTP double ptr [EDI]               ; 005c7c4c
    FLD double ptr [ECX + EBP*0x1 + 0x8] ; 005c7c4e
    FSTP double ptr [EDI + 0x8]         ; 005c7c52
    FLD double ptr [ECX + EBP*0x1 + 0x10] ; 005c7c55
    FSTP double ptr [EDI + 0x10]        ; 005c7c59
    LEA EDI,[EAX + 0x40]                ; 005c7c5c
    MOV EBP,dword ptr [EBX]             ; 005c7c5f
    MOV dword ptr [EDI],EBP             ; 005c7c61
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c7c63
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7c66
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c7c69
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7c6c
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c7c6f
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7c72
    MOV EBX,dword ptr [EDX + 0xc]       ; 005c7c75
    MOV dword ptr [EAX + 0x4],EBX       ; 005c7c78
    IMUL EBX,EBX,0x38                   ; 005c7c7b
    LEA EDI,[EAX + 0x28]                ; 005c7c7e
    MOV EBP,dword ptr [ECX + EBX*0x1]   ; 005c7c81
    MOV dword ptr [EDI],EBP             ; 005c7c84
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0x4] ; 005c7c86
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7c8a
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0x8] ; 005c7c8d
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7c91
    MOV EBP,dword ptr [ECX + EBX*0x1 + 0xc] ; 005c7c94
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7c98
    FLD double ptr [ECX + EBX*0x1 + 0x10] ; 005c7c9b
    LEA EBX,[EDX + 0x30]                ; 005c7c9f
    FSTP double ptr [EDI + 0x10]        ; 005c7ca2
    LEA EDI,[EAX + 0x50]                ; 005c7ca5
    MOV EBP,dword ptr [EBX]             ; 005c7ca8
    MOV dword ptr [EDI],EBP             ; 005c7caa
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c7cac
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7caf
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c7cb2
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7cb5
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c7cb8
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7cbb
    MOV EDI,dword ptr [EDX + 0xc]       ; 005c7cbe
    MOV dword ptr [EAX + 0x60],EDI      ; 005c7cc1
    IMUL EBP,EDI,0x38                   ; 005c7cc4
    ADD EAX,0x60                        ; 005c7cc7
    LEA EDI,[EAX + 0x10]                ; 005c7cca
    FLD double ptr [ECX + EBP*0x1]      ; 005c7ccd
    FSTP double ptr [EDI]               ; 005c7cd0
    FLD double ptr [ECX + EBP*0x1 + 0x8] ; 005c7cd2
    FSTP double ptr [EDI + 0x8]         ; 005c7cd6
    FLD double ptr [ECX + EBP*0x1 + 0x10] ; 005c7cd9
    FSTP double ptr [EDI + 0x10]        ; 005c7cdd
    LEA EDI,[EAX + 0x40]                ; 005c7ce0
    MOV EBP,dword ptr [EBX]             ; 005c7ce3
    MOV dword ptr [EDI],EBP             ; 005c7ce5
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c7ce7
    MOV dword ptr [EDI + 0x4],EBP       ; 005c7cea
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c7ced
    MOV dword ptr [EDI + 0x8],EBP       ; 005c7cf0
    MOV EBP,dword ptr [EBX + 0xc]       ; 005c7cf3
    MOV dword ptr [EDI + 0xc],EBP       ; 005c7cf6
    MOV EBX,dword ptr [EDX + 0x4]       ; 005c7cf9
    MOV dword ptr [EAX + 0x4],EBX       ; 005c7cfc
    IMUL EDX,EBX,0x38                   ; 005c7cff
    LEA EBX,[EAX + 0x28]                ; 005c7d02
    MOV EDI,dword ptr [ECX + EDX*0x1]   ; 005c7d05
    MOV dword ptr [EBX],EDI             ; 005c7d08
    MOV EDI,dword ptr [ECX + EDX*0x1 + 0x4] ; 005c7d0a
    MOV dword ptr [EBX + 0x4],EDI       ; 005c7d0e
    MOV EDI,dword ptr [ECX + EDX*0x1 + 0x8] ; 005c7d11
    MOV dword ptr [EBX + 0x8],EDI       ; 005c7d15
    MOV EDI,dword ptr [ECX + EDX*0x1 + 0xc] ; 005c7d18
    MOV dword ptr [EBX + 0xc],EDI       ; 005c7d1c
    MOV EDI,dword ptr [ECX + EDX*0x1 + 0x10] ; 005c7d1f
    MOV dword ptr [EBX + 0x10],EDI      ; 005c7d23
    MOV EDI,dword ptr [ECX + EDX*0x1 + 0x14] ; 005c7d26
    MOV dword ptr [EBX + 0x14],EDI      ; 005c7d2a
    LEA EDX,[EAX + 0x50]                ; 005c7d2d
    FLD double ptr [ESI]                ; 005c7d30
    MOV EBX,dword ptr [ESP + 0x4]       ; 005c7d32
    FSTP double ptr [EDX]               ; 005c7d36
    MOV EDI,dword ptr [ESI + 0x8]       ; 005c7d38
    MOV dword ptr [EDX + 0x8],EDI       ; 005c7d3b
    MOV EDI,dword ptr [ESI + 0xc]       ; 005c7d3e
    MOV dword ptr [EDX + 0xc],EDI       ; 005c7d41
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c7d44
    INC EBX                             ; 005c7d48
    ADD EDX,0x4                         ; 005c7d49
    MOV dword ptr [ESP + 0x4],EBX       ; 005c7d4c
    MOV dword ptr [ESP + 0x8],EDX       ; 005c7d50
    MOV EDX,EBX                         ; 005c7d54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c7d56
    MOV ESI,dword ptr [EBX]             ; 005c7d5a
    ADD EAX,0x60                        ; 005c7d5c
    CMP EDX,ESI                         ; 005c7d5f
    JC 0x005c7b93                       ; 005c7d61 | LAB_005c7b93
        ;   XREF to: 005c7b93 (CONDITIONAL_JUMP)
    POP EBX                             ; 005c7d67
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c7d68
        ;   Label: LAB_005c7d68
    PUSH EDI                            ; 005c7d6c
    CALL shape_superopt.cpp_FUN_005c8160 ; 005c7d6d | undefined shape_superopt.cpp_FUN_005c8160()
        ;   XREF to: 005c8160 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7d72
    PUSH EDI                            ; 005c7d75
    CALL shape_superopt.cpp_FUN_005c7dc0 ; 005c7d76 | undefined shape_superopt.cpp_FUN_005c7dc0()
        ;   XREF to: 005c7dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7d7b
    MOV EDX,dword ptr [EDI + 0x2c]      ; 005c7d7e
    PUSH EDX                            ; 005c7d81
    MOV ECX,dword ptr [EDI + 0x30]      ; 005c7d82
    PUSH ECX                            ; 005c7d85
    PUSH EDI                            ; 005c7d86
    CALL shape_superopt.cpp_FUN_005c8280 ; 005c7d87 | undefined shape_superopt.cpp_FUN_005c8280()
        ;   XREF to: 005c8280 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c7d8c
    TEST EAX,EAX                        ; 005c7d8f
    JZ 0x005c7d9f                       ; 005c7d91 | LAB_005c7d9f
        ;   XREF to: 005c7d9f (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005c7d93
    ADD ESP,0x8                         ; 005c7d98
    POP EBP                             ; 005c7d9b
    POP EDI                             ; 005c7d9c
    POP ESI                             ; 005c7d9d
    RET                                 ; 005c7d9e
    MOV ESI,dword ptr [EDI + 0x30]      ; 005c7d9f
        ;   Label: LAB_005c7d9f
    PUSH ESI                            ; 005c7da2
    CALL crt_memory.c_free_FUN_005fe659 ; 005c7da3 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c7da8
    XOR EAX,EAX                         ; 005c7dab
    ADD ESP,0x8                         ; 005c7dad
    POP EBP                             ; 005c7db0
    POP EDI                             ; 005c7db1
    POP ESI                             ; 005c7db2
    RET                                 ; 005c7db3

