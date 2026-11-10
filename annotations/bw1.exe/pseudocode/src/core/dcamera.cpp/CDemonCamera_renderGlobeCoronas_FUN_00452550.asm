; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
; int              Stack[0xc]:4   force_render
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
;   core_set.cpp_FUN_00550580 at 0055072c
;
; Referenced Globals:
;   undefined4 DAT_00611294
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_00857cd8
;   undefined4 DAT_00857cdc
;   undefined4 DAT_00857ce0
;   undefined4 DAT_00857ce4
;   undefined4 DAT_00858bd8
;   undefined4 DAT_00858bdc
;   undefined4 DAT_00858be0
;   undefined4 DAT_00858be4
;   undefined4 DAT_00859ad8
;   undefined4 DAT_01289ca8
;   undefined4 DAT_01323d00
;   undefined4 DAT_0152bc18
;   undefined4 DAT_0152bc1c
;   ... and 6 more
;
; Called Functions:
;   core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450
;   core_dcamera.cpp_FUN_0044e2a0
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452550
        ;   Label: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
    PUSH ESI                            ; 00452551
    PUSH EDI                            ; 00452552
    PUSH EBP                            ; 00452553
    SUB ESP,0x84                        ; 00452554
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0045255a
    MOV EAX,[0x0061d95c]                ; 00452561 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x0       ; 00452566 | g_CGameInstance.field3_0xc
    JNZ 0x00452585                      ; 0045256a
        ;   XREF to: 00452585 (CONDITIONAL_JUMP)  ; LAB_00452585
    TEST EBX,EBX                        ; 0045256c
    JNZ 0x004526f4                      ; 0045256e
        ;   XREF to: 004526f4 (CONDITIONAL_JUMP)  ; LAB_004526f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00452574
    CMP dword ptr [EAX + 0x20],0x0      ; 0045257b
    JZ 0x004526f4                       ; 0045257f
        ;   XREF to: 004526f4 (CONDITIONAL_JUMP)  ; LAB_004526f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00452585
        ;   Label: LAB_00452585
    PUSH EAX                            ; 0045258c
    MOV EDI,dword ptr [ESP + 0x9c]      ; 0045258d
    PUSH EDI                            ; 00452594
    LEA ESI,[ESP + 0x8]                 ; 00452595
    MOV [0x0152bc18],EAX                ; 00452599 | DAT_0152bc18
    CALL core_dcamera.cpp_FUN_0044e2a0  ; 0045259e
        ;   XREF to: 0044e2a0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044e2a0()
    LEA ESI,[ESP + 0x8]                 ; 004525a3
    ADD ESP,0x8                         ; 004525a7
    MOV EDI,0x152bc20                   ; 004525aa
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004525af
    MOVSD ES:EDI,ESI                    ; 004525b6 | DAT_0152bc20
    MOVSD ES:EDI,ESI                    ; 004525b7 | DAT_0152bc24
    MOVSD ES:EDI,ESI                    ; 004525b8 | DAT_0152bc28
    MOV EBP,dword ptr [EAX + 0x20]      ; 004525b9
    TEST EBP,EBP                        ; 004525bc
    JZ 0x0045270c                       ; 004525be
        ;   XREF to: 0045270c (CONDITIONAL_JUMP)  ; LAB_0045270c
    MOV EDX,dword ptr [0x0152bc20]      ; 004525c4 | DAT_0152bc20
    TEST EDX,EDX                        ; 004525ca
    JZ 0x00452701                       ; 004525cc
        ;   XREF to: 00452701 (CONDITIONAL_JUMP)  ; LAB_00452701
    MOV ESI,0x1                         ; 004525d2
    MOV EAX,[0x01323d00]                ; 004525d7 | DAT_01323d00
    MOV EBP,dword ptr [0x0152bc24]      ; 004525dc | DAT_0152bc24
    ADD EAX,0x10                        ; 004525e2
    MOV EDI,EDX                         ; 004525e5
    MOV CL,AL                           ; 004525e7
    MOV dword ptr [0x0152bc1c],ESI      ; 004525e9 | DAT_0152bc1c
    SAR EDI,CL                          ; 004525ef
    SAR EBP,CL                          ; 004525f1
    MOV dword ptr [0x0152bc20],EDI      ; 004525f3 | DAT_0152bc20
    MOV dword ptr [0x0152bc24],EBP      ; 004525f9 | DAT_0152bc24
    MOV EAX,dword ptr [ESP + 0x98]      ; 004525ff
        ;   Label: LAB_004525ff
    MOV ECX,dword ptr [EAX + 0x154]     ; 00452606
    XOR EDX,EDX                         ; 0045260c
    TEST ECX,ECX                        ; 0045260e
    JLE 0x00452650                      ; 00452610
        ;   XREF to: 00452650 (CONDITIONAL_JUMP)  ; LAB_00452650
    XOR EAX,EAX                         ; 00452612
    MOV ECX,dword ptr [ESP + 0x98]      ; 00452614
        ;   Label: LAB_00452614
    MOV ECX,dword ptr [ECX + 0x144]     ; 0045261b
    XOR ESI,ESI                         ; 00452621
    MOV dword ptr [EAX + 0x14dea50],ECX ; 00452623
    MOV ECX,dword ptr [ESP + 0x98]      ; 00452629
    MOV dword ptr [EAX + 0x14dee10],ESI ; 00452630
    INC EDX                             ; 00452636
    MOV EDI,dword ptr [ECX + 0x154]     ; 00452637
    ADD EAX,0x4                         ; 0045263d
    CMP EDX,EDI                         ; 00452640
    JL 0x00452614                       ; 00452642
        ;   XREF to: 00452614 (CONDITIONAL_JUMP)  ; LAB_00452614
    LEA EAX,[EAX]                       ; 00452644
    LEA EDX,[EDX]                       ; 0045264a
    TEST EBX,EBX                        ; 00452650
        ;   Label: LAB_00452650
    JNZ 0x00452736                      ; 00452652
        ;   XREF to: 00452736 (CONDITIONAL_JUMP)  ; LAB_00452736
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00452658
    CMP dword ptr [EAX + 0x20],0x0      ; 0045265f
    JZ 0x00452736                       ; 00452663
        ;   XREF to: 00452736 (CONDITIONAL_JUMP)  ; LAB_00452736
    MOV dword ptr [0x00611294],0xffffffff ; 00452669 | DAT_00611294
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00452673
    CMP dword ptr [EAX + 0x20],0x2      ; 0045267a
    JNZ 0x00452736                      ; 0045267e
        ;   XREF to: 00452736 (CONDITIONAL_JUMP)  ; LAB_00452736
    MOV ECX,dword ptr [0x01289ca8]      ; 00452684 | DAT_01289ca8
    TEST ECX,ECX                        ; 0045268a
    JBE 0x00452720                      ; 0045268c
        ;   XREF to: 00452720 (CONDITIONAL_JUMP)  ; LAB_00452720
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00452692
    XOR EAX,EAX                         ; 00452699
    IMUL EDX,ECX,0x13384                ; 0045269b
    CMP ESI,dword ptr [EAX + 0x1289cac] ; 004526a1
        ;   Label: LAB_004526a1
    JNZ 0x00452717                      ; 004526a7
        ;   XREF to: 00452717 (CONDITIONAL_JUMP)  ; LAB_00452717
    MOV EDI,0x1289cac                   ; 004526ad
    ADD EDI,EAX                         ; 004526b2
    MOV EAX,dword ptr [ESP + 0x98]      ; 004526b4
    MOV EBP,dword ptr [EAX + 0x154]     ; 004526bb
    XOR ESI,ESI                         ; 004526c1
    TEST EBP,EBP                        ; 004526c3
    JLE 0x004526f4                      ; 004526c5
        ;   XREF to: 004526f4 (CONDITIONAL_JUMP)  ; LAB_004526f4
    MOV EBX,EDI                         ; 004526c7
    MOV EDX,dword ptr [ESP + 0x98]      ; 004526c9
        ;   Label: LAB_004526c9
    MOV EAX,dword ptr [EBX + 0x4]       ; 004526d0
    CMP EAX,dword ptr [EDX + 0x144]     ; 004526d3
    JNZ 0x004527ee                      ; 004526d9
        ;   XREF to: 004527ee (CONDITIONAL_JUMP)  ; LAB_004527ee
    MOV EAX,dword ptr [ESP + 0x98]      ; 004526df
        ;   Label: LAB_004526df
    INC ESI                             ; 004526e6
    MOV EDX,dword ptr [EAX + 0x154]     ; 004526e7
    ADD EBX,0x4                         ; 004526ed
    CMP ESI,EDX                         ; 004526f0
    JL 0x004526c9                       ; 004526f2
        ;   XREF to: 004526c9 (CONDITIONAL_JUMP)  ; LAB_004526c9
    ADD ESP,0x84                        ; 004526f4
        ;   Label: LAB_004526f4
    POP EBP                             ; 004526fa
    POP EDI                             ; 004526fb
    POP ESI                             ; 004526fc
    POP EBX                             ; 004526fd
    MOV EAX,EAX                         ; 004526fe
    RET                                 ; 00452700
    MOV dword ptr [0x0152bc1c],EDX      ; 00452701 | DAT_0152bc1c
        ;   Label: LAB_00452701
    JMP 0x004525ff                      ; 00452707
        ;   XREF to: 004525ff (UNCONDITIONAL_JUMP)  ; LAB_004525ff
    MOV dword ptr [0x0152bc1c],EBP      ; 0045270c | DAT_0152bc1c
        ;   Label: LAB_0045270c
    JMP 0x004525ff                      ; 00452712
        ;   XREF to: 004525ff (UNCONDITIONAL_JUMP)  ; LAB_004525ff
    ADD EAX,0x13384                     ; 00452717
        ;   Label: LAB_00452717
    CMP EAX,EDX                         ; 0045271c
    JL 0x004526a1                       ; 0045271e
        ;   XREF to: 004526a1 (CONDITIONAL_JUMP)  ; LAB_004526a1
    MOV EAX,[0x01289ca8]                ; 00452720 | DAT_01289ca8
        ;   Label: LAB_00452720
    CMP EAX,0x8                         ; 00452725
    JC 0x00452805                       ; 00452728
        ;   XREF to: 00452805 (CONDITIONAL_JUMP)  ; LAB_00452805
    XOR EDX,EDX                         ; 0045272e
    MOV dword ptr [0x0152bc1c],EDX      ; 00452730 | DAT_0152bc1c
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00452736
        ;   Label: LAB_00452736
    PUSH ECX                            ; 0045273d
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 ; 0045273e
        ;   XREF to: 0045ea60 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00452743
    MOV EAX,dword ptr [ESP + 0x98]      ; 00452746
    XOR EBX,EBX                         ; 0045274d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0045274f
    MOV dword ptr [ESP + 0x30],EBX      ; 00452755
    TEST ESI,ESI                        ; 00452759
    JLE 0x004526f4                      ; 0045275b
        ;   XREF to: 004526f4 (CONDITIONAL_JUMP)  ; LAB_004526f4
    MOV EBP,0x14df1d0                   ; 0045275d
    MOV EAX,0xb10718                    ; 00452762
    MOV EDX,0x857cd8                    ; 00452767 | DAT_00857cd8
    MOV dword ptr [ESP + 0x3c],EBX      ; 0045276c
    MOV dword ptr [ESP + 0x1c],EBP      ; 00452770
    MOV dword ptr [ESP + 0x18],EAX      ; 00452774
    MOV dword ptr [ESP + 0x20],EDX      ; 00452778 | DAT_00857cd8
    MOV EDX,dword ptr [ESP + 0x98]      ; 0045277c
        ;   Label: LAB_0045277c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00452783
    MOV ECX,dword ptr [EDX + 0x144]     ; 00452787
    CMP ECX,dword ptr [EAX + 0x14dea50] ; 0045278d
    JNZ 0x00452c36                      ; 00452793
        ;   XREF to: 00452c36 (CONDITIONAL_JUMP)  ; LAB_00452c36
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00452799
        ;   Label: LAB_00452799
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045279d
    MOV ESI,dword ptr [ESP + 0x18]      ; 004527a1
    MOV EDI,dword ptr [ESP + 0x20]      ; 004527a5
    MOV EBP,dword ptr [ESP + 0x30]      ; 004527a9
    MOV EDX,dword ptr [ESP + 0x98]      ; 004527ad
    ADD ECX,0x4                         ; 004527b4
    ADD EBX,0x500                       ; 004527b7
    ADD ESI,0x140                       ; 004527bd
    ADD EDI,0xf00                       ; 004527c3
    INC EBP                             ; 004527c9
    MOV dword ptr [ESP + 0x3c],ECX      ; 004527ca
    MOV dword ptr [ESP + 0x1c],EBX      ; 004527ce
    MOV dword ptr [ESP + 0x18],ESI      ; 004527d2
    MOV dword ptr [ESP + 0x20],EDI      ; 004527d6 | DAT_00858bd8 | DAT_00859ad8
    MOV ECX,dword ptr [EDX + 0x154]     ; 004527da
    MOV dword ptr [ESP + 0x30],EBP      ; 004527e0
    CMP EBP,ECX                         ; 004527e4
    JGE 0x004526f4                      ; 004527e6
        ;   XREF to: 004526f4 (CONDITIONAL_JUMP)  ; LAB_004526f4
    JMP 0x0045277c                      ; 004527ec
        ;   XREF to: 0045277c (UNCONDITIONAL_JUMP)  ; LAB_0045277c
    PUSH EDI                            ; 004527ee
        ;   Label: LAB_004527ee
    MOV EBP,dword ptr [EBX + 0x3c4]     ; 004527ef
    PUSH EBP                            ; 004527f5
    PUSH EAX                            ; 004527f6
    PUSH ESI                            ; 004527f7
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450 ; 004527f8
        ;   XREF to: 00452450 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450()
    ADD ESP,0x10                        ; 004527fd
    JMP 0x004526df                      ; 00452800
        ;   XREF to: 004526df (UNCONDITIONAL_JUMP)  ; LAB_004526df
    IMUL EAX,EAX,0x13384                ; 00452805
        ;   Label: LAB_00452805
    MOV EDX,0x1289cac                   ; 0045280b
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00452810
    MOV EBX,dword ptr [0x01289ca8]      ; 00452817 | DAT_01289ca8
    PUSH ECX                            ; 0045281d
    INC EBX                             ; 0045281e
    ADD EDX,EAX                         ; 0045281f
    MOV dword ptr [0x01289ca8],EBX      ; 00452821 | DAT_01289ca8
    MOV dword ptr [ESP + 0x18],EDX      ; 00452827
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 ; 0045282b
        ;   XREF to: 0045ea60 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00452830
    MOV EAX,dword ptr [ESP + 0x98]      ; 00452833
    XOR ESI,ESI                         ; 0045283a
    MOV EDI,dword ptr [EAX + 0x154]     ; 0045283c
    MOV dword ptr [ESP + 0x40],ESI      ; 00452842
    TEST EDI,EDI                        ; 00452846
    JLE 0x00452b45                      ; 00452848
        ;   XREF to: 00452b45 (CONDITIONAL_JUMP)  ; LAB_00452b45
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045284e
    ADD EAX,0x784                       ; 00452852
    MOV dword ptr [ESP + 0x28],EAX      ; 00452857
    MOV EAX,0x857cd8                    ; 0045285b | DAT_00857cd8
    MOV EBP,0x14df1d0                   ; 00452860
    MOV dword ptr [ESP + 0x2c],EAX      ; 00452865 | DAT_00857cd8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00452869
    MOV dword ptr [ESP + 0x24],EBP      ; 0045286d
    MOV dword ptr [ESP + 0x34],EAX      ; 00452871
    MOV EAX,dword ptr [ESP + 0x40]      ; 00452875
        ;   Label: LAB_00452875
    MOV ECX,dword ptr [ESP + 0x98]      ; 00452879
    SHL EAX,0x2                         ; 00452880
    MOV EBX,dword ptr [ECX + 0x144]     ; 00452883
    CMP EBX,dword ptr [EAX + 0x14dea50] ; 00452889
    JZ 0x00452ad5                       ; 0045288f
        ;   XREF to: 00452ad5 (CONDITIONAL_JUMP)  ; LAB_00452ad5
    MOV EDX,dword ptr [ESP + 0x40]      ; 00452895
    MOV dword ptr [ESP + 0x4c],EDX      ; 00452899
    MOV EDX,dword ptr [EAX + 0x14dea50] ; 0045289d
    MOV EAX,dword ptr [EAX + 0x14dee10] ; 004528a3
    MOV dword ptr [ESP + 0xc],EDX       ; 004528a9
    MOV dword ptr [ESP + 0x44],EAX      ; 004528ad
    MOV EAX,dword ptr [ESP + 0x14]      ; 004528b1
    MOV ESI,EDX                         ; 004528b5
    MOV dword ptr [ESP + 0x38],EAX      ; 004528b7
    IMUL EAX,EDX,0xc                    ; 004528bb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004528be
    ADD EDX,EAX                         ; 004528c2
    MOV dword ptr [ESP + 0x74],EDX      ; 004528c4
    MOV EAX,ESI                         ; 004528c8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004528ca
    SHL EAX,0x2                         ; 004528ce
    MOV CL,byte ptr [0x01323d00]        ; 004528d1 | DAT_01323d00
    ADD EDX,EAX                         ; 004528d7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004528d9
    MOV dword ptr [ESP + 0x68],EDX      ; 004528dd
    MOV EDX,ESI                         ; 004528e1
    SHL EAX,CL                          ; 004528e3
    SHL EDX,CL                          ; 004528e5
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 004528e7 | DAT_01c4480c
    SHL EDX,0x2                         ; 004528ee
    ADD EAX,EDX                         ; 004528f1
    MOV EDI,ESI                         ; 004528f3
    MOV dword ptr [ESP + 0x70],EAX      ; 004528f5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004528f9
    ADD EAX,EDI                         ; 004528fd
    MOV EBP,dword ptr [ESP + 0x44]      ; 004528ff
    MOV dword ptr [ESP + 0x64],EAX      ; 00452903
    CMP ESI,EBP                         ; 00452907
    JGE 0x00452a44                      ; 00452909
        ;   XREF to: 00452a44 (CONDITIONAL_JUMP)  ; LAB_00452a44
    XOR DL,DL                           ; 0045290f
        ;   Label: LAB_0045290f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00452911
    MOV byte ptr [ESP + 0x80],DL        ; 00452915
    MOV EDX,dword ptr [ESP + 0x68]      ; 0045291c
    MOV EAX,dword ptr [EAX]             ; 00452920
    CMP EAX,dword ptr [EDX]             ; 00452922
    JNC 0x004529eb                      ; 00452924
        ;   XREF to: 004529eb (CONDITIONAL_JUMP)  ; LAB_004529eb
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045292a
    MOV EDX,dword ptr [0x0152bc18]      ; 0045292e | DAT_0152bc18
    MOV EAX,dword ptr [EAX]             ; 00452934 | DAT_00857cd8 | DAT_00857ce4
    SUB EAX,dword ptr [EDX]             ; 00452936
    CDQ                                 ; 00452938
    XOR EAX,EDX                         ; 00452939
    SUB EAX,EDX                         ; 0045293b
    MOV EDX,dword ptr [0x0152bc18]      ; 0045293d | DAT_0152bc18
    MOV ESI,dword ptr [EDX + 0xc]       ; 00452943
    MOV EBX,EAX                         ; 00452946
    CMP EAX,ESI                         ; 00452948
    JGE 0x004529eb                      ; 0045294a
        ;   XREF to: 004529eb (CONDITIONAL_JUMP)  ; LAB_004529eb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00452950
    MOV EDI,dword ptr [EDX + 0x4]       ; 00452954
    MOV EAX,dword ptr [EAX + 0x4]       ; 00452957 | DAT_00857cdc
    SUB EAX,EDI                         ; 0045295a
    CDQ                                 ; 0045295c
    XOR EAX,EDX                         ; 0045295d
    SUB EAX,EDX                         ; 0045295f
    MOV EDX,dword ptr [0x0152bc18]      ; 00452961 | DAT_0152bc18
    MOV EBP,dword ptr [EDX + 0xc]       ; 00452967
    MOV ECX,EAX                         ; 0045296a
    CMP EAX,EBP                         ; 0045296c
    JGE 0x004529eb                      ; 0045296e
        ;   XREF to: 004529eb (CONDITIONAL_JUMP)  ; LAB_004529eb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00452974
    MOV ESI,dword ptr [EDX + 0x8]       ; 00452978
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045297b | DAT_00857ce0
    SUB EAX,ESI                         ; 0045297e
    CDQ                                 ; 00452980
    XOR EAX,EDX                         ; 00452981
    SUB EAX,EDX                         ; 00452983
    MOV EDX,dword ptr [0x0152bc18]      ; 00452985 | DAT_0152bc18
    CMP EAX,dword ptr [EDX + 0xc]       ; 0045298b
    JGE 0x004529eb                      ; 0045298e
        ;   XREF to: 004529eb (CONDITIONAL_JUMP)  ; LAB_004529eb
    IMUL ECX,ECX                        ; 00452990
    IMUL EBX,EBX                        ; 00452993
    IMUL EAX,EAX                        ; 00452996
    ADD ECX,EBX                         ; 00452999
    ADD ECX,EAX                         ; 0045299b
    MOV EBP,dword ptr [EDX + 0x10]      ; 0045299d
    MOV dword ptr [ESP + 0x58],ECX      ; 004529a0
    CMP ECX,EBP                         ; 004529a4
    JGE 0x004529eb                      ; 004529a6
        ;   XREF to: 004529eb (CONDITIONAL_JUMP)  ; LAB_004529eb
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004529a8
    MOV ESI,dword ptr [ESP + 0x70]      ; 004529ac
    MOV EBX,dword ptr [ESP + 0xc]       ; 004529b0
    MOV EAX,[0x0152bc1c]                ; 004529b4 | DAT_0152bc1c
    MOV ESI,dword ptr [ESI]             ; 004529b9
    TEST EAX,EAX                        ; 004529bb
    JNZ 0x00452b5d                      ; 004529bd
        ;   XREF to: 00452b5d (CONDITIONAL_JUMP)  ; LAB_00452b5d
    MOV EAX,[0x0152bc18]                ; 004529c3 | DAT_0152bc18
        ;   Label: LAB_004529c3
    MOV ECX,dword ptr [ESP + 0x58]      ; 004529c8
    MOV EDX,dword ptr [EAX + 0x10]      ; 004529cc
    SUB EDX,ECX                         ; 004529cf
    SAR EDX,0x10                        ; 004529d1
    IMUL EDX,EDX,0x3f                   ; 004529d4
    MOV ECX,dword ptr [EAX + 0x10]      ; 004529d7
    SAR ECX,0x10                        ; 004529da
    MOV EAX,EDX                         ; 004529dd
    SAR EDX,0x1f                        ; 004529df
    IDIV ECX                            ; 004529e2
    MOV byte ptr [ESP + 0x80],AL        ; 004529e4
    MOV EDX,dword ptr [ESP + 0x64]      ; 004529eb
        ;   Label: LAB_004529eb
    MOV EDI,dword ptr [ESP + 0x68]      ; 004529ef
    MOV EBP,dword ptr [ESP + 0x74]      ; 004529f3
    MOV AL,byte ptr [ESP + 0x80]        ; 004529f7
    MOV ESI,dword ptr [ESP + 0x70]      ; 004529fe
    MOV CL,byte ptr [0x01323d00]        ; 00452a02 | DAT_01323d00
    LEA EBX,[EDX + 0x1]                 ; 00452a08
    ADD EDI,0x4                         ; 00452a0b
    ADD EBP,0xc                         ; 00452a0e
    MOV byte ptr [EDX],AL               ; 00452a11
    MOV EAX,0x1                         ; 00452a13
    MOV EDX,dword ptr [ESP + 0x44]      ; 00452a18
    SHL EAX,CL                          ; 00452a1c
    MOV dword ptr [ESP + 0x64],EBX      ; 00452a1e
    SHL EAX,0x2                         ; 00452a22
    MOV dword ptr [ESP + 0x68],EDI      ; 00452a25
    ADD ESI,EAX                         ; 00452a29
    MOV EAX,dword ptr [ESP + 0xc]       ; 00452a2b
    MOV dword ptr [ESP + 0x74],EBP      ; 00452a2f
    INC EAX                             ; 00452a33
    MOV dword ptr [ESP + 0x70],ESI      ; 00452a34
    MOV dword ptr [ESP + 0xc],EAX       ; 00452a38
    CMP EAX,EDX                         ; 00452a3c
    JL 0x0045290f                       ; 00452a3e
        ;   XREF to: 0045290f (CONDITIONAL_JUMP)  ; LAB_0045290f
    IMUL EBX,dword ptr [ESP + 0x4c],0x140 ; 00452a44
        ;   Label: LAB_00452a44
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00452a4c
    MOV ECX,dword ptr [ESP + 0x38]      ; 00452a50
    SHL EDX,0x2                         ; 00452a54
    ADD EDX,ECX                         ; 00452a57
    ADD ECX,0x784                       ; 00452a59
    MOV EAX,dword ptr [EDX + 0x4]       ; 00452a5f
    ADD ECX,EBX                         ; 00452a62
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00452a64
    ADD ECX,EAX                         ; 00452a6a
    CMP EAX,EDX                         ; 00452a6c
    JGE 0x00452a79                      ; 00452a6e
        ;   XREF to: 00452a79 (CONDITIONAL_JUMP)  ; LAB_00452a79
    CMP byte ptr [ECX],0x0              ; 00452a70
        ;   Label: LAB_00452a70
    JZ 0x00452c18                       ; 00452a73
        ;   XREF to: 00452c18 (CONDITIONAL_JUMP)  ; LAB_00452c18
    IMUL ECX,dword ptr [ESP + 0x4c],0x140 ; 00452a79
        ;   Label: LAB_00452a79
    MOV EBX,dword ptr [ESP + 0x38]      ; 00452a81
    ADD EBX,0x784                       ; 00452a85
    ADD ECX,EBX                         ; 00452a8b
    ADD ECX,EDX                         ; 00452a8d
    DEC ECX                             ; 00452a8f
    CMP EDX,EAX                         ; 00452a90
    JLE 0x00452a9d                      ; 00452a92
        ;   XREF to: 00452a9d (CONDITIONAL_JUMP)  ; LAB_00452a9d
    CMP byte ptr [ECX],0x0              ; 00452a94
        ;   Label: LAB_00452a94
    JZ 0x00452c27                       ; 00452a97
        ;   XREF to: 00452c27 (CONDITIONAL_JUMP)  ; LAB_00452c27
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00452a9d
        ;   Label: LAB_00452a9d
    MOV EBP,dword ptr [ESP + 0x38]      ; 00452aa1
    SHL ECX,0x2                         ; 00452aa5
    ADD ECX,EBP                         ; 00452aa8
    MOV dword ptr [ECX + 0x4],EAX       ; 00452aaa
    MOV EAX,dword ptr [ESP + 0x14]      ; 00452aad
    PUSH EAX                            ; 00452ab1
    MOV EAX,dword ptr [ESP + 0x44]      ; 00452ab2
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00452ab6
    MOV EDX,dword ptr [EAX*0x4 + 0x14dee10] ; 00452abc
    PUSH EDX                            ; 00452ac3
    MOV ECX,dword ptr [EAX*0x4 + 0x14dea50] ; 00452ac4
    PUSH ECX                            ; 00452acb
    PUSH EAX                            ; 00452acc
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450 ; 00452acd
        ;   XREF to: 00452450 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450()
    ADD ESP,0x10                        ; 00452ad2
    MOV ESI,dword ptr [ESP + 0x28]      ; 00452ad5
        ;   Label: LAB_00452ad5
    MOV EDI,dword ptr [ESP + 0x24]      ; 00452ad9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00452add
    MOV ECX,dword ptr [ESP + 0x34]      ; 00452ae1
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00452ae5
    ADD ESI,0x140                       ; 00452ae9
    ADD EDI,0x500                       ; 00452aef
    MOV EDX,dword ptr [EAX*0x4 + 0x14dea50] ; 00452af5
    ADD EBP,0xf00                       ; 00452afc
    MOV dword ptr [ECX + 0x4],EDX       ; 00452b02
    MOV EDX,dword ptr [ESP + 0x40]      ; 00452b05
    MOV EAX,dword ptr [EAX*0x4 + 0x14dee10] ; 00452b09
    INC EDX                             ; 00452b10
    MOV dword ptr [ECX + 0x3c4],EAX     ; 00452b11
    LEA EAX,[ECX + 0x4]                 ; 00452b17
    MOV dword ptr [ESP + 0x40],EDX      ; 00452b1a
    MOV dword ptr [ESP + 0x34],EAX      ; 00452b1e
    MOV EAX,EDX                         ; 00452b22
    MOV EDX,dword ptr [ESP + 0x98]      ; 00452b24
    MOV dword ptr [ESP + 0x28],ESI      ; 00452b2b
    MOV dword ptr [ESP + 0x24],EDI      ; 00452b2f
    MOV ECX,dword ptr [EDX + 0x154]     ; 00452b33
    MOV dword ptr [ESP + 0x2c],EBP      ; 00452b39 | DAT_00858bd8
    CMP EAX,ECX                         ; 00452b3d
    JL 0x00452875                       ; 00452b3f
        ;   XREF to: 00452875 (CONDITIONAL_JUMP)  ; LAB_00452875
    MOV EAX,dword ptr [ESP + 0x14]      ; 00452b45
        ;   Label: LAB_00452b45
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00452b49
    MOV dword ptr [EAX],EDX             ; 00452b50
    ADD ESP,0x84                        ; 00452b52
    POP EBP                             ; 00452b58
    POP EDI                             ; 00452b59
    POP ESI                             ; 00452b5a
    POP EBX                             ; 00452b5b
    RET                                 ; 00452b5c
    MOV EBP,dword ptr [0x0152bc20]      ; 00452b5d | DAT_0152bc20
        ;   Label: LAB_00452b5d
    MOV EDI,dword ptr [0x0152bc24]      ; 00452b63 | DAT_0152bc24
    MOV EAX,[0x0152bc28]                ; 00452b69 | DAT_0152bc28
    XOR EDX,EDX                         ; 00452b6e
    MOV dword ptr [ESP + 0x50],EAX      ; 00452b70
    MOV dword ptr [ESP + 0x54],EDX      ; 00452b74
    TEST ESI,ESI                        ; 00452b78
    JZ 0x00452be5                       ; 00452b7a
        ;   XREF to: 00452be5 (CONDITIONAL_JUMP)  ; LAB_00452be5
    MOV EAX,0x7fffffff                  ; 00452b7c
    MOV EDX,EAX                         ; 00452b81
    SAR EDX,0x1f                        ; 00452b83
    IDIV ESI                            ; 00452b86
    MOV ESI,EAX                         ; 00452b88
    MOV EDX,dword ptr [ESP + 0x50]      ; 00452b8a
        ;   Label: LAB_00452b8a
    SUB EDX,ESI                         ; 00452b8e
    MOV EAX,EDX                         ; 00452b90
    SAR EDX,0x1f                        ; 00452b92
    SHL EDX,0x4                         ; 00452b95
    SBB EAX,EDX                         ; 00452b98
    SAR EAX,0x4                         ; 00452b9a
    SUB EBP,EBX                         ; 00452b9d
    SUB EDI,ECX                         ; 00452b9f
    SHL EBP,0x4                         ; 00452ba1
    SHL EDI,0x4                         ; 00452ba4
    SHL EBX,0x8                         ; 00452ba7
    SHL ECX,0x8                         ; 00452baa
    MOV dword ptr [ESP + 0x78],EBP      ; 00452bad
    MOV dword ptr [ESP + 0x7c],EDI      ; 00452bb1
    MOV EBP,EAX                         ; 00452bb5
    MOV EDX,ESI                         ; 00452bb7
    MOV EAX,0x10                        ; 00452bb9
    MOV ESI,ECX                         ; 00452bbe
        ;   Label: LAB_00452bbe
    SAR ESI,0x8                         ; 00452bc0
    IMUL ESI,ESI,0x500                  ; 00452bc3
    MOV EDI,EBX                         ; 00452bc9
    SAR EDI,0x8                         ; 00452bcb
    MOV EDI,dword ptr [ESI + EDI*0x4 + 0xb36198] ; 00452bce
    LEA ESI,[EDX + -0x80]               ; 00452bd5
    CMP EDI,ESI                         ; 00452bd8
    JGE 0x00452bec                      ; 00452bda
        ;   XREF to: 00452bec (CONDITIONAL_JUMP)  ; LAB_00452bec
    TEST EAX,EAX                        ; 00452bdc
    JNZ 0x00452c08                      ; 00452bde
        ;   XREF to: 00452c08 (CONDITIONAL_JUMP)  ; LAB_00452c08
    JMP 0x004529c3                      ; 00452be0
        ;   XREF to: 004529c3 (UNCONDITIONAL_JUMP)  ; LAB_004529c3
    MOV ESI,0x7fffffff                  ; 00452be5
        ;   Label: LAB_00452be5
    JMP 0x00452b8a                      ; 00452bea
        ;   XREF to: 00452b8a (UNCONDITIONAL_JUMP)  ; LAB_00452b8a
    MOV ESI,dword ptr [ESP + 0x78]      ; 00452bec
        ;   Label: LAB_00452bec
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00452bf0
    DEC EAX                             ; 00452bf4
    ADD EDX,EBP                         ; 00452bf5
    ADD EBX,ESI                         ; 00452bf7
    ADD ECX,EDI                         ; 00452bf9
    TEST EAX,EAX                        ; 00452bfb
    JG 0x00452bbe                       ; 00452bfd
        ;   XREF to: 00452bbe (CONDITIONAL_JUMP)  ; LAB_00452bbe
    TEST EAX,EAX                        ; 00452bff
    JNZ 0x00452c08                      ; 00452c01
        ;   XREF to: 00452c08 (CONDITIONAL_JUMP)  ; LAB_00452c08
    JMP 0x004529c3                      ; 00452c03
        ;   XREF to: 004529c3 (UNCONDITIONAL_JUMP)  ; LAB_004529c3
    CMP dword ptr [ESP + 0x54],0x0      ; 00452c08
        ;   Label: LAB_00452c08
    JNZ 0x004529c3                      ; 00452c0d
        ;   XREF to: 004529c3 (CONDITIONAL_JUMP)  ; LAB_004529c3
    JMP 0x004529eb                      ; 00452c13
        ;   XREF to: 004529eb (UNCONDITIONAL_JUMP)  ; LAB_004529eb
    INC EAX                             ; 00452c18
        ;   Label: LAB_00452c18
    INC ECX                             ; 00452c19
    CMP EAX,EDX                         ; 00452c1a
    JL 0x00452a70                       ; 00452c1c
        ;   XREF to: 00452a70 (CONDITIONAL_JUMP)  ; LAB_00452a70
    JMP 0x00452a79                      ; 00452c22
        ;   XREF to: 00452a79 (UNCONDITIONAL_JUMP)  ; LAB_00452a79
    DEC EDX                             ; 00452c27
        ;   Label: LAB_00452c27
    DEC ECX                             ; 00452c28
    CMP EDX,EAX                         ; 00452c29
    JG 0x00452a94                       ; 00452c2b
        ;   XREF to: 00452a94 (CONDITIONAL_JUMP)  ; LAB_00452a94
    JMP 0x00452a9d                      ; 00452c31
        ;   XREF to: 00452a9d (UNCONDITIONAL_JUMP)  ; LAB_00452a9d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00452c36
        ;   Label: LAB_00452c36
    MOV EAX,dword ptr [EAX + 0x14dea50] ; 00452c3a
    MOV dword ptr [ESP + 0x6c],EAX      ; 00452c40
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00452c44
    IMUL EBX,ESI,0xc                    ; 00452c48
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00452c4b
    MOV EDI,dword ptr [ESP + 0x20]      ; 00452c4f
    MOV EBP,dword ptr [ESP + 0x18]      ; 00452c53
    MOV EAX,dword ptr [EAX + 0x14dee10] ; 00452c57
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00452c5d
    MOV dword ptr [ESP + 0x48],EAX      ; 00452c61
    ADD EBP,ESI                         ; 00452c65
    LEA EAX,[ESI*0x4 + 0x0]             ; 00452c67
    MOV CL,byte ptr [0x01323d00]        ; 00452c6e | DAT_01323d00
    ADD EDX,EAX                         ; 00452c74
    MOV EAX,dword ptr [ESP + 0x30]      ; 00452c76
    MOV dword ptr [ESP + 0x60],EDX      ; 00452c7a
    MOV EDX,ESI                         ; 00452c7e
    SHL EAX,CL                          ; 00452c80
    SHL EDX,CL                          ; 00452c82
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 00452c84 | DAT_01c4480c
    SHL EDX,0x2                         ; 00452c8b
    ADD EBX,EDI                         ; 00452c8e
    ADD EAX,EDX                         ; 00452c90
    MOV EDX,dword ptr [ESP + 0x48]      ; 00452c92
    MOV dword ptr [ESP + 0x5c],EAX      ; 00452c96
    CMP ESI,EDX                         ; 00452c9a
    JGE 0x00452799                      ; 00452c9c
        ;   XREF to: 00452799 (CONDITIONAL_JUMP)  ; LAB_00452799
        ;   Label: LAB_00452c9c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00452ca2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00452ca6
    MOV ECX,dword ptr [EDX]             ; 00452caa
    CMP ECX,dword ptr [EAX]             ; 00452cac
    JBE 0x00452d33                      ; 00452cae
        ;   XREF to: 00452d33 (CONDITIONAL_JUMP)  ; LAB_00452d33
    MOV ESI,dword ptr [0x0152bc18]      ; 00452cb4 | DAT_0152bc18
    MOV ECX,dword ptr [EBX]             ; 00452cba | DAT_00858bd8 | DAT_00858be4
    MOV EDI,dword ptr [ESI]             ; 00452cbc
    SUB ECX,EDI                         ; 00452cbe
    MOV EAX,ECX                         ; 00452cc0
    CDQ                                 ; 00452cc2
    XOR EAX,EDX                         ; 00452cc3
    SUB EAX,EDX                         ; 00452cc5
    CMP EAX,dword ptr [ESI + 0xc]       ; 00452cc7
    JGE 0x00452d33                      ; 00452cca
        ;   XREF to: 00452d33 (CONDITIONAL_JUMP)  ; LAB_00452d33
    MOV EDI,dword ptr [0x0152bc18]      ; 00452ccc | DAT_0152bc18
    MOV ESI,dword ptr [EBX + 0x4]       ; 00452cd2 | DAT_00858bdc
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452cd5
    SUB ESI,EAX                         ; 00452cd8
    MOV EAX,ESI                         ; 00452cda
    CDQ                                 ; 00452cdc
    XOR EAX,EDX                         ; 00452cdd
    SUB EAX,EDX                         ; 00452cdf
    CMP EAX,dword ptr [EDI + 0xc]       ; 00452ce1
    JGE 0x00452d33                      ; 00452ce4
        ;   XREF to: 00452d33 (CONDITIONAL_JUMP)  ; LAB_00452d33
    MOV EAX,[0x0152bc18]                ; 00452ce6 | DAT_0152bc18
    MOV EDI,dword ptr [EBX + 0x8]       ; 00452ceb | DAT_00858be0
    SUB EDI,dword ptr [EAX + 0x8]       ; 00452cee
    MOV dword ptr [ESP + 0x10],EAX      ; 00452cf1
    MOV EAX,EDI                         ; 00452cf5
    CDQ                                 ; 00452cf7
    XOR EAX,EDX                         ; 00452cf8
    SUB EAX,EDX                         ; 00452cfa
    MOV EDX,dword ptr [ESP + 0x10]      ; 00452cfc
    CMP EAX,dword ptr [EDX + 0xc]       ; 00452d00
    JGE 0x00452d33                      ; 00452d03
        ;   XREF to: 00452d33 (CONDITIONAL_JUMP)  ; LAB_00452d33
    IMUL ESI,ESI                        ; 00452d05
    IMUL ECX,ECX                        ; 00452d08
    MOV EDX,EDI                         ; 00452d0b
    IMUL EDX,EDI                        ; 00452d0d
    ADD ECX,ESI                         ; 00452d10
    MOV EAX,[0x0152bc18]                ; 00452d12 | DAT_0152bc18
    ADD EDX,ECX                         ; 00452d17
    MOV ECX,dword ptr [EAX + 0x10]      ; 00452d19
    CMP EDX,ECX                         ; 00452d1c
    JGE 0x00452d33                      ; 00452d1e
        ;   XREF to: 00452d33 (CONDITIONAL_JUMP)  ; LAB_00452d33
    SUB ECX,EDX                         ; 00452d20
    SAR ECX,0x10                        ; 00452d22
    MOV EDX,dword ptr [EAX + 0x14]      ; 00452d25
    MOV EAX,ECX                         ; 00452d28
    IMUL EDX                            ; 00452d2a
    SHRD EAX,EDX,0x10                   ; 00452d2c
    ADD byte ptr [EBP],AL               ; 00452d30
    MOV EAX,0x1                         ; 00452d33
        ;   Label: LAB_00452d33
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00452d38
    MOV EDI,dword ptr [ESP + 0x60]      ; 00452d3c
    MOV EDX,dword ptr [ESP + 0x48]      ; 00452d40
    MOV CL,byte ptr [0x01323d00]        ; 00452d44 | DAT_01323d00
    ADD EBX,0xc                         ; 00452d4a
    SHL EAX,CL                          ; 00452d4d
    INC EBP                             ; 00452d4f
    SHL EAX,0x2                         ; 00452d50
    ADD EDI,0x4                         ; 00452d53
    ADD ESI,EAX                         ; 00452d56
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00452d58
    MOV dword ptr [ESP + 0x60],EDI      ; 00452d5c
    INC EAX                             ; 00452d60
    MOV dword ptr [ESP + 0x5c],ESI      ; 00452d61
    MOV dword ptr [ESP + 0x6c],EAX      ; 00452d65
    CMP EAX,EDX                         ; 00452d69
    JMP 0x00452c9c                      ; 00452d6b
        ;   XREF to: 00452c9c (UNCONDITIONAL_JUMP)  ; LAB_00452c9c

