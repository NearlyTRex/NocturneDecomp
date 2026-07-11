; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053c800(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0053fc60 at 0053fd07
;
; Referenced Globals:
;   undefined4 s_actionPending_=_%d_stranger.cpp_l_00595b86+1
;   string s_Delta_to_dest_:_%3.2f,%3.2f,%3.2_00595baf
;   undefined4 DAT_00595bd7
;   undefined4 DAT_00595bdf
;   undefined4 DAT_00595be7
;   undefined4 DAT_00595bef
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b6d50
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_0077bd78
;   undefined4 DAT_014b8a54
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a290
;   FUN_0040d890
;   FUN_0042a9d0
;   FUN_0043ac60
;   FUN_0044bab0
;   FUN_0046fb40
;   FUN_004e16b0
;   FUN_004e18d0
;   FUN_0050ec80
;   FUN_00510a40
;   FUN_00511750
;   FUN_00511780
;   FUN_00534fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c800
        ;   Label: FUN_0053c800
    PUSH ESI                            ; 0053c801
    PUSH EDI                            ; 0053c802
    PUSH EBP                            ; 0053c803
    MOV EBP,ESP                         ; 0053c804
    SUB ESP,0xdc                        ; 0053c806
    AND ESP,0xfffffff8                  ; 0053c80c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053c80f
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 0053c812
    TEST EDX,EDX                        ; 0053c818
    JNZ 0x0053cf5b                      ; 0053c81a
        ;   XREF to: 0053cf5b (CONDITIONAL_JUMP)  ; LAB_0053cf5b
    CMP dword ptr [EBX + 0x24f0],0x0    ; 0053c820
    JZ 0x0053cf5b                       ; 0053c827
        ;   XREF to: 0053cf5b (CONDITIONAL_JUMP)  ; LAB_0053cf5b
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053c82d
    JZ 0x0053c85d                       ; 0053c834
        ;   XREF to: 0053c85d (CONDITIONAL_JUMP)  ; LAB_0053c85d
    PUSH EDX                            ; 0053c836
    PUSH EBX                            ; 0053c837
    CALL FUN_0042a9d0                   ; 0053c838
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a9d0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 0053c83d
    FLD float ptr [ESP + 0xe0]          ; 0053c844
    ADD ESP,0x8                         ; 0053c84b
    FCOMP double ptr [0x00595bd7]       ; 0053c84e | DAT_00595bd7
    FNSTSW AX                           ; 0053c854
    SAHF                                ; 0053c856
    JC 0x0053cf5b                       ; 0053c857
        ;   XREF to: 0053cf5b (CONDITIONAL_JUMP)  ; LAB_0053cf5b
    PUSH 0x0                            ; 0053c85d
        ;   Label: LAB_0053c85d
    LEA EAX,[EBX + 0x150]               ; 0053c85f
    PUSH EAX                            ; 0053c865
    CALL FUN_004e18d0                   ; 0053c866
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e18d0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 0053c86b
    FLD float ptr [ESP + 0xe0]          ; 0053c872
    FLD1                                ; 0053c879
    ADD ESP,0x8                         ; 0053c87b
    FCOMPP                              ; 0053c87e
    FNSTSW AX                           ; 0053c880
    SAHF                                ; 0053c882
    JA 0x0053cf5b                       ; 0053c883
        ;   XREF to: 0053cf5b (CONDITIONAL_JUMP)  ; LAB_0053cf5b
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053c889
    TEST EAX,EAX                        ; 0053c88f
    JNZ 0x0053c911                      ; 0053c891
        ;   XREF to: 0053c911 (CONDITIONAL_JUMP)  ; LAB_0053c911
    XOR EDX,EDX                         ; 0053c897
        ;   Label: LAB_0053c897
    MOV dword ptr [ESP + 0xc8],EDX      ; 0053c899
    MOV dword ptr [ESP + 0xcc],EDX      ; 0053c8a0
    MOV EAX,[0x005be368]                ; 0053c8a7 | DAT_005be368
        ;   Label: LAB_0053c8a7
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0053c8ac
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 0053c8b3 | DAT_01fa3ff0
    JGE 0x0053ccbc                      ; 0053c8b9
        ;   XREF to: 0053ccbc (CONDITIONAL_JUMP)  ; LAB_0053ccbc
    MOV ESI,dword ptr [ESP + 0xcc]      ; 0053c8bf
    MOV ECX,dword ptr [0x014b8a54]      ; 0053c8c6 | DAT_014b8a54
    ADD EAX,ESI                         ; 0053c8cc
    PUSH ECX                            ; 0053c8ce
    MOV EDI,dword ptr [EAX + 0x14cd70]  ; 0053c8cf | DAT_01fa3ff4
    PUSH EDI                            ; 0053c8d5
    CALL FUN_0040d890                   ; 0053c8d6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0053c8db
    MOV ESI,EAX                         ; 0053c8de
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053c8e0
    TEST EAX,EAX                        ; 0053c8e7
    JNZ 0x0053cb64                      ; 0053c8e9
        ;   XREF to: 0053cb64 (CONDITIONAL_JUMP)  ; LAB_0053cb64
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0053c8ef
        ;   Label: LAB_0053c8ef
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0053c8f6
    INC ESI                             ; 0053c8fd
    ADD ECX,0x4                         ; 0053c8fe
    MOV dword ptr [ESP + 0xc8],ESI      ; 0053c901
    MOV dword ptr [ESP + 0xcc],ECX      ; 0053c908
    JMP 0x0053c8a7                      ; 0053c90f
        ;   XREF to: 0053c8a7 (UNCONDITIONAL_JUMP)  ; LAB_0053c8a7
    PUSH EBX                            ; 0053c911
        ;   Label: LAB_0053c911
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0053c912
    PUSH EAX                            ; 0053c918
    CALL dword ptr [ESI + 0x7c]         ; 0053c919
    ADD ESP,0x8                         ; 0053c91c
    CMP EAX,0x4                         ; 0053c91f
    SETZ AL                             ; 0053c922
    AND EAX,0xff                        ; 0053c925
    JZ 0x0053c897                       ; 0053c92a
        ;   XREF to: 0053c897 (CONDITIONAL_JUMP)  ; LAB_0053c897
    XOR EDI,EDI                         ; 0053c930
    MOV dword ptr [ESP + 0xc4],EDI      ; 0053c932
    MOV dword ptr [ESP + 0xd0],EDI      ; 0053c939
        ;   Label: LAB_0053c939
    MOV EAX,[0x005be368]                ; 0053c940 | DAT_005be368
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0053c945
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 0053c94c | DAT_01fa3ff0
    JGE 0x0053ccbc                      ; 0053c952
        ;   XREF to: 0053ccbc (CONDITIONAL_JUMP)  ; LAB_0053ccbc
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0053c958
    MOV EDX,dword ptr [0x014b8a54]      ; 0053c95f | DAT_014b8a54
    ADD EAX,ECX                         ; 0053c965
    PUSH EDX                            ; 0053c967
    MOV ESI,dword ptr [EAX + 0x14cd70]  ; 0053c968 | DAT_01fa3ff4
    PUSH ESI                            ; 0053c96e
    CALL FUN_0040d890                   ; 0053c96f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0053c974
    MOV ESI,EAX                         ; 0053c977
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053c979
    TEST EAX,EAX                        ; 0053c980
    JNZ 0x0053c99f                      ; 0053c982
        ;   XREF to: 0053c99f (CONDITIONAL_JUMP)  ; LAB_0053c99f
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053c984
        ;   Label: LAB_0053c984
    MOV EDI,dword ptr [ESP + 0xd0]      ; 0053c98b
    INC EAX                             ; 0053c992
    ADD EDI,0x4                         ; 0053c993
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053c996
    JMP 0x0053c939                      ; 0053c99d
        ;   XREF to: 0053c939 (UNCONDITIONAL_JUMP)  ; LAB_0053c939
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 0053c99f
        ;   Label: LAB_0053c99f
    PUSH EDI                            ; 0053c9a5
    PUSH EAX                            ; 0053c9a6
    CALL FUN_0044bab0                   ; 0053c9a7
        ;   XREF to: 0044bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bab0()
    ADD ESP,0x8                         ; 0053c9ac
    TEST EAX,EAX                        ; 0053c9af
    JZ 0x0053c984                       ; 0053c9b1
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053c9b3
    ADD EAX,0x20                        ; 0053c9b9
    PUSH EAX                            ; 0053c9bc
    LEA EAX,[ESP + 0x44]                ; 0053c9bd
    PUSH EAX                            ; 0053c9c1
    PUSH EBX                            ; 0053c9c2
    CALL FUN_0040a290                   ; 0053c9c3
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 0053c9c8
    ADD ESI,0x20                        ; 0053c9cb
    PUSH ESI                            ; 0053c9ce
    MOV EDI,EAX                         ; 0053c9cf
    LEA EAX,[ESP + 0xb0]                ; 0053c9d1
    PUSH EAX                            ; 0053c9d8
    PUSH EBX                            ; 0053c9d9
    CALL FUN_0040a290                   ; 0053c9da
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EAX]                 ; 0053c9df
    FSUB float ptr [EDI]                ; 0053c9e1
    ADD ESP,0xc                         ; 0053c9e3
    FSTP float ptr [ESP + 0x58]         ; 0053c9e6
    FLD float ptr [EAX + 0x4]           ; 0053c9ea
    FSUB float ptr [EDI + 0x4]          ; 0053c9ed
    FSTP float ptr [ESP + 0x5c]         ; 0053c9f0
    FLD float ptr [EAX + 0x8]           ; 0053c9f4
    FSUB float ptr [EDI + 0x8]          ; 0053c9f7
    FLDZ                                ; 0053c9fa
    FXCH                                ; 0053c9fc
    FSTP float ptr [ESP + 0x60]         ; 0053c9fe
    FCOMP float ptr [ESP + 0x60]        ; 0053ca02
    FNSTSW AX                           ; 0053ca06
    SAHF                                ; 0053ca08
    JNC 0x0053c984                      ; 0053ca09
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    FLD float ptr [ESP + 0x60]          ; 0053ca0f
    FCOMP double ptr [0x00595bdf]       ; 0053ca13 | DAT_00595bdf
    FNSTSW AX                           ; 0053ca19
    SAHF                                ; 0053ca1b
    JNC 0x0053c984                      ; 0053ca1c
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    FLD float ptr [ESP + 0x58]          ; 0053ca22
    FABS                                ; 0053ca26
    FCOMP double ptr [0x00595be7]       ; 0053ca28 | DAT_00595be7
    FNSTSW AX                           ; 0053ca2e
    SAHF                                ; 0053ca30
    JNC 0x0053c984                      ; 0053ca31
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    FLD float ptr [ESP + 0x5c]          ; 0053ca37
    FLDZ                                ; 0053ca3b
    FXCH                                ; 0053ca3d
    FSTP double ptr [ESP]               ; 0053ca3f
    FCOMP double ptr [ESP]              ; 0053ca42
    FNSTSW AX                           ; 0053ca45
    SAHF                                ; 0053ca47
    JNC 0x0053c984                      ; 0053ca48
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    FLD double ptr [ESP]                ; 0053ca4e
    FCOMP double ptr [0x00595bef]       ; 0053ca51 | DAT_00595bef
    FNSTSW AX                           ; 0053ca57
    SAHF                                ; 0053ca59
    JNC 0x0053c984                      ; 0053ca5a
        ;   XREF to: 0053c984 (CONDITIONAL_JUMP)  ; LAB_0053c984
    PUSH 0x1                            ; 0053ca60
    PUSH 0x1a                           ; 0053ca62
    LEA EAX,[EBX + 0x150]               ; 0053ca64
    PUSH EAX                            ; 0053ca6a
    CALL FUN_004e16b0                   ; 0053ca6b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0053ca70
    PUSH ESI                            ; 0053ca73
    LEA EAX,[ESP + 0x8c]                ; 0053ca74
    PUSH EAX                            ; 0053ca7b
    PUSH EBX                            ; 0053ca7c
    CALL FUN_0040a290                   ; 0053ca7d
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    LEA ESI,[EBX + 0x1fb00]             ; 0053ca82
    ADD ESP,0xc                         ; 0053ca88
    CMP ESI,EAX                         ; 0053ca8b
    JZ 0x0053ca9f                       ; 0053ca8d
        ;   XREF to: 0053ca9f (CONDITIONAL_JUMP)  ; LAB_0053ca9f
    MOV EDX,dword ptr [EAX]             ; 0053ca8f
    MOV dword ptr [ESI],EDX             ; 0053ca91
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053ca93
    MOV dword ptr [ESI + 0x4],EDX       ; 0053ca96
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053ca99
    MOV dword ptr [ESI + 0x8],EDX       ; 0053ca9c
    FLD float ptr [EBX + 0x1fb1c]       ; 0053ca9f
        ;   Label: LAB_0053ca9f
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053caa5
    FSUB float ptr [EBX + 0x1fb10]      ; 0053caab
    PUSH EAX                            ; 0053cab1
    FSTP float ptr [ESP + 0xd8]         ; 0053cab2
    CALL FUN_00534fc0                   ; 0053cab9
        ;   XREF to: 00534fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534fc0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 0053cabe
    FLD float ptr [ESP + 0xdc]          ; 0053cac5
    ADD ESP,0x4                         ; 0053cacc
    FSUBR float ptr [ESP + 0xd4]        ; 0053cacf
    FADD float ptr [EBX + 0x1fb04]      ; 0053cad6
    MOV EDX,dword ptr [EBX + 0x1faa0]   ; 0053cadc
    FSTP float ptr [EBX + 0x1fb04]      ; 0053cae2
    TEST EDX,EDX                        ; 0053cae8
    JZ 0x0053cb06                       ; 0053caea
        ;   XREF to: 0053cb06 (CONDITIONAL_JUMP)  ; LAB_0053cb06
    PUSH 0xe6f                          ; 0053caec
    PUSH EDX                            ; 0053caf1
    PUSH 0x595b87                       ; 0053caf2 | s_actionPending_=_%d_stranger.cpp_l_00595b86+1
    MOV ESI,dword ptr [0x005b6d50]      ; 0053caf7 | DAT_005b6d50
    PUSH ESI                            ; 0053cafd
    CALL FUN_0046fb40                   ; 0053cafe
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 0053cb03
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053cb06
        ;   Label: LAB_0053cb06
    LEA ESI,[EBX + 0x1fa20]             ; 0053cb0d
    ADD EAX,0x20                        ; 0053cb13
    MOV dword ptr [EBX + 0x1faa0],0x2   ; 0053cb16
    CMP ESI,EAX                         ; 0053cb20
    JZ 0x0053cb34                       ; 0053cb22
        ;   XREF to: 0053cb34 (CONDITIONAL_JUMP)  ; LAB_0053cb34
    MOV EDX,dword ptr [EAX]             ; 0053cb24
    MOV dword ptr [ESI],EDX             ; 0053cb26
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053cb28
    MOV dword ptr [ESI + 0x4],EDX       ; 0053cb2b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053cb2e
    MOV dword ptr [ESI + 0x8],EDX       ; 0053cb31
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0053cb34
        ;   Label: LAB_0053cb34
    ADD EBX,0x1fa2c                     ; 0053cb3b
    ADD EAX,0x30                        ; 0053cb41
    CMP EBX,EAX                         ; 0053cb44
    JZ 0x0053cb58                       ; 0053cb46
        ;   XREF to: 0053cb58 (CONDITIONAL_JUMP)  ; LAB_0053cb58
    MOV EDX,dword ptr [EAX]             ; 0053cb48
    MOV dword ptr [EBX],EDX             ; 0053cb4a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053cb4c
    MOV dword ptr [EBX + 0x4],EDX       ; 0053cb4f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053cb52
    MOV dword ptr [EBX + 0x8],EDX       ; 0053cb55
    MOV EAX,0x1                         ; 0053cb58
        ;   Label: LAB_0053cb58
    MOV ESP,EBP                         ; 0053cb5d
    POP EBP                             ; 0053cb5f
    POP EDI                             ; 0053cb60
    POP ESI                             ; 0053cb61
    POP EBX                             ; 0053cb62
    RET                                 ; 0053cb63
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053cb64
        ;   Label: LAB_0053cb64
    PUSH EAX                            ; 0053cb6a
    PUSH ESI                            ; 0053cb6b
    CALL FUN_0044bab0                   ; 0053cb6c
        ;   XREF to: 0044bab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bab0()
    ADD ESP,0x8                         ; 0053cb71
    TEST EAX,EAX                        ; 0053cb74
    JZ 0x0053c8ef                       ; 0053cb76
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053cb7c
    ADD EAX,0x20                        ; 0053cb82
    PUSH EAX                            ; 0053cb85
    LEA EAX,[ESP + 0x2c]                ; 0053cb86
    PUSH EAX                            ; 0053cb8a
    PUSH EBX                            ; 0053cb8b
    CALL FUN_0040a290                   ; 0053cb8c
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 0053cb91
    ADD ESI,0x20                        ; 0053cb94
    PUSH ESI                            ; 0053cb97
    MOV EDI,EAX                         ; 0053cb98
    LEA EAX,[ESP + 0x68]                ; 0053cb9a
    PUSH EAX                            ; 0053cb9e
    PUSH EBX                            ; 0053cb9f
    CALL FUN_0040a290                   ; 0053cba0
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EAX]                 ; 0053cba5
    FSUB float ptr [EDI]                ; 0053cba7
    ADD ESP,0xc                         ; 0053cba9
    FSTP float ptr [ESP + 0x10]         ; 0053cbac
    FLD float ptr [EAX + 0x4]           ; 0053cbb0
    FSUB float ptr [EDI + 0x4]          ; 0053cbb3
    FSTP float ptr [ESP + 0x14]         ; 0053cbb6
    FLD float ptr [EAX + 0x8]           ; 0053cbba
    FSUB float ptr [EDI + 0x8]          ; 0053cbbd
    FST float ptr [ESP + 0x18]          ; 0053cbc0
    SUB ESP,0x8                         ; 0053cbc4
    FSTP double ptr [ESP]               ; 0053cbc7
    FLD float ptr [ESP + 0x1c]          ; 0053cbca
    SUB ESP,0x8                         ; 0053cbce
    FSTP double ptr [ESP]               ; 0053cbd1
    FLD float ptr [ESP + 0x20]          ; 0053cbd4
    SUB ESP,0x8                         ; 0053cbd8
    FSTP double ptr [ESP]               ; 0053cbdb
    PUSH 0x595baf                       ; 0053cbde | = "Delta to dest : %3.2f,%3.2f,%3.2f\n"
    MOV EDX,dword ptr [0x005ad350]      ; 0053cbe3 | PTR_DAT_005ad350
    PUSH EDX                            ; 0053cbe9 | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0053cbea
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0x20                        ; 0053cbef
    FLDZ                                ; 0053cbf2
    FCOMP float ptr [ESP + 0x18]        ; 0053cbf4
    FNSTSW AX                           ; 0053cbf8
    SAHF                                ; 0053cbfa
    JNC 0x0053c8ef                      ; 0053cbfb
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    FLD float ptr [ESP + 0x18]          ; 0053cc01
    FCOMP double ptr [0x00595bdf]       ; 0053cc05 | DAT_00595bdf
    FNSTSW AX                           ; 0053cc0b
    SAHF                                ; 0053cc0d
    JNC 0x0053c8ef                      ; 0053cc0e
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    FLD float ptr [ESP + 0x10]          ; 0053cc14
    FABS                                ; 0053cc18
    FCOMP double ptr [0x00595be7]       ; 0053cc1a | DAT_00595be7
    FNSTSW AX                           ; 0053cc20
    SAHF                                ; 0053cc22
    JNC 0x0053c8ef                      ; 0053cc23
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    FLD float ptr [ESP + 0x14]          ; 0053cc29
    FLDZ                                ; 0053cc2d
    FXCH                                ; 0053cc2f
    FSTP double ptr [ESP + 0x8]         ; 0053cc31
    FCOMP double ptr [ESP + 0x8]        ; 0053cc35
    FNSTSW AX                           ; 0053cc39
    SAHF                                ; 0053cc3b
    JNC 0x0053c8ef                      ; 0053cc3c
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    FLD double ptr [ESP + 0x8]          ; 0053cc42
    FCOMP double ptr [0x00595bef]       ; 0053cc46 | DAT_00595bef
    FNSTSW AX                           ; 0053cc4c
    SAHF                                ; 0053cc4e
    JNC 0x0053c8ef                      ; 0053cc4f
        ;   XREF to: 0053c8ef (CONDITIONAL_JUMP)  ; LAB_0053c8ef
    LEA EAX,[EBX + 0x1fa20]             ; 0053cc55
    MOV dword ptr [EBX + 0x1faa0],0x2   ; 0053cc5b
    CMP EAX,ESI                         ; 0053cc65
    JZ 0x0053cc79                       ; 0053cc67
        ;   XREF to: 0053cc79 (CONDITIONAL_JUMP)  ; LAB_0053cc79
    MOV EDX,dword ptr [ESI]             ; 0053cc69
    MOV dword ptr [EAX],EDX             ; 0053cc6b
    MOV EDX,dword ptr [ESI + 0x4]       ; 0053cc6d
    MOV dword ptr [EAX + 0x4],EDX       ; 0053cc70
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053cc73
    MOV dword ptr [EAX + 0x8],EDX       ; 0053cc76
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0053cc79
        ;   Label: LAB_0053cc79
    LEA EAX,[EBX + 0x1fa2c]             ; 0053cc80
    ADD ESI,0x30                        ; 0053cc86
    CMP EAX,ESI                         ; 0053cc89
    JZ 0x0053cc9d                       ; 0053cc8b
        ;   XREF to: 0053cc9d (CONDITIONAL_JUMP)  ; LAB_0053cc9d
    MOV EDX,dword ptr [ESI]             ; 0053cc8d
    MOV dword ptr [EAX],EDX             ; 0053cc8f
    MOV EDX,dword ptr [ESI + 0x4]       ; 0053cc91
    MOV dword ptr [EAX + 0x4],EDX       ; 0053cc94
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053cc97
    MOV dword ptr [EAX + 0x8],EDX       ; 0053cc9a
    PUSH 0x1                            ; 0053cc9d
        ;   Label: LAB_0053cc9d
    PUSH 0x16                           ; 0053cc9f
    ADD EBX,0x150                       ; 0053cca1
    PUSH EBX                            ; 0053cca7
    CALL FUN_004e16b0                   ; 0053cca8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    MOV EAX,0x1                         ; 0053ccad
    ADD ESP,0xc                         ; 0053ccb2
    MOV ESP,EBP                         ; 0053ccb5
    POP EBP                             ; 0053ccb7
    POP EDI                             ; 0053ccb8
    POP ESI                             ; 0053ccb9
    POP EBX                             ; 0053ccba
    RET                                 ; 0053ccbb
    PUSH EBX                            ; 0053ccbc
        ;   Label: LAB_0053ccbc
    MOV EDI,dword ptr [0x005be368]      ; 0053ccbd | DAT_005be368
    PUSH EDI                            ; 0053ccc3 | DAT_01e57284
    CALL FUN_00511780                   ; 0053ccc4
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    ADD ESP,0x8                         ; 0053ccc9
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053cccc
    PUSH EAX                            ; 0053ccd2
    MOV EDX,dword ptr [0x005be368]      ; 0053ccd3 | DAT_005be368
    PUSH EDX                            ; 0053ccd9 | DAT_01e57284
    CALL FUN_00511780                   ; 0053ccda
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 0053ccdf
    ADD ESP,0x8                         ; 0053cce5
    MOV EAX,dword ptr [ESI + 0x20]      ; 0053cce8
    ADD ESI,0x20                        ; 0053cceb
    MOV dword ptr [ESP + 0x7c],EAX      ; 0053ccee
    LEA EAX,[ESI + 0x4]                 ; 0053ccf2
    MOV EAX,dword ptr [EAX]             ; 0053ccf5
    MOV dword ptr [ESP + 0x80],EAX      ; 0053ccf7
    LEA EAX,[ESI + 0x8]                 ; 0053ccfe
    MOV EAX,dword ptr [EAX]             ; 0053cd01
    MOV dword ptr [ESP + 0x84],EAX      ; 0053cd03
    LEA EAX,[ESP + 0x34]                ; 0053cd0a
    PUSH EAX                            ; 0053cd0e
    LEA EAX,[ESP + 0x50]                ; 0053cd0f
    XOR ECX,ECX                         ; 0053cd13
    PUSH EAX                            ; 0053cd15
    MOV EDI,0x3f800000                  ; 0053cd16
    MOV dword ptr [ESP + 0x3c],ECX      ; 0053cd1b
    PUSH EBX                            ; 0053cd1f
    MOV dword ptr [ESP + 0x44],ECX      ; 0053cd20
    MOV dword ptr [ESP + 0x48],EDI      ; 0053cd24
    CALL FUN_0040a200                   ; 0053cd28
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 0053cd2d
    FLD float ptr [ESP + 0x7c]          ; 0053cd30
    FADD float ptr [EAX]                ; 0053cd34
    FLD float ptr [ESP + 0x80]          ; 0053cd36
    FXCH                                ; 0053cd3d
    FSTP float ptr [ESP + 0x7c]         ; 0053cd3f
    FADD float ptr [EAX + 0x4]          ; 0053cd43
    FLD float ptr [ESP + 0x84]          ; 0053cd46
    FXCH                                ; 0053cd4d
    FSTP float ptr [ESP + 0x80]         ; 0053cd4f
    FADD float ptr [EAX + 0x8]          ; 0053cd56
    FSTP float ptr [ESP + 0x84]         ; 0053cd59
    MOV EAX,dword ptr [EBX + 0x24]      ; 0053cd60
    MOV dword ptr [ESP + 0x80],EAX      ; 0053cd63
    XOR EAX,EAX                         ; 0053cd6a
    MOV dword ptr [ESP + 0x94],EAX      ; 0053cd6c
    MOV dword ptr [ESP + 0x98],EAX      ; 0053cd73
    LEA EAX,[ESP + 0x94]                ; 0053cd7a
    PUSH EAX                            ; 0053cd81
    LEA EAX,[ESP + 0x74]                ; 0053cd82
    PUSH EAX                            ; 0053cd86
    MOV ECX,0x3fc00000                  ; 0053cd87
    PUSH EBX                            ; 0053cd8c
    MOV dword ptr [ESP + 0xa8],ECX      ; 0053cd8d
    CALL FUN_0040a200                   ; 0053cd94
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 0053cd99
    PUSH 0x40400000                     ; 0053cd9c
    PUSH 0x3dcccccd                     ; 0053cda1
    PUSH 0x3f800000                     ; 0053cda6
    PUSH dword ptr [ESP + 0x84]         ; 0053cdab
    PUSH dword ptr [ESP + 0x80]         ; 0053cdb2
    PUSH dword ptr [ESP + 0x98]         ; 0053cdb9
    MOV ESI,dword ptr [0x005be368]      ; 0053cdc0 | DAT_005be368
    PUSH dword ptr [ESP + 0x94]         ; 0053cdc6
    PUSH ESI                            ; 0053cdcd | DAT_01e57284
    CALL FUN_00510a40                   ; 0053cdce
        ;   XREF to: 00510a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00510a40()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0053cdd3
    FLD float ptr [ESP + 0xf8]          ; 0053cdda
    FLD1                                ; 0053cde1
    ADD ESP,0x20                        ; 0053cde3
    FCOMPP                              ; 0053cde6
    FNSTSW AX                           ; 0053cde8
    SAHF                                ; 0053cdea
    JA 0x0053cecc                       ; 0053cdeb
        ;   XREF to: 0053cecc (CONDITIONAL_JUMP)  ; LAB_0053cecc
    FLD float ptr [ESP + 0x7c]          ; 0053cdf1
    FLD float ptr [ESP + 0x80]          ; 0053cdf5
    FLD float ptr [ESP + 0x84]          ; 0053cdfc
    PUSH 0x3f000000                     ; 0053ce03
    LEA EAX,[ESP + 0x20]                ; 0053ce08
    MOV EDI,dword ptr [0x005be368]      ; 0053ce0c | DAT_005be368
    FXCH ST2                            ; 0053ce12
    FADD float ptr [ESP + 0x74]         ; 0053ce14
    FXCH                                ; 0053ce18
    FADD float ptr [ESP + 0x78]         ; 0053ce1a
    FXCH ST2                            ; 0053ce1e
    FADD float ptr [ESP + 0x7c]         ; 0053ce20
    PUSH EAX                            ; 0053ce24
    FXCH                                ; 0053ce25
    FSTP float ptr [ESP + 0x24]         ; 0053ce27
    FXCH                                ; 0053ce2b
    FSTP float ptr [ESP + 0x28]         ; 0053ce2d
    PUSH EDI                            ; 0053ce31 | DAT_01e57284
    FSTP float ptr [ESP + 0x30]         ; 0053ce32
    CALL FUN_0050ec80                   ; 0053ce36
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ec80()
    MOV dword ptr [ESP + 0xe4],EAX      ; 0053ce3b
    FLD float ptr [ESP + 0xe4]          ; 0053ce42
    ADD ESP,0xc                         ; 0053ce49
    MOV EAX,[0x005be368]                ; 0053ce4c | DAT_005be368
    PUSH EAX                            ; 0053ce51 | DAT_01e57284
    FSTP float ptr [ESP + 0xc4]         ; 0053ce52
    CALL FUN_00511750                   ; 0053ce59
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    ADD ESP,0x4                         ; 0053ce5e
    FLD float ptr [ESP + 0xc0]          ; 0053ce61
    FSUB float ptr [EBX + 0x24]         ; 0053ce68
    FABS                                ; 0053ce6b
    FLD1                                ; 0053ce6d
    FCOMPP                              ; 0053ce6f
    FNSTSW AX                           ; 0053ce71
    SAHF                                ; 0053ce73
    JC 0x0053cf5b                       ; 0053ce74
        ;   XREF to: 0053cf5b (CONDITIONAL_JUMP)  ; LAB_0053cf5b
    XOR ESI,ESI                         ; 0053ce7a
    XOR EDI,EDI                         ; 0053ce7c
    MOV EAX,[0x005be368]                ; 0053ce7e | DAT_005be368
        ;   Label: LAB_0053ce7e
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 0053ce83 | DAT_01fa3ff0
    JL 0x0053cee6                       ; 0053ce89
        ;   XREF to: 0053cee6 (CONDITIONAL_JUMP)  ; LAB_0053cee6
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053ce8b
    MOV dword ptr [EBX + 0x1faa0],0x6   ; 0053ce91
    TEST EAX,EAX                        ; 0053ce9b
    JNZ 0x0053cf64                      ; 0053ce9d
        ;   XREF to: 0053cf64 (CONDITIONAL_JUMP)  ; LAB_0053cf64
    PUSH 0x1                            ; 0053cea3
        ;   Label: LAB_0053cea3
    PUSH 0x14                           ; 0053cea5
    LEA EAX,[EBX + 0x150]               ; 0053cea7
        ;   Label: LAB_0053cea7
    PUSH EAX                            ; 0053cead
    CALL FUN_004e16b0                   ; 0053ceae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0053ceb3
    MOV EAX,0x1                         ; 0053ceb6
    MOV dword ptr [EBX + 0x1faa8],0x40800000 ; 0053cebb
    MOV ESP,EBP                         ; 0053cec5
    POP EBP                             ; 0053cec7
    POP EDI                             ; 0053cec8
    POP ESI                             ; 0053cec9
    POP EBX                             ; 0053ceca
    RET                                 ; 0053cecb
    MOV EDX,dword ptr [0x005be368]      ; 0053cecc | DAT_005be368
        ;   Label: LAB_0053cecc
    PUSH EDX                            ; 0053ced2 | DAT_01e57284
    CALL FUN_00511750                   ; 0053ced3
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    ADD ESP,0x4                         ; 0053ced8
    JMP 0x0053cf5b                      ; 0053cedb
        ;   XREF to: 0053cf5b (UNCONDITIONAL_JUMP)  ; LAB_0053cf5b
    INC ESI                             ; 0053cee0
        ;   Label: LAB_0053cee0
    ADD EDI,0x4                         ; 0053cee1
    JMP 0x0053ce7e                      ; 0053cee4
        ;   XREF to: 0053ce7e (UNCONDITIONAL_JUMP)  ; LAB_0053ce7e
    MOV EDX,dword ptr [0x0077bd78]      ; 0053cee6 | DAT_0077bd78
        ;   Label: LAB_0053cee6
    PUSH EDX                            ; 0053ceec
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 0053ceed | DAT_01fa3ff4
    PUSH ECX                            ; 0053cef4
    CALL FUN_0040d890                   ; 0053cef5
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0053cefa
    TEST EAX,EAX                        ; 0053cefd
    JZ 0x0053cee0                       ; 0053ceff
        ;   XREF to: 0053cee0 (CONDITIONAL_JUMP)  ; LAB_0053cee0
    FLD float ptr [EAX + 0x20]          ; 0053cf01
    FSUB float ptr [ESP + 0x7c]         ; 0053cf04
    FSTP float ptr [ESP + 0xa0]         ; 0053cf08
    FLD float ptr [EAX + 0x24]          ; 0053cf0f
    FSUB float ptr [ESP + 0x80]         ; 0053cf12
    FST float ptr [ESP + 0xa4]          ; 0053cf19
    FMUL float ptr [ESP + 0xa4]         ; 0053cf20
    FLD float ptr [ESP + 0xa0]          ; 0053cf27
    FMUL ST0                            ; 0053cf2e
    FLD float ptr [EAX + 0x28]          ; 0053cf30
    FSUB float ptr [ESP + 0x84]         ; 0053cf33
    FXCH                                ; 0053cf3a
    FADDP ST2,ST0                       ; 0053cf3c
    FST float ptr [ESP + 0xa8]          ; 0053cf3e
    FMUL float ptr [ESP + 0xa8]         ; 0053cf45
    FADDP                               ; 0053cf4c
    FSQRT                               ; 0053cf4e
    FCOMP double ptr [0x00595be7]       ; 0053cf50 | DAT_00595be7
    FNSTSW AX                           ; 0053cf56
    SAHF                                ; 0053cf58
    JNC 0x0053cee0                      ; 0053cf59
        ;   XREF to: 0053cee0 (CONDITIONAL_JUMP)  ; LAB_0053cee0
    XOR EAX,EAX                         ; 0053cf5b
        ;   Label: LAB_0053cf5b
    MOV ESP,EBP                         ; 0053cf5d
    POP EBP                             ; 0053cf5f
    POP EDI                             ; 0053cf60
    POP ESI                             ; 0053cf61
    POP EBX                             ; 0053cf62
    RET                                 ; 0053cf63
    PUSH EBX                            ; 0053cf64
        ;   Label: LAB_0053cf64
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0053cf65
    PUSH EAX                            ; 0053cf6b
    CALL dword ptr [ESI + 0x7c]         ; 0053cf6c
    ADD ESP,0x8                         ; 0053cf6f
    CMP EAX,0x4                         ; 0053cf72
    SETZ AL                             ; 0053cf75
    AND EAX,0xff                        ; 0053cf78
    JZ 0x0053cea3                       ; 0053cf7d
        ;   XREF to: 0053cea3 (CONDITIONAL_JUMP)  ; LAB_0053cea3
    PUSH 0x1                            ; 0053cf83
    PUSH 0x19                           ; 0053cf85
    JMP 0x0053cea7                      ; 0053cf87
        ;   XREF to: 0053cea7 (UNCONDITIONAL_JUMP)  ; LAB_0053cea7

