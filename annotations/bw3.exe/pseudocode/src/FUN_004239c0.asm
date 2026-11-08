; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004239c0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
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
;   FUN_00423050 at 004238cc
;
; Referenced Globals:
;   undefined4 DAT_005b78a1
;
; Called Functions:
;   FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004239c0
        ;   Label: FUN_004239c0
    PUSH ESI                            ; 004239c1
    PUSH EDI                            ; 004239c2
    PUSH EBP                            ; 004239c3
    SUB ESP,0x58                        ; 004239c4
    MOV EAX,dword ptr [ESP + 0x70]      ; 004239c7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004239cb
    MOV dword ptr [ESP + 0x3c],EAX      ; 004239ce
    MOV EAX,dword ptr [ESP + 0x70]      ; 004239d2
    MOV EDX,dword ptr [ESP + 0x70]      ; 004239d6
    MOV EAX,dword ptr [EAX + 0x30]      ; 004239da
    MOV dword ptr [EDX + 0x34],0x0      ; 004239dd
    MOV dword ptr [EDX + 0x2c],EAX      ; 004239e4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004239e7
    XOR EDX,EDX                         ; 004239eb
    ADD EAX,0x1385c                     ; 004239ed
    MOV dword ptr [ESP + 0x48],EDX      ; 004239f2
    MOV dword ptr [ESP + 0x38],EAX      ; 004239f6
    MOV EAX,dword ptr [ESP + 0x70]      ; 004239fa
        ;   Label: LAB_004239fa
    IMUL EAX,dword ptr [EAX + 0x2c],0x28 ; 004239fe
    MOV EDX,dword ptr [ESP + 0x38]      ; 00423a02
    ADD EDX,EAX                         ; 00423a06
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423a08
    IMUL EAX,dword ptr [EAX + 0x2c],0xc ; 00423a0c
    MOV dword ptr [ESP + 0x44],EDX      ; 00423a10
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00423a14
    MOV EDX,dword ptr [EDX + 0x13820]   ; 00423a18
    MOV EDX,dword ptr [EDX + 0x2324]    ; 00423a1e
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00423a24
    MOV dword ptr [ESP + 0x40],EAX      ; 00423a28
    MOV EAX,dword ptr [ESP + 0x44]      ; 00423a2c
    XOR ESI,ESI                         ; 00423a30
    MOV EDI,dword ptr [EAX]             ; 00423a32
    XOR EDX,EDX                         ; 00423a34
    TEST EDI,EDI                        ; 00423a36
    JLE 0x00423a8a                      ; 00423a38
        ;   XREF to: 00423a8a (CONDITIONAL_JUMP)  ; LAB_00423a8a
    MOV EBX,EAX                         ; 00423a3a
    XOR ECX,ECX                         ; 00423a3c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00423a3e
        ;   Label: LAB_00423a3e
    IMUL EBP,EAX,0xc                    ; 00423a41
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00423a44
    MOV EDI,dword ptr [EDI + 0x13820]   ; 00423a48
    MOV EDI,dword ptr [EDI + 0x2324]    ; 00423a4e
    ADD EDI,EBP                         ; 00423a54
    MOV EDI,dword ptr [EDI + 0x4]       ; 00423a56
    MOV dword ptr [ESP + 0x4c],EDI      ; 00423a59
    MOV EDI,0x1                         ; 00423a5d
    MOV EBP,dword ptr [ESP + 0x48]      ; 00423a62
    MOV dword ptr [ESP + 0x50],EDI      ; 00423a66
    TEST EBP,EBP                        ; 00423a6a
    JNZ 0x00423b7f                      ; 00423a6c
        ;   XREF to: 00423b7f (CONDITIONAL_JUMP)  ; LAB_00423b7f
    CMP EAX,dword ptr [ESP + 0x3c]      ; 00423a72
    JNZ 0x00423b67                      ; 00423a76
        ;   XREF to: 00423b67 (CONDITIONAL_JUMP)  ; LAB_00423b67
    MOV EAX,dword ptr [ESP + 0x44]      ; 00423a7c
        ;   Label: LAB_00423a7c
    INC EDX                             ; 00423a80
    MOV EBP,dword ptr [EAX]             ; 00423a81
    ADD EBX,0x4                         ; 00423a83
    CMP EDX,EBP                         ; 00423a86
    JL 0x00423a3e                       ; 00423a88
        ;   XREF to: 00423a3e (CONDITIONAL_JUMP)  ; LAB_00423a3e
    TEST ESI,ESI                        ; 00423a8a
        ;   Label: LAB_00423a8a
    JLE 0x00423b50                      ; 00423a8c
        ;   XREF to: 00423b50 (CONDITIONAL_JUMP)  ; LAB_00423b50
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423a92
        ;   Label: LAB_00423a92
    MOV ECX,dword ptr [EAX + 0x3c]      ; 00423a96
    TEST ECX,ECX                        ; 00423a99
    JLE 0x00423aa3                      ; 00423a9b
        ;   XREF to: 00423aa3 (CONDITIONAL_JUMP)  ; LAB_00423aa3
    LEA EBX,[ECX + -0x1]                ; 00423a9d
    MOV dword ptr [EAX + 0x3c],EBX      ; 00423aa0
    TEST ESI,ESI                        ; 00423aa3
        ;   Label: LAB_00423aa3
    JG 0x00423b97                       ; 00423aa5
        ;   XREF to: 00423b97 (CONDITIONAL_JUMP)  ; LAB_00423b97
    MOV EDX,dword ptr [ESP + 0x70]      ; 00423aab
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00423aaf
    MOV dword ptr [EDX + 0x30],EAX      ; 00423ab3
    TEST EAX,EAX                        ; 00423ab6
    JL 0x00423bb2                       ; 00423ab8
        ;   XREF to: 00423bb2 (CONDITIONAL_JUMP)  ; LAB_00423bb2
    MOV EDX,dword ptr [ESP + 0x70]      ; 00423abe
        ;   Label: LAB_00423abe
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00423ac2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00423ac5
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00423acc
    SUB EAX,EDX                         ; 00423ad0
    MOV ECX,dword ptr [ECX + 0x13820]   ; 00423ad2
    SHL EAX,0x2                         ; 00423ad8
    MOV EDX,dword ptr [ECX + 0x2324]    ; 00423adb
    LEA EDI,[ESP + 0x2c]                ; 00423ae1
    LEA ESI,[EDX + EAX*0x1]             ; 00423ae5
    MOV ECX,dword ptr [ESP + 0x70]      ; 00423ae8
    MOVSD ES:EDI,ESI                    ; 00423aec
    MOVSD ES:EDI,ESI                    ; 00423aed
    MOVSD ES:EDI,ESI                    ; 00423aee
    MOV ECX,dword ptr [ECX + 0x30]      ; 00423aef
    LEA EAX,[ECX*0x4 + 0x0]             ; 00423af2
    SUB EAX,ECX                         ; 00423af9
    SHL EAX,0x2                         ; 00423afb
    LEA EDI,[ESP + 0x20]                ; 00423afe
    LEA ESI,[EDX + EAX*0x1]             ; 00423b02
    MOVSD ES:EDI,ESI                    ; 00423b05
    MOVSD ES:EDI,ESI                    ; 00423b06
    MOVSD ES:EDI,ESI                    ; 00423b07
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00423b08
    SUB EDX,dword ptr [ESP + 0x20]      ; 00423b0c
    IMUL EDX,EDX                        ; 00423b10
    MOV EAX,dword ptr [ESP + 0x30]      ; 00423b13
    SUB EAX,dword ptr [ESP + 0x24]      ; 00423b17
    IMUL EAX,EAX                        ; 00423b1b
    MOV EBX,dword ptr [ESP + 0x28]      ; 00423b1e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00423b22
    SUB ECX,EBX                         ; 00423b26
    ADD EDX,EAX                         ; 00423b28
    MOV EAX,ECX                         ; 00423b2a
    IMUL EAX,ECX                        ; 00423b2c
    ADD EAX,EDX                         ; 00423b2f
    MOV dword ptr [ESP + 0x54],EAX      ; 00423b31
    FILD dword ptr [ESP + 0x54]         ; 00423b35
    FSQRT                               ; 00423b39
    FMUL double ptr [0x005b78a1]        ; 00423b3b | DAT_005b78a1
    MOV EAX,dword ptr [ESP + 0x70]      ; 00423b41
    FSTP float ptr [EAX + 0x38]         ; 00423b45
    ADD ESP,0x58                        ; 00423b48
    POP EBP                             ; 00423b4b
    POP EDI                             ; 00423b4c
    POP ESI                             ; 00423b4d
    POP EBX                             ; 00423b4e
    RET                                 ; 00423b4f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00423b50
        ;   Label: LAB_00423b50
    INC EAX                             ; 00423b54
    MOV dword ptr [ESP + 0x48],EAX      ; 00423b55
    CMP EAX,0x2                         ; 00423b59
    JL 0x004239fa                       ; 00423b5c
        ;   XREF to: 004239fa (CONDITIONAL_JUMP)  ; LAB_004239fa
    JMP 0x00423a92                      ; 00423b62
        ;   XREF to: 00423a92 (UNCONDITIONAL_JUMP)  ; LAB_00423a92
    MOV EDI,dword ptr [ESP + 0x70]      ; 00423b67
        ;   Label: LAB_00423b67
    CMP dword ptr [EDI + 0x3c],0x0      ; 00423b6b
    JLE 0x00423b7f                      ; 00423b6f
        ;   XREF to: 00423b7f (CONDITIONAL_JUMP)  ; LAB_00423b7f
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00423b71
    CMP EDI,dword ptr [ESP + 0x40]      ; 00423b75
    JL 0x00423a7c                       ; 00423b79
        ;   XREF to: 00423a7c (CONDITIONAL_JUMP)  ; LAB_00423a7c
    CMP dword ptr [ESP + 0x50],0x0      ; 00423b7f
        ;   Label: LAB_00423b7f
    JZ 0x00423a7c                       ; 00423b84
        ;   XREF to: 00423a7c (CONDITIONAL_JUMP)  ; LAB_00423a7c
    ADD ECX,0x4                         ; 00423b8a
    INC ESI                             ; 00423b8d
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 00423b8e
    JMP 0x00423a7c                      ; 00423b92
        ;   XREF to: 00423a7c (UNCONDITIONAL_JUMP)  ; LAB_00423a7c
    DEC ESI                             ; 00423b97
        ;   Label: LAB_00423b97
    PUSH ESI                            ; 00423b98
    PUSH 0x0                            ; 00423b99
    CALL FUN_0040cea0                   ; 00423b9b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 00423ba0
    MOV EDX,dword ptr [ESP + 0x70]      ; 00423ba3
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 00423ba7
    MOV dword ptr [EDX + 0x30],EAX      ; 00423baa
    JMP 0x00423abe                      ; 00423bad
        ;   XREF to: 00423abe (UNCONDITIONAL_JUMP)  ; LAB_00423abe
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00423bb2
        ;   Label: LAB_00423bb2
    MOV dword ptr [EDX + 0x30],EAX      ; 00423bb5
    JMP 0x00423abe                      ; 00423bb8
        ;   XREF to: 00423abe (UNCONDITIONAL_JUMP)  ; LAB_00423abe

