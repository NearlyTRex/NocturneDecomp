; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_font_cpp_FUN_004ab840(int param_1,byte *param_2,int param_3,int param_4,int param_5)
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
;   engine_font.cpp_FUN_004a8df0 at 004a8e4f
;
; Referenced Globals:
;   undefined4 DAT_005d6a69
;   undefined4 DAT_005d6a6d
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01cb0248
;   undefined4 DAT_01cb024c
;   undefined4 DAT_01cb0250
;   undefined4 DAT_01d09860
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_font.cpp_FUN_004a97a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab840
        ;   Label: unkafter_font.cpp_FUN_004ab840
    PUSH ESI                            ; 004ab841
    PUSH EDI                            ; 004ab842
    PUSH EBP                            ; 004ab843
    SUB ESP,0x20                        ; 004ab844
    MOV EBX,dword ptr [ESP + 0x34]      ; 004ab847
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004ab84b
    MOV EDX,dword ptr [ESP + 0x44]      ; 004ab84f
    CMP EDX,-0x2                        ; 004ab853
    JNZ 0x004ab8af                      ; 004ab856
        ;   XREF to: 004ab8af (CONDITIONAL_JUMP)  ; LAB_004ab8af
    MOV EAX,[0x01cb024c]                ; 004ab858 | DAT_01cb024c
    MOV EDX,dword ptr [0x01cb0250]      ; 004ab85d | DAT_01cb0250
    MOV EBP,dword ptr [0x01cb0248]      ; 004ab863 | DAT_01cb0248
    SHL EAX,0x8                         ; 004ab869
    SHL EBP,0x10                        ; 004ab86c
    OR EAX,EDX                          ; 004ab86f
    OR EBP,EAX                          ; 004ab871
    FLD float ptr [0x01d09860]          ; 004ab873 | DAT_01d09860
        ;   Label: LAB_004ab873
    FMUL float ptr [0x005d6a69]         ; 004ab879 | DAT_005d6a69
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ab87f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 004ab884
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ab888
    SHL EAX,0x18                        ; 004ab88c
    MOV dword ptr [ESP + 0x10],EDI      ; 004ab88f
    OR EBP,EAX                          ; 004ab893
    MOV ESI,dword ptr [ESP + 0x38]      ; 004ab895
        ;   Label: LAB_004ab895
    MOVZX ESI,byte ptr [ESI]            ; 004ab899
    TEST ESI,ESI                        ; 004ab89c
    JZ 0x004abb71                       ; 004ab89e
        ;   XREF to: 004abb71 (CONDITIONAL_JUMP)  ; LAB_004abb71
    CMP ESI,0xd                         ; 004ab8a4
    JNZ 0x004ab8e5                      ; 004ab8a7
        ;   XREF to: 004ab8e5 (CONDITIONAL_JUMP)  ; LAB_004ab8e5
    INC dword ptr [ESP + 0x38]          ; 004ab8a9
    JMP 0x004ab895                      ; 004ab8ad
        ;   XREF to: 004ab895 (UNCONDITIONAL_JUMP)  ; LAB_004ab895
    TEST EDX,EDX                        ; 004ab8af
        ;   Label: LAB_004ab8af
    JL 0x004ab8de                       ; 004ab8b1
        ;   XREF to: 004ab8de (CONDITIONAL_JUMP)  ; LAB_004ab8de
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ab8b3
    SUB EAX,EDX                         ; 004ab8ba
    XOR EDX,EDX                         ; 004ab8bc
    MOVZX ESI,byte ptr [EAX + 0x1c35838] ; 004ab8be | DAT_01c35838
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 004ab8c5 | DAT_01c35839
    SHL ESI,0x10                        ; 004ab8cb
    SHL EDX,0x8                         ; 004ab8ce
    MOVZX EBP,byte ptr [EAX + 0x1c3583a] ; 004ab8d1 | DAT_01c3583a
    OR EDX,ESI                          ; 004ab8d8
    OR EBP,EDX                          ; 004ab8da
    JMP 0x004ab873                      ; 004ab8dc
        ;   XREF to: 004ab873 (UNCONDITIONAL_JUMP)  ; LAB_004ab873
    MOV EBP,0xffffff                    ; 004ab8de
        ;   Label: LAB_004ab8de
    JMP 0x004ab873                      ; 004ab8e3
        ;   XREF to: 004ab873 (UNCONDITIONAL_JUMP)  ; LAB_004ab873
    CMP ESI,0xa                         ; 004ab8e5
        ;   Label: LAB_004ab8e5
    JNZ 0x004ab90c                      ; 004ab8e8
        ;   XREF to: 004ab90c (CONDITIONAL_JUMP)  ; LAB_004ab90c
    MOV EAX,dword ptr [EBX + 0x41f0]    ; 004ab8ea
    MOV ESI,dword ptr [EBX + 0x41f8]    ; 004ab8f0
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ab8f6
    ADD EAX,ESI                         ; 004ab8fa
    ADD EDX,EAX                         ; 004ab8fc
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ab8fe
    MOV dword ptr [ESP + 0x40],EDX      ; 004ab902
    INC dword ptr [ESP + 0x38]          ; 004ab906
    JMP 0x004ab895                      ; 004ab90a
        ;   XREF to: 004ab895 (UNCONDITIONAL_JUMP)  ; LAB_004ab895
    CMP ESI,0x20                        ; 004ab90c
        ;   Label: LAB_004ab90c
    JNZ 0x004ab930                      ; 004ab90f
        ;   XREF to: 004ab930 (CONDITIONAL_JUMP)  ; LAB_004ab930
    SHL ESI,0x2                         ; 004ab911
    LEA EAX,[EBX + ESI*0x1]             ; 004ab914
    MOV ECX,dword ptr [EBX + 0x41f4]    ; 004ab917
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004ab91d
    ADD EAX,ECX                         ; 004ab923
    ADD EDI,EAX                         ; 004ab925
    INC dword ptr [ESP + 0x38]          ; 004ab927
    JMP 0x004ab895                      ; 004ab92b
        ;   XREF to: 004ab895 (UNCONDITIONAL_JUMP)  ; LAB_004ab895
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004ab930
        ;   Label: LAB_004ab930
    ADD EAX,0x4                         ; 004ab936
    CMP EAX,0x3e8                       ; 004ab939
    JL 0x004abb58                       ; 004ab93e
        ;   XREF to: 004abb58 (CONDITIONAL_JUMP)  ; LAB_004abb58
    PUSH EBX                            ; 004ab944
        ;   Label: LAB_004ab944
    CALL engine_font.cpp_FUN_004a97a0   ; 004ab945
        ;   XREF to: 004a97a0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a97a0()
    ADD ESP,0x4                         ; 004ab94a
    MOV dword ptr [ESP + 0x1c],EDI      ; 004ab94d
        ;   Label: LAB_004ab94d
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004ab951
    MOV EDX,dword ptr [EBX + 0x1dd0]    ; 004ab957
    SHL EAX,0x5                         ; 004ab95d
    FILD dword ptr [ESP + 0x1c]         ; 004ab960
    ADD EAX,EDX                         ; 004ab964
    LEA EDX,[ESI*0x4 + 0x0]             ; 004ab966
    FLD float ptr [0x005d6a6d]          ; 004ab96d | DAT_005d6a6d
    FXCH                                ; 004ab973
    FADD ST0,ST1                        ; 004ab975
    LEA ECX,[EBX + EDX*0x1]             ; 004ab977
    FSTP float ptr [ESP + 0x18]         ; 004ab97a
    ADD EAX,0x20                        ; 004ab97e
    FILD dword ptr [ECX + 0x3de8]       ; 004ab981
    MOV dword ptr [ESP + 0x8],ECX       ; 004ab987
    MOV ECX,dword ptr [ESP + 0x40]      ; 004ab98b
    SHL ESI,0x4                         ; 004ab98f
    MOV dword ptr [ESP + 0x1c],ECX      ; 004ab992
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ab996
    FILD dword ptr [ESP + 0x1c]         ; 004ab99a
    FILD dword ptr [ECX + 0x35e8]       ; 004ab99e
    FILD dword ptr [ECX + 0x39e8]       ; 004ab9a4
    FXCH ST2                            ; 004ab9aa
    FADDP ST4,ST0                       ; 004ab9ac
    FADD float ptr [ESP + 0x18]         ; 004ab9ae
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ab9b2
    FLD1                                ; 004ab9b6
    FXCH ST4                            ; 004ab9b8
    FADDP ST3,ST0                       ; 004ab9ba
    MOV dword ptr [EAX + -0x20],ECX     ; 004ab9bc
    FXCH ST2                            ; 004ab9bf
    FSTP float ptr [ESP]                ; 004ab9c1
    MOV ECX,dword ptr [ESP]             ; 004ab9c4
    FXCH ST2                            ; 004ab9c7
    FADDP                               ; 004ab9c9
    MOV dword ptr [EAX + -0x1c],ECX     ; 004ab9cb
    FSTP float ptr [ESP + 0x4]          ; 004ab9ce
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004ab9d2
    MOV dword ptr [EAX + -0x18],ECX     ; 004ab9d8
    FLD float ptr [EBX + 0x421c]        ; 004ab9db
    MOV dword ptr [EAX + -0xc],0x0      ; 004ab9e1
    FXCH                                ; 004ab9e8
    FADD float ptr [ESP]                ; 004ab9ea
    MOV dword ptr [EAX + -0x10],EBP     ; 004ab9ed
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ab9f0
    FXCH                                ; 004ab9f4
    FSTP float ptr [EAX + -0x14]        ; 004ab9f6
    FLD float ptr [ESI + EBX*0x1 + 0x25e8] ; 004ab9f9
    FSTP float ptr [EAX + -0x8]         ; 004aba00
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004aba03
    FSTP float ptr [EAX + -0x4]         ; 004aba0a
    MOV dword ptr [EAX],ECX             ; 004aba0d
    MOV ECX,dword ptr [ESP]             ; 004aba0f
    FLD1                                ; 004aba12
    MOV dword ptr [EAX + 0x4],ECX       ; 004aba14
    FADDP                               ; 004aba17
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004aba19
    MOV dword ptr [EAX + 0x8],ECX       ; 004aba1f
    FLD float ptr [EBX + 0x421c]        ; 004aba22
    MOV dword ptr [EAX + 0x14],0x0      ; 004aba28
    FXCH                                ; 004aba2f
    FSTP float ptr [ESP + 0x14]         ; 004aba31
    MOV dword ptr [EAX + 0x10],EBP      ; 004aba35
    MOV ECX,dword ptr [ESP + 0x4]       ; 004aba38
    FSTP float ptr [EAX + 0xc]          ; 004aba3c
    FLD float ptr [ESI + EBX*0x1 + 0x25f0] ; 004aba3f
    FSTP float ptr [EAX + 0x18]         ; 004aba46
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004aba49
    FSTP float ptr [EAX + 0x1c]         ; 004aba50
    MOV dword ptr [EAX + 0x20],ECX      ; 004aba53
    MOV ECX,dword ptr [ESP + 0x14]      ; 004aba56
    MOV dword ptr [EAX + 0x24],ECX      ; 004aba5a
    ADD EAX,0x20                        ; 004aba5d
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004aba60
    MOV dword ptr [EAX + 0x8],ECX       ; 004aba66
    MOV ECX,dword ptr [EBX + 0x421c]    ; 004aba69
    MOV dword ptr [EAX + 0xc],ECX       ; 004aba6f
    MOV dword ptr [EAX + 0x10],EBP      ; 004aba72
    MOV dword ptr [EAX + 0x14],0x0      ; 004aba75
    MOV ECX,dword ptr [ESP + 0x18]      ; 004aba7c
    MOV ESI,dword ptr [EBX + EDX*0x4 + 0x25f0] ; 004aba80
    MOV dword ptr [EAX + 0x18],ESI      ; 004aba87
    FLD float ptr [EBX + EDX*0x4 + 0x25f4] ; 004aba8a
    MOV dword ptr [EAX + 0x20],ECX      ; 004aba91
    MOV ECX,dword ptr [ESP + 0x14]      ; 004aba94
    MOV dword ptr [EAX + 0x24],ECX      ; 004aba98
    FSTP float ptr [EAX + 0x1c]         ; 004aba9b
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004aba9e
    MOV dword ptr [EAX + 0x28],ECX      ; 004abaa4
    FLD float ptr [EBX + 0x421c]        ; 004abaa7
    MOV dword ptr [EAX + 0x34],0x0      ; 004abaad
    MOV dword ptr [EAX + 0x30],EBP      ; 004abab4
    FSTP float ptr [EAX + 0x2c]         ; 004abab7
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25e8] ; 004ababa
    MOV dword ptr [EAX + 0x38],ECX      ; 004abac1
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25f4] ; 004abac4
    MOV dword ptr [EAX + 0x3c],ECX      ; 004abacb
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004abace
    MOV ESI,dword ptr [EBX + 0x1dd4]    ; 004abad4
    ADD EAX,EAX                         ; 004abada
    ADD EAX,ESI                         ; 004abadc
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004abade
    MOV word ptr [EAX],SI               ; 004abae5
    INC ESI                             ; 004abae8
    MOV word ptr [EAX + 0x2],SI         ; 004abae9
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004abaed
    ADD ESI,0x2                         ; 004abaf4
    MOV word ptr [EAX + 0x4],SI         ; 004abaf7
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004abafb
    MOV word ptr [EAX + 0x6],SI         ; 004abb02
    ADD ESI,0x2                         ; 004abb06
    MOV word ptr [EAX + 0x8],SI         ; 004abb09
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004abb0d
    ADD ESI,0x3                         ; 004abb14
    MOV word ptr [EAX + 0xa],SI         ; 004abb17
    MOV ECX,dword ptr [EBX + 0x1dd8]    ; 004abb1b
    MOV ESI,dword ptr [EBX + 0x1ddc]    ; 004abb21
    ADD ECX,0x4                         ; 004abb27
    ADD ESI,0x6                         ; 004abb2a
    MOV dword ptr [EBX + 0x1dd8],ECX    ; 004abb2d
    MOV EAX,EDX                         ; 004abb33
    MOV dword ptr [EBX + 0x1ddc],ESI    ; 004abb35
    SAR EAX,0x2                         ; 004abb3b
    MOV EDX,dword ptr [EBX + 0x41f4]    ; 004abb3e
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004abb44
    ADD EAX,EDX                         ; 004abb4b
    ADD EDI,EAX                         ; 004abb4d
    INC dword ptr [ESP + 0x38]          ; 004abb4f
    JMP 0x004ab895                      ; 004abb53
        ;   XREF to: 004ab895 (UNCONDITIONAL_JUMP)  ; LAB_004ab895
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004abb58
        ;   Label: LAB_004abb58
    ADD EAX,0x6                         ; 004abb5e
    CMP EAX,0x3e8                       ; 004abb61
    JGE 0x004ab944                      ; 004abb66
        ;   XREF to: 004ab944 (CONDITIONAL_JUMP)  ; LAB_004ab944
    JMP 0x004ab94d                      ; 004abb6c
        ;   XREF to: 004ab94d (UNCONDITIONAL_JUMP)  ; LAB_004ab94d
    MOV EBX,dword ptr [ESP + 0x10]      ; 004abb71
        ;   Label: LAB_004abb71
    MOV EAX,EDI                         ; 004abb75
    SUB EAX,EBX                         ; 004abb77
    ADD ESP,0x20                        ; 004abb79
    POP EBP                             ; 004abb7c
    POP EDI                             ; 004abb7d
    POP ESI                             ; 004abb7e
    POP EBX                             ; 004abb7f
    RET                                 ; 004abb80

