; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_10010dc0(LCID param_1,DWORD param_2,PCNZWCH param_3,int param_4,LPCWSTR param_5,int param_6,UINT param_7)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_1001276c
;   undefined4 DAT_10012770
;   undefined4 DAT_10017770
;   undefined4 DAT_1001864c
;   void* PTR_CompareStringW_1024219c = 00242782
;   void* PTR_CompareStringA_10242210 = 00242770
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;
; Called Functions:
;   CompareStringA
;   CompareStringW
;   FUN_10005b30
;   FUN_10008830
;   FUN_10011000
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 10010dc0
        ;   Label: FUN_10010dc0
    CMP dword ptr [0x1001864c],0x0      ; 10010dc3 | DAT_1001864c
    PUSH EBX                            ; 10010dca
    PUSH ESI                            ; 10010dcb
    PUSH EDI                            ; 10010dcc
    PUSH EBP                            ; 10010dcd
    JNZ 0x10010e2c                      ; 10010dce
        ;   XREF to: 10010e2c (CONDITIONAL_JUMP)  ; LAB_10010e2c
    PUSH 0x1                            ; 10010dd0
    MOV EDI,dword ptr [0x1024219c]      ; 10010dd2 | PTR_CompareStringW_1024219c
    PUSH 0x10012770                     ; 10010dd8 | DAT_10012770
    PUSH 0x1                            ; 10010ddd
    PUSH 0x10012770                     ; 10010ddf | DAT_10012770
    PUSH 0x0                            ; 10010de4
    PUSH 0x0                            ; 10010de6
    CALL EDI                            ; 10010de8 | int CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, ...)
    TEST EAX,EAX                        ; 10010dea
    JZ 0x10010dfa                       ; 10010dec
        ;   XREF to: 10010dfa (CONDITIONAL_JUMP)  ; LAB_10010dfa
    MOV dword ptr [0x1001864c],0x1      ; 10010dee | DAT_1001864c
    JMP 0x10010e32                      ; 10010df8
        ;   XREF to: 10010e32 (UNCONDITIONAL_JUMP)  ; LAB_10010e32
    PUSH 0x1                            ; 10010dfa
        ;   Label: LAB_10010dfa
    PUSH 0x1001276c                     ; 10010dfc | DAT_1001276c
    PUSH 0x1                            ; 10010e01
    PUSH 0x1001276c                     ; 10010e03 | DAT_1001276c
    PUSH 0x0                            ; 10010e08
    PUSH 0x0                            ; 10010e0a
    CALL dword ptr [0x10242210]         ; 10010e0c | PTR_CompareStringA_10242210
    TEST EAX,EAX                        ; 10010e12
    JZ 0x10010e22                       ; 10010e14
        ;   XREF to: 10010e22 (CONDITIONAL_JUMP)  ; LAB_10010e22
    MOV dword ptr [0x1001864c],0x2      ; 10010e16 | DAT_1001864c
    JMP 0x10010e32                      ; 10010e20
        ;   XREF to: 10010e32 (UNCONDITIONAL_JUMP)  ; LAB_10010e32
    XOR EAX,EAX                         ; 10010e22
        ;   Label: LAB_10010e22
    POP EBP                             ; 10010e24
    POP EDI                             ; 10010e25
    POP ESI                             ; 10010e26
    POP EBX                             ; 10010e27
    ADD ESP,0x8                         ; 10010e28
    RET                                 ; 10010e2b
    MOV EDI,dword ptr [0x1024219c]      ; 10010e2c | PTR_CompareStringW_1024219c
        ;   Label: LAB_10010e2c
    MOV ESI,dword ptr [ESP + 0x28]      ; 10010e32
        ;   Label: LAB_10010e32
    TEST ESI,ESI                        ; 10010e36
    JLE 0x10010e4a                      ; 10010e38
        ;   XREF to: 10010e4a (CONDITIONAL_JUMP)  ; LAB_10010e4a
    MOV EAX,dword ptr [ESP + 0x24]      ; 10010e3a
    PUSH ESI                            ; 10010e3e
    PUSH EAX                            ; 10010e3f
    CALL FUN_10011000                   ; 10010e40
        ;   XREF to: 10011000 (UNCONDITIONAL_CALL)  ; undefined FUN_10011000()
    ADD ESP,0x8                         ; 10010e45
    MOV ESI,EAX                         ; 10010e48
    MOV EBX,dword ptr [ESP + 0x30]      ; 10010e4a
        ;   Label: LAB_10010e4a
    TEST EBX,EBX                        ; 10010e4e
    JLE 0x10010e62                      ; 10010e50
        ;   XREF to: 10010e62 (CONDITIONAL_JUMP)  ; LAB_10010e62
    MOV EAX,dword ptr [ESP + 0x2c]      ; 10010e52
    PUSH EBX                            ; 10010e56
    PUSH EAX                            ; 10010e57
    CALL FUN_10011000                   ; 10010e58
        ;   XREF to: 10011000 (UNCONDITIONAL_CALL)  ; undefined FUN_10011000()
    ADD ESP,0x8                         ; 10010e5d
    MOV EBX,EAX                         ; 10010e60
    TEST ESI,ESI                        ; 10010e62
        ;   Label: LAB_10010e62
    JZ 0x10010fd4                       ; 10010e64
        ;   XREF to: 10010fd4 (CONDITIONAL_JUMP)  ; LAB_10010fd4
    TEST EBX,EBX                        ; 10010e6a
    JZ 0x10010fd4                       ; 10010e6c
        ;   XREF to: 10010fd4 (CONDITIONAL_JUMP)  ; LAB_10010fd4
    CMP dword ptr [0x1001864c],0x1      ; 10010e72 | DAT_1001864c
    JNZ 0x10010e9b                      ; 10010e79
        ;   XREF to: 10010e9b (CONDITIONAL_JUMP)  ; LAB_10010e9b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 10010e7b
    PUSH EBX                            ; 10010e7f
    MOV ECX,dword ptr [ESP + 0x28]      ; 10010e80
    PUSH EAX                            ; 10010e84
    MOV EDX,dword ptr [ESP + 0x28]      ; 10010e85
    PUSH ESI                            ; 10010e89
    MOV EAX,dword ptr [ESP + 0x28]      ; 10010e8a
    PUSH ECX                            ; 10010e8e
    PUSH EDX                            ; 10010e8f
    PUSH EAX                            ; 10010e90
    CALL EDI                            ; 10010e91 | int CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, ...)
    POP EBP                             ; 10010e93
    POP EDI                             ; 10010e94
    POP ESI                             ; 10010e95
    POP EBX                             ; 10010e96
    ADD ESP,0x8                         ; 10010e97
    RET                                 ; 10010e9a
    CMP dword ptr [0x1001864c],0x2      ; 10010e9b | DAT_1001864c
        ;   Label: LAB_10010e9b
    JNZ 0x10010ff3                      ; 10010ea2
        ;   XREF to: 10010ff3 (CONDITIONAL_JUMP)  ; LAB_10010ff3
    XOR EDI,EDI                         ; 10010ea8
    MOV EBP,dword ptr [ESP + 0x34]      ; 10010eaa
    CMP EBP,EDI                         ; 10010eae
    JNZ 0x10010eb8                      ; 10010eb0
        ;   XREF to: 10010eb8 (CONDITIONAL_JUMP)  ; LAB_10010eb8
    MOV EBP,dword ptr [0x10017770]      ; 10010eb2 | DAT_10017770
    MOV EAX,dword ptr [ESP + 0x24]      ; 10010eb8
        ;   Label: LAB_10010eb8
    PUSH 0x0                            ; 10010ebc
    PUSH 0x0                            ; 10010ebe
    PUSH 0x0                            ; 10010ec0
    PUSH 0x0                            ; 10010ec2
    PUSH ESI                            ; 10010ec4
    PUSH EAX                            ; 10010ec5
    PUSH 0x220                          ; 10010ec6
    PUSH EBP                            ; 10010ecb
    CALL dword ptr [0x10242230]         ; 10010ecc | PTR_WideCharToMultiByte_10242230
    MOV dword ptr [ESP + 0x14],EAX      ; 10010ed2
    TEST EAX,EAX                        ; 10010ed6
    JNZ 0x10010ee4                      ; 10010ed8
        ;   XREF to: 10010ee4 (CONDITIONAL_JUMP)  ; LAB_10010ee4
    XOR EAX,EAX                         ; 10010eda
    POP EBP                             ; 10010edc
    POP EDI                             ; 10010edd
    POP ESI                             ; 10010ede
    POP EBX                             ; 10010edf
    ADD ESP,0x8                         ; 10010ee0
    RET                                 ; 10010ee3
    MOV EAX,dword ptr [ESP + 0x14]      ; 10010ee4
        ;   Label: LAB_10010ee4
    PUSH EAX                            ; 10010ee8
    CALL FUN_10008830                   ; 10010ee9
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV dword ptr [ESP + 0x14],EAX      ; 10010eee
    ADD ESP,0x4                         ; 10010ef2
    TEST EAX,EAX                        ; 10010ef5
    JNZ 0x10010f03                      ; 10010ef7
        ;   XREF to: 10010f03 (CONDITIONAL_JUMP)  ; LAB_10010f03
    XOR EAX,EAX                         ; 10010ef9
    POP EBP                             ; 10010efb
    POP EDI                             ; 10010efc
    POP ESI                             ; 10010efd
    POP EBX                             ; 10010efe
    ADD ESP,0x8                         ; 10010eff
    RET                                 ; 10010f02
    MOV EAX,dword ptr [ESP + 0x14]      ; 10010f03
        ;   Label: LAB_10010f03
    PUSH 0x0                            ; 10010f07
    MOV ECX,dword ptr [ESP + 0x14]      ; 10010f09
    PUSH 0x0                            ; 10010f0d
    MOV EDX,dword ptr [ESP + 0x2c]      ; 10010f0f
    PUSH EAX                            ; 10010f13
    PUSH ECX                            ; 10010f14
    PUSH ESI                            ; 10010f15
    PUSH EDX                            ; 10010f16
    PUSH 0x220                          ; 10010f17
    PUSH EBP                            ; 10010f1c
    CALL dword ptr [0x10242230]         ; 10010f1d | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 10010f23
    JZ 0x10010fb4                       ; 10010f25
        ;   XREF to: 10010fb4 (CONDITIONAL_JUMP)  ; LAB_10010fb4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 10010f2b
    PUSH 0x0                            ; 10010f2f
    PUSH 0x0                            ; 10010f31
    PUSH 0x0                            ; 10010f33
    PUSH 0x0                            ; 10010f35
    PUSH EBX                            ; 10010f37
    PUSH EAX                            ; 10010f38
    PUSH 0x220                          ; 10010f39
    PUSH EBP                            ; 10010f3e
    CALL dword ptr [0x10242230]         ; 10010f3f | PTR_WideCharToMultiByte_10242230
    MOV ESI,EAX                         ; 10010f45
    TEST ESI,ESI                        ; 10010f47
    JZ 0x10010fb4                       ; 10010f49
        ;   XREF to: 10010fb4 (CONDITIONAL_JUMP)  ; LAB_10010fb4
    PUSH ESI                            ; 10010f4b
    CALL FUN_10008830                   ; 10010f4c
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10010f51
    MOV EDI,EAX                         ; 10010f54
    TEST EDI,EDI                        ; 10010f56
    JZ 0x10010fb4                       ; 10010f58
        ;   XREF to: 10010fb4 (CONDITIONAL_JUMP)  ; LAB_10010fb4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 10010f5a
    PUSH 0x0                            ; 10010f5e
    PUSH 0x0                            ; 10010f60
    PUSH ESI                            ; 10010f62
    PUSH EDI                            ; 10010f63
    PUSH EBX                            ; 10010f64
    PUSH EAX                            ; 10010f65
    PUSH 0x220                          ; 10010f66
    PUSH EBP                            ; 10010f6b
    CALL dword ptr [0x10242230]         ; 10010f6c | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 10010f72
    JZ 0x10010fb4                       ; 10010f74
        ;   XREF to: 10010fb4 (CONDITIONAL_JUMP)  ; LAB_10010fb4
    MOV EAX,dword ptr [ESP + 0x14]      ; 10010f76
    PUSH ESI                            ; 10010f7a
    MOV ECX,dword ptr [ESP + 0x14]      ; 10010f7b
    PUSH EDI                            ; 10010f7f
    MOV EDX,dword ptr [ESP + 0x28]      ; 10010f80
    PUSH EAX                            ; 10010f84
    MOV EAX,dword ptr [ESP + 0x28]      ; 10010f85
    PUSH ECX                            ; 10010f89
    PUSH EDX                            ; 10010f8a
    PUSH EAX                            ; 10010f8b
    CALL dword ptr [0x10242210]         ; 10010f8c | PTR_CompareStringA_10242210
    MOV ESI,EAX                         ; 10010f92
    MOV ECX,dword ptr [ESP + 0x10]      ; 10010f94
    PUSH ECX                            ; 10010f98
    CALL FUN_10005b30                   ; 10010f99
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10010f9e
    PUSH EDI                            ; 10010fa1
    CALL FUN_10005b30                   ; 10010fa2
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10010fa7
    MOV EAX,ESI                         ; 10010faa
    POP EBP                             ; 10010fac
    POP EDI                             ; 10010fad
    POP ESI                             ; 10010fae
    POP EBX                             ; 10010faf
    ADD ESP,0x8                         ; 10010fb0
    RET                                 ; 10010fb3
    MOV EAX,dword ptr [ESP + 0x10]      ; 10010fb4
        ;   Label: LAB_10010fb4
    PUSH EAX                            ; 10010fb8
    CALL FUN_10005b30                   ; 10010fb9
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10010fbe
    PUSH EDI                            ; 10010fc1
    CALL FUN_10005b30                   ; 10010fc2
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10010fc7
    XOR EAX,EAX                         ; 10010fca
    POP EBP                             ; 10010fcc
    POP EDI                             ; 10010fcd
    POP ESI                             ; 10010fce
    POP EBX                             ; 10010fcf
    ADD ESP,0x8                         ; 10010fd0
    RET                                 ; 10010fd3
    CMP EBX,ESI                         ; 10010fd4
        ;   Label: LAB_10010fd4
    JNZ 0x10010fe5                      ; 10010fd6
        ;   XREF to: 10010fe5 (CONDITIONAL_JUMP)  ; LAB_10010fe5
    MOV EAX,0x2                         ; 10010fd8
    POP EBP                             ; 10010fdd
    POP EDI                             ; 10010fde
    POP ESI                             ; 10010fdf
    POP EBX                             ; 10010fe0
    ADD ESP,0x8                         ; 10010fe1
    RET                                 ; 10010fe4
    SUB ESI,EBX                         ; 10010fe5
        ;   Label: LAB_10010fe5
    MOV EAX,0x3                         ; 10010fe7
    JNS 0x10010ff3                      ; 10010fec
        ;   XREF to: 10010ff3 (CONDITIONAL_JUMP)  ; LAB_10010ff3
    MOV EAX,0x1                         ; 10010fee
    POP EBP                             ; 10010ff3
        ;   Label: LAB_10010ff3
    POP EDI                             ; 10010ff4
    POP ESI                             ; 10010ff5
    POP EBX                             ; 10010ff6
    ADD ESP,0x8                         ; 10010ff7
    RET                                 ; 10010ffa

