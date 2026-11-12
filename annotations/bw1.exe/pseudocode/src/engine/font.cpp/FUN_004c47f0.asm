; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004c47f0(int param_1,byte *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
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
;   engine_font.cpp_FUN_004c1dd0 at 004c1e37
;
; Referenced Globals:
;   undefined4 DAT_005e0ae2
;   undefined4 DAT_005e0ae6
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01cc8cd8
;   undefined4 DAT_01cc8cdc
;   undefined4 DAT_01cc8ce0
;   undefined4 DAT_01d224c0
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_font.cpp_FUN_004c2750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c47f0
        ;   Label: engine_font.cpp_FUN_004c47f0
    PUSH ESI                            ; 004c47f1
    PUSH EDI                            ; 004c47f2
    PUSH EBP                            ; 004c47f3
    SUB ESP,0x20                        ; 004c47f4
    MOV EBX,dword ptr [ESP + 0x34]      ; 004c47f7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004c47fb
    MOV EDX,dword ptr [ESP + 0x44]      ; 004c47ff
    CMP EDX,-0x2                        ; 004c4803
    JNZ 0x004c485f                      ; 004c4806
        ;   XREF to: 004c485f (CONDITIONAL_JUMP)  ; LAB_004c485f
    MOV EAX,[0x01cc8cdc]                ; 004c4808 | DAT_01cc8cdc
    MOV EDX,dword ptr [0x01cc8ce0]      ; 004c480d | DAT_01cc8ce0
    MOV EBP,dword ptr [0x01cc8cd8]      ; 004c4813 | DAT_01cc8cd8
    SHL EAX,0x8                         ; 004c4819
    SHL EBP,0x10                        ; 004c481c
    OR EAX,EDX                          ; 004c481f
    OR EBP,EAX                          ; 004c4821
    FLD float ptr [0x01d224c0]          ; 004c4823 | DAT_01d224c0
        ;   Label: LAB_004c4823
    FMUL float ptr [0x005e0ae2]         ; 004c4829 | DAT_005e0ae2
    CALL crt_math.c_round_FUN_005c03a0  ; 004c482f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 004c4834
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4838
    SHL EAX,0x18                        ; 004c483c
    MOV dword ptr [ESP + 0x10],EDI      ; 004c483f
    OR EBP,EAX                          ; 004c4843
    MOV ESI,dword ptr [ESP + 0x38]      ; 004c4845
        ;   Label: LAB_004c4845
    MOVZX ESI,byte ptr [ESI]            ; 004c4849
    TEST ESI,ESI                        ; 004c484c
    JZ 0x004c4b21                       ; 004c484e
        ;   XREF to: 004c4b21 (CONDITIONAL_JUMP)  ; LAB_004c4b21
    CMP ESI,0xd                         ; 004c4854
    JNZ 0x004c4895                      ; 004c4857
        ;   XREF to: 004c4895 (CONDITIONAL_JUMP)  ; LAB_004c4895
    INC dword ptr [ESP + 0x38]          ; 004c4859
    JMP 0x004c4845                      ; 004c485d
        ;   XREF to: 004c4845 (UNCONDITIONAL_JUMP)  ; LAB_004c4845
    TEST EDX,EDX                        ; 004c485f
        ;   Label: LAB_004c485f
    JL 0x004c488e                       ; 004c4861
        ;   XREF to: 004c488e (CONDITIONAL_JUMP)  ; LAB_004c488e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c4863
    SUB EAX,EDX                         ; 004c486a
    XOR EDX,EDX                         ; 004c486c
    MOVZX ESI,byte ptr [EAX + 0x1c4e9f8] ; 004c486e | DAT_01c4e9f8
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 004c4875 | DAT_01c4e9f9
    SHL ESI,0x10                        ; 004c487b
    SHL EDX,0x8                         ; 004c487e
    MOVZX EBP,byte ptr [EAX + 0x1c4e9fa] ; 004c4881 | DAT_01c4e9fa
    OR EDX,ESI                          ; 004c4888
    OR EBP,EDX                          ; 004c488a
    JMP 0x004c4823                      ; 004c488c
        ;   XREF to: 004c4823 (UNCONDITIONAL_JUMP)  ; LAB_004c4823
    MOV EBP,0xffffff                    ; 004c488e
        ;   Label: LAB_004c488e
    JMP 0x004c4823                      ; 004c4893
        ;   XREF to: 004c4823 (UNCONDITIONAL_JUMP)  ; LAB_004c4823
    CMP ESI,0xa                         ; 004c4895
        ;   Label: LAB_004c4895
    JNZ 0x004c48bc                      ; 004c4898
        ;   XREF to: 004c48bc (CONDITIONAL_JUMP)  ; LAB_004c48bc
    MOV EAX,dword ptr [EBX + 0x41f0]    ; 004c489a
    MOV ESI,dword ptr [EBX + 0x41f8]    ; 004c48a0
    MOV EDX,dword ptr [ESP + 0x40]      ; 004c48a6
    ADD EAX,ESI                         ; 004c48aa
    ADD EDX,EAX                         ; 004c48ac
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c48ae
    MOV dword ptr [ESP + 0x40],EDX      ; 004c48b2
    INC dword ptr [ESP + 0x38]          ; 004c48b6
    JMP 0x004c4845                      ; 004c48ba
        ;   XREF to: 004c4845 (UNCONDITIONAL_JUMP)  ; LAB_004c4845
    CMP ESI,0x20                        ; 004c48bc
        ;   Label: LAB_004c48bc
    JNZ 0x004c48e0                      ; 004c48bf
        ;   XREF to: 004c48e0 (CONDITIONAL_JUMP)  ; LAB_004c48e0
    SHL ESI,0x2                         ; 004c48c1
    LEA EAX,[EBX + ESI*0x1]             ; 004c48c4
    MOV ECX,dword ptr [EBX + 0x41f4]    ; 004c48c7
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004c48cd
    ADD EAX,ECX                         ; 004c48d3
    ADD EDI,EAX                         ; 004c48d5
    INC dword ptr [ESP + 0x38]          ; 004c48d7
    JMP 0x004c4845                      ; 004c48db
        ;   XREF to: 004c4845 (UNCONDITIONAL_JUMP)  ; LAB_004c4845
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004c48e0
        ;   Label: LAB_004c48e0
    ADD EAX,0x4                         ; 004c48e6
    CMP EAX,0x3e8                       ; 004c48e9
    JL 0x004c4b08                       ; 004c48ee
        ;   XREF to: 004c4b08 (CONDITIONAL_JUMP)  ; LAB_004c4b08
    PUSH EBX                            ; 004c48f4
        ;   Label: LAB_004c48f4
    CALL engine_font.cpp_FUN_004c2750   ; 004c48f5
        ;   XREF to: 004c2750 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c2750()
    ADD ESP,0x4                         ; 004c48fa
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c48fd
        ;   Label: LAB_004c48fd
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004c4901
    MOV EDX,dword ptr [EBX + 0x1dd0]    ; 004c4907
    SHL EAX,0x5                         ; 004c490d
    FILD dword ptr [ESP + 0x1c]         ; 004c4910
    ADD EAX,EDX                         ; 004c4914
    LEA EDX,[ESI*0x4 + 0x0]             ; 004c4916
    FLD float ptr [0x005e0ae6]          ; 004c491d | DAT_005e0ae6
    FXCH                                ; 004c4923
    FADD ST0,ST1                        ; 004c4925
    LEA ECX,[EBX + EDX*0x1]             ; 004c4927
    FSTP float ptr [ESP + 0x18]         ; 004c492a
    ADD EAX,0x20                        ; 004c492e
    FILD dword ptr [ECX + 0x3de8]       ; 004c4931
    MOV dword ptr [ESP + 0x8],ECX       ; 004c4937
    MOV ECX,dword ptr [ESP + 0x40]      ; 004c493b
    SHL ESI,0x4                         ; 004c493f
    MOV dword ptr [ESP + 0x1c],ECX      ; 004c4942
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c4946
    FILD dword ptr [ESP + 0x1c]         ; 004c494a
    FILD dword ptr [ECX + 0x35e8]       ; 004c494e
    FILD dword ptr [ECX + 0x39e8]       ; 004c4954
    FXCH ST2                            ; 004c495a
    FADDP ST4,ST0                       ; 004c495c
    FADD float ptr [ESP + 0x18]         ; 004c495e
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c4962
    FLD1                                ; 004c4966
    FXCH ST4                            ; 004c4968
    FADDP ST3,ST0                       ; 004c496a
    MOV dword ptr [EAX + -0x20],ECX     ; 004c496c
    FXCH ST2                            ; 004c496f
    FSTP float ptr [ESP]                ; 004c4971
    MOV ECX,dword ptr [ESP]             ; 004c4974
    FXCH ST2                            ; 004c4977
    FADDP                               ; 004c4979
    MOV dword ptr [EAX + -0x1c],ECX     ; 004c497b
    FSTP float ptr [ESP + 0x4]          ; 004c497e
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004c4982
    MOV dword ptr [EAX + -0x18],ECX     ; 004c4988
    FLD float ptr [EBX + 0x421c]        ; 004c498b
    MOV dword ptr [EAX + -0xc],0x0      ; 004c4991
    FXCH                                ; 004c4998
    FADD float ptr [ESP]                ; 004c499a
    MOV dword ptr [EAX + -0x10],EBP     ; 004c499d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c49a0
    FXCH                                ; 004c49a4
    FSTP float ptr [EAX + -0x14]        ; 004c49a6
    FLD float ptr [ESI + EBX*0x1 + 0x25e8] ; 004c49a9
    FSTP float ptr [EAX + -0x8]         ; 004c49b0
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004c49b3
    FSTP float ptr [EAX + -0x4]         ; 004c49ba
    MOV dword ptr [EAX],ECX             ; 004c49bd
    MOV ECX,dword ptr [ESP]             ; 004c49bf
    FLD1                                ; 004c49c2
    MOV dword ptr [EAX + 0x4],ECX       ; 004c49c4
    FADDP                               ; 004c49c7
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004c49c9
    MOV dword ptr [EAX + 0x8],ECX       ; 004c49cf
    FLD float ptr [EBX + 0x421c]        ; 004c49d2
    MOV dword ptr [EAX + 0x14],0x0      ; 004c49d8
    FXCH                                ; 004c49df
    FSTP float ptr [ESP + 0x14]         ; 004c49e1
    MOV dword ptr [EAX + 0x10],EBP      ; 004c49e5
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c49e8
    FSTP float ptr [EAX + 0xc]          ; 004c49ec
    FLD float ptr [ESI + EBX*0x1 + 0x25f0] ; 004c49ef
    FSTP float ptr [EAX + 0x18]         ; 004c49f6
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004c49f9
    FSTP float ptr [EAX + 0x1c]         ; 004c4a00
    MOV dword ptr [EAX + 0x20],ECX      ; 004c4a03
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c4a06
    MOV dword ptr [EAX + 0x24],ECX      ; 004c4a0a
    ADD EAX,0x20                        ; 004c4a0d
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004c4a10
    MOV dword ptr [EAX + 0x8],ECX       ; 004c4a16
    MOV ECX,dword ptr [EBX + 0x421c]    ; 004c4a19
    MOV dword ptr [EAX + 0xc],ECX       ; 004c4a1f
    MOV dword ptr [EAX + 0x10],EBP      ; 004c4a22
    MOV dword ptr [EAX + 0x14],0x0      ; 004c4a25
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c4a2c
    MOV ESI,dword ptr [EBX + EDX*0x4 + 0x25f0] ; 004c4a30
    MOV dword ptr [EAX + 0x18],ESI      ; 004c4a37
    FLD float ptr [EBX + EDX*0x4 + 0x25f4] ; 004c4a3a
    MOV dword ptr [EAX + 0x20],ECX      ; 004c4a41
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c4a44
    MOV dword ptr [EAX + 0x24],ECX      ; 004c4a48
    FSTP float ptr [EAX + 0x1c]         ; 004c4a4b
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004c4a4e
    MOV dword ptr [EAX + 0x28],ECX      ; 004c4a54
    FLD float ptr [EBX + 0x421c]        ; 004c4a57
    MOV dword ptr [EAX + 0x34],0x0      ; 004c4a5d
    MOV dword ptr [EAX + 0x30],EBP      ; 004c4a64
    FSTP float ptr [EAX + 0x2c]         ; 004c4a67
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25e8] ; 004c4a6a
    MOV dword ptr [EAX + 0x38],ECX      ; 004c4a71
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25f4] ; 004c4a74
    MOV dword ptr [EAX + 0x3c],ECX      ; 004c4a7b
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004c4a7e
    MOV ESI,dword ptr [EBX + 0x1dd4]    ; 004c4a84
    ADD EAX,EAX                         ; 004c4a8a
    ADD EAX,ESI                         ; 004c4a8c
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004c4a8e
    MOV word ptr [EAX],SI               ; 004c4a95
    INC ESI                             ; 004c4a98
    MOV word ptr [EAX + 0x2],SI         ; 004c4a99
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004c4a9d
    ADD ESI,0x2                         ; 004c4aa4
    MOV word ptr [EAX + 0x4],SI         ; 004c4aa7
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004c4aab
    MOV word ptr [EAX + 0x6],SI         ; 004c4ab2
    ADD ESI,0x2                         ; 004c4ab6
    MOV word ptr [EAX + 0x8],SI         ; 004c4ab9
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004c4abd
    ADD ESI,0x3                         ; 004c4ac4
    MOV word ptr [EAX + 0xa],SI         ; 004c4ac7
    MOV ECX,dword ptr [EBX + 0x1dd8]    ; 004c4acb
    MOV ESI,dword ptr [EBX + 0x1ddc]    ; 004c4ad1
    ADD ECX,0x4                         ; 004c4ad7
    ADD ESI,0x6                         ; 004c4ada
    MOV dword ptr [EBX + 0x1dd8],ECX    ; 004c4add
    MOV EAX,EDX                         ; 004c4ae3
    MOV dword ptr [EBX + 0x1ddc],ESI    ; 004c4ae5
    SAR EAX,0x2                         ; 004c4aeb
    MOV EDX,dword ptr [EBX + 0x41f4]    ; 004c4aee
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004c4af4
    ADD EAX,EDX                         ; 004c4afb
    ADD EDI,EAX                         ; 004c4afd
    INC dword ptr [ESP + 0x38]          ; 004c4aff
    JMP 0x004c4845                      ; 004c4b03
        ;   XREF to: 004c4845 (UNCONDITIONAL_JUMP)  ; LAB_004c4845
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004c4b08
        ;   Label: LAB_004c4b08
    ADD EAX,0x6                         ; 004c4b0e
    CMP EAX,0x3e8                       ; 004c4b11
    JGE 0x004c48f4                      ; 004c4b16
        ;   XREF to: 004c48f4 (CONDITIONAL_JUMP)  ; LAB_004c48f4
    JMP 0x004c48fd                      ; 004c4b1c
        ;   XREF to: 004c48fd (UNCONDITIONAL_JUMP)  ; LAB_004c48fd
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c4b21
        ;   Label: LAB_004c4b21
    MOV EAX,EDI                         ; 004c4b25
    SUB EAX,EBX                         ; 004c4b27
    ADD ESP,0x20                        ; 004c4b29
    POP EBP                             ; 004c4b2c
    POP EDI                             ; 004c4b2d
    POP ESI                             ; 004c4b2e
    POP EBX                             ; 004c4b2f
    RET                                 ; 004c4b30

