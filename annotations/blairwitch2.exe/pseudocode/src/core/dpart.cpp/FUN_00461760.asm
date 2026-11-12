; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00461760(CDemonPart *param_1,_FILE *param_2,undefined4 param_3,float *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005d0e04
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_alloc_FUN_004614d0
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461760
        ;   Label: core_dpart.cpp_FUN_00461760
    PUSH ESI                            ; 00461761
    PUSH EDI                            ; 00461762
    PUSH EBP                            ; 00461763
    SUB ESP,0xc                         ; 00461764
    MOV EBX,dword ptr [ESP + 0x20]      ; 00461767
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046176b
    PUSH EBP                            ; 0046176f
    PUSH 0x1                            ; 00461770
    PUSH 0x20                           ; 00461772
    PUSH EBX                            ; 00461774
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461775
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046177a
    PUSH EBP                            ; 0046177d
    PUSH 0x1                            ; 0046177e
    PUSH 0x4                            ; 00461780
    LEA EAX,[EBX + 0x20]                ; 00461782
    PUSH EAX                            ; 00461785
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461786
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046178b
    PUSH EBP                            ; 0046178e
    PUSH 0x1                            ; 0046178f
    PUSH 0x4                            ; 00461791
    LEA EAX,[EBX + 0x24]                ; 00461793
    PUSH EAX                            ; 00461796
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461797
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046179c
    PUSH EBX                            ; 0046179f
    CALL core_dpart.cpp_CDemonPart_alloc_FUN_004614d0 ; 004617a0
        ;   XREF to: 004614d0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_alloc_FUN_004614d0(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 004617a5
    PUSH EBP                            ; 004617a8
    PUSH 0x1                            ; 004617a9
    PUSH 0xc                            ; 004617ab
    LEA EAX,[EBX + 0x33c]               ; 004617ad
    PUSH EAX                            ; 004617b3
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004617b4
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004617b9
    PUSH EBP                            ; 004617bc
    PUSH 0x1                            ; 004617bd
    PUSH 0xc                            ; 004617bf
    LEA EAX,[EBX + 0x348]               ; 004617c1
    PUSH EAX                            ; 004617c7
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004617c8
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004617cd
    PUSH EBP                            ; 004617d0
    PUSH 0x1                            ; 004617d1
    PUSH 0xc                            ; 004617d3
    LEA EAX,[EBX + 0x354]               ; 004617d5
    PUSH EAX                            ; 004617db
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004617dc
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004617e1
    PUSH EBP                            ; 004617e4
    PUSH 0x1                            ; 004617e5
    PUSH 0xc                            ; 004617e7
    LEA EAX,[EBX + 0x360]               ; 004617e9
    PUSH EAX                            ; 004617ef
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004617f0
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004617f5
    PUSH EBP                            ; 004617f8
    PUSH 0x1                            ; 004617f9
    PUSH 0x4                            ; 004617fb
    LEA EAX,[EBX + 0x38]                ; 004617fd
    PUSH EAX                            ; 00461800
    XOR ESI,ESI                         ; 00461801
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461803
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDX,dword ptr [EBX + 0x38]      ; 00461808
    ADD ESP,0x10                        ; 0046180b
    TEST EDX,EDX                        ; 0046180e
    JLE 0x00461830                      ; 00461810
        ;   XREF to: 00461830 (CONDITIONAL_JUMP)  ; LAB_00461830
    LEA EDI,[EBX + 0x44]                ; 00461812
    PUSH EBP                            ; 00461815
        ;   Label: LAB_00461815
    PUSH 0x1                            ; 00461816
    PUSH 0x10                           ; 00461818
    PUSH EDI                            ; 0046181a
    INC ESI                             ; 0046181b
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0046181c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00461821
    MOV ECX,dword ptr [EBX + 0x38]      ; 00461824
    ADD EDI,0x18                        ; 00461827
    CMP ESI,ECX                         ; 0046182a
    JL 0x00461815                       ; 0046182c
        ;   XREF to: 00461815 (CONDITIONAL_JUMP)  ; LAB_00461815
    MOV EAX,EAX                         ; 0046182e
    PUSH EBP                            ; 00461830
        ;   Label: LAB_00461830
    PUSH 0x1                            ; 00461831
    PUSH 0x4                            ; 00461833
    LEA EAX,[EBX + 0x28]                ; 00461835
    PUSH EAX                            ; 00461838
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461839
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046183e
    PUSH EBP                            ; 00461841
    MOV ESI,dword ptr [EBX + 0x20]      ; 00461842
    PUSH ESI                            ; 00461845
    PUSH 0xc                            ; 00461846
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00461848
    PUSH EDI                            ; 0046184b
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0046184c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00461851
    PUSH EBP                            ; 00461854
    MOV EAX,dword ptr [EBX + 0x20]      ; 00461855
    PUSH EAX                            ; 00461858
    PUSH 0xc                            ; 00461859
    MOV EDX,dword ptr [EBX + 0x30]      ; 0046185b
    PUSH EDX                            ; 0046185e
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0046185f
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00461864
    PUSH 0x5d0df7                       ; 00461867
    PUSH EBX                            ; 0046186c
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 0046186d
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00461872
    TEST EAX,EAX                        ; 00461875
    JZ 0x00461a33                       ; 00461877
        ;   XREF to: 00461a33 (CONDITIONAL_JUMP)  ; LAB_00461a33
    PUSH EBP                            ; 0046187d
    MOV EDI,dword ptr [EBX + 0x24]      ; 0046187e
    PUSH EDI                            ; 00461881
    PUSH 0x48                           ; 00461882
    PUSH 0x1b4d388                      ; 00461884
    XOR EDI,EDI                         ; 00461889
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0046188b
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EBP,dword ptr [EBX + 0x24]      ; 00461890
    ADD ESP,0x10                        ; 00461893
    TEST EBP,EBP                        ; 00461896
    JLE 0x0046192a                      ; 00461898
        ;   XREF to: 0046192a (CONDITIONAL_JUMP)  ; LAB_0046192a
    XOR EDX,EDX                         ; 0046189e
    XOR EAX,EAX                         ; 004618a0
    MOV ESI,dword ptr [EBX + 0x34]      ; 004618a2
        ;   Label: LAB_004618a2
    LEA ECX,[ESI + EAX*0x1]             ; 004618a5
    MOV ESI,dword ptr [EDX + 0x1b4d390] ; 004618a8
    MOV dword ptr [ECX],ESI             ; 004618ae
    MOV ESI,dword ptr [EBX + 0x34]      ; 004618b0
    LEA ECX,[ESI + EAX*0x1]             ; 004618b3
    MOV ESI,dword ptr [EDX + 0x1b4d394] ; 004618b6
    MOV dword ptr [ECX + 0x4],ESI       ; 004618bc
    MOV ECX,dword ptr [EBX + 0x34]      ; 004618bf
    MOV ESI,dword ptr [EDX + 0x1b4d398] ; 004618c2
    MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI ; 004618c8
    MOV ECX,dword ptr [EBX + 0x34]      ; 004618cc
    MOV ESI,dword ptr [EDX + 0x1b4d39c] ; 004618cf
    MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI ; 004618d5
    MOV ECX,dword ptr [EBX + 0x34]      ; 004618d9
    MOV ESI,dword ptr [EDX + 0x1b4d3a0] ; 004618dc
    MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI ; 004618e2
    MOV ECX,dword ptr [EBX + 0x34]      ; 004618e6
    MOV ESI,dword ptr [EDX + 0x1b4d3ac] ; 004618e9
    MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI ; 004618ef
    MOV ECX,dword ptr [EBX + 0x34]      ; 004618f3
    MOV ESI,dword ptr [EDX + 0x1b4d3b8] ; 004618f6
    MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI ; 004618fc
    CMP dword ptr [EDX + 0x1b4d38c],0x3 ; 00461900
    JNZ 0x00461a1f                      ; 00461907
        ;   XREF to: 00461a1f (CONDITIONAL_JUMP)  ; LAB_00461a1f
    MOV ESI,dword ptr [EBX + 0x34]      ; 0046190d
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 00461910
    ADD EAX,0x20                        ; 00461918
        ;   Label: LAB_00461918
    INC EDI                             ; 0046191b
    MOV ECX,dword ptr [EBX + 0x24]      ; 0046191c
    ADD EDX,0x48                        ; 0046191f
    CMP EDI,ECX                         ; 00461922
    JL 0x004618a2                       ; 00461924
        ;   XREF to: 004618a2 (CONDITIONAL_JUMP)  ; LAB_004618a2
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046192a
        ;   Label: LAB_0046192a
    TEST EDI,EDI                        ; 0046192e
    JZ 0x004619b0                       ; 00461930
        ;   XREF to: 004619b0 (CONDITIONAL_JUMP)
    FLD double ptr [0x005d0e04]         ; 00461936 | DAT_005d0e04
    FLD float ptr [EDI]                 ; 0046193c
    FMUL ST1                            ; 0046193e
    FLD float ptr [EDI + 0x4]           ; 00461940
    FMUL ST2                            ; 00461943
    FLD float ptr [EDI + 0x8]           ; 00461945
    FMULP ST3                           ; 00461948
    MOV EBP,dword ptr [EBX + 0x20]      ; 0046194a
    XOR ESI,ESI                         ; 0046194d
    FXCH                                ; 0046194f
    CALL crt_math.c_round_FUN_005b7ff0  ; 00461951
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00461956
    CALL crt_math.c_round_FUN_005b7ff0  ; 00461958
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046195d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046195f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00461964
    FISTP dword ptr [ESP + 0x4]         ; 00461966
    FXCH                                ; 0046196a
    FISTP dword ptr [ESP + 0x8]         ; 0046196c
    FISTP dword ptr [ESP]               ; 00461970
    TEST EBP,EBP                        ; 00461973
    JLE 0x004619b0                      ; 00461975
        ;   XREF to: 004619b0 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00461977
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00461979
        ;   Label: LAB_00461979
    MOV EAX,dword ptr [ESP]             ; 0046197c
    SUB dword ptr [EDX + EDI*0x1],EAX   ; 0046197f
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00461982
    MOV EAX,dword ptr [ESP + 0x4]       ; 00461985
    SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX ; 00461989
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0046198d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00461990
    SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX ; 00461994
    INC ESI                             ; 00461998
    MOV EDI,dword ptr [EBX + 0x20]      ; 00461999
    ADD EDX,0xc                         ; 0046199c
    CMP ESI,EDI                         ; 0046199f
    JL 0x00461979                       ; 004619a1
        ;   XREF to: 00461979 (CONDITIONAL_JUMP)  ; LAB_00461979
    LEA EAX,[EAX]                       ; 004619a3
    LEA EDX,[EDX]                       ; 004619a9
    NOP                                 ; 004619af
    MOV ESI,dword ptr [EBX + 0x34]      ; 00461a1f
        ;   Label: LAB_00461a1f
    LEA ECX,[ESI + EAX*0x1]             ; 00461a22
    MOV ESI,dword ptr [EDX + 0x1b4d3c4] ; 00461a25
    MOV dword ptr [ECX + 0x1c],ESI      ; 00461a2b
    JMP 0x00461918                      ; 00461a2e
        ;   XREF to: 00461918 (UNCONDITIONAL_JUMP)  ; LAB_00461918
    PUSH EBP                            ; 00461a33
        ;   Label: LAB_00461a33
    MOV ECX,dword ptr [EBX + 0x24]      ; 00461a34
    PUSH ECX                            ; 00461a37
    PUSH 0x20                           ; 00461a38
    MOV ESI,dword ptr [EBX + 0x34]      ; 00461a3a
    PUSH ESI                            ; 00461a3d
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00461a3e
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00461a43
    JMP 0x0046192a                      ; 00461a46
        ;   XREF to: 0046192a (UNCONDITIONAL_JUMP)  ; LAB_0046192a

