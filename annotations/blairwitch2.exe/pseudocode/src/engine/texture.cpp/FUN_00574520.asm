; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574520(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_texture.cpp_FUN_00574ce0 at 00574d2a
;   engine_texture.cpp_FUN_00574e00 at 00574e68
;   engine_texture.cpp_FUN_00574ea0 at 00574f1b
;   engine_texture.cpp_FUN_00574f60 at 00574fd1
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141c8
;   undefined1 DAT_0061c868
;   undefined1 DAT_0061c888
;   undefined4 DAT_0061c8a8
;   undefined4 DAT_0061c8c8
;   undefined4 DAT_01c35210
;   undefined4 DAT_01c35214
;   undefined4 DAT_01c35218
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574520
        ;   Label: engine_texture.cpp_FUN_00574520
    PUSH ESI                            ; 00574521
    PUSH EDI                            ; 00574522
    PUSH EBP                            ; 00574523
    SUB ESP,0x10                        ; 00574524
    MOV ECX,dword ptr [ESP + 0x28]      ; 00574527
    MOV ECX,dword ptr [ECX + 0x4]       ; 0057452b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0057452e
    SUB EAX,ECX                         ; 00574535
    MOV ECX,EAX                         ; 00574537
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574539
    SHL ECX,0x5                         ; 0057453d
    ADD EAX,0x4                         ; 00574540
    ADD EAX,ECX                         ; 00574543
    MOV dword ptr [ESP + 0x8],EAX       ; 00574545
    MOV EAX,dword ptr [EAX]             ; 00574549
    MOV [0x006141c8],EAX                ; 0057454b | DAT_006141c8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574550
    MOV EDX,dword ptr [EAX + 0x50]      ; 00574554
    TEST EDX,EDX                        ; 00574557
    JNZ 0x00574566                      ; 00574559
        ;   XREF to: 00574566 (CONDITIONAL_JUMP)  ; LAB_00574566
    CMP dword ptr [ESP + 0x2c],0x2      ; 0057455b
    JNZ 0x005746ba                      ; 00574560
        ;   XREF to: 005746ba (CONDITIONAL_JUMP)  ; LAB_005746ba
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574566
        ;   Label: LAB_00574566
    XOR ESI,ESI                         ; 0057456a
    MOV EBP,0x1                         ; 0057456c
    MOV dword ptr [0x01c37774],ESI      ; 00574571 | DAT_01c37774
    MOV dword ptr [0x01c35210],ESI      ; 00574577 | DAT_01c35210
    MOV EAX,dword ptr [EAX + 0x50]      ; 0057457d
    MOV dword ptr [0x01c37784],EBP      ; 00574580 | DAT_01c37784
    MOV [0x01c37770],EAX                ; 00574586 | DAT_01c37770
    CMP dword ptr [0x01c37788],0x0      ; 0057458b | DAT_01c37788
        ;   Label: LAB_0057458b
    JNZ 0x00574601                      ; 00574592
        ;   XREF to: 00574601 (CONDITIONAL_JUMP)  ; LAB_00574601
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574594
    MOV EDX,dword ptr [EAX + 0x50]      ; 00574598
    TEST EDX,EDX                        ; 0057459b
    JNZ 0x00574601                      ; 0057459d
        ;   XREF to: 00574601 (CONDITIONAL_JUMP)  ; LAB_00574601
    MOV ECX,dword ptr [0x006141c0]      ; 0057459f | DAT_006141c0
    MOV EBX,dword ptr [0x01c35210]      ; 005745a5 | DAT_01c35210
    CMP ECX,0x20                        ; 005745ab
    JNZ 0x005746f6                      ; 005745ae
        ;   XREF to: 005746f6 (CONDITIONAL_JUMP)  ; LAB_005746f6
    MOV EDX,dword ptr [0x006141c0]      ; 005745b4 | DAT_006141c0
    XOR EAX,EAX                         ; 005745ba
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 005745bc
        ;   Label: LAB_005745bc
    MOVZX EDI,byte ptr [EBX]            ; 005745c0
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 005745c3
    CMP EDX,0x20                        ; 005745c7
    JNZ 0x005746e5                      ; 005745ca
        ;   XREF to: 005746e5 (CONDITIONAL_JUMP)  ; LAB_005746e5
    MOV CL,byte ptr [0x01c35814]        ; 005745d0 | DAT_01c35814
    SHL EDI,CL                          ; 005745d6
    MOV CL,byte ptr [0x01c35820]        ; 005745d8 | DAT_01c35820
    SHL EBP,CL                          ; 005745de
    MOV CL,byte ptr [0x01c3582c]        ; 005745e0 | DAT_01c3582c
    SHL ESI,CL                          ; 005745e6
    OR EDI,EBP                          ; 005745e8
    MOV ECX,ESI                         ; 005745ea
    OR ECX,EDI                          ; 005745ec
    ADD EAX,0x4                         ; 005745ee
        ;   Label: LAB_005745ee
    ADD EBX,0x3                         ; 005745f1
    MOV dword ptr [EAX + 0x1c35210],ECX ; 005745f4 | DAT_01c35214 | DAT_01c35218
    CMP EAX,0x400                       ; 005745fa
    JNZ 0x005745bc                      ; 005745ff
        ;   XREF to: 005745bc (CONDITIONAL_JUMP)  ; LAB_005745bc
    MOV EAX,[0x006141c8]                ; 00574601 | DAT_006141c8
        ;   Label: LAB_00574601
    CMP EAX,0x100                       ; 00574606
    JNC 0x0057492b                      ; 0057460b
        ;   XREF to: 0057492b (CONDITIONAL_JUMP)  ; LAB_0057492b
    CMP EAX,0x40                        ; 00574611
    JNC 0x0057495e                      ; 00574614
        ;   XREF to: 0057495e (CONDITIONAL_JUMP)  ; LAB_0057495e
    CMP EAX,0x20                        ; 0057461a
    JNZ 0x00574655                      ; 0057461d
        ;   XREF to: 00574655 (CONDITIONAL_JUMP)  ; LAB_00574655
    MOV EDI,0x13                        ; 0057461f
    MOV EBP,0xe                         ; 00574624
    MOV EAX,0x1f                        ; 00574629
    MOV EDX,0x3e0                       ; 0057462e
    MOV ESI,0x5                         ; 00574633
    MOV dword ptr [0x0061c868],EDI      ; 00574638 | DAT_0061c868
    MOV dword ptr [0x0061c888],EBP      ; 0057463e | DAT_0061c888
    MOV [0x0061c8a8],EAX                ; 00574644 | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],EDX      ; 00574649 | DAT_0061c8c8
    MOV dword ptr [0x01c37780],ESI      ; 0057464f | DAT_01c37780
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574655
        ;   Label: LAB_00574655
    MOV ECX,dword ptr [ESP + 0x8]       ; 00574659
    MOV EAX,dword ptr [EAX + 0x18008]   ; 0057465d
    MOV dword ptr [ECX + 0x54],EAX      ; 00574663
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574666
    MOV ECX,dword ptr [EAX + 0x18008]   ; 0057466a
    INC ECX                             ; 00574670
    MOV EBX,dword ptr [0x01c37788]      ; 00574671 | DAT_01c37788
    MOV dword ptr [EAX + 0x18008],ECX   ; 00574677
    TEST EBX,EBX                        ; 0057467d
    JZ 0x005746b2                       ; 0057467f
        ;   XREF to: 005746b2 (CONDITIONAL_JUMP)  ; LAB_005746b2
    CMP dword ptr [ESP + 0x2c],0x0      ; 00574681
    JNZ 0x00574999                      ; 00574686
        ;   XREF to: 00574999 (CONDITIONAL_JUMP)  ; LAB_00574999
    CMP dword ptr [0x01c37784],0x0      ; 0057468c | DAT_01c37784
    JZ 0x00574970                       ; 00574693
        ;   XREF to: 00574970 (CONDITIONAL_JUMP)  ; LAB_00574970
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574699
    MOV EBX,dword ptr [EAX + 0x50]      ; 0057469d
    PUSH EBX                            ; 005746a0
    MOV ESI,dword ptr [EAX]             ; 005746a1
    PUSH ESI                            ; 005746a3
    MOV EDI,dword ptr [ESP + 0x30]      ; 005746a4
    PUSH EDI                            ; 005746a8
    CALL dword ptr [0x0264bbe8]         ; 005746a9 | DAT_0264bbe8
    ADD ESP,0xc                         ; 005746af
    ADD ESP,0x10                        ; 005746b2
        ;   Label: LAB_005746b2
    POP EBP                             ; 005746b5
    POP EDI                             ; 005746b6
    POP ESI                             ; 005746b7
    POP EBX                             ; 005746b8
    RET                                 ; 005746b9
    MOV EAX,dword ptr [EAX + 0x44]      ; 005746ba
        ;   Label: LAB_005746ba
    MOV [0x01c37770],EAX                ; 005746bd | DAT_01c37770
    MOV EAX,dword ptr [ESP + 0x8]       ; 005746c2
    MOV EAX,dword ptr [EAX + 0x48]      ; 005746c6
    MOV [0x01c37774],EAX                ; 005746c9 | DAT_01c37774
    MOV EAX,dword ptr [ESP + 0x8]       ; 005746ce
    MOV EAX,dword ptr [EAX + 0x4c]      ; 005746d2
    MOV dword ptr [0x01c37784],EDX      ; 005746d5 | DAT_01c37784
    MOV [0x01c35210],EAX                ; 005746db | DAT_01c35210
    JMP 0x0057458b                      ; 005746e0
        ;   XREF to: 0057458b (UNCONDITIONAL_JUMP)  ; LAB_0057458b
    MOV ECX,EDI                         ; 005746e5
        ;   Label: LAB_005746e5
    SHL EBP,0x8                         ; 005746e7
    SHL ECX,0x10                        ; 005746ea
    OR ECX,EBP                          ; 005746ed
    OR ECX,ESI                          ; 005746ef
    JMP 0x005745ee                      ; 005746f1
        ;   XREF to: 005745ee (UNCONDITIONAL_JUMP)  ; LAB_005745ee
    MOV dword ptr [ESP + 0xc],EDX       ; 005746f6
        ;   Label: LAB_005746f6
    XOR ESI,ESI                         ; 005746fa
    XOR EAX,EAX                         ; 005746fc
        ;   Label: LAB_005746fc
    MOV EDI,dword ptr [0x01c35818]      ; 005746fe | DAT_01c35818
    MOV AL,byte ptr [EBX]               ; 00574704
    XOR EDX,EDX                         ; 00574706
    MOV dword ptr [ESP],EAX             ; 00574708
    DIV EDI                             ; 0057470b
    XOR ECX,ECX                         ; 0057470d
    MOV CL,byte ptr [EBX + 0x1]         ; 0057470f
    MOV dword ptr [ESP],EAX             ; 00574712
    XOR EDX,EDX                         ; 00574715
    MOV EAX,ECX                         ; 00574717
    DIV dword ptr [0x01c35824]          ; 00574719 | DAT_01c35824
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 0057471f
    MOV dword ptr [ESP + 0x4],EBP       ; 00574723
    MOV EDI,EAX                         ; 00574727
    XOR EDX,EDX                         ; 00574729
    MOV EAX,EBP                         ; 0057472b
    DIV dword ptr [0x01c35830]          ; 0057472d | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 00574733 | DAT_01c35814
    MOV dword ptr [ESP + 0x4],EAX       ; 00574739
    MOV EAX,dword ptr [ESP]             ; 0057473d
    SHL EAX,CL                          ; 00574740
    MOV CL,byte ptr [0x01c35820]        ; 00574742 | DAT_01c35820
    SHL EDI,CL                          ; 00574748
    MOV CL,byte ptr [0x01c3582c]        ; 0057474a | DAT_01c3582c
    OR EDI,EAX                          ; 00574750
    MOV EAX,dword ptr [ESP + 0x4]       ; 00574752
    SHL EAX,CL                          ; 00574756
    OR EAX,EDI                          ; 00574758
    MOV word ptr [ESI + 0x1c35614],AX   ; 0057475a
    MOV EDX,dword ptr [0x006141c0]      ; 00574761 | DAT_006141c0
    MOVZX EDI,byte ptr [EBX + 0x2]      ; 00574767
    XOR EAX,EAX                         ; 0057476b
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0057476d
    MOV AL,byte ptr [EBX]               ; 00574771
    CMP EDX,0x20                        ; 00574773
    JNZ 0x005747be                      ; 00574776
        ;   XREF to: 005747be (CONDITIONAL_JUMP)  ; LAB_005747be
    MOV CL,byte ptr [0x01c35814]        ; 00574778 | DAT_01c35814
    SHL EAX,CL                          ; 0057477e
    MOV CL,byte ptr [0x01c35820]        ; 00574780 | DAT_01c35820
    SHL EBP,CL                          ; 00574786
    MOV CL,byte ptr [0x01c3582c]        ; 00574788 | DAT_01c3582c
    SHL EDI,CL                          ; 0057478e
    OR EAX,EBP                          ; 00574790
    MOV ECX,EDI                         ; 00574792
    OR ECX,EAX                          ; 00574794
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574796
        ;   Label: LAB_00574796
    ADD EBX,0x3                         ; 0057479a
    MOV dword ptr [EAX + 0x1c35214],ECX ; 0057479d | DAT_01c35214
    LEA ECX,[EAX + 0x4]                 ; 005747a3
    ADD ESI,0x2                         ; 005747a6
    MOV dword ptr [ESP + 0xc],ECX       ; 005747a9
    CMP ESI,0x200                       ; 005747ad
    JZ 0x00574601                       ; 005747b3
        ;   XREF to: 00574601 (CONDITIONAL_JUMP)  ; LAB_00574601
    JMP 0x005746fc                      ; 005747b9
        ;   XREF to: 005746fc (UNCONDITIONAL_JUMP)  ; LAB_005746fc
    MOV ECX,EBP                         ; 005747be
        ;   Label: LAB_005747be
    SHL EAX,0x10                        ; 005747c0
    SHL ECX,0x8                         ; 005747c3
    OR ECX,EAX                          ; 005747c6
    OR ECX,EDI                          ; 005747c8
    JMP 0x00574796                      ; 005747ca
        ;   XREF to: 00574796 (UNCONDITIONAL_JUMP)  ; LAB_00574796
    MOV EBX,0xd                         ; 005747cc
        ;   Label: LAB_005747cc
    MOV ESI,0x2                         ; 005747d1
    MOV EDI,0x7ff                       ; 005747d6
    MOV EBP,0x3ff800                    ; 005747db
    MOV ECX,0xb                         ; 005747e0
    MOV dword ptr [0x0061c868],EBX      ; 005747e5 | DAT_0061c868
    MOV dword ptr [0x0061c888],ESI      ; 005747eb | DAT_0061c888
    MOV dword ptr [0x0061c8a8],EDI      ; 005747f1 | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],EBP      ; 005747f7 | DAT_0061c8c8
    MOV dword ptr [0x01c37780],ECX      ; 005747fd | DAT_01c37780
    JMP 0x00574655                      ; 00574803
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV EDX,0xe                         ; 00574808
        ;   Label: LAB_00574808
    MOV ECX,0x4                         ; 0057480d
    MOV EBX,0x3ff                       ; 00574812
    MOV ESI,0xffc00                     ; 00574817
    MOV EAX,0xa                         ; 0057481c
    MOV dword ptr [0x0061c868],EDX      ; 00574821 | DAT_0061c868
    MOV dword ptr [0x0061c888],ECX      ; 00574827 | DAT_0061c888
    MOV dword ptr [0x0061c8a8],EBX      ; 0057482d | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],ESI      ; 00574833 | DAT_0061c8c8
    MOV [0x01c37780],EAX                ; 00574839 | DAT_01c37780
    JMP 0x00574655                      ; 0057483e
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV EBP,0xf                         ; 00574843
        ;   Label: LAB_00574843
    MOV EAX,0x6                         ; 00574848
    MOV EDX,0x1ff                       ; 0057484d
    MOV ECX,0x3fe00                     ; 00574852
    MOV EDI,0x9                         ; 00574857
    MOV dword ptr [0x0061c868],EBP      ; 0057485c | DAT_0061c868
    MOV [0x0061c888],EAX                ; 00574862 | DAT_0061c888
    MOV dword ptr [0x0061c8a8],EDX      ; 00574867 | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],ECX      ; 0057486d | DAT_0061c8c8
    MOV dword ptr [0x01c37780],EDI      ; 00574873 | DAT_01c37780
    JMP 0x00574655                      ; 00574879
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV ESI,0x10                        ; 0057487e
        ;   Label: LAB_0057487e
    MOV EBX,0x8                         ; 00574883
    MOV EBP,0xff                        ; 00574888
    MOV EAX,0xff00                      ; 0057488d
    MOV dword ptr [0x0061c868],ESI      ; 00574892 | DAT_0061c868
    MOV dword ptr [0x0061c888],EBX      ; 00574898 | DAT_0061c888
    MOV dword ptr [0x0061c8a8],EBP      ; 0057489e | DAT_0061c8a8
    MOV [0x0061c8c8],EAX                ; 005748a4 | DAT_0061c8c8
    MOV dword ptr [0x01c37780],EBX      ; 005748a9 | DAT_01c37780
    JMP 0x00574655                      ; 005748af
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV ECX,0x11                        ; 005748b4
        ;   Label: LAB_005748b4
    MOV EBX,0xa                         ; 005748b9
    MOV ESI,0x7f                        ; 005748be
    MOV EDI,0x3f80                      ; 005748c3
    MOV EDX,0x7                         ; 005748c8
    MOV dword ptr [0x0061c868],ECX      ; 005748cd | DAT_0061c868
    MOV dword ptr [0x0061c888],EBX      ; 005748d3 | DAT_0061c888
    MOV dword ptr [0x0061c8a8],ESI      ; 005748d9 | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],EDI      ; 005748df | DAT_0061c8c8
    MOV dword ptr [0x01c37780],EDX      ; 005748e5 | DAT_01c37780
    JMP 0x00574655                      ; 005748eb
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV EAX,0x12                        ; 005748f0
        ;   Label: LAB_005748f0
    MOV EDX,0xc                         ; 005748f5
    MOV ECX,0x3f                        ; 005748fa
    MOV EBX,0xfc0                       ; 005748ff
    MOV EBP,0x6                         ; 00574904
    MOV [0x0061c868],EAX                ; 00574909 | DAT_0061c868
    MOV dword ptr [0x0061c888],EDX      ; 0057490e | DAT_0061c888
    MOV dword ptr [0x0061c8a8],ECX      ; 00574914 | DAT_0061c8a8
    MOV dword ptr [0x0061c8c8],EBX      ; 0057491a | DAT_0061c8c8
    MOV dword ptr [0x01c37780],EBP      ; 00574920 | DAT_01c37780
    JMP 0x00574655                      ; 00574926
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    JBE 0x0057487e                      ; 0057492b
        ;   XREF to: 0057487e (CONDITIONAL_JUMP)  ; LAB_0057487e
        ;   Label: LAB_0057492b
    CMP EAX,0x400                       ; 00574931
    JNC 0x00574948                      ; 00574936
        ;   XREF to: 00574948 (CONDITIONAL_JUMP)  ; LAB_00574948
    CMP EAX,0x200                       ; 00574938
    JZ 0x00574843                       ; 0057493d
        ;   XREF to: 00574843 (CONDITIONAL_JUMP)  ; LAB_00574843
    JMP 0x00574655                      ; 00574943
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    JBE 0x00574808                      ; 00574948
        ;   XREF to: 00574808 (CONDITIONAL_JUMP)  ; LAB_00574808
        ;   Label: LAB_00574948
    CMP EAX,0x800                       ; 0057494e
    JZ 0x005747cc                       ; 00574953
        ;   XREF to: 005747cc (CONDITIONAL_JUMP)  ; LAB_005747cc
    JMP 0x00574655                      ; 00574959
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    JBE 0x005748f0                      ; 0057495e
        ;   XREF to: 005748f0 (CONDITIONAL_JUMP)  ; LAB_005748f0
        ;   Label: LAB_0057495e
    CMP EAX,0x80                        ; 00574960
    JZ 0x005748b4                       ; 00574965
        ;   XREF to: 005748b4 (CONDITIONAL_JUMP)  ; LAB_005748b4
    JMP 0x00574655                      ; 0057496b
        ;   XREF to: 00574655 (UNCONDITIONAL_JUMP)  ; LAB_00574655
    MOV EAX,dword ptr [ESP + 0x8]       ; 00574970
        ;   Label: LAB_00574970
    MOV ESI,dword ptr [EAX + 0x48]      ; 00574974
    PUSH ESI                            ; 00574977
    MOV EDI,dword ptr [EAX + 0x4c]      ; 00574978
    PUSH EDI                            ; 0057497b
    MOV EBP,dword ptr [EAX + 0x44]      ; 0057497c
    PUSH EBP                            ; 0057497f
    MOV EDX,dword ptr [EAX]             ; 00574980
    PUSH EDX                            ; 00574982
    MOV ECX,dword ptr [ESP + 0x38]      ; 00574983
    PUSH ECX                            ; 00574987
    CALL dword ptr [0x0264bbe0]         ; 00574988 | DAT_0264bbe0
    ADD ESP,0x14                        ; 0057498e
    ADD ESP,0x10                        ; 00574991
    POP EBP                             ; 00574994
    POP EDI                             ; 00574995
    POP ESI                             ; 00574996
    POP EBX                             ; 00574997
    RET                                 ; 00574998
    CMP dword ptr [0x01c37784],0x0      ; 00574999 | DAT_01c37784
        ;   Label: LAB_00574999
    JZ 0x005749d0                       ; 005749a0
        ;   XREF to: 005749d0 (CONDITIONAL_JUMP)  ; LAB_005749d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005749a2
    MOV EDI,dword ptr [EAX + 0x50]      ; 005749a6
    PUSH EDI                            ; 005749a9
    MOV EBP,dword ptr [EAX]             ; 005749aa
    PUSH EBP                            ; 005749ac
    MOV EAX,dword ptr [ESP + 0x30]      ; 005749ad
    PUSH EAX                            ; 005749b1
    CALL dword ptr [0x0264bbec]         ; 005749b2 | DAT_0264bbec
    ADD ESP,0xc                         ; 005749b8
    MOV EDX,dword ptr [ESP + 0x28]      ; 005749bb
        ;   Label: LAB_005749bb
    PUSH EDX                            ; 005749bf
    MOV ECX,dword ptr [ESP + 0x28]      ; 005749c0
    PUSH ECX                            ; 005749c4
    ADD ESP,0x8                         ; 005749c5
    ADD ESP,0x10                        ; 005749c8
    POP EBP                             ; 005749cb
    POP EDI                             ; 005749cc
    POP ESI                             ; 005749cd
    POP EBX                             ; 005749ce
    RET                                 ; 005749cf
    MOV EAX,dword ptr [ESP + 0x8]       ; 005749d0
        ;   Label: LAB_005749d0
    MOV EBP,dword ptr [EAX + 0x48]      ; 005749d4
    PUSH EBP                            ; 005749d7
    MOV EDX,dword ptr [EAX + 0x4c]      ; 005749d8
    PUSH EDX                            ; 005749db
    MOV ECX,dword ptr [EAX + 0x44]      ; 005749dc
    PUSH ECX                            ; 005749df
    MOV EBX,dword ptr [EAX]             ; 005749e0
    PUSH EBX                            ; 005749e2
    MOV ESI,dword ptr [ESP + 0x38]      ; 005749e3
    PUSH ESI                            ; 005749e7
    CALL dword ptr [0x0264bbe4]         ; 005749e8 | DAT_0264bbe4
    ADD ESP,0x14                        ; 005749ee
    JMP 0x005749bb                      ; 005749f1
        ;   XREF to: 005749bb (UNCONDITIONAL_JUMP)  ; LAB_005749bb

