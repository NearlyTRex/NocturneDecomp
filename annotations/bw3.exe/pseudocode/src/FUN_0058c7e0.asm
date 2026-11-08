; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058c7e0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0058c7c4 = 0058c86e
;   undefined4 DAT_005d8957
;   undefined4 DAT_005d895f
;   undefined4 DAT_005d8967
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c7e0
        ;   Label: FUN_0058c7e0
    PUSH ESI                            ; 0058c7e1
    PUSH EDI                            ; 0058c7e2
    PUSH EBP                            ; 0058c7e3
    MOV EBP,ESP                         ; 0058c7e4
    SUB ESP,0x90                        ; 0058c7e6
    AND ESP,0xfffffff8                  ; 0058c7ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058c7ef
    MOV EDX,dword ptr [EBX + 0xd10c]    ; 0058c7f2
    PUSH EDX                            ; 0058c7f8
    LEA EAX,[EBX + 0x158]               ; 0058c7f9
    PUSH EAX                            ; 0058c7ff
    LEA ESI,[ESP + 0x20]                ; 0058c800
    LEA EDI,[ESP + 0x2c]                ; 0058c804
    CALL FUN_0054dcc0                   ; 0058c808
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x20]                ; 0058c80d
    ADD ESP,0x8                         ; 0058c811
    LEA EAX,[ESP + 0x24]                ; 0058c814
    MOV ECX,dword ptr [EBP + 0x18]      ; 0058c818
    MOVSD ES:EDI,ESI                    ; 0058c81b
    MOVSD ES:EDI,ESI                    ; 0058c81c
    MOVSD ES:EDI,ESI                    ; 0058c81d
    CMP EAX,ECX                         ; 0058c81e
    JNZ 0x0058c958                      ; 0058c820
        ;   XREF to: 0058c958 (CONDITIONAL_JUMP)  ; LAB_0058c958
    MOV ESI,0x1                         ; 0058c826
        ;   Label: LAB_0058c826
    XOR EDI,EDI                         ; 0058c82b
    LEA EAX,[EBX + 0x158]               ; 0058c82d
    MOV dword ptr [ESP + 0x84],EDI      ; 0058c833
    MOV dword ptr [ESP + 0x88],EAX      ; 0058c83a
    MOV dword ptr [ESP + 0x8c],ESI      ; 0058c841
    MOV EDX,dword ptr [ESP + 0x84]      ; 0058c848
        ;   Label: LAB_0058c848
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0058c84f
    MOV ESI,0x4                         ; 0058c852
    MOV EAX,EDX                         ; 0058c857
    SAR EDX,0x1f                        ; 0058c859
    IDIV ESI                            ; 0058c85c
    CMP EDX,0x3                         ; 0058c85e
    JA 0x0058c932                       ; 0058c861
        ;   XREF to: 0058c932 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x58c7c4]  ; 0058c867 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd114]    ; 0058c86e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058c874
    JZ 0x0058c932                       ; 0058c87c
        ;   XREF to: 0058c932 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd0fc]    ; 0058c882
    PUSH ECX                            ; 0058c888
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0058c889
    PUSH ESI                            ; 0058c890
    LEA ESI,[ESP + 0x74]                ; 0058c891
    LEA EDI,[ESP + 0x68]                ; 0058c895
    CALL FUN_0054dcc0                   ; 0058c899
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x74]                ; 0058c89e
    LEA EAX,[ESP + 0x68]                ; 0058c8a2
    ADD ESP,0x8                         ; 0058c8a6
    LEA EDX,[ESP + 0x30]                ; 0058c8a9
    MOVSD ES:EDI,ESI                    ; 0058c8ad
    MOVSD ES:EDI,ESI                    ; 0058c8ae
    MOVSD ES:EDI,ESI                    ; 0058c8af
    CMP EDX,EAX                         ; 0058c8b0
    JZ 0x0058c8cc                       ; 0058c8b2
        ;   XREF to: 0058c8cc (CONDITIONAL_JUMP)  ; LAB_0058c8cc
    MOV EAX,dword ptr [ESP + 0x60]      ; 0058c8b4
    MOV dword ptr [ESP + 0x30],EAX      ; 0058c8b8
    MOV EAX,dword ptr [ESP + 0x64]      ; 0058c8bc
    MOV dword ptr [ESP + 0x34],EAX      ; 0058c8c0
    MOV EAX,dword ptr [ESP + 0x68]      ; 0058c8c4
    MOV dword ptr [ESP + 0x38],EAX      ; 0058c8c8
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0058c8cc
        ;   Label: LAB_0058c8cc
    FLD double ptr [0x005d8957]         ; 0058c8d4 | DAT_005d8957
    FLD float ptr [ESP + 0x30]          ; 0058c8da
    FMUL ST1                            ; 0058c8de
    FLD float ptr [ESP + 0x34]          ; 0058c8e0
    FMUL double ptr [0x005d895f]        ; 0058c8e4 | DAT_005d895f
    FLD float ptr [ESP + 0x24]          ; 0058c8ea
    FMULP ST3                           ; 0058c8ee
    FLD float ptr [ESP + 0x28]          ; 0058c8f0
    FMUL double ptr [0x005d8967]        ; 0058c8f4 | DAT_005d8967
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058c8fa
    FADDP                               ; 0058c8fd
    FXCH ST2                            ; 0058c8ff
    FADDP                               ; 0058c901
    FXCH                                ; 0058c903
    FSTP float ptr [ESP + 0x34]         ; 0058c905
    ADD EDX,EAX                         ; 0058c909
    LEA EAX,[ESP + 0x30]                ; 0058c90b
    FSTP float ptr [ESP + 0x30]         ; 0058c90f
        ;   Label: LAB_0058c90f
    CMP EDX,EAX                         ; 0058c913
    JZ 0x0058c92b                       ; 0058c915
        ;   XREF to: 0058c92b (CONDITIONAL_JUMP)  ; LAB_0058c92b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058c917
    MOV dword ptr [EDX],EAX             ; 0058c91b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058c91d
    MOV dword ptr [EDX + 0x4],EAX       ; 0058c921
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058c924
    MOV dword ptr [EDX + 0x8],EAX       ; 0058c928
        ;   Label: LAB_0058c928
    INC dword ptr [ESP + 0x8c]          ; 0058c92b
        ;   Label: LAB_0058c92b
    MOV ECX,dword ptr [ESP + 0x84]      ; 0058c932
        ;   Label: default
    INC ECX                             ; 0058c939
    MOV dword ptr [ESP + 0x84],ECX      ; 0058c93a
    CMP ECX,0x4                         ; 0058c941
    JL 0x0058c848                       ; 0058c944
        ;   XREF to: 0058c848 (CONDITIONAL_JUMP)  ; LAB_0058c848
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0058c94a
    MOV ESP,EBP                         ; 0058c951
    POP EBP                             ; 0058c953
    POP EDI                             ; 0058c954
    POP ESI                             ; 0058c955
    POP EBX                             ; 0058c956
    RET                                 ; 0058c957
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058c958
        ;   Label: LAB_0058c958
    MOV dword ptr [ECX],EAX             ; 0058c95c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058c95e
    MOV dword ptr [ECX + 0x4],EAX       ; 0058c962
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058c965
    MOV dword ptr [ECX + 0x8],EAX       ; 0058c969
    JMP 0x0058c826                      ; 0058c96c
        ;   XREF to: 0058c826 (UNCONDITIONAL_JUMP)  ; LAB_0058c826
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 0058c971
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058c977
    JZ 0x0058c932                       ; 0058c97f
        ;   XREF to: 0058c932 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xd100]    ; 0058c981
    PUSH EAX                            ; 0058c987
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0058c988
    PUSH EDX                            ; 0058c98f
    LEA ESI,[ESP + 0x50]                ; 0058c990
    LEA EDI,[ESP + 0x14]                ; 0058c994
    CALL FUN_0054dcc0                   ; 0058c998
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x50]                ; 0058c99d
    LEA EAX,[ESP + 0x14]                ; 0058c9a1
    ADD ESP,0x8                         ; 0058c9a5
    LEA EDX,[ESP + 0x30]                ; 0058c9a8
    MOVSD ES:EDI,ESI                    ; 0058c9ac
    MOVSD ES:EDI,ESI                    ; 0058c9ad
    MOVSD ES:EDI,ESI                    ; 0058c9ae
    CMP EDX,EAX                         ; 0058c9af
    JZ 0x0058c9cb                       ; 0058c9b1
        ;   XREF to: 0058c9cb (CONDITIONAL_JUMP)  ; LAB_0058c9cb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058c9b3
    MOV dword ptr [ESP + 0x30],EAX      ; 0058c9b7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058c9bb
    MOV dword ptr [ESP + 0x34],EAX      ; 0058c9bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058c9c3
    MOV dword ptr [ESP + 0x38],EAX      ; 0058c9c7
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0058c9cb
        ;   Label: LAB_0058c9cb
    FLD double ptr [0x005d8957]         ; 0058c9d3 | DAT_005d8957
    FLD float ptr [ESP + 0x30]          ; 0058c9d9
    FMUL ST1                            ; 0058c9dd
    FLD float ptr [ESP + 0x34]          ; 0058c9df
    FMUL double ptr [0x005d895f]        ; 0058c9e3 | DAT_005d895f
    FLD float ptr [ESP + 0x24]          ; 0058c9e9
    FMULP ST3                           ; 0058c9ed
    FLD float ptr [ESP + 0x28]          ; 0058c9ef
    FMUL double ptr [0x005d8967]        ; 0058c9f3 | DAT_005d8967
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058c9f9
    LEA EAX,[ESP + 0x30]                ; 0058c9fc
    FADDP                               ; 0058ca00
    FXCH ST2                            ; 0058ca02
    FADDP                               ; 0058ca04
    FXCH                                ; 0058ca06
    FSTP float ptr [ESP + 0x34]         ; 0058ca08
    ADD EDX,ESI                         ; 0058ca0c
    JMP 0x0058c90f                      ; 0058ca0e
        ;   XREF to: 0058c90f (UNCONDITIONAL_JUMP)  ; LAB_0058c90f
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 0058ca13
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058ca19
    JZ 0x0058c932                       ; 0058ca21
        ;   XREF to: 0058c932 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 0058ca27
    PUSH ESI                            ; 0058ca2d
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0058ca2e
    PUSH EDI                            ; 0058ca35
    LEA ESI,[ESP + 0x8]                 ; 0058ca36
    CALL FUN_0054dcc0                   ; 0058ca3a
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    ADD ESP,0x8                         ; 0058ca3f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0058ca42
    LEA EDI,[ESP + 0x78]                ; 0058ca4a
    MOV ESI,ESP                         ; 0058ca4e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0058ca50
    LEA EAX,[ESP + 0x78]                ; 0058ca53
    ADD EDX,ECX                         ; 0058ca57
    MOVSD ES:EDI,ESI                    ; 0058ca59
    MOVSD ES:EDI,ESI                    ; 0058ca5a
    MOVSD ES:EDI,ESI                    ; 0058ca5b
    CMP EDX,EAX                         ; 0058ca5c
    JZ 0x0058c92b                       ; 0058ca5e
        ;   XREF to: 0058c92b (CONDITIONAL_JUMP)  ; LAB_0058c92b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0058ca64
    MOV dword ptr [EDX],EAX             ; 0058ca68
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0058ca6a
    MOV dword ptr [EDX + 0x4],EAX       ; 0058ca6e
    MOV EAX,dword ptr [ESP + 0x80]      ; 0058ca71
    JMP 0x0058c928                      ; 0058ca78
        ;   XREF to: 0058c928 (UNCONDITIONAL_JUMP)  ; LAB_0058c928
    MOV EAX,dword ptr [EBX + 0xd128]    ; 0058ca7d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058ca83
    JZ 0x0058c932                       ; 0058ca8b
        ;   XREF to: 0058c932 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd110]    ; 0058ca91
    PUSH ECX                            ; 0058ca97
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0058ca98
    PUSH ESI                            ; 0058ca9f
    LEA ESI,[ESP + 0x44]                ; 0058caa0
    LEA EDI,[ESP + 0x5c]                ; 0058caa4
    CALL FUN_0054dcc0                   ; 0058caa8
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 0058caad
    ADD ESP,0x8                         ; 0058cab1
    MOVSD ES:EDI,ESI                    ; 0058cab4
    MOVSD ES:EDI,ESI                    ; 0058cab5
    MOVSD ES:EDI,ESI                    ; 0058cab6
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 0058cab7
    ADD EDX,dword ptr [EBP + 0x18]      ; 0058cabf
    LEA EAX,[ESP + 0x54]                ; 0058cac2
    CMP EDX,EAX                         ; 0058cac6
    JZ 0x0058c92b                       ; 0058cac8
        ;   XREF to: 0058c92b (CONDITIONAL_JUMP)  ; LAB_0058c92b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0058cace
    MOV dword ptr [EDX],EAX             ; 0058cad2
    MOV EAX,dword ptr [ESP + 0x58]      ; 0058cad4
    MOV dword ptr [EDX + 0x4],EAX       ; 0058cad8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0058cadb
    JMP 0x0058c928                      ; 0058cadf
        ;   XREF to: 0058c928 (UNCONDITIONAL_JUMP)  ; LAB_0058c928

