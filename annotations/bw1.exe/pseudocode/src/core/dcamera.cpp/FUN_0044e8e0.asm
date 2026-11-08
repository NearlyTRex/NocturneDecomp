; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044e8e0(int param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
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
;
; XREF[1]:
;   FUN_0054f0d0 at 0054faaa
;
; Referenced Globals:
;   undefined4 s_movscrn_raw_005d769e+1
;   TerminatedCString s_core_dcamera_cpp_005d76ab
;   TerminatedCString s_CDemonCamera_precomputeL_005d76bf
;   undefined4 DAT_00857cd8
;   undefined4 DAT_00b81ca4
;   undefined4 DAT_01289ca8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0044e2a0
;   FUN_00463010
;   FUN_00465780
;   FUN_005030e0
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e8e0
        ;   Label: FUN_0044e8e0
    PUSH ESI                            ; 0044e8e1
    PUSH EDI                            ; 0044e8e2
    PUSH EBP                            ; 0044e8e3
    MOV EBP,ESP                         ; 0044e8e4
    SUB ESP,0x6c                        ; 0044e8e6
    AND ESP,0xfffffff8                  ; 0044e8e9
    MOV EBX,dword ptr [EBP + 0x18]      ; 0044e8ec
    MOV EDX,0x80                        ; 0044e8ef
    PUSH 0x5d769f                       ; 0044e8f4 | s_movscrn_raw_005d769e+1
    LEA EAX,[EBX + 0x1c74]              ; 0044e8f9
    XOR ECX,ECX                         ; 0044e8ff
    PUSH EAX                            ; 0044e901
    MOV dword ptr [ESP + 0x48],EDX      ; 0044e902
    MOV dword ptr [ESP + 0x4c],ECX      ; 0044e906
    CALL FUN_005c0f80                   ; 0044e90a
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0044e90f
    TEST EAX,EAX                        ; 0044e912
    JZ 0x0044ec0a                       ; 0044e914
        ;   XREF to: 0044ec0a (CONDITIONAL_JUMP)  ; LAB_0044ec0a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044e91a
        ;   Label: LAB_0044e91a
    TEST EAX,EAX                        ; 0044e91d
    JNZ 0x0044e92b                      ; 0044e91f
        ;   XREF to: 0044e92b (CONDITIONAL_JUMP)  ; LAB_0044e92b
    MOV [0x01289ca8],EAX                ; 0044e921 | DAT_01289ca8
    MOV [0x00b81ca4],EAX                ; 0044e926 | DAT_00b81ca4
    MOV ESI,dword ptr [0x00b81ca4]      ; 0044e92b | DAT_00b81ca4
        ;   Label: LAB_0044e92b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044e931
    ADD EAX,ESI                         ; 0044e938
    SHL EAX,0xc                         ; 0044e93a
    MOV ESI,EAX                         ; 0044e93d
    SHL EAX,0x4                         ; 0044e93f
    SUB EAX,ESI                         ; 0044e942
    MOV ESI,dword ptr [0x00b81ca4]      ; 0044e944 | DAT_00b81ca4
    INC ESI                             ; 0044e94a
    ADD EAX,0xb81ca8                    ; 0044e94b
    MOV dword ptr [0x00b81ca4],ESI      ; 0044e950 | DAT_00b81ca4
    CMP ESI,0x18                        ; 0044e956
    JBE 0x0044e95d                      ; 0044e959
        ;   XREF to: 0044e95d (CONDITIONAL_JUMP)  ; LAB_0044e95d
    XOR EAX,EAX                         ; 0044e95b
    MOV ESI,dword ptr [0x00b81ca4]      ; 0044e95d | DAT_00b81ca4
        ;   Label: LAB_0044e95d
    MOV dword ptr [EBX + 0x1c48],EAX    ; 0044e963
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044e969
    ADD EAX,ESI                         ; 0044e970
    SHL EAX,0xc                         ; 0044e972
    MOV EDX,dword ptr [0x00b81ca4]      ; 0044e975 | DAT_00b81ca4
    MOV ESI,EAX                         ; 0044e97b
    SHL EAX,0x4                         ; 0044e97d
    INC EDX                             ; 0044e980
    SUB EAX,ESI                         ; 0044e981
    MOV dword ptr [0x00b81ca4],EDX      ; 0044e983 | DAT_00b81ca4
    ADD EAX,0xb81ca8                    ; 0044e989
    CMP EDX,0x18                        ; 0044e98e
    JBE 0x0044e995                      ; 0044e991
        ;   XREF to: 0044e995 (CONDITIONAL_JUMP)  ; LAB_0044e995
    XOR EAX,EAX                         ; 0044e993
    MOV ESI,dword ptr [0x00b81ca4]      ; 0044e995 | DAT_00b81ca4
        ;   Label: LAB_0044e995
    MOV dword ptr [EBX + 0x1c4c],EAX    ; 0044e99b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044e9a1
    ADD EAX,ESI                         ; 0044e9a8
    SHL EAX,0xc                         ; 0044e9aa
    MOV ESI,EAX                         ; 0044e9ad
    SHL EAX,0x4                         ; 0044e9af
    SUB EAX,ESI                         ; 0044e9b2
    MOV ESI,dword ptr [0x00b81ca4]      ; 0044e9b4 | DAT_00b81ca4
    INC ESI                             ; 0044e9ba
    ADD EAX,0xb81ca8                    ; 0044e9bb
    MOV dword ptr [0x00b81ca4],ESI      ; 0044e9c0 | DAT_00b81ca4
    CMP ESI,0x18                        ; 0044e9c6
    JBE 0x0044e9cd                      ; 0044e9c9
        ;   XREF to: 0044e9cd (CONDITIONAL_JUMP)  ; LAB_0044e9cd
    XOR EAX,EAX                         ; 0044e9cb
    MOV dword ptr [EBX + 0x1c50],EAX    ; 0044e9cd
        ;   Label: LAB_0044e9cd
    CMP dword ptr [EBX + 0x1c48],0x0    ; 0044e9d3
    JNZ 0x0044ec21                      ; 0044e9da
        ;   XREF to: 0044ec21 (CONDITIONAL_JUMP)  ; LAB_0044ec21
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044e9e0
        ;   Label: LAB_0044e9e0
    ADD EAX,0x40                        ; 0044e9e3
    PUSH EAX                            ; 0044e9e6
    MOV ESI,0x5d76ab                    ; 0044e9e7 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x6ca                       ; 0044e9ec
    PUSH 0x5d76bf                       ; 0044e9f1 | = "CDemonCamera::precomputeLight - Too m..."
    MOV dword ptr [0x01d1d400],ESI      ; 0044e9f6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0044e9fc | DAT_01d1d404
    CALL FUN_005030e0                   ; 0044ea02
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0044ea07
    PUSH EBX                            ; 0044ea0a
        ;   Label: LAB_0044ea0a
    CALL FUN_00465780                   ; 0044ea0b
        ;   XREF to: 00465780 (UNCONDITIONAL_CALL)  ; undefined FUN_00465780()
    ADD ESP,0x4                         ; 0044ea10
    CMP dword ptr [EBP + 0x1c],0x0      ; 0044ea13
    JNZ 0x0044ec40                      ; 0044ea17
        ;   XREF to: 0044ec40 (CONDITIONAL_JUMP)  ; LAB_0044ec40
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ea1d
        ;   Label: LAB_0044ea1d
    MOV EAX,dword ptr [EAX + 0x150]     ; 0044ea20
    DEC EAX                             ; 0044ea26
    MOV dword ptr [ESP + 0x4],EAX       ; 0044ea27
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ea2b
    XOR ESI,ESI                         ; 0044ea2e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044ea30
    MOV dword ptr [ESP + 0x8],ESI       ; 0044ea36
    DEC EAX                             ; 0044ea3a
    MOV dword ptr [ESP],ESI             ; 0044ea3b
    MOV dword ptr [ESP + 0xc],EAX       ; 0044ea3e
    LEA EAX,[EAX]                       ; 0044ea42
    LEA EDX,[EDX]                       ; 0044ea48
    MOV EAX,EAX                         ; 0044ea4e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ea50
        ;   Label: LAB_0044ea50
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044ea54
    MOV dword ptr [ESP + 0x54],EAX      ; 0044ea58
    CMP EAX,EDX                         ; 0044ea5c
    JG 0x0044ec03                       ; 0044ea5e
        ;   XREF to: 0044ec03 (CONDITIONAL_JUMP)  ; LAB_0044ec03
    MOV ESI,dword ptr [ESP]             ; 0044ea64
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ea67
    SUB EAX,ESI                         ; 0044ea6e
    SHL EAX,0x2                         ; 0044ea70
    MOV dword ptr [ESP + 0x28],EAX      ; 0044ea73
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ea77
    MOV ESI,dword ptr [ESP + 0x8]       ; 0044ea7e
    MOV dword ptr [ESP + 0x34],EAX      ; 0044ea82
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044ea86
    ADD EAX,ESI                         ; 0044ea8d
    SHL EAX,0x8                         ; 0044ea8f
    SHL ESI,0x8                         ; 0044ea92
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044ea95
    MOV EAX,ESI                         ; 0044ea99
    SHL EAX,0x4                         ; 0044ea9b
    SUB EAX,ESI                         ; 0044ea9e
    MOV ESI,EAX                         ; 0044eaa0
    ADD EAX,0x857cd8                    ; 0044eaa2 | DAT_00857cd8
    MOV dword ptr [ESP + 0x30],EAX      ; 0044eaa7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044eaab
    SHL EAX,0x2                         ; 0044eaaf
    ADD ESI,0xa1bad8                    ; 0044eab2
    ADD EAX,EBX                         ; 0044eab8
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044eaba
    MOV dword ptr [ESP + 0x38],EAX      ; 0044eabe
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044eac2
        ;   Label: LAB_0044eac2
    MOV EDX,dword ptr [ESP + 0x28]      ; 0044eac6
    ADD EAX,EDX                         ; 0044eaca
    MOV ESI,0x3e7                       ; 0044eacc
    MOV dword ptr [ESP + 0x50],EAX      ; 0044ead1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044ead5
    MOV dword ptr [ESP + 0x4c],ESI      ; 0044ead9
    ADD EAX,EDX                         ; 0044eadd
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044eadf
    MOV dword ptr [ESP + 0x58],EAX      ; 0044eae3
    MOV EAX,dword ptr [EBX + 0x1c48]    ; 0044eae7
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044eaed
    ADD EAX,ESI                         ; 0044eaf1
    ADD EDX,EAX                         ; 0044eaf3
    MOV dword ptr [ESP + 0x60],EDX      ; 0044eaf5
    MOV EAX,dword ptr [EBX + 0x1c4c]    ; 0044eaf9
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044eaff
    ADD EAX,ESI                         ; 0044eb03
    MOV ECX,dword ptr [ESP + 0x4]       ; 0044eb05
    ADD EDX,EAX                         ; 0044eb09
    XOR EDI,EDI                         ; 0044eb0b
    MOV dword ptr [ESP + 0x64],EDX      ; 0044eb0d
    MOV EAX,dword ptr [EBX + 0x1c50]    ; 0044eb11
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044eb17
    ADD EAX,ESI                         ; 0044eb1b
    MOV dword ptr [ESP + 0x48],EDI      ; 0044eb1d
    ADD EDX,EAX                         ; 0044eb21
    MOV EAX,dword ptr [ESP]             ; 0044eb23
    MOV dword ptr [ESP + 0x5c],EDX      ; 0044eb26
    MOV dword ptr [ESP + 0x68],EAX      ; 0044eb2a
    CMP EAX,ECX                         ; 0044eb2e
    JG 0x0044eba5                       ; 0044eb30
        ;   XREF to: 0044eba5 (CONDITIONAL_JUMP)  ; LAB_0044eba5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044eb32
        ;   Label: LAB_0044eb32
    CMP EAX,0x1                         ; 0044eb36
    JGE 0x0044ecd7                      ; 0044eb39
        ;   XREF to: 0044ecd7 (CONDITIONAL_JUMP)  ; LAB_0044ecd7
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044eb3f
        ;   Label: LAB_0044eb3f
    MOV dword ptr [EAX],0x0             ; 0044eb43
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044eb49
    MOV dword ptr [EAX],0x0             ; 0044eb4d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044eb53
    MOV dword ptr [EAX],0x0             ; 0044eb57
        ;   Label: LAB_0044eb57
    MOV ESI,dword ptr [ESP + 0x58]      ; 0044eb5d
        ;   Label: LAB_0044eb5d
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044eb61
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044eb65
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044eb69
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0044eb6d
    ADD ESI,0xc                         ; 0044eb71
    ADD EDI,0xc                         ; 0044eb74
    ADD EAX,0x4                         ; 0044eb77
    ADD EDX,0x4                         ; 0044eb7a
    ADD ECX,0x4                         ; 0044eb7d
    MOV dword ptr [ESP + 0x58],ESI      ; 0044eb80
    MOV dword ptr [ESP + 0x50],EDI      ; 0044eb84
    MOV dword ptr [ESP + 0x60],EAX      ; 0044eb88
    MOV dword ptr [ESP + 0x64],EDX      ; 0044eb8c
    MOV ESI,dword ptr [ESP + 0x68]      ; 0044eb90
    MOV dword ptr [ESP + 0x5c],ECX      ; 0044eb94
    INC ESI                             ; 0044eb98
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044eb99
    MOV dword ptr [ESP + 0x68],ESI      ; 0044eb9d
    CMP ESI,EDI                         ; 0044eba1
    JLE 0x0044eb32                      ; 0044eba3
        ;   XREF to: 0044eb32 (CONDITIONAL_JUMP)  ; LAB_0044eb32
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044eba5
        ;   Label: LAB_0044eba5
    MOV EDX,dword ptr [ESP + 0x38]      ; 0044eba9
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044ebad
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044ebb1
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044ebb5
    ADD ECX,0x500                       ; 0044ebb9
    ADD ESI,0xf00                       ; 0044ebbf
    ADD EDI,0xf00                       ; 0044ebc5
    MOV dword ptr [EDX + 0x14c8],EAX    ; 0044ebcb
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044ebd1
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044ebd5
    MOV dword ptr [ESP + 0x2c],ESI      ; 0044ebd9
    MOV dword ptr [EDX + 0x1888],EAX    ; 0044ebdd
    LEA EAX,[EDX + 0x4]                 ; 0044ebe3
    MOV dword ptr [ESP + 0x30],EDI      ; 0044ebe6
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044ebea
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044ebee
    INC EDX                             ; 0044ebf2
    MOV dword ptr [ESP + 0x38],EAX      ; 0044ebf3
    MOV dword ptr [ESP + 0x54],EDX      ; 0044ebf7
    CMP EDX,ECX                         ; 0044ebfb
    JLE 0x0044eac2                      ; 0044ebfd
        ;   XREF to: 0044eac2 (CONDITIONAL_JUMP)  ; LAB_0044eac2
    MOV ESP,EBP                         ; 0044ec03
        ;   Label: LAB_0044ec03
    POP EBP                             ; 0044ec05
    POP EDI                             ; 0044ec06
    POP ESI                             ; 0044ec07
    POP EBX                             ; 0044ec08
    RET                                 ; 0044ec09
    MOV EDI,0x1                         ; 0044ec0a
        ;   Label: LAB_0044ec0a
    MOV ESI,0x100                       ; 0044ec0f
    MOV dword ptr [ESP + 0x44],EDI      ; 0044ec14
    MOV dword ptr [ESP + 0x40],ESI      ; 0044ec18
    JMP 0x0044e91a                      ; 0044ec1c
        ;   XREF to: 0044e91a (UNCONDITIONAL_JUMP)  ; LAB_0044e91a
    CMP dword ptr [EBX + 0x1c4c],0x0    ; 0044ec21
        ;   Label: LAB_0044ec21
    JZ 0x0044e9e0                       ; 0044ec28
        ;   XREF to: 0044e9e0 (CONDITIONAL_JUMP)  ; LAB_0044e9e0
    CMP dword ptr [EBX + 0x1c50],0x0    ; 0044ec2e
    JZ 0x0044e9e0                       ; 0044ec35
        ;   XREF to: 0044e9e0 (CONDITIONAL_JUMP)  ; LAB_0044e9e0
    JMP 0x0044ea0a                      ; 0044ec3b
        ;   XREF to: 0044ea0a (UNCONDITIONAL_JUMP)  ; LAB_0044ea0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ec40
        ;   Label: LAB_0044ec40
    CMP dword ptr [EAX + 0x148],0x1e0   ; 0044ec43
    JNZ 0x0044ea1d                      ; 0044ec4d
        ;   XREF to: 0044ea1d (CONDITIONAL_JUMP)  ; LAB_0044ea1d
    MOV EDI,ESP                         ; 0044ec53
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044ec55
    MOVSD ES:EDI,ESI                    ; 0044ec58
    MOVSD ES:EDI,ESI                    ; 0044ec59
    MOVSD ES:EDI,ESI                    ; 0044ec5a
    MOVSD ES:EDI,ESI                    ; 0044ec5b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044ec5c
    XOR ESI,ESI                         ; 0044ec60
    TEST ECX,ECX                        ; 0044ec62
    JLE 0x0044ec90                      ; 0044ec64
        ;   XREF to: 0044ec90 (CONDITIONAL_JUMP)  ; LAB_0044ec90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044ec66
    MOV EAX,EBX                         ; 0044ec6a
    ADD EAX,0x4                         ; 0044ec6c
        ;   Label: LAB_0044ec6c
    MOV dword ptr [EAX + 0x14c4],0x3e7  ; 0044ec6f
    INC ESI                             ; 0044ec79
    MOV dword ptr [EAX + 0x1884],0x0    ; 0044ec7a
    CMP ESI,EDX                         ; 0044ec84
    JL 0x0044ec6c                       ; 0044ec86
        ;   XREF to: 0044ec6c (CONDITIONAL_JUMP)  ; LAB_0044ec6c
    LEA EAX,[EAX]                       ; 0044ec88
    MOV EDX,EDX                         ; 0044ec8e
    MOV ESI,dword ptr [ESP + 0xc]       ; 0044ec90
        ;   Label: LAB_0044ec90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ec94
    INC ESI                             ; 0044ec97
    CMP ESI,dword ptr [EAX + 0x154]     ; 0044ec98
    JGE 0x0044ea50                      ; 0044ec9e
        ;   XREF to: 0044ea50 (CONDITIONAL_JUMP)  ; LAB_0044ea50
    LEA EAX,[ESI*0x4 + 0x0]             ; 0044eca4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044ecab
    ADD EAX,EBX                         ; 0044ecae
    MOV dword ptr [EAX + 0x14c8],0x3e7  ; 0044ecb0
        ;   Label: LAB_0044ecb0
    MOV dword ptr [EAX + 0x1888],0x0    ; 0044ecba
    INC ESI                             ; 0044ecc4
    MOV EDI,dword ptr [EDX + 0x154]     ; 0044ecc5
    ADD EAX,0x4                         ; 0044eccb
    CMP ESI,EDI                         ; 0044ecce
    JL 0x0044ecb0                       ; 0044ecd0
        ;   XREF to: 0044ecb0 (CONDITIONAL_JUMP)  ; LAB_0044ecb0
    JMP 0x0044ea50                      ; 0044ecd2
        ;   XREF to: 0044ea50 (UNCONDITIONAL_JUMP)  ; LAB_0044ea50
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044ecd7
        ;   Label: LAB_0044ecd7
    CMP EDX,0x1                         ; 0044ecdb
    JL 0x0044eb3f                       ; 0044ecde
        ;   XREF to: 0044eb3f (CONDITIONAL_JUMP)  ; LAB_0044eb3f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044ece4
    IMUL EAX,dword ptr [ESI + 0x14c]    ; 0044ece7
    MOV ESI,dword ptr [ESI + 0x144]     ; 0044ecee
    SUB ESI,0x2                         ; 0044ecf4
    CMP EAX,ESI                         ; 0044ecf7
    JG 0x0044eb3f                       ; 0044ecf9
        ;   XREF to: 0044eb3f (CONDITIONAL_JUMP)  ; LAB_0044eb3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ecff
    MOV ESI,EDX                         ; 0044ed02
    IMUL ESI,dword ptr [EAX + 0x14c]    ; 0044ed04
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044ed0b
    SUB EAX,0x2                         ; 0044ed11
    CMP ESI,EAX                         ; 0044ed14
    JG 0x0044eb3f                       ; 0044ed16
        ;   XREF to: 0044eb3f (CONDITIONAL_JUMP)  ; LAB_0044eb3f
    CMP dword ptr [ESP + 0x44],0x0      ; 0044ed1c
    JZ 0x0044ede3                       ; 0044ed21
        ;   XREF to: 0044ede3 (CONDITIONAL_JUMP)  ; LAB_0044ede3
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044ed27
        ;   Label: LAB_0044ed27
    PUSH EDX                            ; 0044ed2b
    PUSH EBX                            ; 0044ed2c
    LEA ESI,[ESP + 0x18]                ; 0044ed2d
    LEA EDI,[ESP + 0x24]                ; 0044ed31
    CALL FUN_0044e2a0                   ; 0044ed35
        ;   XREF to: 0044e2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e2a0()
    LEA ESI,[ESP + 0x18]                ; 0044ed3a
    ADD ESP,0x8                         ; 0044ed3e
    MOVSD ES:EDI,ESI                    ; 0044ed41
    MOVSD ES:EDI,ESI                    ; 0044ed42
    MOVSD ES:EDI,ESI                    ; 0044ed43
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044ed44
    TEST ECX,ECX                        ; 0044ed48
    JLE 0x0044eb3f                      ; 0044ed4a
        ;   XREF to: 0044eb3f (CONDITIONAL_JUMP)  ; LAB_0044eb3f
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044ed50
    MOV EAX,ECX                         ; 0044ed54
    MOV EDI,dword ptr [ESP + 0x54]      ; 0044ed56
    SUB EAX,ESI                         ; 0044ed5a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0044ed5c
    PUSH EDI                            ; 0044ed60
    MOV dword ptr [ESI],EAX             ; 0044ed61
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044ed63
    PUSH EAX                            ; 0044ed67
    LEA EAX,[ESP + 0x24]                ; 0044ed68
    PUSH EAX                            ; 0044ed6c
    PUSH EBX                            ; 0044ed6d
    CALL FUN_00463010                   ; 0044ed6e
        ;   XREF to: 00463010 (UNCONDITIONAL_CALL)  ; undefined FUN_00463010()
    ADD ESP,0x10                        ; 0044ed73
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044ed76
    MOV dword ptr [ESI],EAX             ; 0044ed7a
    TEST EAX,EAX                        ; 0044ed7c
    JZ 0x0044ee0e                       ; 0044ed7e
        ;   XREF to: 0044ee0e (CONDITIONAL_JUMP)  ; LAB_0044ee0e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044ed84
    MOV CL,byte ptr [EBX + 0x1cc8]      ; 0044ed88
    SAR ESI,CL                          ; 0044ed8e
    MOV ECX,dword ptr [EBX + 0x1c68]    ; 0044ed90
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044ed96
    AND ESI,ECX                         ; 0044ed9a
    MOV CL,byte ptr [EBX + 0x1ccc]      ; 0044ed9c
    MOV EDI,dword ptr [EBX + 0x1c68]    ; 0044eda2
    SAR EAX,CL                          ; 0044eda8
    MOV CL,byte ptr [EBX + 0x1c60]      ; 0044edaa
    AND EAX,EDI                         ; 0044edb0
    SHL EAX,CL                          ; 0044edb2
    ADD EAX,ESI                         ; 0044edb4
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044edb6
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044edba
    MOV dword ptr [ESI],EAX             ; 0044edbe
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044edc0
    CMP EAX,EDX                         ; 0044edc4
    JLE 0x0044edcc                      ; 0044edc6
        ;   XREF to: 0044edcc (CONDITIONAL_JUMP)  ; LAB_0044edcc
    MOV dword ptr [ESP + 0x48],EAX      ; 0044edc8
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044edcc
        ;   Label: LAB_0044edcc
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0044edd0
    JGE 0x0044eb5d                      ; 0044edd4
        ;   XREF to: 0044eb5d (CONDITIONAL_JUMP)  ; LAB_0044eb5d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044edda
    JMP 0x0044eb5d                      ; 0044edde
        ;   XREF to: 0044eb5d (UNCONDITIONAL_JUMP)  ; LAB_0044eb5d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044ede3
        ;   Label: LAB_0044ede3
    FLD float ptr [EAX + 0x4]           ; 0044ede7
    FMUL float ptr [EBX + 0x24]         ; 0044edea
    FLD float ptr [EAX]                 ; 0044eded
    FMUL float ptr [EBX + 0x18]         ; 0044edef
    FADDP                               ; 0044edf2
    FLD float ptr [EAX + 0x8]           ; 0044edf4
    FMUL float ptr [EBX + 0x30]         ; 0044edf7
    FADDP                               ; 0044edfa
    FLDZ                                ; 0044edfc
    FCOMPP                              ; 0044edfe
    FNSTSW AX                           ; 0044ee00
    SAHF                                ; 0044ee02
    JBE 0x0044ed27                      ; 0044ee03
        ;   XREF to: 0044ed27 (CONDITIONAL_JUMP)  ; LAB_0044ed27
    JMP 0x0044eb3f                      ; 0044ee09
        ;   XREF to: 0044eb3f (UNCONDITIONAL_JUMP)  ; LAB_0044eb3f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044ee0e
        ;   Label: LAB_0044ee0e
    MOV dword ptr [EAX],0x0             ; 0044ee12
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044ee18
    MOV dword ptr [ESI],0x0             ; 0044ee1c
    JMP 0x0044eb57                      ; 0044ee22
        ;   XREF to: 0044eb57 (UNCONDITIONAL_JUMP)  ; LAB_0044eb57

