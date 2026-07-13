; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004487c0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004487b4 = 00448874
;   undefined1* PTR_caseD_3_004487bc = 00448859
;   undefined4 DAT_014b8550
;   undefined4 DAT_014b8614
;
; Called Functions:
;   FUN_004484c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004487c0
        ;   Label: FUN_004487c0
    PUSH ESI                            ; 004487c1
    PUSH EDI                            ; 004487c2
    PUSH EBP                            ; 004487c3
    MOV EBP,ESP                         ; 004487c4
    SUB ESP,0x8                         ; 004487c6
    AND ESP,0xfffffff8                  ; 004487c9
    MOV EBX,dword ptr [0x014b8614]      ; 004487cc | DAT_014b8614
    MOV EDX,dword ptr [EBP + 0x14]      ; 004487d2
    MOV dword ptr [ESP],EDX             ; 004487d5
    MOV EDX,dword ptr [0x014b8550]      ; 004487d8 | DAT_014b8550
    XOR EDI,EDI                         ; 004487de
    TEST EDX,EDX                        ; 004487e0
    JLE 0x00448867                      ; 004487e2
        ;   XREF to: 00448867 (CONDITIONAL_JUMP)  ; LAB_00448867
    MOV ESI,0x14b8554                   ; 004487e8
    MOV EAX,[0x014b8550]                ; 004487ed | DAT_014b8550
        ;   Label: LAB_004487ed
    LEA ECX,[EDI + 0x1]                 ; 004487f2
    CMP ECX,EAX                         ; 004487f5
    JNZ 0x004487fb                      ; 004487f7
        ;   XREF to: 004487fb (CONDITIONAL_JUMP)  ; LAB_004487fb
    XOR ECX,EAX                         ; 004487f9
    IMUL ECX,ECX,0xc                    ; 004487fb
        ;   Label: LAB_004487fb
    MOV EAX,0x14b8554                   ; 004487fe
    FLD float ptr [ESI + 0x4]           ; 00448803
    ADD EAX,ECX                         ; 00448806
    MOV EDX,ESI                         ; 00448808
    MOV dword ptr [ESP + 0x4],EAX       ; 0044880a
    XOR ECX,ECX                         ; 0044880e
    FCOMP float ptr [ESP]               ; 00448810
    FNSTSW AX                           ; 00448813
    SAHF                                ; 00448815
    JNC 0x0044881d                      ; 00448816
        ;   XREF to: 0044881d (CONDITIONAL_JUMP)  ; LAB_0044881d
    MOV ECX,0x1                         ; 00448818
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044881d
        ;   Label: LAB_0044881d
    FLD float ptr [EAX + 0x4]           ; 00448821
    FCOMP float ptr [ESP]               ; 00448824
    FNSTSW AX                           ; 00448827
    SAHF                                ; 00448829
    JNC 0x0044882f                      ; 0044882a
        ;   XREF to: 0044882f (CONDITIONAL_JUMP)  ; LAB_0044882f
    OR CL,0x2                           ; 0044882c
    CMP ECX,0x3                         ; 0044882f
        ;   Label: LAB_0044882f
    JA 0x00448859                       ; 00448832
        ;   XREF to: 00448859 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4487b0]  ; 00448834 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0044883b
        ;   Label: caseD_0
    ADD ECX,0x14b8618                   ; 0044883e
    CMP ECX,EDX                         ; 00448844
    JZ 0x00448858                       ; 00448846
        ;   XREF to: 00448858 (CONDITIONAL_JUMP)  ; LAB_00448858
    MOV EAX,dword ptr [EDX]             ; 00448848
    MOV dword ptr [ECX],EAX             ; 0044884a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044884c
    MOV dword ptr [ECX + 0x4],EAX       ; 0044884f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00448852
    MOV dword ptr [ECX + 0x8],EAX       ; 00448855
    INC EBX                             ; 00448858
        ;   Label: LAB_00448858
    MOV ECX,dword ptr [0x014b8550]      ; 00448859 | DAT_014b8550
        ;   Label: caseD_3
    INC EDI                             ; 0044885f
    ADD ESI,0xc                         ; 00448860
    CMP EDI,ECX                         ; 00448863
    JL 0x004487ed                       ; 00448865
        ;   XREF to: 004487ed (CONDITIONAL_JUMP)  ; LAB_004487ed
    MOV dword ptr [0x014b8614],EBX      ; 00448867 | DAT_014b8614
        ;   Label: LAB_00448867
    MOV ESP,EBP                         ; 0044886d
    POP EBP                             ; 0044886f
    POP EDI                             ; 00448870
    POP ESI                             ; 00448871
    POP EBX                             ; 00448872
    RET                                 ; 00448873
    IMUL ECX,EBX,0xc                    ; 00448874
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00448877
    SUB ESP,0x8                         ; 0044887a
    FSTP double ptr [ESP]               ; 0044887d
    PUSH 0x0                            ; 00448880
    PUSH 0x0                            ; 00448882
    PUSH 0xbff00000                     ; 00448884
    PUSH 0x0                            ; 00448889
    PUSH 0x0                            ; 0044888b
    PUSH 0x0                            ; 0044888d
    ADD ECX,0x14b8618                   ; 0044888f
    PUSH ECX                            ; 00448895
    PUSH EDX                            ; 00448896
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00448897
    PUSH EAX                            ; 0044889b
    MOV dword ptr [0x014b8614],EBX      ; 0044889c | DAT_014b8614
    CALL FUN_004484c0                   ; 004488a2
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004484c0()
    MOV EBX,dword ptr [0x014b8614]      ; 004488a7 | DAT_014b8614
    ADD ESP,0x2c                        ; 004488ad
    JMP 0x00448858                      ; 004488b0
        ;   XREF to: 00448858 (UNCONDITIONAL_JUMP)  ; LAB_00448858
    IMUL ECX,EBX,0xc                    ; 004488b2
        ;   Label: caseD_2
    ADD ECX,0x14b8618                   ; 004488b5
    CMP ECX,EDX                         ; 004488bb
    JZ 0x004488cf                       ; 004488bd
        ;   XREF to: 004488cf (CONDITIONAL_JUMP)  ; LAB_004488cf
    MOV EAX,dword ptr [EDX]             ; 004488bf
    MOV dword ptr [ECX],EAX             ; 004488c1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004488c3
    MOV dword ptr [ECX + 0x4],EAX       ; 004488c6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004488c9
    MOV dword ptr [ECX + 0x8],EAX       ; 004488cc
    INC EBX                             ; 004488cf
        ;   Label: LAB_004488cf
    IMUL ECX,EBX,0xc                    ; 004488d0
    FLD float ptr [ESP]                 ; 004488d3
    SUB ESP,0x8                         ; 004488d6
    FSTP double ptr [ESP]               ; 004488d9
    PUSH 0x0                            ; 004488dc
    PUSH 0x0                            ; 004488de
    PUSH 0xbff00000                     ; 004488e0
    PUSH 0x0                            ; 004488e5
    PUSH 0x0                            ; 004488e7
    PUSH 0x0                            ; 004488e9
    ADD ECX,0x14b8618                   ; 004488eb
    PUSH ECX                            ; 004488f1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004488f2
    PUSH ECX                            ; 004488f6
    PUSH EDX                            ; 004488f7
    MOV dword ptr [0x014b8614],EBX      ; 004488f8 | DAT_014b8614
    CALL FUN_004484c0                   ; 004488fe
        ;   XREF to: 004484c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004484c0()
    MOV EBX,dword ptr [0x014b8614]      ; 00448903 | DAT_014b8614
    ADD ESP,0x2c                        ; 00448909
    JMP 0x00448858                      ; 0044890c
        ;   XREF to: 00448858 (UNCONDITIONAL_JUMP)  ; LAB_00448858

