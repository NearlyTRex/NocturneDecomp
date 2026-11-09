; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_004387f0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0344
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004387f0
        ;   Label: cockpit_ckptutil.c_FUN_004387f0
    PUSH EDI                            ; 004387f1
    PUSH EBP                            ; 004387f2
    SUB ESP,0x30                        ; 004387f3
    MOV EAX,dword ptr [ESP + 0x40]      ; 004387f6
    MOV EBX,dword ptr [ESP + 0x44]      ; 004387fa
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004387fe
    MOV EDI,dword ptr [ESP + 0x58]      ; 00438802
    MOV dword ptr [ESP],EAX             ; 00438806
    TEST EAX,EAX                        ; 00438809
    JZ 0x0043898d                       ; 0043880b
        ;   XREF to: 0043898d (CONDITIONAL_JUMP)  ; LAB_0043898d
    PUSH ESI                            ; 00438811
    MOV EAX,EBX                         ; 00438812
    SUB EAX,EBP                         ; 00438814
    MOV EDX,dword ptr [ESP + 0x58]      ; 00438816
    INC EAX                             ; 0043881a
    CMP EAX,EDX                         ; 0043881b
    JG 0x00438994                       ; 0043881d
        ;   XREF to: 00438994 (CONDITIONAL_JUMP)  ; LAB_00438994
    LEA EAX,[EBP*0x4 + 0x0]             ; 00438823
        ;   Label: LAB_00438823
    PUSH EAX                            ; 0043882a
    CALL crt_unknown.c_FUN_005c1268     ; 0043882b
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 00438830
    MOV dword ptr [ESP + 0x20],EAX      ; 00438833
    TEST EAX,EAX                        ; 00438837
    JZ 0x004389bc                       ; 00438839
        ;   XREF to: 004389bc (CONDITIONAL_JUMP)  ; LAB_004389bc
    XOR ESI,ESI                         ; 0043883f
        ;   Label: LAB_0043883f
    MOV dword ptr [ESP + 0x1c],ESI      ; 00438841
    TEST EBP,EBP                        ; 00438845
    JLE 0x004388a4                      ; 00438847
        ;   XREF to: 004388a4 (CONDITIONAL_JUMP)  ; LAB_004388a4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00438849
    DEC EAX                             ; 0043884d
    MOV dword ptr [ESP + 0x14],EAX      ; 0043884e
    IMUL EAX,EBX                        ; 00438852
    MOV EDX,dword ptr [ESP + 0x4]       ; 00438855
    ADD EDX,EAX                         ; 00438859
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043885b
    MOV dword ptr [ESP + 0x8],EDX       ; 0043885f
    MOV dword ptr [ESP + 0x24],EAX      ; 00438863
    MOV EDX,dword ptr [ESP + 0x8]       ; 00438867
        ;   Label: LAB_00438867
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043886b
    ADD EDX,ESI                         ; 0043886f
    TEST EAX,EAX                        ; 00438871
    JL 0x00438881                       ; 00438873
        ;   XREF to: 00438881 (CONDITIONAL_JUMP)  ; LAB_00438881
    XOR ECX,ECX                         ; 00438875
        ;   Label: LAB_00438875
    MOV CL,byte ptr [EDX]               ; 00438877
    CMP ECX,EDI                         ; 00438879
    JNZ 0x004389e3                      ; 0043887b
        ;   XREF to: 004389e3 (CONDITIONAL_JUMP)  ; LAB_004389e3
    MOV ECX,dword ptr [ESP + 0x24]      ; 00438881
        ;   Label: LAB_00438881
    LEA EDX,[EAX + 0x1]                 ; 00438885
    MOV dword ptr [ECX],EDX             ; 00438888
    CMP EAX,dword ptr [ESP + 0x1c]      ; 0043888a
    JL 0x00438894                       ; 0043888e
        ;   XREF to: 00438894 (CONDITIONAL_JUMP)  ; LAB_00438894
    MOV dword ptr [ESP + 0x1c],EAX      ; 00438890
    MOV EAX,dword ptr [ESP + 0x24]      ; 00438894
        ;   Label: LAB_00438894
    ADD EAX,0x4                         ; 00438898
    INC ESI                             ; 0043889b
    MOV dword ptr [ESP + 0x24],EAX      ; 0043889c
    CMP ESI,EBP                         ; 004388a0
    JL 0x00438867                       ; 004388a2
        ;   XREF to: 00438867 (CONDITIONAL_JUMP)  ; LAB_00438867
    MOV EDX,dword ptr [ESP + 0x54]      ; 004388a4
        ;   Label: LAB_004388a4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004388a8
    MOV dword ptr [EDX],EAX             ; 004388ac
    MOV EDX,0x1                         ; 004388ae
    MOV ECX,dword ptr [ESP + 0x58]      ; 004388b3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004388b7
    CMP ECX,EDX                         ; 004388bb
    JLE 0x0043897f                      ; 004388bd
        ;   XREF to: 0043897f (CONDITIONAL_JUMP)  ; LAB_0043897f
    MOV EDX,dword ptr [ESP + 0x20]      ; 004388c3
    LEA EAX,[EBP*0x4 + 0x0]             ; 004388c7
    ADD EDX,EAX                         ; 004388ce
    LEA EAX,[EBP + -0x1]                ; 004388d0
    MOV dword ptr [ESP + 0x30],EAX      ; 004388d3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004388d7
    DEC EAX                             ; 004388db
    MOV dword ptr [ESP + 0x18],EAX      ; 004388dc
    IMUL EAX,EBX                        ; 004388e0
    MOV ESI,dword ptr [ESP + 0x4]       ; 004388e3
    MOV dword ptr [ESP + 0x10],EDX      ; 004388e7
    MOV EDX,dword ptr [ESP + 0x30]      ; 004388eb
    ADD EAX,ESI                         ; 004388ef
    ADD EDX,EAX                         ; 004388f1
    MOV EAX,dword ptr [ESP + 0x54]      ; 004388f3
    ADD EAX,0x4                         ; 004388f7
    MOV dword ptr [ESP + 0xc],EDX       ; 004388fa
    MOV dword ptr [ESP + 0x28],EAX      ; 004388fe
    MOV EAX,dword ptr [ESP + 0xc]       ; 00438902
        ;   Label: LAB_00438902
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00438906
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043890a
    TEST EDX,EDX                        ; 0043890e
    JL 0x0043891e                       ; 00438910
        ;   XREF to: 0043891e (CONDITIONAL_JUMP)  ; LAB_0043891e
    XOR ECX,ECX                         ; 00438912
        ;   Label: LAB_00438912
    MOV CL,byte ptr [EAX]               ; 00438914
    CMP ECX,EDI                         ; 00438916
    JNZ 0x004389f3                      ; 00438918
        ;   XREF to: 004389f3 (CONDITIONAL_JUMP)  ; LAB_004389f3
    MOV ESI,dword ptr [ESP + 0x30]      ; 0043891e
        ;   Label: LAB_0043891e
    XOR ECX,ECX                         ; 00438922
    TEST ESI,ESI                        ; 00438924
    JLE 0x0043893d                      ; 00438926
        ;   XREF to: 0043893d (CONDITIONAL_JUMP)  ; LAB_0043893d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00438928
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043892c
        ;   Label: LAB_0043892c
    INC ECX                             ; 0043892f
    MOV dword ptr [EAX],ESI             ; 00438930
    MOV ESI,dword ptr [ESP + 0x30]      ; 00438932
    ADD EAX,0x4                         ; 00438936
    CMP ECX,ESI                         ; 00438939
    JL 0x0043892c                       ; 0043893b
        ;   XREF to: 0043892c (CONDITIONAL_JUMP)  ; LAB_0043892c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043893d
        ;   Label: LAB_0043893d
    INC EDX                             ; 00438941
    XOR ECX,ECX                         ; 00438942
    MOV dword ptr [EAX + -0x4],EDX      ; 00438944
    XOR EDX,EDX                         ; 00438947
    TEST EBP,EBP                        ; 00438949
    JLE 0x00438961                      ; 0043894b
        ;   XREF to: 00438961 (CONDITIONAL_JUMP)  ; LAB_00438961
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043894d
    MOV ESI,dword ptr [EAX]             ; 00438951
        ;   Label: LAB_00438951
    CMP ECX,ESI                         ; 00438953
    JG 0x00438959                       ; 00438955
        ;   XREF to: 00438959 (CONDITIONAL_JUMP)  ; LAB_00438959
    MOV ECX,ESI                         ; 00438957
    INC EDX                             ; 00438959
        ;   Label: LAB_00438959
    ADD EAX,0x4                         ; 0043895a
    CMP EDX,EBP                         ; 0043895d
    JL 0x00438951                       ; 0043895f
        ;   XREF to: 00438951 (CONDITIONAL_JUMP)  ; LAB_00438951
    MOV EAX,dword ptr [ESP + 0x28]      ; 00438961
        ;   Label: LAB_00438961
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00438965
    MOV EDX,dword ptr [ESP + 0x58]      ; 00438969
    INC ESI                             ; 0043896d
    MOV dword ptr [EAX],ECX             ; 0043896e
    LEA ECX,[EAX + 0x4]                 ; 00438970
    MOV dword ptr [ESP + 0x2c],ESI      ; 00438973
    MOV dword ptr [ESP + 0x28],ECX      ; 00438977
    CMP ESI,EDX                         ; 0043897b
    JL 0x00438902                       ; 0043897d
        ;   XREF to: 00438902 (CONDITIONAL_JUMP)  ; LAB_00438902
    MOV ECX,dword ptr [ESP + 0x20]      ; 0043897f
        ;   Label: LAB_0043897f
    PUSH ECX                            ; 00438983
    CALL crt_unknown.c_FUN_005c0344     ; 00438984
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00438989
    POP ESI                             ; 0043898c
    ADD ESP,0x30                        ; 0043898d
        ;   Label: LAB_0043898d
    POP EBP                             ; 00438990
    POP EDI                             ; 00438991
    POP EBX                             ; 00438992
    RET                                 ; 00438993
    MOV ECX,0x5d60ef                    ; 00438994
        ;   Label: LAB_00438994
    MOV ESI,0x3d7                       ; 00438999
    PUSH 0x5d6105                       ; 0043899e
    MOV dword ptr [0x01d1d400],ECX      ; 004389a3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004389a9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004389af
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004389b4
    JMP 0x00438823                      ; 004389b7
        ;   XREF to: 00438823 (UNCONDITIONAL_JUMP)  ; LAB_00438823
    MOV EAX,0x5d6120                    ; 004389bc
        ;   Label: LAB_004389bc
    MOV EDX,0x3dd                       ; 004389c1
    PUSH 0x5d6136                       ; 004389c6
    MOV [0x01d1d400],EAX                ; 004389cb | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004389d0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004389d6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004389db
    JMP 0x0043883f                      ; 004389de
        ;   XREF to: 0043883f (UNCONDITIONAL_JUMP)  ; LAB_0043883f
    DEC EAX                             ; 004389e3
        ;   Label: LAB_004389e3
    SUB EDX,EBX                         ; 004389e4
    TEST EAX,EAX                        ; 004389e6
    JGE 0x00438875                      ; 004389e8
        ;   XREF to: 00438875 (CONDITIONAL_JUMP)  ; LAB_00438875
    JMP 0x00438881                      ; 004389ee
        ;   XREF to: 00438881 (UNCONDITIONAL_JUMP)  ; LAB_00438881
    DEC EDX                             ; 004389f3
        ;   Label: LAB_004389f3
    SUB EAX,EBX                         ; 004389f4
    TEST EDX,EDX                        ; 004389f6
    JGE 0x00438912                      ; 004389f8
        ;   XREF to: 00438912 (CONDITIONAL_JUMP)  ; LAB_00438912
    JMP 0x0043891e                      ; 004389fe
        ;   XREF to: 0043891e (UNCONDITIONAL_JUMP)  ; LAB_0043891e

