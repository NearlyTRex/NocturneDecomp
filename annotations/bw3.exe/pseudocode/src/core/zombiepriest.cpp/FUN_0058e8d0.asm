; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058e8d0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0058d960 at 0058de4c
;
; Referenced Globals:
;   TerminatedCString s_core_zombiepriest_cpp_005d8bb8
;   TerminatedCString s_CZombiePriest_Aim_Burnin_005d8bd1
;   undefined4 DAT_005d8c0c
;   undefined4 DAT_005d8c10
;   undefined4 DAT_005d8c18
;   undefined4 DAT_005d8c20
;   undefined4 DAT_01d5ba70
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02d0c150
;   undefined4 DAT_02d24978
;   undefined4 DAT_02d24998
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040c840
;   FUN_0040cfa0
;   FUN_00489600
;   FUN_004e4330
;   FUN_0054cc90
;   FUN_0054e170
;   FUN_00576250
;   FUN_00583260
;   FUN_00585cd0
;   FUN_00585d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e8d0
        ;   Label: FUN_0058e8d0
    PUSH ESI                            ; 0058e8d1
    PUSH EDI                            ; 0058e8d2
    PUSH EBP                            ; 0058e8d3
    MOV EBP,ESP                         ; 0058e8d4
    SUB ESP,0xa4                        ; 0058e8d6
    AND ESP,0xfffffff8                  ; 0058e8dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058e8df
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0058e8e2
    TEST EDX,EDX                        ; 0058e8e8
    JZ 0x0058e903                       ; 0058e8ea
        ;   XREF to: 0058e903 (CONDITIONAL_JUMP)  ; LAB_0058e903
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058e8ec
    TEST ECX,ECX                        ; 0058e8f2
    JNZ 0x0058e90b                      ; 0058e8f4
        ;   XREF to: 0058e90b (CONDITIONAL_JUMP)  ; LAB_0058e90b
    MOV dword ptr [EBX + 0xd10c],ECX    ; 0058e8f6
    MOV ESP,EBP                         ; 0058e8fc
        ;   Label: LAB_0058e8fc
    POP EBP                             ; 0058e8fe
    POP EDI                             ; 0058e8ff
    POP ESI                             ; 0058e900
    POP EBX                             ; 0058e901
    RET                                 ; 0058e902
    MOV dword ptr [EBX + 0xd10c],EDX    ; 0058e903
        ;   Label: LAB_0058e903
    JMP 0x0058e8fc                      ; 0058e909
        ;   XREF to: 0058e8fc (UNCONDITIONAL_JUMP)  ; LAB_0058e8fc
    PUSH ECX                            ; 0058e90b
        ;   Label: LAB_0058e90b
    PUSH EBX                            ; 0058e90c
    CALL FUN_00489600                   ; 0058e90d
        ;   XREF to: 00489600 (UNCONDITIONAL_CALL)  ; undefined FUN_00489600()
    ADD ESP,0x8                         ; 0058e912
    TEST EAX,EAX                        ; 0058e915
    JZ 0x0058ec20                       ; 0058e917
        ;   XREF to: 0058ec20 (CONDITIONAL_JUMP)  ; LAB_0058ec20
    MOV EAX,[0x02d0c150]                ; 0058e91d | DAT_02d0c150
        ;   Label: LAB_0058e91d
    PUSH EAX                            ; 0058e922
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0058e923
    PUSH EDX                            ; 0058e929
    CALL FUN_0040c840                   ; 0058e92a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0058e92f
    TEST EAX,EAX                        ; 0058e932
    JNZ 0x0058e959                      ; 0058e934
        ;   XREF to: 0058e959 (CONDITIONAL_JUMP)  ; LAB_0058e959
    MOV ECX,0x5d8bb8                    ; 0058e936 | = "..\\core\\zombiepriest.cpp"
    MOV ESI,0x2aa                       ; 0058e93b
    PUSH 0x5d8bd1                       ; 0058e940 | = "CZombiePriest::Aim Burning Cross - I'..."
    MOV dword ptr [0x01d71de0],ECX      ; 0058e945 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0058e94b | DAT_01d71de4
    CALL FUN_004e4330                   ; 0058e951
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0058e956
    MOV ESI,dword ptr [0x02d24978]      ; 0058e959 | DAT_02d24978
        ;   Label: LAB_0058e959
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058e95f
    SUB EAX,ESI                         ; 0058e966
    MOV ESI,EAX                         ; 0058e968
    SHL ESI,0x4                         ; 0058e96a
    LEA EAX,[EBX + 0xfd8]               ; 0058e96d
    ADD EAX,ESI                         ; 0058e973
    MOV EDI,0x3f490fdb                  ; 0058e975
    PUSH EAX                            ; 0058e97a
    MOV dword ptr [ESP + 0x8],EDI       ; 0058e97b
    PUSH 0x2cfd900                      ; 0058e97f | DAT_02cfd900
    LEA ESI,[ESP + 0x58]                ; 0058e984
    LEA EDI,[ESP + 0x64]                ; 0058e988
    CALL FUN_00583260                   ; 0058e98c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    ADD ESP,0x8                         ; 0058e991
    LEA EAX,[ESP + 0x5c]                ; 0058e994
    LEA ESI,[ESP + 0x50]                ; 0058e998
    PUSH EAX                            ; 0058e99c
    MOVSD ES:EDI,ESI                    ; 0058e99d
    MOVSD ES:EDI,ESI                    ; 0058e99e
    MOVSD ES:EDI,ESI                    ; 0058e99f
    PUSH EBX                            ; 0058e9a0
    LEA ESI,[ESP + 0x94]                ; 0058e9a1
    LEA EDI,[ESP + 0x70]                ; 0058e9a8
    CALL FUN_00408b80                   ; 0058e9ac
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x94]                ; 0058e9b1
    ADD ESP,0x8                         ; 0058e9b8
    MOVSD ES:EDI,ESI                    ; 0058e9bb
    MOVSD ES:EDI,ESI                    ; 0058e9bc
    MOVSD ES:EDI,ESI                    ; 0058e9bd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058e9be
    LEA EDI,[ESP + 0x74]                ; 0058e9c4
    LEA ESI,[ESP + 0x80]                ; 0058e9c8
    FLD float ptr [EAX + 0x24]          ; 0058e9cf
    FLD float ptr [EAX + 0x28]          ; 0058e9d2
    FLD float ptr [EAX + 0x20]          ; 0058e9d5
    MOV EAX,[0x01d5ba70]                ; 0058e9d8 | DAT_01d5ba70
    FSUB float ptr [ESP + 0x68]         ; 0058e9dd
    FXCH ST2                            ; 0058e9e1
    FSUB float ptr [ESP + 0x6c]         ; 0058e9e3
    FXCH                                ; 0058e9e7
    FSUB float ptr [ESP + 0x70]         ; 0058e9e9
    FXCH ST2                            ; 0058e9ed
    FSTP float ptr [ESP + 0x80]         ; 0058e9ef
    FSTP float ptr [ESP + 0x84]         ; 0058e9f6
    FSTP float ptr [ESP + 0x88]         ; 0058e9fd
    MOVSD ES:EDI,ESI                    ; 0058ea04
    MOVSD ES:EDI,ESI                    ; 0058ea05
    MOVSD ES:EDI,ESI                    ; 0058ea06
    PUSH EAX                            ; 0058ea07
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0058ea08
    PUSH EDX                            ; 0058ea0e
    CALL FUN_0040c840                   ; 0058ea0f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0058ea14
    TEST EAX,EAX                        ; 0058ea17
    JZ 0x0058ec3a                       ; 0058ea19
        ;   XREF to: 0058ec3a (CONDITIONAL_JUMP)  ; LAB_0058ec3a
    FLD float ptr [ESP + 0x78]          ; 0058ea1f
    FADD float ptr [0x005d8c10]         ; 0058ea23 | DAT_005d8c10
    FSTP float ptr [ESP + 0x78]         ; 0058ea29
        ;   Label: LAB_0058ea29
    LEA EAX,[ESP + 0x74]                ; 0058ea2d
    PUSH EAX                            ; 0058ea31
    LEA ESI,[ESP + 0x48]                ; 0058ea32
    LEA EDI,[ESP + 0x3c]                ; 0058ea36
    CALL FUN_00576250                   ; 0058ea3a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x48]                ; 0058ea3f
    ADD ESP,0x4                         ; 0058ea43
    MOVSD ES:EDI,ESI                    ; 0058ea46
    MOVSD ES:EDI,ESI                    ; 0058ea47
    MOVSD ES:EDI,ESI                    ; 0058ea48
    FLD float ptr [ESP + 0x3c]          ; 0058ea49
    FSUB float ptr [EBX + 0x34]         ; 0058ea4d
    SUB ESP,0x4                         ; 0058ea50
    FSTP float ptr [ESP]                ; 0058ea53
    CALL FUN_0040cfa0                   ; 0058ea56
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 0058ea5b
    FLD float ptr [ESP + 0xa4]          ; 0058ea62
    ADD ESP,0x4                         ; 0058ea69
    FST float ptr [ESP + 0x3c]          ; 0058ea6c
    FABS                                ; 0058ea70
    FLD float ptr [ESP + 0x78]          ; 0058ea72
    FMUL ST0                            ; 0058ea76
    FLD float ptr [ESP + 0x74]          ; 0058ea78
    FMUL ST0                            ; 0058ea7c
    FADDP                               ; 0058ea7e
    FLD float ptr [ESP + 0x7c]          ; 0058ea80
    FMUL ST0                            ; 0058ea84
    FADDP                               ; 0058ea86
    FSQRT                               ; 0058ea88
    FLD float ptr [ESP + 0x4]           ; 0058ea8a
    FXCH                                ; 0058ea8e
    FSTP float ptr [ESP]                ; 0058ea90
    FCOMPP                              ; 0058ea93
    FNSTSW AX                           ; 0058ea95
    SAHF                                ; 0058ea97
    JBE 0x0058ec49                      ; 0058ea98
        ;   XREF to: 0058ec49 (CONDITIONAL_JUMP)  ; LAB_0058ec49
    FLD float ptr [ESP]                 ; 0058ea9e
    FCOMP double ptr [0x005d8c18]       ; 0058eaa1 | DAT_005d8c18
    FNSTSW AX                           ; 0058eaa7
    SAHF                                ; 0058eaa9
    JBE 0x0058ec49                      ; 0058eaaa
        ;   XREF to: 0058ec49 (CONDITIONAL_JUMP)  ; LAB_0058ec49
    FLD float ptr [EBX + 0xd10c]        ; 0058eab0
    FADD float ptr [EBP + 0x18]         ; 0058eab6
    FST float ptr [EBX + 0xd10c]        ; 0058eab9
    FLD1                                ; 0058eabf
    FCOMPP                              ; 0058eac1
    FNSTSW AX                           ; 0058eac3
    SAHF                                ; 0058eac5
    JNC 0x0058ead2                      ; 0058eac6
        ;   XREF to: 0058ead2 (CONDITIONAL_JUMP)  ; LAB_0058ead2
    MOV dword ptr [EBX + 0xd10c],0x3f800000 ; 0058eac8
    FLD float ptr [ESP + 0x38]          ; 0058ead2
        ;   Label: LAB_0058ead2
    FLD float ptr [ESP + 0x4]           ; 0058ead6
    FCHS                                ; 0058eada
    FSTP float ptr [ESP + 0x9c]         ; 0058eadc
    FCOMP float ptr [ESP + 0x9c]        ; 0058eae3
    FNSTSW AX                           ; 0058eaea
    SAHF                                ; 0058eaec
    JNC 0x0058eafa                      ; 0058eaed
        ;   XREF to: 0058eafa (CONDITIONAL_JUMP)  ; LAB_0058eafa
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058eaef
    MOV dword ptr [ESP + 0x38],EAX      ; 0058eaf6
    FLD float ptr [ESP + 0x38]          ; 0058eafa
        ;   Label: LAB_0058eafa
    FCOMP float ptr [ESP + 0x4]         ; 0058eafe
    FNSTSW AX                           ; 0058eb02
    SAHF                                ; 0058eb04
    JBE 0x0058eb0f                      ; 0058eb05
        ;   XREF to: 0058eb0f (CONDITIONAL_JUMP)  ; LAB_0058eb0f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058eb07
    MOV dword ptr [ESP + 0x38],EAX      ; 0058eb0b
    FLD float ptr [ESP + 0x3c]          ; 0058eb0f
        ;   Label: LAB_0058eb0f
    FLD float ptr [ESP + 0x4]           ; 0058eb13
    FCHS                                ; 0058eb17
    FSTP float ptr [ESP + 0x98]         ; 0058eb19
    FCOMP float ptr [ESP + 0x98]        ; 0058eb20
    FNSTSW AX                           ; 0058eb27
    SAHF                                ; 0058eb29
    JNC 0x0058eb37                      ; 0058eb2a
        ;   XREF to: 0058eb37 (CONDITIONAL_JUMP)  ; LAB_0058eb37
    MOV EAX,dword ptr [ESP + 0x98]      ; 0058eb2c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058eb33
    FLD float ptr [ESP + 0x3c]          ; 0058eb37
        ;   Label: LAB_0058eb37
    FCOMP float ptr [ESP + 0x4]         ; 0058eb3b
    FNSTSW AX                           ; 0058eb3f
    SAHF                                ; 0058eb41
    JBE 0x0058eb4c                      ; 0058eb42
        ;   XREF to: 0058eb4c (CONDITIONAL_JUMP)  ; LAB_0058eb4c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058eb44
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058eb48
    MOV ECX,dword ptr [EBX + 0x2628]    ; 0058eb4c
        ;   Label: LAB_0058eb4c
    LEA EAX,[EBX + 0x158]               ; 0058eb52
    TEST ECX,ECX                        ; 0058eb58
    JZ 0x0058ec74                       ; 0058eb5a
        ;   XREF to: 0058ec74 (CONDITIONAL_JUMP)  ; LAB_0058ec74
    PUSH 0x54bef0                       ; 0058eb60 | LAB_0054bef0
    MOV EDI,dword ptr [0x02d24998]      ; 0058eb65 | DAT_02d24998
    PUSH EDI                            ; 0058eb6b
    PUSH dword ptr [EBX + 0xd10c]       ; 0058eb6c
    PUSH 0x40c00000                     ; 0058eb72
    PUSH 0x6                            ; 0058eb77
    PUSH EAX                            ; 0058eb79
        ;   Label: LAB_0058eb79
    CALL FUN_0054cc90                   ; 0058eb7a
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; undefined FUN_0054cc90()
    ADD ESP,0x18                        ; 0058eb7f
    LEA ESI,[ESP + 0x28]                ; 0058eb82
    PUSH dword ptr [ESP + 0x38]         ; 0058eb86
    CALL FUN_00585cd0                   ; 0058eb8a
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585cd0()
    ADD ESP,0x4                         ; 0058eb8f
    LEA EDI,[ESP + 0x18]                ; 0058eb92
    PUSH 0x54bef0                       ; 0058eb96 | LAB_0054bef0
    MOV EAX,[0x02d24998]                ; 0058eb9b | DAT_02d24998
    LEA ESI,[ESP + 0x2c]                ; 0058eba0
    PUSH EAX                            ; 0058eba4
    MOVSD ES:EDI,ESI                    ; 0058eba5
    MOVSD ES:EDI,ESI                    ; 0058eba6
    MOVSD ES:EDI,ESI                    ; 0058eba7
    MOVSD ES:EDI,ESI                    ; 0058eba8
    LEA EAX,[ESP + 0x20]                ; 0058eba9
    PUSH dword ptr [EBX + 0xd10c]       ; 0058ebad
    PUSH EAX                            ; 0058ebb3
    LEA EAX,[EBX + 0x158]               ; 0058ebb4
    PUSH EAX                            ; 0058ebba
    MOV dword ptr [ESP + 0xb4],EAX      ; 0058ebbb
    CALL FUN_0054e170                   ; 0058ebc2
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0058ebc7
    FLD float ptr [ESP + 0x3c]          ; 0058ebca
    SUB ESP,0x4                         ; 0058ebce
    FADD double ptr [0x005d8c20]        ; 0058ebd1 | DAT_005d8c20
    LEA ESI,[ESP + 0xc]                 ; 0058ebd7
    FSTP float ptr [ESP]                ; 0058ebdb
    CALL FUN_00585d10                   ; 0058ebde
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d10()
    ADD ESP,0x4                         ; 0058ebe3
    LEA EDI,[ESP + 0x18]                ; 0058ebe6
    PUSH 0x54bef0                       ; 0058ebea | LAB_0054bef0
    MOV ECX,dword ptr [0x02d24998]      ; 0058ebef | DAT_02d24998
    LEA ESI,[ESP + 0xc]                 ; 0058ebf5
    PUSH ECX                            ; 0058ebf9
    MOVSD ES:EDI,ESI                    ; 0058ebfa
    MOVSD ES:EDI,ESI                    ; 0058ebfb
    MOVSD ES:EDI,ESI                    ; 0058ebfc
    MOVSD ES:EDI,ESI                    ; 0058ebfd
    LEA EAX,[ESP + 0x20]                ; 0058ebfe
    PUSH dword ptr [EBX + 0xd10c]       ; 0058ec02
    PUSH EAX                            ; 0058ec08
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0058ec09
    PUSH EBX                            ; 0058ec10
    CALL FUN_0054e170                   ; 0058ec11
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0058ec16
    MOV ESP,EBP                         ; 0058ec19
    POP EBP                             ; 0058ec1b
    POP EDI                             ; 0058ec1c
    POP ESI                             ; 0058ec1d
    POP EBX                             ; 0058ec1e
    RET                                 ; 0058ec1f
    CMP dword ptr [EBX + 0xd06c],0x0    ; 0058ec20
        ;   Label: LAB_0058ec20
    JNZ 0x0058e91d                      ; 0058ec27
        ;   XREF to: 0058e91d (CONDITIONAL_JUMP)  ; LAB_0058e91d
    MOV dword ptr [EBX + 0xd10c],EAX    ; 0058ec2d
    MOV ESP,EBP                         ; 0058ec33
    POP EBP                             ; 0058ec35
    POP EDI                             ; 0058ec36
    POP ESI                             ; 0058ec37
    POP EBX                             ; 0058ec38
    RET                                 ; 0058ec39
    FLD float ptr [ESP + 0x78]          ; 0058ec3a
        ;   Label: LAB_0058ec3a
    FADD float ptr [0x005d8c0c]         ; 0058ec3e | DAT_005d8c0c
    JMP 0x0058ea29                      ; 0058ec44
        ;   XREF to: 0058ea29 (UNCONDITIONAL_JUMP)  ; LAB_0058ea29
    FLD float ptr [EBX + 0xd10c]        ; 0058ec49
        ;   Label: LAB_0058ec49
    FSUB float ptr [EBP + 0x18]         ; 0058ec4f
    FST float ptr [EBX + 0xd10c]        ; 0058ec52
    FLDZ                                ; 0058ec58
    FCOMPP                              ; 0058ec5a
    FNSTSW AX                           ; 0058ec5c
    SAHF                                ; 0058ec5e
    JBE 0x0058ead2                      ; 0058ec5f
        ;   XREF to: 0058ead2 (CONDITIONAL_JUMP)  ; LAB_0058ead2
    MOV dword ptr [EBX + 0xd10c],0x0    ; 0058ec65
    JMP 0x0058ead2                      ; 0058ec6f
        ;   XREF to: 0058ead2 (UNCONDITIONAL_JUMP)  ; LAB_0058ead2
    PUSH 0x54bef0                       ; 0058ec74 | LAB_0054bef0
        ;   Label: LAB_0058ec74
    MOV ESI,dword ptr [0x02d24998]      ; 0058ec79 | DAT_02d24998
    PUSH ESI                            ; 0058ec7f
    PUSH dword ptr [EBX + 0xd10c]       ; 0058ec80
    PUSH 0x40c00000                     ; 0058ec86
    PUSH 0x2                            ; 0058ec8b
    JMP 0x0058eb79                      ; 0058ec8d
        ;   XREF to: 0058eb79 (UNCONDITIONAL_JUMP)  ; LAB_0058eb79

