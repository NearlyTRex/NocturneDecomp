; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005019f0(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
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
;   FUN_00502d60 at 00503674
;
; Referenced Globals:
;   undefined4 DAT_0060116c
;   undefined8 DAT_00601170
;   undefined8 DAT_00601178
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005019f0
        ;   Label: FUN_005019f0
    PUSH ESI                            ; 005019f1
    PUSH EDI                            ; 005019f2
    PUSH EBP                            ; 005019f3
    MOV EBP,ESP                         ; 005019f4
    SUB ESP,0x38                        ; 005019f6
    AND ESP,0xfffffff8                  ; 005019f9
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005019fc
    CMP dword ptr [0x0060116c],0x0      ; 005019ff | DAT_0060116c
    JZ 0x00501a53                       ; 00501a06
        ;   XREF to: 00501a53 (CONDITIONAL_JUMP)  ; LAB_00501a53
    XOR EDX,EDX                         ; 00501a08
    FLD double ptr [EDX + 0x601170]     ; 00501a0a | DAT_00601170 | DAT_00601178
        ;   Label: LAB_00501a0a
    FMUL ST0                            ; 00501a10
    FLD1                                ; 00501a12
    FADDP                               ; 00501a14
    FSQRT                               ; 00501a16
    FLD1                                ; 00501a18
    FDIVRP                              ; 00501a1a
    FLD double ptr [EDX + 0x601170]     ; 00501a1c | DAT_00601170 | DAT_00601178
    ADD EDX,0x8                         ; 00501a22
    FXCH                                ; 00501a25
    FSTP double ptr [ESP]               ; 00501a27
    MOV EAX,dword ptr [ESP]             ; 00501a2a
    FMUL double ptr [ESP]               ; 00501a2d
    MOV dword ptr [EDX + 0x1d93050],EAX ; 00501a30
    MOV EAX,dword ptr [ESP + 0x4]       ; 00501a36
    FSTP double ptr [EDX + 0x1d93010]   ; 00501a3a
    MOV dword ptr [EDX + 0x1d93054],EAX ; 00501a40
    CMP EDX,0x40                        ; 00501a46
    JNZ 0x00501a0a                      ; 00501a49
        ;   XREF to: 00501a0a (CONDITIONAL_JUMP)  ; LAB_00501a0a
    XOR ECX,ECX                         ; 00501a4b
    MOV dword ptr [0x0060116c],ECX      ; 00501a4d | DAT_0060116c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00501a53
        ;   Label: LAB_00501a53
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501a56
    XOR EBX,EBX                         ; 00501a59
    ADD ESI,0x48                        ; 00501a5b
    MOV dword ptr [ESP + 0x24],EAX      ; 00501a5e
    IMUL EAX,EBX,0x48                   ; 00501a62
        ;   Label: LAB_00501a62
    MOV EDX,dword ptr [EBP + 0x14]      ; 00501a65
    MOV ECX,ESI                         ; 00501a68
    ADD EAX,EDX                         ; 00501a6a
    MOV EDX,dword ptr [ESP + 0x24]      ; 00501a6c
    ADD EDX,0x4                         ; 00501a70
        ;   Label: LAB_00501a70
    FLD float ptr [EAX]                 ; 00501a73
    ADD EAX,0x4                         ; 00501a75
    FSTP float ptr [EDX + -0x4]         ; 00501a78
    CMP EAX,ECX                         ; 00501a7b
    JNZ 0x00501a70                      ; 00501a7d
        ;   XREF to: 00501a70 (CONDITIONAL_JUMP)  ; LAB_00501a70
    MOV ECX,dword ptr [ESP + 0x24]      ; 00501a7f
    INC EBX                             ; 00501a83
    ADD ECX,0x48                        ; 00501a84
    ADD ESI,0x48                        ; 00501a87
    MOV dword ptr [ESP + 0x24],ECX      ; 00501a8a
    CMP EBX,0x20                        ; 00501a8e
    JL 0x00501a62                       ; 00501a91
        ;   XREF to: 00501a62 (CONDITIONAL_JUMP)  ; LAB_00501a62
    CMP dword ptr [EDI + 0x10],0x0      ; 00501a93
    JZ 0x00501aa9                       ; 00501a97
        ;   XREF to: 00501aa9 (CONDITIONAL_JUMP)  ; LAB_00501aa9
    CMP dword ptr [EDI + 0x14],0x2      ; 00501a99
    JNZ 0x00501aa9                      ; 00501a9d
        ;   XREF to: 00501aa9 (CONDITIONAL_JUMP)  ; LAB_00501aa9
    CMP dword ptr [EDI + 0x18],0x0      ; 00501a9f
    JZ 0x00501bb1                       ; 00501aa3
        ;   XREF to: 00501bb1 (CONDITIONAL_JUMP)  ; LAB_00501bb1
    CMP dword ptr [EDI + 0x10],0x0      ; 00501aa9
        ;   Label: LAB_00501aa9
    JZ 0x00501bb8                       ; 00501aad
        ;   XREF to: 00501bb8 (CONDITIONAL_JUMP)  ; LAB_00501bb8
    CMP dword ptr [EDI + 0x18],0x0      ; 00501ab3
    JZ 0x00501bb8                       ; 00501ab7
        ;   XREF to: 00501bb8 (CONDITIONAL_JUMP)  ; LAB_00501bb8
    CMP dword ptr [EDI + 0x14],0x2      ; 00501abd
    JNZ 0x00501bb8                      ; 00501ac1
        ;   XREF to: 00501bb8 (CONDITIONAL_JUMP)  ; LAB_00501bb8
    MOV dword ptr [ESP + 0x34],0x1      ; 00501ac7
    XOR EDX,EDX                         ; 00501acf
        ;   Label: LAB_00501acf
    MOV ECX,dword ptr [ESP + 0x34]      ; 00501ad1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00501ad5
    TEST ECX,ECX                        ; 00501ad9
    JLE 0x00501bb1                      ; 00501adb
        ;   XREF to: 00501bb1 (CONDITIONAL_JUMP)  ; LAB_00501bb1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501ae1
    ADD EAX,0x68                        ; 00501ae4
    MOV dword ptr [ESP + 0x1c],EAX      ; 00501ae7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501aeb
    MOV dword ptr [ESP + 0x20],EAX      ; 00501aee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501af2
    ADD EAX,0x48                        ; 00501af5
    MOV dword ptr [ESP + 0x28],EAX      ; 00501af8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501afc
    MOV dword ptr [ESP + 0x18],EAX      ; 00501aff
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00501b03
        ;   Label: LAB_00501b03
    INC EAX                             ; 00501b07
    IMUL EAX,EAX,0x48                   ; 00501b08
    MOV EDX,dword ptr [EBP + 0x18]      ; 00501b0b
    MOV EBX,dword ptr [ESP + 0x20]      ; 00501b0e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00501b12
    MOV ECX,dword ptr [ESP + 0x18]      ; 00501b16
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00501b1a
    ADD EBX,0x44                        ; 00501b1e
    MOV dword ptr [ESP + 0x30],EDI      ; 00501b21
    ADD ECX,0x44                        ; 00501b25
    MOV EDI,dword ptr [ESP + 0x30]      ; 00501b28
    ADD EDX,EAX                         ; 00501b2c
    XOR EAX,EAX                         ; 00501b2e
    FLD float ptr [ECX]                 ; 00501b30
        ;   Label: LAB_00501b30
    FLD ST0                             ; 00501b32
    FMUL double ptr [EAX + 0x1d93058]   ; 00501b34
    FLD float ptr [ESI]                 ; 00501b3a
    FLD ST0                             ; 00501b3c
    FMUL double ptr [EAX + 0x1d93018]   ; 00501b3e
    FSUBP ST2,ST0                       ; 00501b44
    FXCH                                ; 00501b46
    FSTP float ptr [EBX]                ; 00501b48
    FMUL double ptr [EAX + 0x1d93058]   ; 00501b4a
    FXCH                                ; 00501b50
    FMUL double ptr [EAX + 0x1d93018]   ; 00501b52
    ADD EDX,0x4                         ; 00501b58
    SUB EBX,0x4                         ; 00501b5b
    ADD EAX,0x8                         ; 00501b5e
    ADD ESI,0x4                         ; 00501b61
    FADDP                               ; 00501b64
    SUB ECX,0x4                         ; 00501b66
    FSTP float ptr [EDX + -0x4]         ; 00501b69
    CMP EDX,EDI                         ; 00501b6c
    JNZ 0x00501b30                      ; 00501b6e
        ;   XREF to: 00501b30 (CONDITIONAL_JUMP)  ; LAB_00501b30
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00501b70
    MOV ESI,dword ptr [ESP + 0x20]      ; 00501b74
    MOV EDI,dword ptr [ESP + 0x28]      ; 00501b78
    MOV EAX,dword ptr [ESP + 0x18]      ; 00501b7c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00501b80
    MOV ECX,dword ptr [ESP + 0x34]      ; 00501b84
    ADD EBX,0x48                        ; 00501b88
    ADD ESI,0x48                        ; 00501b8b
    ADD EDI,0x48                        ; 00501b8e
    ADD EAX,0x48                        ; 00501b91
    INC EDX                             ; 00501b94
    MOV dword ptr [ESP + 0x1c],EBX      ; 00501b95
    MOV dword ptr [ESP + 0x20],ESI      ; 00501b99
    MOV dword ptr [ESP + 0x28],EDI      ; 00501b9d
    MOV dword ptr [ESP + 0x18],EAX      ; 00501ba1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00501ba5
    CMP EDX,ECX                         ; 00501ba9
    JL 0x00501b03                       ; 00501bab
        ;   XREF to: 00501b03 (CONDITIONAL_JUMP)  ; LAB_00501b03
    MOV ESP,EBP                         ; 00501bb1
        ;   Label: LAB_00501bb1
    POP EBP                             ; 00501bb3
    POP EDI                             ; 00501bb4
    POP ESI                             ; 00501bb5
    POP EBX                             ; 00501bb6
    RET                                 ; 00501bb7
    MOV dword ptr [ESP + 0x34],0x1f     ; 00501bb8
        ;   Label: LAB_00501bb8
    JMP 0x00501acf                      ; 00501bc0
        ;   XREF to: 00501acf (UNCONDITIONAL_JUMP)  ; LAB_00501acf

