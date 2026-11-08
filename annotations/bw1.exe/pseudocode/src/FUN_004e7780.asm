; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7780(int param_1)
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
;   FUN_004e7f80 at 004e7fc7
;
; Referenced Globals:
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   undefined4 DAT_01d1dd30
;   undefined4 DAT_01d1dd34
;   undefined4 DAT_01d1dd38
;
; Called Functions:
;   FUN_004e7690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7780
        ;   Label: FUN_004e7780
    PUSH ESI                            ; 004e7781
    PUSH EDI                            ; 004e7782
    PUSH EBP                            ; 004e7783
    SUB ESP,0x5c                        ; 004e7784
    MOV ESI,dword ptr [ESP + 0x70]      ; 004e7787
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e778b
    IMUL EAX,dword ptr [ESI + 0x1c]     ; 004e778e
    SHL EAX,0x8                         ; 004e7792
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e7795
    MOV dword ptr [ESP + 0x40],EAX      ; 004e7799
    MOV dword ptr [ESP + 0x44],EAX      ; 004e779d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77a1
    MOV EAX,[0x01d1dd18]                ; 004e77a5 | DAT_01d1dd18
    IMUL EDX                            ; 004e77aa
    SHRD EAX,EDX,0x10                   ; 004e77ac
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77b0
    MOV ECX,EAX                         ; 004e77b4
    MOV EAX,[0x01d1dd24]                ; 004e77b6 | DAT_01d1dd24
    IMUL EDX                            ; 004e77bb
    SHRD EAX,EDX,0x10                   ; 004e77bd
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77c1
    ADD ECX,EAX                         ; 004e77c5
    MOV EAX,[0x01d1dd30]                ; 004e77c7 | DAT_01d1dd30
    IMUL EDX                            ; 004e77cc
    SHRD EAX,EDX,0x10                   ; 004e77ce
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77d2
    ADD ECX,EAX                         ; 004e77d6
    MOV EAX,[0x01d1dd1c]                ; 004e77d8 | DAT_01d1dd1c
    MOV dword ptr [ESP],ECX             ; 004e77dd
    IMUL EDX                            ; 004e77e0
    SHRD EAX,EDX,0x10                   ; 004e77e2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77e6
    MOV ECX,EAX                         ; 004e77ea
    MOV EAX,[0x01d1dd28]                ; 004e77ec | DAT_01d1dd28
    IMUL EDX                            ; 004e77f1
    SHRD EAX,EDX,0x10                   ; 004e77f3
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e77f7
    ADD ECX,EAX                         ; 004e77fb
    MOV EAX,[0x01d1dd34]                ; 004e77fd | DAT_01d1dd34
    IMUL EDX                            ; 004e7802
    SHRD EAX,EDX,0x10                   ; 004e7804
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e7808
    ADD ECX,EAX                         ; 004e780c
    MOV EAX,[0x01d1dd20]                ; 004e780e | DAT_01d1dd20
    MOV dword ptr [ESP + 0x4],ECX       ; 004e7813
    IMUL EDX                            ; 004e7817
    SHRD EAX,EDX,0x10                   ; 004e7819
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e781d
    MOV ECX,EAX                         ; 004e7821
    MOV EAX,[0x01d1dd2c]                ; 004e7823 | DAT_01d1dd2c
    IMUL EDX                            ; 004e7828
    SHRD EAX,EDX,0x10                   ; 004e782a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e782e
    ADD ECX,EAX                         ; 004e7832
    MOV EAX,[0x01d1dd38]                ; 004e7834 | DAT_01d1dd38
    IMUL EDX                            ; 004e7839
    SHRD EAX,EDX,0x10                   ; 004e783b
    ADD ECX,EAX                         ; 004e783f
    MOV dword ptr [ESP + 0x8],ECX       ; 004e7841
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004e7845
    NEG ECX                             ; 004e7849
    MOV EAX,[0x01d1dd18]                ; 004e784b | DAT_01d1dd18
    MOV EDX,ECX                         ; 004e7850
    MOV dword ptr [ESP + 0x3c],ECX      ; 004e7852
    IMUL EDX                            ; 004e7856
    SHRD EAX,EDX,0x10                   ; 004e7858
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e785c
    MOV ECX,EAX                         ; 004e7860
    MOV EAX,[0x01d1dd24]                ; 004e7862 | DAT_01d1dd24
    IMUL EDX                            ; 004e7867
    SHRD EAX,EDX,0x10                   ; 004e7869
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e786d
    ADD ECX,EAX                         ; 004e7871
    MOV EAX,[0x01d1dd30]                ; 004e7873 | DAT_01d1dd30
    IMUL EDX                            ; 004e7878
    SHRD EAX,EDX,0x10                   ; 004e787a
    ADD ECX,EAX                         ; 004e787e
    MOV dword ptr [ESP + 0xc],ECX       ; 004e7880
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e7884
    MOV EAX,[0x01d1dd1c]                ; 004e7888 | DAT_01d1dd1c
    IMUL EDX                            ; 004e788d
    SHRD EAX,EDX,0x10                   ; 004e788f
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e7893
    MOV ECX,EAX                         ; 004e7897
    MOV EAX,[0x01d1dd28]                ; 004e7899 | DAT_01d1dd28
    IMUL EDX                            ; 004e789e
    SHRD EAX,EDX,0x10                   ; 004e78a0
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e78a4
    ADD ECX,EAX                         ; 004e78a8
    MOV EAX,[0x01d1dd34]                ; 004e78aa | DAT_01d1dd34
    IMUL EDX                            ; 004e78af
    SHRD EAX,EDX,0x10                   ; 004e78b1
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e78b5
    ADD ECX,EAX                         ; 004e78b9
    MOV EAX,[0x01d1dd20]                ; 004e78bb | DAT_01d1dd20
    MOV dword ptr [ESP + 0x10],ECX      ; 004e78c0
    IMUL EDX                            ; 004e78c4
    SHRD EAX,EDX,0x10                   ; 004e78c6
    MOV EDX,dword ptr [ESP + 0x40]      ; 004e78ca
    MOV ECX,EAX                         ; 004e78ce
    MOV EAX,[0x01d1dd2c]                ; 004e78d0 | DAT_01d1dd2c
    MOV EBX,dword ptr [ESP + 0x40]      ; 004e78d5
    IMUL EDX                            ; 004e78d9
    SHRD EAX,EDX,0x10                   ; 004e78db
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e78df
    ADD ECX,EAX                         ; 004e78e3
    MOV EAX,[0x01d1dd38]                ; 004e78e5 | DAT_01d1dd38
    NEG EBX                             ; 004e78ea
    IMUL EDX                            ; 004e78ec
    SHRD EAX,EDX,0x10                   ; 004e78ee
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e78f2
    ADD ECX,EAX                         ; 004e78f6
    MOV EAX,[0x01d1dd18]                ; 004e78f8 | DAT_01d1dd18
    MOV dword ptr [ESP + 0x14],ECX      ; 004e78fd
    IMUL EDX                            ; 004e7901
    SHRD EAX,EDX,0x10                   ; 004e7903
    MOV ECX,EAX                         ; 004e7907
    MOV EDX,EBX                         ; 004e7909
    MOV EAX,[0x01d1dd24]                ; 004e790b | DAT_01d1dd24
    IMUL EDX                            ; 004e7910
    SHRD EAX,EDX,0x10                   ; 004e7912
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e7916
    ADD ECX,EAX                         ; 004e791a
    MOV EAX,[0x01d1dd30]                ; 004e791c | DAT_01d1dd30
    IMUL EDX                            ; 004e7921
    SHRD EAX,EDX,0x10                   ; 004e7923
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e7927
    ADD ECX,EAX                         ; 004e792b
    MOV EAX,[0x01d1dd1c]                ; 004e792d | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x18],ECX      ; 004e7932
    IMUL EDX                            ; 004e7936
    SHRD EAX,EDX,0x10                   ; 004e7938
    MOV ECX,EAX                         ; 004e793c
    MOV EDX,EBX                         ; 004e793e
    MOV EAX,[0x01d1dd28]                ; 004e7940 | DAT_01d1dd28
    IMUL EDX                            ; 004e7945
    SHRD EAX,EDX,0x10                   ; 004e7947
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e794b
    ADD ECX,EAX                         ; 004e794f
    MOV EAX,[0x01d1dd34]                ; 004e7951 | DAT_01d1dd34
    IMUL EDX                            ; 004e7956
    SHRD EAX,EDX,0x10                   ; 004e7958
    ADD ECX,EAX                         ; 004e795c
    MOV dword ptr [ESP + 0x40],EBX      ; 004e795e
    MOV dword ptr [ESP + 0x1c],ECX      ; 004e7962
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004e7966
    MOV EAX,[0x01d1dd20]                ; 004e796a | DAT_01d1dd20
    IMUL EDX                            ; 004e796f
    SHRD EAX,EDX,0x10                   ; 004e7971
    MOV ECX,EAX                         ; 004e7975
    MOV EDX,EBX                         ; 004e7977
    MOV EAX,[0x01d1dd2c]                ; 004e7979 | DAT_01d1dd2c
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004e797e
    IMUL EDX                            ; 004e7982
    SHRD EAX,EDX,0x10                   ; 004e7984
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e7988
    ADD ECX,EAX                         ; 004e798c
    MOV EAX,[0x01d1dd38]                ; 004e798e | DAT_01d1dd38
    NEG EDI                             ; 004e7993
    IMUL EDX                            ; 004e7995
    SHRD EAX,EDX,0x10                   ; 004e7997
    MOV EDX,EDI                         ; 004e799b
    ADD ECX,EAX                         ; 004e799d
    MOV EAX,[0x01d1dd18]                ; 004e799f | DAT_01d1dd18
    MOV dword ptr [ESP + 0x20],ECX      ; 004e79a4
    IMUL EDX                            ; 004e79a8
    SHRD EAX,EDX,0x10                   ; 004e79aa
    MOV ECX,EAX                         ; 004e79ae
    MOV EDX,EBX                         ; 004e79b0
    MOV EAX,[0x01d1dd24]                ; 004e79b2 | DAT_01d1dd24
    IMUL EDX                            ; 004e79b7
    SHRD EAX,EDX,0x10                   ; 004e79b9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e79bd
    ADD ECX,EAX                         ; 004e79c1
    MOV EAX,[0x01d1dd30]                ; 004e79c3 | DAT_01d1dd30
    IMUL EDX                            ; 004e79c8
    SHRD EAX,EDX,0x10                   ; 004e79ca
    MOV EDX,EDI                         ; 004e79ce
    ADD ECX,EAX                         ; 004e79d0
    MOV EAX,[0x01d1dd1c]                ; 004e79d2 | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x24],ECX      ; 004e79d7
    IMUL EDX                            ; 004e79db
    SHRD EAX,EDX,0x10                   ; 004e79dd
    MOV ECX,EAX                         ; 004e79e1
    MOV EDX,EBX                         ; 004e79e3
    MOV EAX,[0x01d1dd28]                ; 004e79e5 | DAT_01d1dd28
    IMUL EDX                            ; 004e79ea
    SHRD EAX,EDX,0x10                   ; 004e79ec
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e79f0
    ADD ECX,EAX                         ; 004e79f4
    MOV EAX,[0x01d1dd34]                ; 004e79f6 | DAT_01d1dd34
    IMUL EDX                            ; 004e79fb
    SHRD EAX,EDX,0x10                   ; 004e79fd
    MOV EDX,EDI                         ; 004e7a01
    ADD ECX,EAX                         ; 004e7a03
    MOV EAX,[0x01d1dd20]                ; 004e7a05 | DAT_01d1dd20
    MOV dword ptr [ESP + 0x28],ECX      ; 004e7a0a
    IMUL EDX                            ; 004e7a0e
    SHRD EAX,EDX,0x10                   ; 004e7a10
    MOV ECX,EAX                         ; 004e7a14
    MOV EDX,EBX                         ; 004e7a16
    MOV EAX,[0x01d1dd2c]                ; 004e7a18 | DAT_01d1dd2c
    IMUL EDX                            ; 004e7a1d
    SHRD EAX,EDX,0x10                   ; 004e7a1f
    MOV EDX,dword ptr [ESP + 0x44]      ; 004e7a23
    ADD ECX,EAX                         ; 004e7a27
    MOV EAX,[0x01d1dd38]                ; 004e7a29 | DAT_01d1dd38
    IMUL EDX                            ; 004e7a2e
    SHRD EAX,EDX,0x10                   ; 004e7a30
    ADD ECX,EAX                         ; 004e7a34
    MOV dword ptr [ESP + 0x3c],EDI      ; 004e7a36
    MOV dword ptr [ESP + 0x2c],ECX      ; 004e7a3a
    MOV ECX,0x3e7                       ; 004e7a3e
    XOR EBP,EBP                         ; 004e7a43
    MOV EBX,0x3e7                       ; 004e7a45
    MOV dword ptr [ESP + 0x34],EBP      ; 004e7a4a
    MOV dword ptr [ESP + 0x38],EBP      ; 004e7a4e
    MOV dword ptr [ESP + 0x58],ECX      ; 004e7a52
    MOV dword ptr [ESP + 0x30],EBP      ; 004e7a56
    MOV dword ptr [ESP + 0x54],EBX      ; 004e7a5a
    MOV ECX,0xfffffc19                  ; 004e7a5e
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e7a63
    XOR EBX,EBX                         ; 004e7a66
    SHL EAX,0x8                         ; 004e7a68
    MOV EBP,ECX                         ; 004e7a6b
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e7a6d
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 004e7a71
        ;   Label: LAB_004e7a71
    MOV EDX,EAX                         ; 004e7a74
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004e7a76
    SAR EDX,0x1f                        ; 004e7a7a
    IDIV EDI                            ; 004e7a7d
    MOV EDI,EAX                         ; 004e7a7f
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004e7a81
    MOV EDX,EAX                         ; 004e7a85
    SAR EDX,0x1f                        ; 004e7a87
    IDIV dword ptr [ESP + 0x4c]         ; 004e7a8a
    CMP EDI,dword ptr [ESP + 0x58]      ; 004e7a8e
    JL 0x004e7b65                       ; 004e7a92
        ;   XREF to: 004e7b65 (CONDITIONAL_JUMP)  ; LAB_004e7b65
    CMP EAX,dword ptr [ESP + 0x54]      ; 004e7a98
        ;   Label: LAB_004e7a98
    JGE 0x004e7aa2                      ; 004e7a9c
        ;   XREF to: 004e7aa2 (CONDITIONAL_JUMP)  ; LAB_004e7aa2
    MOV dword ptr [ESP + 0x54],EAX      ; 004e7a9e
    CMP EDI,ECX                         ; 004e7aa2
        ;   Label: LAB_004e7aa2
    JLE 0x004e7aa8                      ; 004e7aa4
        ;   XREF to: 004e7aa8 (CONDITIONAL_JUMP)  ; LAB_004e7aa8
    MOV ECX,EDI                         ; 004e7aa6
    CMP EAX,EBP                         ; 004e7aa8
        ;   Label: LAB_004e7aa8
    JLE 0x004e7aae                      ; 004e7aaa
        ;   XREF to: 004e7aae (CONDITIONAL_JUMP)  ; LAB_004e7aae
    MOV EBP,EAX                         ; 004e7aac
    ADD EBX,0xc                         ; 004e7aae
        ;   Label: LAB_004e7aae
    CMP EBX,0x3c                        ; 004e7ab1
    JNZ 0x004e7a71                      ; 004e7ab4
        ;   XREF to: 004e7a71 (CONDITIONAL_JUMP)  ; LAB_004e7a71
    MOV EDI,dword ptr [ESP + 0x54]      ; 004e7ab6
    MOV EBX,dword ptr [ESP + 0x58]      ; 004e7aba
    ADD ECX,0x2                         ; 004e7abe
    ADD EBP,0x2                         ; 004e7ac1
    MOV EAX,dword ptr [ESI + 0x10]      ; 004e7ac4
    SUB EDI,0x2                         ; 004e7ac7
    SUB EBX,0x2                         ; 004e7aca
    MOV dword ptr [ESI + 0x40],ECX      ; 004e7acd
    MOV dword ptr [ESP + 0x50],EAX      ; 004e7ad0
    MOV dword ptr [ESI + 0x48],EBP      ; 004e7ad4
    MOV dword ptr [ESP + 0x54],EDI      ; 004e7ad7
    MOV EBP,EAX                         ; 004e7adb
    MOV dword ptr [ESI + 0x3c],EBX      ; 004e7add
    MOV dword ptr [ESP + 0x58],EBX      ; 004e7ae0
    MOV dword ptr [ESI + 0x44],EDI      ; 004e7ae4
    NEG EBP                             ; 004e7ae7
    MOV EAX,dword ptr [ESI + 0x3c]      ; 004e7ae9
    MOV dword ptr [ESP + 0x50],EBP      ; 004e7aec
    CMP EAX,EBP                         ; 004e7af0
    JLE 0x004e7af8                      ; 004e7af2
        ;   XREF to: 004e7af8 (CONDITIONAL_JUMP)  ; LAB_004e7af8
    MOV dword ptr [ESP + 0x50],EAX      ; 004e7af4
    MOV ECX,dword ptr [ESI + 0x40]      ; 004e7af8
        ;   Label: LAB_004e7af8
    MOV EBP,dword ptr [ESI + 0x10]      ; 004e7afb
    CMP EBP,ECX                         ; 004e7afe
    JLE 0x004e7b04                      ; 004e7b00
        ;   XREF to: 004e7b04 (CONDITIONAL_JUMP)  ; LAB_004e7b04
    MOV EBP,ECX                         ; 004e7b02
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e7b04
        ;   Label: LAB_004e7b04
    MOV EBX,dword ptr [ESI + 0x44]      ; 004e7b07
    NEG EAX                             ; 004e7b0a
    CMP EAX,EBX                         ; 004e7b0c
    JGE 0x004e7b12                      ; 004e7b0e
        ;   XREF to: 004e7b12 (CONDITIONAL_JUMP)  ; LAB_004e7b12
    MOV EAX,EBX                         ; 004e7b10
    MOV ECX,dword ptr [ESI + 0x14]      ; 004e7b12
        ;   Label: LAB_004e7b12
    MOV dword ptr [ESP + 0x48],ECX      ; 004e7b15
    MOV EDI,dword ptr [ESP + 0x48]      ; 004e7b19
    MOV ECX,dword ptr [ESI + 0x48]      ; 004e7b1d
    CMP ECX,EDI                         ; 004e7b20
    JGE 0x004e7b28                      ; 004e7b22
        ;   XREF to: 004e7b28 (CONDITIONAL_JUMP)  ; LAB_004e7b28
    MOV dword ptr [ESP + 0x48],ECX      ; 004e7b24
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e7b28
        ;   Label: LAB_004e7b28
    MOV EDI,EAX                         ; 004e7b2c
    CMP EAX,EDX                         ; 004e7b2e
    JG 0x004e7b5d                       ; 004e7b30
        ;   XREF to: 004e7b5d (CONDITIONAL_JUMP)  ; LAB_004e7b5d
    MOV EBX,dword ptr [ESP + 0x50]      ; 004e7b32
        ;   Label: LAB_004e7b32
    CMP EBP,EBX                         ; 004e7b36
    JL 0x004e7b54                       ; 004e7b38
        ;   XREF to: 004e7b54 (CONDITIONAL_JUMP)  ; LAB_004e7b54
    MOV EAX,dword ptr [ESI + 0x30]      ; 004e7b3a
        ;   Label: LAB_004e7b3a
    ADD EAX,EDI                         ; 004e7b3d
    PUSH EAX                            ; 004e7b3f
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004e7b40
    ADD EAX,EBX                         ; 004e7b43
    PUSH EAX                            ; 004e7b45
    PUSH ESI                            ; 004e7b46
    INC EBX                             ; 004e7b47
    CALL FUN_004e7690                   ; 004e7b48
        ;   XREF to: 004e7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7690()
    ADD ESP,0xc                         ; 004e7b4d
    CMP EBX,EBP                         ; 004e7b50
    JLE 0x004e7b3a                      ; 004e7b52
        ;   XREF to: 004e7b3a (CONDITIONAL_JUMP)  ; LAB_004e7b3a
    MOV ECX,dword ptr [ESP + 0x48]      ; 004e7b54
        ;   Label: LAB_004e7b54
    INC EDI                             ; 004e7b58
    CMP EDI,ECX                         ; 004e7b59
    JLE 0x004e7b32                      ; 004e7b5b
        ;   XREF to: 004e7b32 (CONDITIONAL_JUMP)  ; LAB_004e7b32
    ADD ESP,0x5c                        ; 004e7b5d
        ;   Label: LAB_004e7b5d
    POP EBP                             ; 004e7b60
    POP EDI                             ; 004e7b61
    POP ESI                             ; 004e7b62
    POP EBX                             ; 004e7b63
    RET                                 ; 004e7b64
    MOV dword ptr [ESP + 0x58],EDI      ; 004e7b65
        ;   Label: LAB_004e7b65
    JMP 0x004e7a98                      ; 004e7b69
        ;   XREF to: 004e7a98 (UNCONDITIONAL_JUMP)  ; LAB_004e7a98

