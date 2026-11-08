; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00533930(int param_1,int param_2,int param_3,int param_4,int param_5)
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
;   FUN_00533dc0 at 00534412
;
; Referenced Globals:
;   undefined4 DAT_01e6be44
;
; Called Functions:
;   FUN_00533640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533930
        ;   Label: FUN_00533930
    PUSH ESI                            ; 00533931
    PUSH EDI                            ; 00533932
    PUSH EBP                            ; 00533933
    SUB ESP,0x5c                        ; 00533934
    MOV EBX,dword ptr [ESP + 0x70]      ; 00533937
    MOV EAX,dword ptr [ESP + 0x74]      ; 0053393b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0053393f
    SUB EAX,EDX                         ; 00533943
    MOV ECX,dword ptr [ESP + 0x80]      ; 00533945
    MOV dword ptr [ESP + 0x8],EAX       ; 0053394c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00533950
    MOV EBP,EDX                         ; 00533954
    SUB EAX,ECX                         ; 00533956
    MOV dword ptr [ESP + 0x58],ECX      ; 00533958
    MOV dword ptr [ESP + 0x4],EAX       ; 0053395c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533960
    MOV ESI,dword ptr [ESP + 0x8]       ; 00533964
    CDQ                                 ; 00533968
    XOR EAX,EDX                         ; 00533969
    SUB EAX,EDX                         ; 0053396b
    MOV dword ptr [ESP + 0x40],EAX      ; 0053396d
    TEST ESI,ESI                        ; 00533971
    JL 0x00533a90                       ; 00533973
        ;   XREF to: 00533a90 (CONDITIONAL_JUMP)  ; LAB_00533a90
    MOV dword ptr [ESP + 0x30],0x1      ; 00533979
    CMP dword ptr [ESP + 0x4],0x0       ; 00533981
        ;   Label: LAB_00533981
    JL 0x00533a9d                       ; 00533986
        ;   XREF to: 00533a9d (CONDITIONAL_JUMP)  ; LAB_00533a9d
    MOV dword ptr [ESP + 0x2c],0x1      ; 0053398c
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00533994
        ;   Label: LAB_00533994
    PUSH EDX                            ; 00533997
    PUSH EBP                            ; 00533998
    MOV ECX,dword ptr [ESP + 0x60]      ; 00533999
    PUSH ECX                            ; 0053399d
    PUSH EBX                            ; 0053399e
    CALL FUN_00533640                   ; 0053399f
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 005339a4
    MOV ESI,EAX                         ; 005339a7
    CMP dword ptr [ESP + 0x40],0x0      ; 005339a9
    JLE 0x005339f1                      ; 005339ae
        ;   XREF to: 005339f1 (CONDITIONAL_JUMP)  ; LAB_005339f1
    MOV EAX,dword ptr [ESP + 0x58]      ; 005339b0
    INC EAX                             ; 005339b4
    MOV dword ptr [ESP + 0x10],EAX      ; 005339b5
    MOV EAX,dword ptr [ESP + 0x58]      ; 005339b9
    DEC EAX                             ; 005339bd
    MOV dword ptr [ESP + 0x1c],EAX      ; 005339be
    MOV EAX,dword ptr [ESP + 0x30]      ; 005339c2
        ;   Label: LAB_005339c2
    PUSH ESI                            ; 005339c6
    ADD EAX,EBP                         ; 005339c7
    PUSH EAX                            ; 005339c9
    MOV EDI,dword ptr [ESP + 0x60]      ; 005339ca
    PUSH EDI                            ; 005339ce
    PUSH EBX                            ; 005339cf
    MOV dword ptr [ESP + 0x58],EAX      ; 005339d0
    CALL FUN_00533640                   ; 005339d4
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 005339d9
    MOV EDI,EAX                         ; 005339dc
    SUB EAX,ESI                         ; 005339de
    CDQ                                 ; 005339e0
    XOR EAX,EDX                         ; 005339e1
    SUB EAX,EDX                         ; 005339e3
    CMP EAX,dword ptr [0x01e6be44]      ; 005339e5 | DAT_01e6be44
    JLE 0x00533aaa                      ; 005339eb
        ;   XREF to: 00533aaa (CONDITIONAL_JUMP)  ; LAB_00533aaa
    CMP dword ptr [ESP + 0x40],0x0      ; 005339f1
        ;   Label: LAB_005339f1
    JZ 0x00533b20                       ; 005339f6
        ;   XREF to: 00533b20 (CONDITIONAL_JUMP)  ; LAB_00533b20
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005339fc
        ;   Label: LAB_005339fc
    MOV dword ptr [ESP + 0x54],EAX      ; 00533a00
    MOV EAX,dword ptr [ESP + 0x4]       ; 00533a04
    CDQ                                 ; 00533a08
    XOR EAX,EDX                         ; 00533a09
    SUB EAX,EDX                         ; 00533a0b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00533a0d
    PUSH EDX                            ; 00533a10
    MOV ECX,dword ptr [ESP + 0x80]      ; 00533a11
    PUSH ECX                            ; 00533a18
    MOV EBP,dword ptr [ESP + 0x88]      ; 00533a19
    PUSH EBP                            ; 00533a20
    PUSH EBX                            ; 00533a21
    MOV dword ptr [ESP + 0x10],EAX      ; 00533a22
    MOV dword ptr [ESP + 0x48],EAX      ; 00533a26
    CALL FUN_00533640                   ; 00533a2a
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533a2f
    MOV ESI,EAX                         ; 00533a32
    CMP dword ptr [ESP],0x0             ; 00533a34
    JLE 0x00533a7b                      ; 00533a38
        ;   XREF to: 00533a7b (CONDITIONAL_JUMP)  ; LAB_00533a7b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00533a3a
    INC EAX                             ; 00533a3e
    MOV dword ptr [ESP + 0x14],EAX      ; 00533a3f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00533a43
    DEC EAX                             ; 00533a47
    MOV dword ptr [ESP + 0x20],EAX      ; 00533a48
    PUSH ESI                            ; 00533a4c
        ;   Label: LAB_00533a4c
    MOV ECX,dword ptr [ESP + 0x58]      ; 00533a4d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00533a51
    PUSH ECX                            ; 00533a55
    ADD EAX,EBP                         ; 00533a56
    PUSH EAX                            ; 00533a58
    PUSH EBX                            ; 00533a59
    MOV dword ptr [ESP + 0x54],EAX      ; 00533a5a
    CALL FUN_00533640                   ; 00533a5e
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533a63
    MOV EDI,EAX                         ; 00533a66
    SUB EAX,ESI                         ; 00533a68
    CDQ                                 ; 00533a6a
    XOR EAX,EDX                         ; 00533a6b
    SUB EAX,EDX                         ; 00533a6d
    CMP EAX,dword ptr [0x01e6be44]      ; 00533a6f | DAT_01e6be44
    JLE 0x00533c1e                      ; 00533a75
        ;   XREF to: 00533c1e (CONDITIONAL_JUMP)  ; LAB_00533c1e
    CMP dword ptr [ESP + 0x38],0x0      ; 00533a7b
        ;   Label: LAB_00533a7b
    JZ 0x00533c94                       ; 00533a80
        ;   XREF to: 00533c94 (CONDITIONAL_JUMP)  ; LAB_00533c94
    XOR EAX,EAX                         ; 00533a86
        ;   Label: LAB_00533a86
    ADD ESP,0x5c                        ; 00533a88
    POP EBP                             ; 00533a8b
    POP EDI                             ; 00533a8c
    POP ESI                             ; 00533a8d
    POP EBX                             ; 00533a8e
    RET                                 ; 00533a8f
    MOV dword ptr [ESP + 0x30],0xffffffff ; 00533a90
        ;   Label: LAB_00533a90
    JMP 0x00533981                      ; 00533a98
        ;   XREF to: 00533981 (UNCONDITIONAL_JUMP)  ; LAB_00533981
    MOV dword ptr [ESP + 0x2c],0xffffffff ; 00533a9d
        ;   Label: LAB_00533a9d
    JMP 0x00533994                      ; 00533aa5
        ;   XREF to: 00533994 (UNCONDITIONAL_JUMP)  ; LAB_00533994
    PUSH ESI                            ; 00533aaa
        ;   Label: LAB_00533aaa
    PUSH EBP                            ; 00533aab
    MOV ECX,dword ptr [ESP + 0x24]      ; 00533aac
    PUSH ECX                            ; 00533ab0
    PUSH EBX                            ; 00533ab1
    CALL FUN_00533640                   ; 00533ab2
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533ab7
    MOV EDI,EAX                         ; 00533aba
    SUB EAX,ESI                         ; 00533abc
    CDQ                                 ; 00533abe
    XOR EAX,EDX                         ; 00533abf
    SUB EAX,EDX                         ; 00533ac1
    CMP EAX,dword ptr [0x01e6be44]      ; 00533ac3 | DAT_01e6be44
    JG 0x005339f1                       ; 00533ac9
        ;   XREF to: 005339f1 (CONDITIONAL_JUMP)  ; LAB_005339f1
    PUSH ESI                            ; 00533acf
    PUSH EBP                            ; 00533ad0
    MOV ECX,dword ptr [ESP + 0x18]      ; 00533ad1
    PUSH ECX                            ; 00533ad5
    PUSH EBX                            ; 00533ad6
    CALL FUN_00533640                   ; 00533ad7
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533adc
    MOV EDI,EAX                         ; 00533adf
    SUB EAX,ESI                         ; 00533ae1
    CDQ                                 ; 00533ae3
    XOR EAX,EDX                         ; 00533ae4
    SUB EAX,EDX                         ; 00533ae6
    CMP EAX,dword ptr [0x01e6be44]      ; 00533ae8 | DAT_01e6be44
    JG 0x005339f1                       ; 00533aee
        ;   XREF to: 005339f1 (CONDITIONAL_JUMP)  ; LAB_005339f1
    PUSH ESI                            ; 00533af4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00533af5
    PUSH EBP                            ; 00533af9
    MOV ECX,dword ptr [ESP + 0x60]      ; 00533afa
    PUSH ECX                            ; 00533afe
    PUSH EBX                            ; 00533aff
    CALL FUN_00533640                   ; 00533b00
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533b05
    MOV ESI,EAX                         ; 00533b08
    MOV EAX,dword ptr [ESP + 0x40]      ; 00533b0a
    DEC EAX                             ; 00533b0e
    MOV dword ptr [ESP + 0x40],EAX      ; 00533b0f
    TEST EAX,EAX                        ; 00533b13
    JG 0x005339c2                       ; 00533b15
        ;   XREF to: 005339c2 (CONDITIONAL_JUMP)  ; LAB_005339c2
    JMP 0x005339f1                      ; 00533b1b
        ;   XREF to: 005339f1 (UNCONDITIONAL_JUMP)  ; LAB_005339f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00533b20
        ;   Label: LAB_00533b20
    CDQ                                 ; 00533b24
    XOR EAX,EDX                         ; 00533b25
    SUB EAX,EDX                         ; 00533b27
    MOV dword ptr [ESP + 0x3c],EAX      ; 00533b29
    TEST EAX,EAX                        ; 00533b2d
    JLE 0x00533b6a                      ; 00533b2f
        ;   XREF to: 00533b6a (CONDITIONAL_JUMP)  ; LAB_00533b6a
    LEA EAX,[EBP + 0x1]                 ; 00533b31
    MOV dword ptr [ESP + 0x18],EAX      ; 00533b34
    LEA EAX,[EBP + -0x1]                ; 00533b38
    MOV dword ptr [ESP + 0xc],EAX       ; 00533b3b
    PUSH ESI                            ; 00533b3f
        ;   Label: LAB_00533b3f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00533b40
    MOV ECX,dword ptr [ESP + 0x30]      ; 00533b44
    PUSH EBP                            ; 00533b48
    ADD EAX,ECX                         ; 00533b49
    PUSH EAX                            ; 00533b4b
    PUSH EBX                            ; 00533b4c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00533b4d
    CALL FUN_00533640                   ; 00533b51
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533b56
    MOV EDI,EAX                         ; 00533b59
    SUB EAX,ESI                         ; 00533b5b
    CDQ                                 ; 00533b5d
    XOR EAX,EDX                         ; 00533b5e
    SUB EAX,EDX                         ; 00533b60
    CMP EAX,dword ptr [0x01e6be44]      ; 00533b62 | DAT_01e6be44
    JLE 0x00533ba4                      ; 00533b68
        ;   XREF to: 00533ba4 (CONDITIONAL_JUMP)  ; LAB_00533ba4
    CMP dword ptr [ESP + 0x3c],0x0      ; 00533b6a
        ;   Label: LAB_00533b6a
    JNZ 0x005339fc                      ; 00533b6f
        ;   XREF to: 005339fc (CONDITIONAL_JUMP)  ; LAB_005339fc
    MOV ESI,dword ptr [EBX + 0x10]      ; 00533b75
    PUSH ESI                            ; 00533b78
    MOV EBP,dword ptr [ESP + 0x78]      ; 00533b79
    PUSH EBP                            ; 00533b7d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00533b7e
    PUSH EAX                            ; 00533b85
    PUSH EBX                            ; 00533b86
    CALL FUN_00533640                   ; 00533b87
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533b8c
    CMP EDI,EAX                         ; 00533b8f
    JNZ 0x005339fc                      ; 00533b91
        ;   XREF to: 005339fc (CONDITIONAL_JUMP)  ; LAB_005339fc
    MOV EAX,0x1                         ; 00533b97
    ADD ESP,0x5c                        ; 00533b9c
    POP EBP                             ; 00533b9f
    POP EDI                             ; 00533ba0
    POP ESI                             ; 00533ba1
    POP EBX                             ; 00533ba2
    RET                                 ; 00533ba3
    PUSH ESI                            ; 00533ba4
        ;   Label: LAB_00533ba4
    MOV ECX,dword ptr [ESP + 0x10]      ; 00533ba5
    PUSH ECX                            ; 00533ba9
    MOV EDI,dword ptr [ESP + 0x60]      ; 00533baa
    PUSH EDI                            ; 00533bae
    PUSH EBX                            ; 00533baf
    CALL FUN_00533640                   ; 00533bb0
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533bb5
    MOV EDI,EAX                         ; 00533bb8
    SUB EAX,ESI                         ; 00533bba
    CDQ                                 ; 00533bbc
    XOR EAX,EDX                         ; 00533bbd
    SUB EAX,EDX                         ; 00533bbf
    CMP EAX,dword ptr [0x01e6be44]      ; 00533bc1 | DAT_01e6be44
    JG 0x00533b6a                       ; 00533bc7
        ;   XREF to: 00533b6a (CONDITIONAL_JUMP)  ; LAB_00533b6a
    PUSH ESI                            ; 00533bc9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00533bca
    PUSH ECX                            ; 00533bce
    MOV EDI,dword ptr [ESP + 0x60]      ; 00533bcf
    PUSH EDI                            ; 00533bd3
    PUSH EBX                            ; 00533bd4
    CALL FUN_00533640                   ; 00533bd5
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533bda
    MOV EDI,EAX                         ; 00533bdd
    SUB EAX,ESI                         ; 00533bdf
    CDQ                                 ; 00533be1
    XOR EAX,EDX                         ; 00533be2
    SUB EAX,EDX                         ; 00533be4
    CMP EAX,dword ptr [0x01e6be44]      ; 00533be6 | DAT_01e6be44
    JG 0x00533b6a                       ; 00533bec
        ;   XREF to: 00533b6a (CONDITIONAL_JUMP)  ; LAB_00533b6a
    PUSH ESI                            ; 00533bf2
    PUSH EBP                            ; 00533bf3
    MOV EAX,dword ptr [ESP + 0x54]      ; 00533bf4
    PUSH EAX                            ; 00533bf8
    PUSH EBX                            ; 00533bf9
    MOV dword ptr [ESP + 0x68],EAX      ; 00533bfa
    CALL FUN_00533640                   ; 00533bfe
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533c03
    MOV ESI,EAX                         ; 00533c06
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00533c08
    DEC EAX                             ; 00533c0c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00533c0d
    TEST EAX,EAX                        ; 00533c11
    JG 0x00533b3f                       ; 00533c13
        ;   XREF to: 00533b3f (CONDITIONAL_JUMP)  ; LAB_00533b3f
    JMP 0x00533b6a                      ; 00533c19
        ;   XREF to: 00533b6a (UNCONDITIONAL_JUMP)  ; LAB_00533b6a
    PUSH ESI                            ; 00533c1e
        ;   Label: LAB_00533c1e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00533c1f
    PUSH ECX                            ; 00533c23
    PUSH EBP                            ; 00533c24
    PUSH EBX                            ; 00533c25
    CALL FUN_00533640                   ; 00533c26
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533c2b
    MOV EDI,EAX                         ; 00533c2e
    SUB EAX,ESI                         ; 00533c30
    CDQ                                 ; 00533c32
    XOR EAX,EDX                         ; 00533c33
    SUB EAX,EDX                         ; 00533c35
    CMP EAX,dword ptr [0x01e6be44]      ; 00533c37 | DAT_01e6be44
    JG 0x00533a7b                       ; 00533c3d
        ;   XREF to: 00533a7b (CONDITIONAL_JUMP)  ; LAB_00533a7b
    PUSH ESI                            ; 00533c43
    MOV ECX,dword ptr [ESP + 0x18]      ; 00533c44
    PUSH ECX                            ; 00533c48
    PUSH EBP                            ; 00533c49
    PUSH EBX                            ; 00533c4a
    CALL FUN_00533640                   ; 00533c4b
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533c50
    MOV EDI,EAX                         ; 00533c53
    SUB EAX,ESI                         ; 00533c55
    CDQ                                 ; 00533c57
    XOR EAX,EDX                         ; 00533c58
    SUB EAX,EDX                         ; 00533c5a
    CMP EAX,dword ptr [0x01e6be44]      ; 00533c5c | DAT_01e6be44
    JG 0x00533a7b                       ; 00533c62
        ;   XREF to: 00533a7b (CONDITIONAL_JUMP)  ; LAB_00533a7b
    PUSH ESI                            ; 00533c68
    MOV EDX,dword ptr [ESP + 0x58]      ; 00533c69
    PUSH EDX                            ; 00533c6d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00533c6e
    PUSH EBP                            ; 00533c72
    PUSH EBX                            ; 00533c73
    CALL FUN_00533640                   ; 00533c74
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533c79
    MOV ESI,EAX                         ; 00533c7c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00533c7e
    DEC EAX                             ; 00533c82
    MOV dword ptr [ESP + 0x38],EAX      ; 00533c83
    TEST EAX,EAX                        ; 00533c87
    JG 0x00533a4c                       ; 00533c89
        ;   XREF to: 00533a4c (CONDITIONAL_JUMP)  ; LAB_00533a4c
    JMP 0x00533a7b                      ; 00533c8f
        ;   XREF to: 00533a7b (UNCONDITIONAL_JUMP)  ; LAB_00533a7b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533c94
        ;   Label: LAB_00533c94
    CDQ                                 ; 00533c98
    XOR EAX,EDX                         ; 00533c99
    SUB EAX,EDX                         ; 00533c9b
    MOV dword ptr [ESP + 0x34],EAX      ; 00533c9d
    TEST EAX,EAX                        ; 00533ca1
    JLE 0x00533cde                      ; 00533ca3
        ;   XREF to: 00533cde (CONDITIONAL_JUMP)  ; LAB_00533cde
    LEA EAX,[EBP + 0x1]                 ; 00533ca5
    MOV dword ptr [ESP + 0x24],EAX      ; 00533ca8
    LEA EAX,[EBP + -0x1]                ; 00533cac
    MOV dword ptr [ESP + 0x28],EAX      ; 00533caf
    MOV EAX,dword ptr [ESP + 0x54]      ; 00533cb3
        ;   Label: LAB_00533cb3
    MOV ECX,dword ptr [ESP + 0x30]      ; 00533cb7
    PUSH ESI                            ; 00533cbb
    ADD EAX,ECX                         ; 00533cbc
    PUSH EAX                            ; 00533cbe
    PUSH EBP                            ; 00533cbf
    PUSH EBX                            ; 00533cc0
    MOV dword ptr [ESP + 0x60],EAX      ; 00533cc1
    CALL FUN_00533640                   ; 00533cc5
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533cca
    MOV EDI,EAX                         ; 00533ccd
    SUB EAX,ESI                         ; 00533ccf
    CDQ                                 ; 00533cd1
    XOR EAX,EDX                         ; 00533cd2
    SUB EAX,EDX                         ; 00533cd4
    CMP EAX,dword ptr [0x01e6be44]      ; 00533cd6 | DAT_01e6be44
    JLE 0x00533d18                      ; 00533cdc
        ;   XREF to: 00533d18 (CONDITIONAL_JUMP)  ; LAB_00533d18
    CMP dword ptr [ESP + 0x34],0x0      ; 00533cde
        ;   Label: LAB_00533cde
    JNZ 0x00533a86                      ; 00533ce3
        ;   XREF to: 00533a86 (CONDITIONAL_JUMP)  ; LAB_00533a86
    MOV ESI,dword ptr [EBX + 0x10]      ; 00533ce9
    PUSH ESI                            ; 00533cec
    MOV EBP,dword ptr [ESP + 0x78]      ; 00533ced
    PUSH EBP                            ; 00533cf1
    MOV EAX,dword ptr [ESP + 0x80]      ; 00533cf2
    PUSH EAX                            ; 00533cf9
    PUSH EBX                            ; 00533cfa
    CALL FUN_00533640                   ; 00533cfb
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533d00
    CMP EDI,EAX                         ; 00533d03
    JNZ 0x00533a86                      ; 00533d05
        ;   XREF to: 00533a86 (CONDITIONAL_JUMP)  ; LAB_00533a86
    MOV EAX,0x2                         ; 00533d0b
    ADD ESP,0x5c                        ; 00533d10
    POP EBP                             ; 00533d13
    POP EDI                             ; 00533d14
    POP ESI                             ; 00533d15
    POP EBX                             ; 00533d16
    RET                                 ; 00533d17
    PUSH ESI                            ; 00533d18
        ;   Label: LAB_00533d18
    MOV ECX,dword ptr [ESP + 0x58]      ; 00533d19
    PUSH ECX                            ; 00533d1d
    MOV EDI,dword ptr [ESP + 0x30]      ; 00533d1e
    PUSH EDI                            ; 00533d22
    PUSH EBX                            ; 00533d23
    CALL FUN_00533640                   ; 00533d24
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533d29
    MOV EDI,EAX                         ; 00533d2c
    SUB EAX,ESI                         ; 00533d2e
    CDQ                                 ; 00533d30
    XOR EAX,EDX                         ; 00533d31
    SUB EAX,EDX                         ; 00533d33
    CMP EAX,dword ptr [0x01e6be44]      ; 00533d35 | DAT_01e6be44
    JG 0x00533cde                       ; 00533d3b
        ;   XREF to: 00533cde (CONDITIONAL_JUMP)  ; LAB_00533cde
    PUSH ESI                            ; 00533d3d
    MOV ECX,dword ptr [ESP + 0x58]      ; 00533d3e
    PUSH ECX                            ; 00533d42
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00533d43
    PUSH EDI                            ; 00533d47
    PUSH EBX                            ; 00533d48
    CALL FUN_00533640                   ; 00533d49
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533d4e
    MOV EDI,EAX                         ; 00533d51
    SUB EAX,ESI                         ; 00533d53
    CDQ                                 ; 00533d55
    XOR EAX,EDX                         ; 00533d56
    SUB EAX,EDX                         ; 00533d58
    CMP EAX,dword ptr [0x01e6be44]      ; 00533d5a | DAT_01e6be44
    JG 0x00533cde                       ; 00533d60
        ;   XREF to: 00533cde (CONDITIONAL_JUMP)  ; LAB_00533cde
    PUSH ESI                            ; 00533d66
    MOV EAX,dword ptr [ESP + 0x54]      ; 00533d67
    PUSH EAX                            ; 00533d6b
    PUSH EBP                            ; 00533d6c
    PUSH EBX                            ; 00533d6d
    MOV dword ptr [ESP + 0x64],EAX      ; 00533d6e
    CALL FUN_00533640                   ; 00533d72
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00533d77
    MOV ESI,EAX                         ; 00533d7a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00533d7c
    DEC EAX                             ; 00533d80
    MOV dword ptr [ESP + 0x34],EAX      ; 00533d81
    TEST EAX,EAX                        ; 00533d85
    JG 0x00533cb3                       ; 00533d87
        ;   XREF to: 00533cb3 (CONDITIONAL_JUMP)  ; LAB_00533cb3
    JMP 0x00533cde                      ; 00533d8d
        ;   XREF to: 00533cde (UNCONDITIONAL_JUMP)  ; LAB_00533cde

