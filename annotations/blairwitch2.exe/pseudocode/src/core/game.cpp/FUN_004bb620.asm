; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bb620(int param_1)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f7dc
;
; Referenced Globals:
;   undefined4 DAT_005d8403
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006164ac
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb620
        ;   Label: core_game.cpp_FUN_004bb620
    PUSH EDI                            ; 004bb621
    PUSH EBP                            ; 004bb622
    SUB ESP,0x30                        ; 004bb623
    MOV EDI,dword ptr [0x0060b280]      ; 004bb626 | DAT_0060b280
    MOV EBX,dword ptr [ESP + 0x40]      ; 004bb62c
    TEST dword ptr [EBX + 0xaf4],0x7fffffff ; 004bb630
    JZ 0x004bb881                       ; 004bb63a
        ;   XREF to: 004bb881 (CONDITIONAL_JUMP)  ; LAB_004bb881
    PUSH ESI                            ; 004bb640
    MOV EAX,[0x006141b8]                ; 004bb641 | DAT_006141b8
    MOV dword ptr [ESP + 0x30],EAX      ; 004bb646
    MOV EAX,dword ptr [EDI]             ; 004bb64a | DAT_01ba5c50
    MOV dword ptr [EAX + 0x10],0x0      ; 004bb64c
    MOV EAX,dword ptr [EDI]             ; 004bb653 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x14],0x0      ; 004bb655
    MOV EAX,dword ptr [ESP + 0x30]      ; 004bb65c
    DEC EAX                             ; 004bb660
    MOV ECX,dword ptr [EDI]             ; 004bb661 | DAT_01ba5c50
    SHL EAX,0x10                        ; 004bb663
    MOV dword ptr [ECX + 0x40],EAX      ; 004bb666
    MOV ECX,dword ptr [EDI]             ; 004bb669 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x44],0x0      ; 004bb66b
    MOV ECX,dword ptr [EDI]             ; 004bb672 | DAT_01ba5c50
    MOV EBP,dword ptr [0x006141bc]      ; 004bb674 | DAT_006141bc
    MOV dword ptr [ECX + 0x70],EAX      ; 004bb67a
    LEA EAX,[EBP + -0x1]                ; 004bb67d
    MOV ECX,dword ptr [EDI]             ; 004bb680 | DAT_01ba5c50
    SHL EAX,0x10                        ; 004bb682
    MOV dword ptr [ECX + 0x74],EAX      ; 004bb685
    MOV ECX,dword ptr [EDI]             ; 004bb688 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa0],0x0      ; 004bb68a
    MOV ECX,dword ptr [EDI]             ; 004bb694 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa4],EAX      ; 004bb696
    FLD float ptr [0x005d8403]          ; 004bb69c | DAT_005d8403
    FLD float ptr [EBX + 0xaf4]         ; 004bb6a2
    FMUL ST1                            ; 004bb6a8
    MOV ECX,dword ptr [EDI]             ; 004bb6aa | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb6ac
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb6b1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb6b5
    MOV dword ptr [ECX + 0x2c],EAX      ; 004bb6b9
    FLD float ptr [EBX + 0xaf4]         ; 004bb6bc
    FMUL ST1                            ; 004bb6c2
    MOV ECX,dword ptr [EDI]             ; 004bb6c4 | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb6c6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb6cb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb6cf
    MOV dword ptr [ECX + 0x5c],EAX      ; 004bb6d3
    FLD float ptr [EBX + 0xaf4]         ; 004bb6d6
    FMUL ST1                            ; 004bb6dc
    MOV ECX,dword ptr [EDI]             ; 004bb6de | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb6e0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb6e5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb6e9
    MOV dword ptr [ECX + 0x8c],EAX      ; 004bb6ed
    FMUL float ptr [EBX + 0xaf4]        ; 004bb6f3
    MOV EDX,dword ptr [EDI]             ; 004bb6f9 | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb6fb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb700
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb704
    MOV ECX,EDI                         ; 004bb708
    MOV dword ptr [EDX + 0xbc],EAX      ; 004bb70a
    XOR EDX,EDX                         ; 004bb710
    FLD float ptr [0x005d8403]          ; 004bb712 | DAT_005d8403
    FLD float ptr [EBX + 0xb08]         ; 004bb718
        ;   Label: LAB_004bb718
    MOV EAX,dword ptr [EDI]             ; 004bb71e | DAT_01ba5c50
    FMUL ST1                            ; 004bb720
    LEA ESI,[EAX + EDX*0x1]             ; 004bb722
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb725
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb72a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb72e
    MOV dword ptr [ESI + 0x20],EAX      ; 004bb732
    FLD float ptr [EBX + 0xb0c]         ; 004bb735
    FMUL ST1                            ; 004bb73b
    MOV ESI,dword ptr [EDI]             ; 004bb73d | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb73f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb744
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb748
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EAX ; 004bb74c
    FLD float ptr [EBX + 0xb10]         ; 004bb750
    MOV EAX,dword ptr [EDI]             ; 004bb756 | DAT_01ba5c50
    FMUL ST1                            ; 004bb758
    LEA ESI,[EAX + EDX*0x1]             ; 004bb75a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004bb75d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 004bb762
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bb766
    ADD EDX,0x30                        ; 004bb76a
    MOV dword ptr [ESI + 0x28],EAX      ; 004bb76d
    CMP EDX,0xc0                        ; 004bb770
    JNZ 0x004bb718                      ; 004bb776
        ;   XREF to: 004bb718 (CONDITIONAL_JUMP)  ; LAB_004bb718
    MOV EDX,dword ptr [EBX + 0xb18]     ; 004bb778
    LEA EAX,[EDX*0x4 + 0x0]             ; 004bb77e
    SUB EAX,EDX                         ; 004bb785
    SHL EAX,0x3                         ; 004bb787
    ADD EAX,0x6164ac                    ; 004bb78a | DAT_006164ac
    PUSH EAX                            ; 004bb78f
    PUSH EDI                            ; 004bb790 | DAT_01ba5c50
    FSTP ST0                            ; 004bb791
    MOV dword ptr [0x0060b280],EDI      ; 004bb793 | DAT_0060b280
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004bb799
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDI,dword ptr [0x0060b280]      ; 004bb79e | DAT_0060b280
    MOV EDX,dword ptr [EDI]             ; 004bb7a4 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x0      ; 004bb7a6
    MOV EDX,dword ptr [EDI]             ; 004bb7ad | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0xff0000 ; 004bb7af
    MOV EDX,dword ptr [EDI]             ; 004bb7b6 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0xff0000 ; 004bb7b8
    MOV EDX,dword ptr [EDI]             ; 004bb7bf | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0xff0000 ; 004bb7c1
    MOV EDX,dword ptr [EDI]             ; 004bb7c8 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0xff0000 ; 004bb7ca
    MOV EDX,dword ptr [EDI]             ; 004bb7d1 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0x0      ; 004bb7d3
    MOV EDX,dword ptr [EDI]             ; 004bb7da | DAT_01ba5c50
    MOV ESI,0x1                         ; 004bb7dc
    MOV dword ptr [EDX + 0xa8],0x0      ; 004bb7e1
    XOR EBX,EBX                         ; 004bb7eb
    MOV EDX,dword ptr [EDI]             ; 004bb7ed | DAT_01ba5c50
    MOV ECX,0x4                         ; 004bb7ef
    ADD ESP,0x8                         ; 004bb7f4
    MOV dword ptr [EDX + 0xac],0x0      ; 004bb7f7
    MOV EDX,0x2                         ; 004bb801
    MOV dword ptr [ESP + 0x8],ECX       ; 004bb806
    MOV dword ptr [ESP + 0x18],EBX      ; 004bb80a
    MOV dword ptr [ESP + 0x14],EBX      ; 004bb80e
    MOV dword ptr [ESP + 0x10],EBX      ; 004bb812
    MOV dword ptr [ESP + 0xc],EBX       ; 004bb816
    MOV dword ptr [ESP + 0x1c],EBX      ; 004bb81a
    MOV dword ptr [ESP + 0x20],ESI      ; 004bb81e
    MOV ECX,0x3                         ; 004bb822
    MOV dword ptr [ESP + 0x24],EDX      ; 004bb827
    MOV dword ptr [ESP + 0x28],ECX      ; 004bb82b
    MOV EDX,dword ptr [EDI]             ; 004bb82f | DAT_01ba5c50
    MOV dword ptr [EDX + 0x10],EBX      ; 004bb831
    MOV EDX,dword ptr [EDI]             ; 004bb834 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x14],EBX      ; 004bb836
    MOV EDX,dword ptr [ESP + 0x30]      ; 004bb839
    SUB EDX,ESI                         ; 004bb83d
    MOV ECX,dword ptr [EDI]             ; 004bb83f | DAT_01ba5c50
    SHL EDX,0x10                        ; 004bb841
    MOV dword ptr [ECX + 0x40],EDX      ; 004bb844
    MOV ECX,dword ptr [EDI]             ; 004bb847 | DAT_01ba5c50
    MOV dword ptr [ECX + 0x44],EBX      ; 004bb849
    MOV ECX,dword ptr [EDI]             ; 004bb84c | DAT_01ba5c50
    MOV dword ptr [ECX + 0x70],EDX      ; 004bb84e
    LEA EDX,[EBP + -0x1]                ; 004bb851
    MOV ECX,dword ptr [EDI]             ; 004bb854 | DAT_01ba5c50
    SHL EDX,0x10                        ; 004bb856
    MOV dword ptr [ECX + 0x74],EDX      ; 004bb859
    MOV ECX,dword ptr [EDI]             ; 004bb85c | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa0],EBX      ; 004bb85e
    MOV ECX,dword ptr [EDI]             ; 004bb864 | DAT_01ba5c50
    MOV dword ptr [ECX + 0xa4],EDX      ; 004bb866
    LEA EDX,[ESP + 0x4]                 ; 004bb86c
    PUSH EDX                            ; 004bb870
    PUSH EDI                            ; 004bb871 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70 ; 004bb872
        ;   XREF to: 0046ad70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDI,dword ptr [0x0060b280]      ; 004bb877 | DAT_0060b280
    ADD ESP,0x8                         ; 004bb87d
    POP ESI                             ; 004bb880
    MOV dword ptr [0x0060b280],EDI      ; 004bb881 | DAT_0060b280
        ;   Label: LAB_004bb881
    ADD ESP,0x30                        ; 004bb887
    POP EBP                             ; 004bb88a
    POP EDI                             ; 004bb88b
    POP EBX                             ; 004bb88c
    RET                                 ; 004bb88d

