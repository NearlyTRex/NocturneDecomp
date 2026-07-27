; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * core_dcamera_cpp_FUN_00445750(uint *param_1,uint *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00509a80 at 00509c34
;
; Referenced Globals:
;   undefined4 DAT_005ad4b4
;   undefined4 DAT_005b9354
;   undefined4 DAT_007f8284
;   undefined4 DAT_01216608
;   undefined4 DAT_012b0660
;   undefined4 DAT_014b8458
;   undefined4 DAT_014b845c
;   undefined4 DAT_014b8460
;   undefined4 DAT_014b8464
;   undefined4 DAT_014b8468
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c775f8
;
; Called Functions:
;   core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445750
        ;   Label: core_dcamera.cpp_FUN_00445750
    PUSH ESI                            ; 00445751
    PUSH EDI                            ; 00445752
    PUSH EBP                            ; 00445753
    SUB ESP,0x84                        ; 00445754
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0044575a
    MOV EAX,[0x005b9354]                ; 00445761 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0xc],0x0       ; 00445766 | DAT_01c775f8
    JNZ 0x00445785                      ; 0044576a
        ;   XREF to: 00445785 (CONDITIONAL_JUMP)  ; LAB_00445785
    TEST EBX,EBX                        ; 0044576c
    JNZ 0x004458f4                      ; 0044576e
        ;   XREF to: 004458f4 (CONDITIONAL_JUMP)  ; LAB_004458f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00445774
    CMP dword ptr [EAX + 0x20],0x0      ; 0044577b
    JZ 0x004458f4                       ; 0044577f
        ;   XREF to: 004458f4 (CONDITIONAL_JUMP)  ; LAB_004458f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00445785
        ;   Label: LAB_00445785
    PUSH EAX                            ; 0044578c
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0044578d
    PUSH EDI                            ; 00445794
    LEA ESI,[ESP + 0x8]                 ; 00445795
    MOV [0x014b8458],EAX                ; 00445799 | DAT_014b8458
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610 ; 0044579e
        ;   XREF to: 00441610 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610()
    LEA ESI,[ESP + 0x8]                 ; 004457a3
    ADD ESP,0x8                         ; 004457a7
    MOV EDI,0x14b8460                   ; 004457aa
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004457af
    MOVSD ES:EDI,ESI                    ; 004457b6 | DAT_014b8460
    MOVSD ES:EDI,ESI                    ; 004457b7 | DAT_014b8464
    MOVSD ES:EDI,ESI                    ; 004457b8 | DAT_014b8468
    MOV EBP,dword ptr [EAX + 0x20]      ; 004457b9
    TEST EBP,EBP                        ; 004457bc
    JZ 0x0044590c                       ; 004457be
        ;   XREF to: 0044590c (CONDITIONAL_JUMP)  ; LAB_0044590c
    MOV EDX,dword ptr [0x014b8460]      ; 004457c4 | DAT_014b8460
    TEST EDX,EDX                        ; 004457ca
    JZ 0x00445901                       ; 004457cc
        ;   XREF to: 00445901 (CONDITIONAL_JUMP)  ; LAB_00445901
    MOV ESI,0x1                         ; 004457d2
    MOV EAX,[0x012b0660]                ; 004457d7 | DAT_012b0660
    MOV EBP,dword ptr [0x014b8464]      ; 004457dc | DAT_014b8464
    ADD EAX,0x10                        ; 004457e2
    MOV EDI,EDX                         ; 004457e5
    MOV CL,AL                           ; 004457e7
    MOV dword ptr [0x014b845c],ESI      ; 004457e9 | DAT_014b845c
    SAR EDI,CL                          ; 004457ef
    SAR EBP,CL                          ; 004457f1
    MOV dword ptr [0x014b8460],EDI      ; 004457f3 | DAT_014b8460
    MOV dword ptr [0x014b8464],EBP      ; 004457f9 | DAT_014b8464
    MOV EAX,dword ptr [ESP + 0x98]      ; 004457ff
        ;   Label: LAB_004457ff
    MOV ECX,dword ptr [EAX + 0x154]     ; 00445806
    XOR EDX,EDX                         ; 0044580c
    TEST ECX,ECX                        ; 0044580e
    JLE 0x00445850                      ; 00445810
        ;   XREF to: 00445850 (CONDITIONAL_JUMP)  ; LAB_00445850
    XOR EAX,EAX                         ; 00445812
    MOV ECX,dword ptr [ESP + 0x98]      ; 00445814
        ;   Label: LAB_00445814
    MOV ECX,dword ptr [ECX + 0x13c]     ; 0044581b
    XOR ESI,ESI                         ; 00445821
    MOV dword ptr [EAX + 0x146b290],ECX ; 00445823
    MOV ECX,dword ptr [ESP + 0x98]      ; 00445829
    MOV dword ptr [EAX + 0x146b650],ESI ; 00445830
    INC EDX                             ; 00445836
    MOV EDI,dword ptr [ECX + 0x154]     ; 00445837
    ADD EAX,0x4                         ; 0044583d
    CMP EDX,EDI                         ; 00445840
    JL 0x00445814                       ; 00445842
        ;   XREF to: 00445814 (CONDITIONAL_JUMP)  ; LAB_00445814
    LEA EAX,[EAX]                       ; 00445844
    LEA EDX,[EDX]                       ; 0044584a
    TEST EBX,EBX                        ; 00445850
        ;   Label: LAB_00445850
    JNZ 0x00445936                      ; 00445852
        ;   XREF to: 00445936 (CONDITIONAL_JUMP)  ; LAB_00445936
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00445858
    CMP dword ptr [EAX + 0x20],0x0      ; 0044585f
    JZ 0x00445936                       ; 00445863
        ;   XREF to: 00445936 (CONDITIONAL_JUMP)  ; LAB_00445936
    MOV dword ptr [0x005ad4b4],0xffffffff ; 00445869 | DAT_005ad4b4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00445873
    CMP dword ptr [EAX + 0x20],0x2      ; 0044587a
    JNZ 0x00445936                      ; 0044587e
        ;   XREF to: 00445936 (CONDITIONAL_JUMP)  ; LAB_00445936
    MOV ECX,dword ptr [0x01216608]      ; 00445884 | DAT_01216608
    TEST ECX,ECX                        ; 0044588a
    JBE 0x00445920                      ; 0044588c
        ;   XREF to: 00445920 (CONDITIONAL_JUMP)  ; LAB_00445920
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00445892
    XOR EAX,EAX                         ; 00445899
    IMUL EDX,ECX,0x13384                ; 0044589b
    CMP ESI,dword ptr [EAX + 0x121660c] ; 004458a1
        ;   Label: LAB_004458a1
    JNZ 0x00445917                      ; 004458a7
        ;   XREF to: 00445917 (CONDITIONAL_JUMP)  ; LAB_00445917
    MOV EDI,0x121660c                   ; 004458ad
    ADD EDI,EAX                         ; 004458b2
    MOV EAX,dword ptr [ESP + 0x98]      ; 004458b4
    MOV EBP,dword ptr [EAX + 0x154]     ; 004458bb
    XOR ESI,ESI                         ; 004458c1
    TEST EBP,EBP                        ; 004458c3
    JLE 0x004458f4                      ; 004458c5
        ;   XREF to: 004458f4 (CONDITIONAL_JUMP)  ; LAB_004458f4
    MOV EBX,EDI                         ; 004458c7
    MOV EDX,dword ptr [ESP + 0x98]      ; 004458c9
        ;   Label: LAB_004458c9
    MOV EAX,dword ptr [EBX + 0x4]       ; 004458d0
    CMP EAX,dword ptr [EDX + 0x13c]     ; 004458d3
    JNZ 0x004459ee                      ; 004458d9
        ;   XREF to: 004459ee (CONDITIONAL_JUMP)  ; LAB_004459ee
    MOV EAX,dword ptr [ESP + 0x98]      ; 004458df
        ;   Label: LAB_004458df
    INC ESI                             ; 004458e6
    MOV EDX,dword ptr [EAX + 0x154]     ; 004458e7
    ADD EBX,0x4                         ; 004458ed
    CMP ESI,EDX                         ; 004458f0
    JL 0x004458c9                       ; 004458f2
        ;   XREF to: 004458c9 (CONDITIONAL_JUMP)  ; LAB_004458c9
    ADD ESP,0x84                        ; 004458f4
        ;   Label: LAB_004458f4
    POP EBP                             ; 004458fa
    POP EDI                             ; 004458fb
    POP ESI                             ; 004458fc
    POP EBX                             ; 004458fd
    MOV EAX,EAX                         ; 004458fe
    RET                                 ; 00445900
    MOV dword ptr [0x014b845c],EDX      ; 00445901 | DAT_014b845c
        ;   Label: LAB_00445901
    JMP 0x004457ff                      ; 00445907
        ;   XREF to: 004457ff (UNCONDITIONAL_JUMP)  ; LAB_004457ff
    MOV dword ptr [0x014b845c],EBP      ; 0044590c | DAT_014b845c
        ;   Label: LAB_0044590c
    JMP 0x004457ff                      ; 00445912
        ;   XREF to: 004457ff (UNCONDITIONAL_JUMP)  ; LAB_004457ff
    ADD EAX,0x13384                     ; 00445917
        ;   Label: LAB_00445917
    CMP EAX,EDX                         ; 0044591c
    JL 0x004458a1                       ; 0044591e
        ;   XREF to: 004458a1 (CONDITIONAL_JUMP)  ; LAB_004458a1
    MOV EAX,[0x01216608]                ; 00445920 | DAT_01216608
        ;   Label: LAB_00445920
    CMP EAX,0x8                         ; 00445925
    JC 0x00445a05                       ; 00445928
        ;   XREF to: 00445a05 (CONDITIONAL_JUMP)  ; LAB_00445a05
    XOR EDX,EDX                         ; 0044592e
    MOV dword ptr [0x014b845c],EDX      ; 00445930 | DAT_014b845c
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00445936
        ;   Label: LAB_00445936
    PUSH ECX                            ; 0044593d
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 ; 0044593e
        ;   XREF to: 0044ce80 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80()
    ADD ESP,0x4                         ; 00445943
    MOV EAX,dword ptr [ESP + 0x98]      ; 00445946
    XOR EBX,EBX                         ; 0044594d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0044594f
    MOV dword ptr [ESP + 0x30],EBX      ; 00445955
    TEST ESI,ESI                        ; 00445959
    JLE 0x004458f4                      ; 0044595b
        ;   XREF to: 004458f4 (CONDITIONAL_JUMP)  ; LAB_004458f4
    MOV EBP,0x146ba10                   ; 0044595d
    MOV EAX,0xa9d078                    ; 00445962
    MOV EDX,0x7f7378                    ; 00445967
    MOV dword ptr [ESP + 0x3c],EBX      ; 0044596c
    MOV dword ptr [ESP + 0x1c],EBP      ; 00445970
    MOV dword ptr [ESP + 0x18],EAX      ; 00445974
    MOV dword ptr [ESP + 0x20],EDX      ; 00445978
    MOV EDX,dword ptr [ESP + 0x98]      ; 0044597c
        ;   Label: LAB_0044597c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00445983
    MOV ECX,dword ptr [EDX + 0x13c]     ; 00445987
    CMP ECX,dword ptr [EAX + 0x146b290] ; 0044598d
    JNZ 0x00445e36                      ; 00445993
        ;   XREF to: 00445e36 (CONDITIONAL_JUMP)  ; LAB_00445e36
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00445999
        ;   Label: LAB_00445999
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044599d
    MOV ESI,dword ptr [ESP + 0x18]      ; 004459a1
    MOV EDI,dword ptr [ESP + 0x20]      ; 004459a5
    MOV EBP,dword ptr [ESP + 0x30]      ; 004459a9
    MOV EDX,dword ptr [ESP + 0x98]      ; 004459ad
    ADD ECX,0x4                         ; 004459b4
    ADD EBX,0x500                       ; 004459b7
    ADD ESI,0x140                       ; 004459bd
    ADD EDI,0xf00                       ; 004459c3
    INC EBP                             ; 004459c9
    MOV dword ptr [ESP + 0x3c],ECX      ; 004459ca
    MOV dword ptr [ESP + 0x1c],EBX      ; 004459ce
    MOV dword ptr [ESP + 0x18],ESI      ; 004459d2
    MOV dword ptr [ESP + 0x20],EDI      ; 004459d6
    MOV ECX,dword ptr [EDX + 0x154]     ; 004459da
    MOV dword ptr [ESP + 0x30],EBP      ; 004459e0
    CMP EBP,ECX                         ; 004459e4
    JGE 0x004458f4                      ; 004459e6
        ;   XREF to: 004458f4 (CONDITIONAL_JUMP)  ; LAB_004458f4
    JMP 0x0044597c                      ; 004459ec
        ;   XREF to: 0044597c (UNCONDITIONAL_JUMP)  ; LAB_0044597c
    PUSH EDI                            ; 004459ee
        ;   Label: LAB_004459ee
    MOV EBP,dword ptr [EBX + 0x3c4]     ; 004459ef
    PUSH EBP                            ; 004459f5
    PUSH EAX                            ; 004459f6
    PUSH ESI                            ; 004459f7
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650 ; 004459f8
        ;   XREF to: 00445650 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650()
    ADD ESP,0x10                        ; 004459fd
    JMP 0x004458df                      ; 00445a00
        ;   XREF to: 004458df (UNCONDITIONAL_JUMP)  ; LAB_004458df
    IMUL EAX,EAX,0x13384                ; 00445a05
        ;   Label: LAB_00445a05
    MOV EDX,0x121660c                   ; 00445a0b
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00445a10
    MOV EBX,dword ptr [0x01216608]      ; 00445a17 | DAT_01216608
    PUSH ECX                            ; 00445a1d
    INC EBX                             ; 00445a1e
    ADD EDX,EAX                         ; 00445a1f
    MOV dword ptr [0x01216608],EBX      ; 00445a21 | DAT_01216608
    MOV dword ptr [ESP + 0x18],EDX      ; 00445a27
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 ; 00445a2b
        ;   XREF to: 0044ce80 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80()
    ADD ESP,0x4                         ; 00445a30
    MOV EAX,dword ptr [ESP + 0x98]      ; 00445a33
    XOR ESI,ESI                         ; 00445a3a
    MOV EDI,dword ptr [EAX + 0x154]     ; 00445a3c
    MOV dword ptr [ESP + 0x40],ESI      ; 00445a42
    TEST EDI,EDI                        ; 00445a46
    JLE 0x00445d45                      ; 00445a48
        ;   XREF to: 00445d45 (CONDITIONAL_JUMP)  ; LAB_00445d45
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445a4e
    ADD EAX,0x784                       ; 00445a52
    MOV dword ptr [ESP + 0x28],EAX      ; 00445a57
    MOV EAX,0x7f7378                    ; 00445a5b
    MOV EBP,0x146ba10                   ; 00445a60
    MOV dword ptr [ESP + 0x2c],EAX      ; 00445a65
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445a69
    MOV dword ptr [ESP + 0x24],EBP      ; 00445a6d
    MOV dword ptr [ESP + 0x34],EAX      ; 00445a71
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445a75
        ;   Label: LAB_00445a75
    MOV ECX,dword ptr [ESP + 0x98]      ; 00445a79
    SHL EAX,0x2                         ; 00445a80
    MOV EBX,dword ptr [ECX + 0x13c]     ; 00445a83
    CMP EBX,dword ptr [EAX + 0x146b290] ; 00445a89
    JZ 0x00445cd5                       ; 00445a8f
        ;   XREF to: 00445cd5 (CONDITIONAL_JUMP)  ; LAB_00445cd5
    MOV EDX,dword ptr [ESP + 0x40]      ; 00445a95
    MOV dword ptr [ESP + 0x4c],EDX      ; 00445a99
    MOV EDX,dword ptr [EAX + 0x146b290] ; 00445a9d
    MOV EAX,dword ptr [EAX + 0x146b650] ; 00445aa3
    MOV dword ptr [ESP + 0xc],EDX       ; 00445aa9
    MOV dword ptr [ESP + 0x44],EAX      ; 00445aad
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445ab1
    MOV ESI,EDX                         ; 00445ab5
    MOV dword ptr [ESP + 0x38],EAX      ; 00445ab7
    IMUL EAX,EDX,0xc                    ; 00445abb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00445abe
    ADD EDX,EAX                         ; 00445ac2
    MOV dword ptr [ESP + 0x74],EDX      ; 00445ac4
    MOV EAX,ESI                         ; 00445ac8
    MOV EDX,dword ptr [ESP + 0x24]      ; 00445aca
    SHL EAX,0x2                         ; 00445ace
    MOV CL,byte ptr [0x012b0660]        ; 00445ad1 | DAT_012b0660
    ADD EDX,EAX                         ; 00445ad7
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445ad9
    MOV dword ptr [ESP + 0x68],EDX      ; 00445add
    MOV EDX,ESI                         ; 00445ae1
    SHL EAX,CL                          ; 00445ae3
    SHL EDX,CL                          ; 00445ae5
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 00445ae7 | DAT_01bd4260
    SHL EDX,0x2                         ; 00445aee
    ADD EAX,EDX                         ; 00445af1
    MOV EDI,ESI                         ; 00445af3
    MOV dword ptr [ESP + 0x70],EAX      ; 00445af5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00445af9
    ADD EAX,EDI                         ; 00445afd
    MOV EBP,dword ptr [ESP + 0x44]      ; 00445aff
    MOV dword ptr [ESP + 0x64],EAX      ; 00445b03
    CMP ESI,EBP                         ; 00445b07
    JGE 0x00445c44                      ; 00445b09
        ;   XREF to: 00445c44 (CONDITIONAL_JUMP)  ; LAB_00445c44
    XOR DL,DL                           ; 00445b0f
        ;   Label: LAB_00445b0f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00445b11
    MOV byte ptr [ESP + 0x80],DL        ; 00445b15
    MOV EDX,dword ptr [ESP + 0x68]      ; 00445b1c
    MOV EAX,dword ptr [EAX]             ; 00445b20
    CMP EAX,dword ptr [EDX]             ; 00445b22
    JNC 0x00445beb                      ; 00445b24
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00445b2a
    MOV EDX,dword ptr [0x014b8458]      ; 00445b2e | DAT_014b8458
    MOV EAX,dword ptr [EAX]             ; 00445b34
    SUB EAX,dword ptr [EDX]             ; 00445b36
    CDQ                                 ; 00445b38
    XOR EAX,EDX                         ; 00445b39
    SUB EAX,EDX                         ; 00445b3b
    MOV EDX,dword ptr [0x014b8458]      ; 00445b3d | DAT_014b8458
    MOV ESI,dword ptr [EDX + 0xc]       ; 00445b43
    MOV EBX,EAX                         ; 00445b46
    CMP EAX,ESI                         ; 00445b48
    JGE 0x00445beb                      ; 00445b4a
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00445b50
    MOV EDI,dword ptr [EDX + 0x4]       ; 00445b54
    MOV EAX,dword ptr [EAX + 0x4]       ; 00445b57
    SUB EAX,EDI                         ; 00445b5a
    CDQ                                 ; 00445b5c
    XOR EAX,EDX                         ; 00445b5d
    SUB EAX,EDX                         ; 00445b5f
    MOV EDX,dword ptr [0x014b8458]      ; 00445b61 | DAT_014b8458
    MOV EBP,dword ptr [EDX + 0xc]       ; 00445b67
    MOV ECX,EAX                         ; 00445b6a
    CMP EAX,EBP                         ; 00445b6c
    JGE 0x00445beb                      ; 00445b6e
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00445b74
    MOV ESI,dword ptr [EDX + 0x8]       ; 00445b78
    MOV EAX,dword ptr [EAX + 0x8]       ; 00445b7b
    SUB EAX,ESI                         ; 00445b7e
    CDQ                                 ; 00445b80
    XOR EAX,EDX                         ; 00445b81
    SUB EAX,EDX                         ; 00445b83
    MOV EDX,dword ptr [0x014b8458]      ; 00445b85 | DAT_014b8458
    CMP EAX,dword ptr [EDX + 0xc]       ; 00445b8b
    JGE 0x00445beb                      ; 00445b8e
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    IMUL ECX,ECX                        ; 00445b90
    IMUL EBX,EBX                        ; 00445b93
    IMUL EAX,EAX                        ; 00445b96
    ADD ECX,EBX                         ; 00445b99
    ADD ECX,EAX                         ; 00445b9b
    MOV EBP,dword ptr [EDX + 0x10]      ; 00445b9d
    MOV dword ptr [ESP + 0x58],ECX      ; 00445ba0
    CMP ECX,EBP                         ; 00445ba4
    JGE 0x00445beb                      ; 00445ba6
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00445ba8
    MOV ESI,dword ptr [ESP + 0x70]      ; 00445bac
    MOV EBX,dword ptr [ESP + 0xc]       ; 00445bb0
    MOV EAX,[0x014b845c]                ; 00445bb4 | DAT_014b845c
    MOV ESI,dword ptr [ESI]             ; 00445bb9
    TEST EAX,EAX                        ; 00445bbb
    JNZ 0x00445d5d                      ; 00445bbd
        ;   XREF to: 00445d5d (CONDITIONAL_JUMP)  ; LAB_00445d5d
    MOV EAX,[0x014b8458]                ; 00445bc3 | DAT_014b8458
        ;   Label: LAB_00445bc3
    MOV ECX,dword ptr [ESP + 0x58]      ; 00445bc8
    MOV EDX,dword ptr [EAX + 0x10]      ; 00445bcc
    SUB EDX,ECX                         ; 00445bcf
    SAR EDX,0x10                        ; 00445bd1
    IMUL EDX,EDX,0x3f                   ; 00445bd4
    MOV ECX,dword ptr [EAX + 0x10]      ; 00445bd7
    SAR ECX,0x10                        ; 00445bda
    MOV EAX,EDX                         ; 00445bdd
    SAR EDX,0x1f                        ; 00445bdf
    IDIV ECX                            ; 00445be2
    MOV byte ptr [ESP + 0x80],AL        ; 00445be4
    MOV EDX,dword ptr [ESP + 0x64]      ; 00445beb
        ;   Label: LAB_00445beb
    MOV EDI,dword ptr [ESP + 0x68]      ; 00445bef
    MOV EBP,dword ptr [ESP + 0x74]      ; 00445bf3
    MOV AL,byte ptr [ESP + 0x80]        ; 00445bf7
    MOV ESI,dword ptr [ESP + 0x70]      ; 00445bfe
    MOV CL,byte ptr [0x012b0660]        ; 00445c02 | DAT_012b0660
    LEA EBX,[EDX + 0x1]                 ; 00445c08
    ADD EDI,0x4                         ; 00445c0b
    ADD EBP,0xc                         ; 00445c0e
    MOV byte ptr [EDX],AL               ; 00445c11
    MOV EAX,0x1                         ; 00445c13
    MOV EDX,dword ptr [ESP + 0x44]      ; 00445c18
    SHL EAX,CL                          ; 00445c1c
    MOV dword ptr [ESP + 0x64],EBX      ; 00445c1e
    SHL EAX,0x2                         ; 00445c22
    MOV dword ptr [ESP + 0x68],EDI      ; 00445c25
    ADD ESI,EAX                         ; 00445c29
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445c2b
    MOV dword ptr [ESP + 0x74],EBP      ; 00445c2f
    INC EAX                             ; 00445c33
    MOV dword ptr [ESP + 0x70],ESI      ; 00445c34
    MOV dword ptr [ESP + 0xc],EAX       ; 00445c38
    CMP EAX,EDX                         ; 00445c3c
    JL 0x00445b0f                       ; 00445c3e
        ;   XREF to: 00445b0f (CONDITIONAL_JUMP)  ; LAB_00445b0f
    IMUL EBX,dword ptr [ESP + 0x4c],0x140 ; 00445c44
        ;   Label: LAB_00445c44
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00445c4c
    MOV ECX,dword ptr [ESP + 0x38]      ; 00445c50
    SHL EDX,0x2                         ; 00445c54
    ADD EDX,ECX                         ; 00445c57
    ADD ECX,0x784                       ; 00445c59
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445c5f
    ADD ECX,EBX                         ; 00445c62
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00445c64
    ADD ECX,EAX                         ; 00445c6a
    CMP EAX,EDX                         ; 00445c6c
    JGE 0x00445c79                      ; 00445c6e
        ;   XREF to: 00445c79 (CONDITIONAL_JUMP)  ; LAB_00445c79
    CMP byte ptr [ECX],0x0              ; 00445c70
        ;   Label: LAB_00445c70
    JZ 0x00445e18                       ; 00445c73
        ;   XREF to: 00445e18 (CONDITIONAL_JUMP)  ; LAB_00445e18
    IMUL ECX,dword ptr [ESP + 0x4c],0x140 ; 00445c79
        ;   Label: LAB_00445c79
    MOV EBX,dword ptr [ESP + 0x38]      ; 00445c81
    ADD EBX,0x784                       ; 00445c85
    ADD ECX,EBX                         ; 00445c8b
    ADD ECX,EDX                         ; 00445c8d
    DEC ECX                             ; 00445c8f
    CMP EDX,EAX                         ; 00445c90
    JLE 0x00445c9d                      ; 00445c92
        ;   XREF to: 00445c9d (CONDITIONAL_JUMP)  ; LAB_00445c9d
    CMP byte ptr [ECX],0x0              ; 00445c94
        ;   Label: LAB_00445c94
    JZ 0x00445e27                       ; 00445c97
        ;   XREF to: 00445e27 (CONDITIONAL_JUMP)  ; LAB_00445e27
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00445c9d
        ;   Label: LAB_00445c9d
    MOV EBP,dword ptr [ESP + 0x38]      ; 00445ca1
    SHL ECX,0x2                         ; 00445ca5
    ADD ECX,EBP                         ; 00445ca8
    MOV dword ptr [ECX + 0x4],EAX       ; 00445caa
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445cad
    PUSH EAX                            ; 00445cb1
    MOV EAX,dword ptr [ESP + 0x44]      ; 00445cb2
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00445cb6
    MOV EDX,dword ptr [EAX*0x4 + 0x146b650] ; 00445cbc
    PUSH EDX                            ; 00445cc3
    MOV ECX,dword ptr [EAX*0x4 + 0x146b290] ; 00445cc4
    PUSH ECX                            ; 00445ccb
    PUSH EAX                            ; 00445ccc
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650 ; 00445ccd
        ;   XREF to: 00445650 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650()
    ADD ESP,0x10                        ; 00445cd2
    MOV ESI,dword ptr [ESP + 0x28]      ; 00445cd5
        ;   Label: LAB_00445cd5
    MOV EDI,dword ptr [ESP + 0x24]      ; 00445cd9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445cdd
    MOV ECX,dword ptr [ESP + 0x34]      ; 00445ce1
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00445ce5
    ADD ESI,0x140                       ; 00445ce9
    ADD EDI,0x500                       ; 00445cef
    MOV EDX,dword ptr [EAX*0x4 + 0x146b290] ; 00445cf5
    ADD EBP,0xf00                       ; 00445cfc
    MOV dword ptr [ECX + 0x4],EDX       ; 00445d02
    MOV EDX,dword ptr [ESP + 0x40]      ; 00445d05
    MOV EAX,dword ptr [EAX*0x4 + 0x146b650] ; 00445d09
    INC EDX                             ; 00445d10
    MOV dword ptr [ECX + 0x3c4],EAX     ; 00445d11
    LEA EAX,[ECX + 0x4]                 ; 00445d17
    MOV dword ptr [ESP + 0x40],EDX      ; 00445d1a
    MOV dword ptr [ESP + 0x34],EAX      ; 00445d1e
    MOV EAX,EDX                         ; 00445d22
    MOV EDX,dword ptr [ESP + 0x98]      ; 00445d24
    MOV dword ptr [ESP + 0x28],ESI      ; 00445d2b
    MOV dword ptr [ESP + 0x24],EDI      ; 00445d2f
    MOV ECX,dword ptr [EDX + 0x154]     ; 00445d33
    MOV dword ptr [ESP + 0x2c],EBP      ; 00445d39
    CMP EAX,ECX                         ; 00445d3d
    JL 0x00445a75                       ; 00445d3f
        ;   XREF to: 00445a75 (CONDITIONAL_JUMP)  ; LAB_00445a75
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445d45
        ;   Label: LAB_00445d45
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00445d49
    MOV dword ptr [EAX],EDX             ; 00445d50
    ADD ESP,0x84                        ; 00445d52
    POP EBP                             ; 00445d58
    POP EDI                             ; 00445d59
    POP ESI                             ; 00445d5a
    POP EBX                             ; 00445d5b
    RET                                 ; 00445d5c
    MOV EBP,dword ptr [0x014b8460]      ; 00445d5d | DAT_014b8460
        ;   Label: LAB_00445d5d
    MOV EDI,dword ptr [0x014b8464]      ; 00445d63 | DAT_014b8464
    MOV EAX,[0x014b8468]                ; 00445d69 | DAT_014b8468
    XOR EDX,EDX                         ; 00445d6e
    MOV dword ptr [ESP + 0x50],EAX      ; 00445d70
    MOV dword ptr [ESP + 0x54],EDX      ; 00445d74
    TEST ESI,ESI                        ; 00445d78
    JZ 0x00445de5                       ; 00445d7a
        ;   XREF to: 00445de5 (CONDITIONAL_JUMP)  ; LAB_00445de5
    MOV EAX,0x7fffffff                  ; 00445d7c
    MOV EDX,EAX                         ; 00445d81
    SAR EDX,0x1f                        ; 00445d83
    IDIV ESI                            ; 00445d86
    MOV ESI,EAX                         ; 00445d88
    MOV EDX,dword ptr [ESP + 0x50]      ; 00445d8a
        ;   Label: LAB_00445d8a
    SUB EDX,ESI                         ; 00445d8e
    MOV EAX,EDX                         ; 00445d90
    SAR EDX,0x1f                        ; 00445d92
    SHL EDX,0x4                         ; 00445d95
    SBB EAX,EDX                         ; 00445d98
    SAR EAX,0x4                         ; 00445d9a
    SUB EBP,EBX                         ; 00445d9d
    SUB EDI,ECX                         ; 00445d9f
    SHL EBP,0x4                         ; 00445da1
    SHL EDI,0x4                         ; 00445da4
    SHL EBX,0x8                         ; 00445da7
    SHL ECX,0x8                         ; 00445daa
    MOV dword ptr [ESP + 0x78],EBP      ; 00445dad
    MOV dword ptr [ESP + 0x7c],EDI      ; 00445db1
    MOV EBP,EAX                         ; 00445db5
    MOV EDX,ESI                         ; 00445db7
    MOV EAX,0x10                        ; 00445db9
    MOV ESI,ECX                         ; 00445dbe
        ;   Label: LAB_00445dbe
    SAR ESI,0x8                         ; 00445dc0
    IMUL ESI,ESI,0x500                  ; 00445dc3
    MOV EDI,EBX                         ; 00445dc9
    SAR EDI,0x8                         ; 00445dcb
    MOV EDI,dword ptr [ESI + EDI*0x4 + 0xac2af8] ; 00445dce
    LEA ESI,[EDX + -0x80]               ; 00445dd5
    CMP EDI,ESI                         ; 00445dd8
    JGE 0x00445dec                      ; 00445dda
        ;   XREF to: 00445dec (CONDITIONAL_JUMP)  ; LAB_00445dec
    TEST EAX,EAX                        ; 00445ddc
    JNZ 0x00445e08                      ; 00445dde
        ;   XREF to: 00445e08 (CONDITIONAL_JUMP)  ; LAB_00445e08
    JMP 0x00445bc3                      ; 00445de0
        ;   XREF to: 00445bc3 (UNCONDITIONAL_JUMP)  ; LAB_00445bc3
    MOV ESI,0x7fffffff                  ; 00445de5
        ;   Label: LAB_00445de5
    JMP 0x00445d8a                      ; 00445dea
        ;   XREF to: 00445d8a (UNCONDITIONAL_JUMP)  ; LAB_00445d8a
    MOV ESI,dword ptr [ESP + 0x78]      ; 00445dec
        ;   Label: LAB_00445dec
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00445df0
    DEC EAX                             ; 00445df4
    ADD EDX,EBP                         ; 00445df5
    ADD EBX,ESI                         ; 00445df7
    ADD ECX,EDI                         ; 00445df9
    TEST EAX,EAX                        ; 00445dfb
    JG 0x00445dbe                       ; 00445dfd
        ;   XREF to: 00445dbe (CONDITIONAL_JUMP)  ; LAB_00445dbe
    TEST EAX,EAX                        ; 00445dff
    JNZ 0x00445e08                      ; 00445e01
        ;   XREF to: 00445e08 (CONDITIONAL_JUMP)  ; LAB_00445e08
    JMP 0x00445bc3                      ; 00445e03
        ;   XREF to: 00445bc3 (UNCONDITIONAL_JUMP)  ; LAB_00445bc3
    CMP dword ptr [ESP + 0x54],0x0      ; 00445e08
        ;   Label: LAB_00445e08
    JNZ 0x00445bc3                      ; 00445e0d
        ;   XREF to: 00445bc3 (CONDITIONAL_JUMP)  ; LAB_00445bc3
    JMP 0x00445beb                      ; 00445e13
        ;   XREF to: 00445beb (UNCONDITIONAL_JUMP)  ; LAB_00445beb
    INC EAX                             ; 00445e18
        ;   Label: LAB_00445e18
    INC ECX                             ; 00445e19
    CMP EAX,EDX                         ; 00445e1a
    JL 0x00445c70                       ; 00445e1c
        ;   XREF to: 00445c70 (CONDITIONAL_JUMP)  ; LAB_00445c70
    JMP 0x00445c79                      ; 00445e22
        ;   XREF to: 00445c79 (UNCONDITIONAL_JUMP)  ; LAB_00445c79
    DEC EDX                             ; 00445e27
        ;   Label: LAB_00445e27
    DEC ECX                             ; 00445e28
    CMP EDX,EAX                         ; 00445e29
    JG 0x00445c94                       ; 00445e2b
        ;   XREF to: 00445c94 (CONDITIONAL_JUMP)  ; LAB_00445c94
    JMP 0x00445c9d                      ; 00445e31
        ;   XREF to: 00445c9d (UNCONDITIONAL_JUMP)  ; LAB_00445c9d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00445e36
        ;   Label: LAB_00445e36
    MOV EAX,dword ptr [EAX + 0x146b290] ; 00445e3a
    MOV dword ptr [ESP + 0x6c],EAX      ; 00445e40
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00445e44
    IMUL EBX,ESI,0xc                    ; 00445e48
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00445e4b
    MOV EDI,dword ptr [ESP + 0x20]      ; 00445e4f
    MOV EBP,dword ptr [ESP + 0x18]      ; 00445e53
    MOV EAX,dword ptr [EAX + 0x146b650] ; 00445e57
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00445e5d
    MOV dword ptr [ESP + 0x48],EAX      ; 00445e61
    ADD EBP,ESI                         ; 00445e65
    LEA EAX,[ESI*0x4 + 0x0]             ; 00445e67
    MOV CL,byte ptr [0x012b0660]        ; 00445e6e | DAT_012b0660
    ADD EDX,EAX                         ; 00445e74
    MOV EAX,dword ptr [ESP + 0x30]      ; 00445e76
    MOV dword ptr [ESP + 0x60],EDX      ; 00445e7a
    MOV EDX,ESI                         ; 00445e7e
    SHL EAX,CL                          ; 00445e80
    SHL EDX,CL                          ; 00445e82
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 00445e84 | DAT_01bd4260
    SHL EDX,0x2                         ; 00445e8b
    ADD EBX,EDI                         ; 00445e8e
    ADD EAX,EDX                         ; 00445e90
    MOV EDX,dword ptr [ESP + 0x48]      ; 00445e92
    MOV dword ptr [ESP + 0x5c],EAX      ; 00445e96
    CMP ESI,EDX                         ; 00445e9a
    JGE 0x00445999                      ; 00445e9c
        ;   XREF to: 00445999 (CONDITIONAL_JUMP)  ; LAB_00445999
        ;   Label: LAB_00445e9c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00445ea2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00445ea6
    MOV ECX,dword ptr [EDX]             ; 00445eaa
    CMP ECX,dword ptr [EAX]             ; 00445eac
    JBE 0x00445f33                      ; 00445eae
        ;   XREF to: 00445f33 (CONDITIONAL_JUMP)  ; LAB_00445f33
    MOV ESI,dword ptr [0x014b8458]      ; 00445eb4 | DAT_014b8458
    MOV ECX,dword ptr [EBX]             ; 00445eba | DAT_007f8284
    MOV EDI,dword ptr [ESI]             ; 00445ebc
    SUB ECX,EDI                         ; 00445ebe
    MOV EAX,ECX                         ; 00445ec0
    CDQ                                 ; 00445ec2
    XOR EAX,EDX                         ; 00445ec3
    SUB EAX,EDX                         ; 00445ec5
    CMP EAX,dword ptr [ESI + 0xc]       ; 00445ec7
    JGE 0x00445f33                      ; 00445eca
        ;   XREF to: 00445f33 (CONDITIONAL_JUMP)  ; LAB_00445f33
    MOV EDI,dword ptr [0x014b8458]      ; 00445ecc | DAT_014b8458
    MOV ESI,dword ptr [EBX + 0x4]       ; 00445ed2
    MOV EAX,dword ptr [EDI + 0x4]       ; 00445ed5
    SUB ESI,EAX                         ; 00445ed8
    MOV EAX,ESI                         ; 00445eda
    CDQ                                 ; 00445edc
    XOR EAX,EDX                         ; 00445edd
    SUB EAX,EDX                         ; 00445edf
    CMP EAX,dword ptr [EDI + 0xc]       ; 00445ee1
    JGE 0x00445f33                      ; 00445ee4
        ;   XREF to: 00445f33 (CONDITIONAL_JUMP)  ; LAB_00445f33
    MOV EAX,[0x014b8458]                ; 00445ee6 | DAT_014b8458
    MOV EDI,dword ptr [EBX + 0x8]       ; 00445eeb
    SUB EDI,dword ptr [EAX + 0x8]       ; 00445eee
    MOV dword ptr [ESP + 0x10],EAX      ; 00445ef1
    MOV EAX,EDI                         ; 00445ef5
    CDQ                                 ; 00445ef7
    XOR EAX,EDX                         ; 00445ef8
    SUB EAX,EDX                         ; 00445efa
    MOV EDX,dword ptr [ESP + 0x10]      ; 00445efc
    CMP EAX,dword ptr [EDX + 0xc]       ; 00445f00
    JGE 0x00445f33                      ; 00445f03
        ;   XREF to: 00445f33 (CONDITIONAL_JUMP)  ; LAB_00445f33
    IMUL ESI,ESI                        ; 00445f05
    IMUL ECX,ECX                        ; 00445f08
    MOV EDX,EDI                         ; 00445f0b
    IMUL EDX,EDI                        ; 00445f0d
    ADD ECX,ESI                         ; 00445f10
    MOV EAX,[0x014b8458]                ; 00445f12 | DAT_014b8458
    ADD EDX,ECX                         ; 00445f17
    MOV ECX,dword ptr [EAX + 0x10]      ; 00445f19
    CMP EDX,ECX                         ; 00445f1c
    JGE 0x00445f33                      ; 00445f1e
        ;   XREF to: 00445f33 (CONDITIONAL_JUMP)  ; LAB_00445f33
    SUB ECX,EDX                         ; 00445f20
    SAR ECX,0x10                        ; 00445f22
    MOV EDX,dword ptr [EAX + 0x14]      ; 00445f25
    MOV EAX,ECX                         ; 00445f28
    IMUL EDX                            ; 00445f2a
    SHRD EAX,EDX,0x10                   ; 00445f2c
    ADD byte ptr [EBP],AL               ; 00445f30
    MOV EAX,0x1                         ; 00445f33
        ;   Label: LAB_00445f33
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00445f38
    MOV EDI,dword ptr [ESP + 0x60]      ; 00445f3c
    MOV EDX,dword ptr [ESP + 0x48]      ; 00445f40
    MOV CL,byte ptr [0x012b0660]        ; 00445f44 | DAT_012b0660
    ADD EBX,0xc                         ; 00445f4a
    SHL EAX,CL                          ; 00445f4d
    INC EBP                             ; 00445f4f
    SHL EAX,0x2                         ; 00445f50
    ADD EDI,0x4                         ; 00445f53
    ADD ESI,EAX                         ; 00445f56
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00445f58
    MOV dword ptr [ESP + 0x60],EDI      ; 00445f5c
    INC EAX                             ; 00445f60
    MOV dword ptr [ESP + 0x5c],ESI      ; 00445f61
    MOV dword ptr [ESP + 0x6c],EAX      ; 00445f65
    CMP EAX,EDX                         ; 00445f69
    JMP 0x00445e9c                      ; 00445f6b
        ;   XREF to: 00445e9c (UNCONDITIONAL_JUMP)  ; LAB_00445e9c

