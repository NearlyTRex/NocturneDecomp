; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041e8a0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0041ead0 at 0041eb67
;
; Referenced Globals:
;   undefined1* switchdataD_0041e888 = 0041e8e0
;   TerminatedCString s_limb_wav_005cc8ad
;   undefined4 DAT_005cc8b9
;   undefined4 DAT_005cc8c1
;   undefined4 DAT_005cc8c9
;   undefined4 DAT_005cc8d1
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6914
;   undefined4 DAT_01cb6afc
;
; Called Functions:
;   FUN_0040d060
;   FUN_004154f0
;   FUN_00416700
;   FUN_004277e0
;   FUN_0042b260
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e8a0
        ;   Label: FUN_0041e8a0
    PUSH ESI                            ; 0041e8a1
    PUSH EDI                            ; 0041e8a2
    PUSH EBP                            ; 0041e8a3
    MOV EBP,ESP                         ; 0041e8a4
    SUB ESP,0x10                        ; 0041e8a6
    AND ESP,0xfffffff8                  ; 0041e8a9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041e8ac
    MOV EBX,dword ptr [EBP + 0x18]      ; 0041e8af
    FLD float ptr [EBX + 0x2c]          ; 0041e8b2
    FLDZ                                ; 0041e8b5
    FCOMPP                              ; 0041e8b7
    FNSTSW AX                           ; 0041e8b9
    SAHF                                ; 0041e8bb
    JNC 0x0041e8e8                      ; 0041e8bc
        ;   XREF to: 0041e8e8 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX],-0x1            ; 0041e8be
    JNZ 0x0041e8e8                      ; 0041e8c1
        ;   XREF to: 0041e8e8 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005b849c                   ; 0041e8c3
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    MOV EDX,EAX                         ; 0041e8c8
    MOV EDI,0x5                         ; 0041e8ca
    SAR EDX,0x1f                        ; 0041e8cf
    IDIV EDI                            ; 0041e8d2
    CMP EDX,0x4                         ; 0041e8d4
    JA 0x0041e8e8                       ; 0041e8d7
        ;   XREF to: 0041e8e8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x41e888]  ; 0041e8d9 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0x10af8]   ; 0041e8e0
        ;   Label: caseD_0
    MOV dword ptr [EBX],EAX             ; 0041e8e6
        ;   Label: LAB_0041e8e6
    MOV ECX,dword ptr [ESI + 0x10af8]   ; 0041e8e8
        ;   Label: default
    MOV EAX,dword ptr [EBX]             ; 0041e8ee
    CMP EAX,ECX                         ; 0041e8f0
    JNZ 0x0041ea5c                      ; 0041e8f2
        ;   XREF to: 0041ea5c (CONDITIONAL_JUMP)  ; LAB_0041ea5c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0041e8f8
        ;   Label: LAB_0041e8f8
    MOV EDX,dword ptr [ESI + 0x10b18]   ; 0041e8fb
    MOV dword ptr [ESP],EAX             ; 0041e901
    CMP EDX,dword ptr [EBX]             ; 0041e904
    JNZ 0x0041e918                      ; 0041e906
        ;   XREF to: 0041e918 (CONDITIONAL_JUMP)  ; LAB_0041e918
    FLD float ptr [ESP]                 ; 0041e908
    FLD ST0                             ; 0041e90b
    FMUL double ptr [0x005cc8b9]        ; 0041e90d | DAT_005cc8b9
    FSTP ST1                            ; 0041e913
    FSTP float ptr [ESP]                ; 0041e915
    MOV EAX,[0x00616494]                ; 0041e918 | DAT_00616494
        ;   Label: LAB_0041e918
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0041e91d | DAT_01cb6afc
    JZ 0x0041e92d                       ; 0041e924
        ;   XREF to: 0041e92d (CONDITIONAL_JUMP)  ; LAB_0041e92d
    MOV dword ptr [ESP],0x3f800000      ; 0041e926
    MOV EAX,[0x00616494]                ; 0041e92d | DAT_00616494
        ;   Label: LAB_0041e92d
    MOV EDX,dword ptr [EAX + 0x14]      ; 0041e932 | DAT_01cb6914
    TEST EDX,EDX                        ; 0041e935
    JNZ 0x0041e93c                      ; 0041e937
        ;   XREF to: 0041e93c (CONDITIONAL_JUMP)  ; LAB_0041e93c
    MOV dword ptr [ESP],EDX             ; 0041e939
    PUSH dword ptr [ESP]                ; 0041e93c
        ;   Label: LAB_0041e93c
    CALL FUN_0040d060                   ; 0041e93f
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0041e944
    TEST EAX,EAX                        ; 0041e947
    JZ 0x0041e9ff                       ; 0041e949
        ;   XREF to: 0041e9ff (CONDITIONAL_JUMP)  ; LAB_0041e9ff
    PUSH 0x0                            ; 0041e94f
    PUSH 0x0                            ; 0041e951
    PUSH 0x0                            ; 0041e953
    PUSH ESI                            ; 0041e955
    LEA EAX,[EBX + 0xc]                 ; 0041e956
    PUSH EAX                            ; 0041e959
    LEA EAX,[ESI + 0x30]                ; 0041e95a
    PUSH EAX                            ; 0041e95d
    LEA EAX,[ESI + 0x20]                ; 0041e95e
    PUSH EAX                            ; 0041e961
    CALL FUN_004154f0                   ; 0041e962
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 0041e967
    MOV EDI,EAX                         ; 0041e96a
    PUSH 0x0                            ; 0041e96c
    MOV dword ptr [ESP + 0x10],EAX      ; 0041e96e
    MOV EAX,dword ptr [EBX]             ; 0041e972
    PUSH EAX                            ; 0041e974
    PUSH EDI                            ; 0041e975
    PUSH ESI                            ; 0041e976
    CALL FUN_004277e0                   ; 0041e977
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    MOV EAX,dword ptr [EBX]             ; 0041e97c
    MOV EDX,dword ptr [ESI + 0x10af8]   ; 0041e97e
    ADD ESP,0x10                        ; 0041e984
    CMP EAX,EDX                         ; 0041e987
    JNZ 0x0041e99e                      ; 0041e989
        ;   XREF to: 0041e99e (CONDITIONAL_JUMP)  ; LAB_0041e99e
    PUSH 0x0                            ; 0041e98b
    MOV ECX,dword ptr [ESI + 0x10afc]   ; 0041e98d
    PUSH ECX                            ; 0041e993
    PUSH EDI                            ; 0041e994
    PUSH ESI                            ; 0041e995
    CALL FUN_004277e0                   ; 0041e996
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 0041e99b
    MOV EDI,dword ptr [ESI + 0x10b00]   ; 0041e99e
        ;   Label: LAB_0041e99e
    CMP EDI,dword ptr [EBX]             ; 0041e9a4
    JNZ 0x0041e9bf                      ; 0041e9a6
        ;   XREF to: 0041e9bf (CONDITIONAL_JUMP)  ; LAB_0041e9bf
    PUSH 0x0                            ; 0041e9a8
    MOV EAX,dword ptr [ESI + 0x10b04]   ; 0041e9aa
    PUSH EAX                            ; 0041e9b0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041e9b1
    PUSH EDX                            ; 0041e9b5
    PUSH ESI                            ; 0041e9b6
    CALL FUN_004277e0                   ; 0041e9b7
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 0041e9bc
    PUSH 0x5cc8ad                       ; 0041e9bf | = "limb?.wav"
        ;   Label: LAB_0041e9bf
    PUSH ESI                            ; 0041e9c4
    CALL FUN_0042b260                   ; 0041e9c5
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b260()
    ADD ESP,0x8                         ; 0041e9ca
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041e9cd
    PUSH ECX                            ; 0041e9d1
    CALL FUN_00416700                   ; 0041e9d2
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    MOV EAX,dword ptr [ESI + 0x10b18]   ; 0041e9d7
    MOV EDI,dword ptr [ESI + EAX*0x4 + 0x23f4] ; 0041e9dd
    ADD ESP,0x4                         ; 0041e9e4
    TEST EDI,EDI                        ; 0041e9e7
    JZ 0x0041ea91                       ; 0041e9e9
        ;   XREF to: 0041ea91 (CONDITIONAL_JUMP)  ; LAB_0041ea91
    FLD float ptr [EBX + 0x8]           ; 0041e9ef
        ;   Label: LAB_0041e9ef
    FLD ST0                             ; 0041e9f2
    FMUL double ptr [0x005cc8c1]        ; 0041e9f4 | DAT_005cc8c1
    FSTP ST1                            ; 0041e9fa
    FSTP float ptr [EBX + 0x8]          ; 0041e9fc
    MOV EDX,dword ptr [ESI + 0x10b18]   ; 0041e9ff
        ;   Label: LAB_0041e9ff
    MOV EAX,dword ptr [EBX]             ; 0041ea05
    CMP EAX,EDX                         ; 0041ea07
    JZ 0x0041ea9d                       ; 0041ea09
        ;   XREF to: 0041ea9d (CONDITIONAL_JUMP)  ; LAB_0041ea9d
    CMP EAX,dword ptr [ESI + 0x10b14]   ; 0041ea0f
    JZ 0x0041ea23                       ; 0041ea15
        ;   XREF to: 0041ea23 (CONDITIONAL_JUMP)  ; LAB_0041ea23
    CMP EAX,dword ptr [ESI + 0x10b10]   ; 0041ea17
    JNZ 0x0041eab4                      ; 0041ea1d
        ;   XREF to: 0041eab4 (CONDITIONAL_JUMP)  ; LAB_0041eab4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041ea23
        ;   Label: LAB_0041ea23
    MOV dword ptr [EBX + 0x4],EAX       ; 0041ea26
    MOV ESP,EBP                         ; 0041ea29
    POP EBP                             ; 0041ea2b
    POP EDI                             ; 0041ea2c
    POP ESI                             ; 0041ea2d
    POP EBX                             ; 0041ea2e
    RET                                 ; 0041ea2f
    MOV EAX,dword ptr [ESI + 0x10afc]   ; 0041ea30
        ;   Label: caseD_1
    JMP 0x0041e8e6                      ; 0041ea36
        ;   XREF to: 0041e8e6 (UNCONDITIONAL_JUMP)  ; LAB_0041e8e6
    MOV EAX,dword ptr [ESI + 0x10b00]   ; 0041ea3b
        ;   Label: caseD_2
    JMP 0x0041e8e6                      ; 0041ea41
        ;   XREF to: 0041e8e6 (UNCONDITIONAL_JUMP)  ; LAB_0041e8e6
    MOV EAX,dword ptr [ESI + 0x10b04]   ; 0041ea46
        ;   Label: caseD_3
    JMP 0x0041e8e6                      ; 0041ea4c
        ;   XREF to: 0041e8e6 (UNCONDITIONAL_JUMP)  ; LAB_0041e8e6
    MOV EAX,dword ptr [ESI + 0x10b18]   ; 0041ea51
        ;   Label: caseD_4
    JMP 0x0041e8e6                      ; 0041ea57
        ;   XREF to: 0041e8e6 (UNCONDITIONAL_JUMP)  ; LAB_0041e8e6
    CMP EAX,dword ptr [ESI + 0x10afc]   ; 0041ea5c
        ;   Label: LAB_0041ea5c
    JZ 0x0041e8f8                       ; 0041ea62
        ;   XREF to: 0041e8f8 (CONDITIONAL_JUMP)  ; LAB_0041e8f8
    CMP EAX,dword ptr [ESI + 0x10b00]   ; 0041ea68
    JZ 0x0041e8f8                       ; 0041ea6e
        ;   XREF to: 0041e8f8 (CONDITIONAL_JUMP)  ; LAB_0041e8f8
    CMP EAX,dword ptr [ESI + 0x10b04]   ; 0041ea74
    JZ 0x0041e8f8                       ; 0041ea7a
        ;   XREF to: 0041e8f8 (CONDITIONAL_JUMP)  ; LAB_0041e8f8
    CMP EAX,dword ptr [ESI + 0x10b18]   ; 0041ea80
    JZ 0x0041e8f8                       ; 0041ea86
        ;   XREF to: 0041e8f8 (CONDITIONAL_JUMP)  ; LAB_0041e8f8
    JMP 0x0041e9ff                      ; 0041ea8c
        ;   XREF to: 0041e9ff (UNCONDITIONAL_JUMP)  ; LAB_0041e9ff
    MOV dword ptr [EBX + 0x4],0x461c3c00 ; 0041ea91
        ;   Label: LAB_0041ea91
    JMP 0x0041e9ef                      ; 0041ea98
        ;   XREF to: 0041e9ef (UNCONDITIONAL_JUMP)  ; LAB_0041e9ef
    FLD float ptr [EBX + 0x4]           ; 0041ea9d
        ;   Label: LAB_0041ea9d
    FLD ST0                             ; 0041eaa0
    FMUL double ptr [0x005cc8d1]        ; 0041eaa2 | DAT_005cc8d1
    FSTP ST1                            ; 0041eaa8
    FSTP float ptr [EBX + 0x4]          ; 0041eaaa
    MOV ESP,EBP                         ; 0041eaad
    POP EBP                             ; 0041eaaf
    POP EDI                             ; 0041eab0
    POP ESI                             ; 0041eab1
    POP EBX                             ; 0041eab2
    RET                                 ; 0041eab3
    FLD float ptr [EBX + 0x4]           ; 0041eab4
        ;   Label: LAB_0041eab4
    FLD ST0                             ; 0041eab7
    FMUL double ptr [0x005cc8c9]        ; 0041eab9 | DAT_005cc8c9
    FSTP ST1                            ; 0041eabf
    FSTP float ptr [EBX + 0x4]          ; 0041eac1
    MOV ESP,EBP                         ; 0041eac4
    POP EBP                             ; 0041eac6
    POP EDI                             ; 0041eac7
    POP ESI                             ; 0041eac8
    POP EBX                             ; 0041eac9
    RET                                 ; 0041eaca

