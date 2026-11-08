; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cb7a0(int *param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0057b860 at 0057b8b2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb7a0
        ;   Label: FUN_004cb7a0
    PUSH ESI                            ; 004cb7a1
    PUSH EDI                            ; 004cb7a2
    PUSH EBP                            ; 004cb7a3
    SUB ESP,0x14                        ; 004cb7a4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004cb7a7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004cb7ab
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004cb7af
    SHL EBX,0x8                         ; 004cb7b2
    LEA EAX,[EBX + -0x1]                ; 004cb7b5
    MOV EDX,0x10000                     ; 004cb7b8
    AND EAX,ESI                         ; 004cb7bd
    IMUL EDX                            ; 004cb7bf
    IDIV EBX                            ; 004cb7c1
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004cb7c3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004cb7c6
    SHL EBX,0x8                         ; 004cb7ca
    MOV EDI,EAX                         ; 004cb7cd
    LEA EAX,[EBX + -0x1]                ; 004cb7cf
    AND EAX,EDX                         ; 004cb7d2
    MOV EDX,0x10000                     ; 004cb7d4
    IMUL EDX                            ; 004cb7d9
    IDIV EBX                            ; 004cb7db
    MOV EBX,EAX                         ; 004cb7dd
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004cb7df
    XOR EDX,EDX                         ; 004cb7e2
    SHL EBP,0x8                         ; 004cb7e4
    MOV EAX,ESI                         ; 004cb7e7
    DIV EBP                             ; 004cb7e9
    MOV ESI,dword ptr [ECX + 0x8]       ; 004cb7eb
    AND ESI,EAX                         ; 004cb7ee
    XOR EDX,EDX                         ; 004cb7f0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cb7f2
    DIV EBP                             ; 004cb7f6
    MOV EDX,ESI                         ; 004cb7f8
    MOV EBP,dword ptr [ECX + 0xc]       ; 004cb7fa
    AND EDX,0x1                         ; 004cb7fd
    AND EAX,EBP                         ; 004cb800
    MOV dword ptr [ESP + 0xc],EDX       ; 004cb802
    MOV EDX,EAX                         ; 004cb806
    AND EDX,0x1                         ; 004cb808
    MOV dword ptr [ESP + 0x8],EDX       ; 004cb80b
    LEA EDX,[EAX + 0x1]                 ; 004cb80f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cb812
    MOV dword ptr [ESP + 0x10],EDX      ; 004cb816
    LEA EDX,[ESI + 0x1]                 ; 004cb81a
    CMP EBP,dword ptr [ESP + 0x8]       ; 004cb81d
    JNZ 0x004cb91b                      ; 004cb821
        ;   XREF to: 004cb91b (CONDITIONAL_JUMP)  ; LAB_004cb91b
    CMP EDI,EBX                         ; 004cb827
    JLE 0x004cb8a2                      ; 004cb829
        ;   XREF to: 004cb8a2 (CONDITIONAL_JUMP)  ; LAB_004cb8a2
    MOV EBP,dword ptr [ECX]             ; 004cb82b
    IMUL EBP,EAX                        ; 004cb82d
    MOV EAX,dword ptr [ECX + 0x24]      ; 004cb830
    ADD ESI,EBP                         ; 004cb833
    MOV dword ptr [ESP + 0x8],EBP       ; 004cb835
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004cb839
    MOV EBP,dword ptr [ECX + 0x20]      ; 004cb83d
    IMUL EBP,ESI                        ; 004cb840
    MOV dword ptr [ESP],EBP             ; 004cb843
    MOV ESI,dword ptr [ECX + 0x8]       ; 004cb846
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cb849
    AND ESI,EDX                         ; 004cb84d
    ADD ESI,EBP                         ; 004cb84f
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004cb851
    IMUL ESI,dword ptr [ECX + 0x20]     ; 004cb855
    MOV EBP,dword ptr [ESP + 0x10]      ; 004cb859
    AND EBP,dword ptr [ECX + 0xc]       ; 004cb85d
    IMUL EBP,dword ptr [ECX]            ; 004cb860
    MOV dword ptr [ESP + 0x8],EBP       ; 004cb863
    AND EDX,dword ptr [ECX + 0xc]       ; 004cb867
    ADD EDX,dword ptr [ESP + 0x8]       ; 004cb86a
    MOV ECX,dword ptr [ECX + 0x20]      ; 004cb86e
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004cb871
    IMUL ECX,EAX                        ; 004cb875
    MOV EDX,ESI                         ; 004cb878
    MOV EAX,dword ptr [ESP]             ; 004cb87a
    SUB ECX,ESI                         ; 004cb87d
    SUB EDX,EAX                         ; 004cb87f
    MOV EAX,EDI                         ; 004cb881
    MOV ESI,dword ptr [ESP]             ; 004cb883
    IMUL EDX                            ; 004cb886
    SHRD EAX,EDX,0x10                   ; 004cb888
    MOV EDX,ECX                         ; 004cb88c
    ADD ESI,EAX                         ; 004cb88e
    MOV EAX,EBX                         ; 004cb890
    IMUL EDX                            ; 004cb892
    SHRD EAX,EDX,0x10                   ; 004cb894
    ADD EAX,ESI                         ; 004cb898
    ADD ESP,0x14                        ; 004cb89a
    POP EBP                             ; 004cb89d
    POP EDI                             ; 004cb89e
    POP ESI                             ; 004cb89f
    POP EBX                             ; 004cb8a0
    RET                                 ; 004cb8a1
    IMUL EAX,dword ptr [ECX]            ; 004cb8a2
        ;   Label: LAB_004cb8a2
    ADD EAX,ESI                         ; 004cb8a5
    MOV EBP,dword ptr [ECX + 0x24]      ; 004cb8a7
    SHL EAX,0x2                         ; 004cb8aa
    ADD EAX,EBP                         ; 004cb8ad
    MOVSX EAX,word ptr [EAX]            ; 004cb8af
    MOV dword ptr [ESP + 0xc],EBP       ; 004cb8b2
    MOV EBP,EAX                         ; 004cb8b6
    IMUL EBP,dword ptr [ECX + 0x20]     ; 004cb8b8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cb8bc
    AND EAX,dword ptr [ECX + 0xc]       ; 004cb8c0
    IMUL EAX,dword ptr [ECX]            ; 004cb8c3
    MOV dword ptr [ESP + 0x8],EAX       ; 004cb8c6
    AND EDX,dword ptr [ECX + 0x8]       ; 004cb8ca
    ADD EDX,dword ptr [ESP + 0x8]       ; 004cb8cd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cb8d1
    SHL EDX,0x2                         ; 004cb8d5
    ADD EDX,EAX                         ; 004cb8d8
    MOVSX EDX,word ptr [EDX]            ; 004cb8da
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004cb8dd
    ADD ESI,dword ptr [ESP + 0x8]       ; 004cb8e1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004cb8e5
    ADD EAX,dword ptr [ESP + 0xc]       ; 004cb8ec
    MOV ECX,dword ptr [ECX + 0x20]      ; 004cb8f0
    MOVSX EAX,word ptr [EAX]            ; 004cb8f3
    IMUL ECX,EAX                        ; 004cb8f6
    MOV EAX,EDI                         ; 004cb8f9
    SUB EDX,ECX                         ; 004cb8fb
    SUB ECX,EBP                         ; 004cb8fd
    IMUL EDX                            ; 004cb8ff
    SHRD EAX,EDX,0x10                   ; 004cb901
    MOV EDX,ECX                         ; 004cb905
    ADD EBP,EAX                         ; 004cb907
    MOV EAX,EBX                         ; 004cb909
    IMUL EDX                            ; 004cb90b
    SHRD EAX,EDX,0x10                   ; 004cb90d
    ADD EAX,EBP                         ; 004cb911
    ADD ESP,0x14                        ; 004cb913
    POP EBP                             ; 004cb916
    POP EDI                             ; 004cb917
    POP ESI                             ; 004cb918
    POP EBX                             ; 004cb919
    RET                                 ; 004cb91a
    MOV EBP,0x10000                     ; 004cb91b
        ;   Label: LAB_004cb91b
    SUB EBP,EDI                         ; 004cb920
    MOV EDI,EBP                         ; 004cb922
    CMP EBP,EBX                         ; 004cb924
    JLE 0x004cb9a2                      ; 004cb926
        ;   XREF to: 004cb9a2 (CONDITIONAL_JUMP)  ; LAB_004cb9a2
    MOV EBP,dword ptr [ECX]             ; 004cb928
    IMUL EBP,EAX                        ; 004cb92a
    MOV dword ptr [ESP + 0xc],EBP       ; 004cb92d
    LEA EAX,[ESI + EBP*0x1]             ; 004cb931
    SHL EAX,0x2                         ; 004cb934
    MOV EBP,dword ptr [ECX + 0x24]      ; 004cb937
    ADD EAX,EBP                         ; 004cb93a
    MOV dword ptr [ESP + 0x8],EBP       ; 004cb93c
    MOVSX EAX,word ptr [EAX]            ; 004cb940
    IMUL EAX,dword ptr [ECX + 0x20]     ; 004cb943
    AND EDX,dword ptr [ECX + 0x8]       ; 004cb947
    ADD EDX,dword ptr [ESP + 0xc]       ; 004cb94a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cb94e
    SHL EDX,0x2                         ; 004cb952
    ADD EDX,EBP                         ; 004cb955
    MOVSX EDX,word ptr [EDX]            ; 004cb957
    MOV EBP,dword ptr [ECX + 0x20]      ; 004cb95a
    IMUL EBP,EDX                        ; 004cb95d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cb960
    AND EDX,dword ptr [ECX + 0xc]       ; 004cb964
    IMUL EDX,dword ptr [ECX]            ; 004cb967
    ADD ESI,EDX                         ; 004cb96a
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cb96c
    SHL ESI,0x2                         ; 004cb970
    ADD ESI,EDX                         ; 004cb973
    MOV ECX,dword ptr [ECX + 0x20]      ; 004cb975
    MOVSX ESI,word ptr [ESI]            ; 004cb978
    IMUL ECX,ESI                        ; 004cb97b
    MOV EDX,EAX                         ; 004cb97e
    SUB EDX,EBP                         ; 004cb980
    SUB ECX,EAX                         ; 004cb982
    MOV EAX,EDI                         ; 004cb984
    IMUL EDX                            ; 004cb986
    SHRD EAX,EDX,0x10                   ; 004cb988
    MOV EDX,ECX                         ; 004cb98c
    ADD EBP,EAX                         ; 004cb98e
    MOV EAX,EBX                         ; 004cb990
    IMUL EDX                            ; 004cb992
    SHRD EAX,EDX,0x10                   ; 004cb994
    ADD EAX,EBP                         ; 004cb998
    ADD ESP,0x14                        ; 004cb99a
    POP EBP                             ; 004cb99d
    POP EDI                             ; 004cb99e
    POP ESI                             ; 004cb99f
    POP EBX                             ; 004cb9a0
    RET                                 ; 004cb9a1
    MOV EBP,dword ptr [ECX + 0x8]       ; 004cb9a2
        ;   Label: LAB_004cb9a2
    AND EBP,EDX                         ; 004cb9a5
    IMUL EAX,dword ptr [ECX]            ; 004cb9a7
    ADD EAX,EBP                         ; 004cb9aa
    LEA EDX,[EAX*0x4 + 0x0]             ; 004cb9ac
    MOV EAX,dword ptr [ECX + 0x24]      ; 004cb9b3
    MOV dword ptr [ESP + 0x8],EBP       ; 004cb9b6
    MOV EBP,dword ptr [ECX + 0x20]      ; 004cb9ba
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004cb9bd
    IMUL EBP,EDX                        ; 004cb9c1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cb9c4
    MOV dword ptr [ESP + 0x4],EBP       ; 004cb9c8
    AND EDX,dword ptr [ECX + 0xc]       ; 004cb9cc
    MOV EBP,dword ptr [ECX]             ; 004cb9cf
    IMUL EBP,EDX                        ; 004cb9d1
    MOV dword ptr [ESP + 0xc],EBP       ; 004cb9d4
    MOV EDX,EBP                         ; 004cb9d8
    ADD EDX,dword ptr [ESP + 0x8]       ; 004cb9da
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004cb9de
    MOV EBP,dword ptr [ECX + 0x20]      ; 004cb9e2
    IMUL EBP,EDX                        ; 004cb9e5
    ADD ESI,dword ptr [ESP + 0xc]       ; 004cb9e8
    MOVSX EAX,word ptr [EAX + ESI*0x4]  ; 004cb9ec
    MOV EDX,EAX                         ; 004cb9f0
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004cb9f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cb9f6
    SUB EDX,EBP                         ; 004cb9fa
    SUB EBP,EAX                         ; 004cb9fc
    MOV EAX,EDI                         ; 004cb9fe
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cba00
    IMUL EDX                            ; 004cba04
    SHRD EAX,EDX,0x10                   ; 004cba06
    MOV EDX,EBP                         ; 004cba0a
    ADD ECX,EAX                         ; 004cba0c
    MOV EAX,EBX                         ; 004cba0e
    IMUL EDX                            ; 004cba10
    SHRD EAX,EDX,0x10                   ; 004cba12
    ADD EAX,ECX                         ; 004cba16
    ADD ESP,0x14                        ; 004cba18
    POP EBP                             ; 004cba1b
    POP EDI                             ; 004cba1c
    POP ESI                             ; 004cba1d
    POP EBX                             ; 004cba1e
    RET                                 ; 004cba1f

