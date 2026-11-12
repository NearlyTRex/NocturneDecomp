; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00491850(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   bounds_min
; CVector3f *      Stack[0xc]:4   bounds_max
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004917e8 = 00491e38
;   undefined1* PTR_caseD_3_004917f0 = 00491ade
;   undefined1* PTR_caseD_1_004917f8 = 00491eec
;   undefined1* PTR_caseD_3_00491800 = 00491b83
;   undefined1* PTR_caseD_1_00491808 = 00491f9c
;   undefined1* PTR_caseD_3_00491810 = 00491c26
;   undefined1* PTR_caseD_1_00491818 = 00492050
;   undefined1* PTR_caseD_3_00491820 = 00491cc6
;   undefined1* PTR_caseD_1_00491828 = 004920fe
;   undefined1* PTR_caseD_3_00491830 = 00491d6c
;   undefined1* PTR_caseD_1_00491838 = 004921ae
;   undefined1* PTR_caseD_3_00491840 = 00491e12
;   undefined4 DAT_01c3d440
;   undefined4 DAT_01c3d444
;   undefined4 DAT_01c3d448
;   ... and 47 more
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00490df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491850
        ;   Label: core_dtri.cpp_clipTriangleToBounds_FUN_00491850
    PUSH ESI                            ; 00491851
    PUSH EDI                            ; 00491852
    PUSH EBP                            ; 00491853
    MOV EBP,ESP                         ; 00491854
    SUB ESP,0x1c                        ; 00491856
    AND ESP,0xfffffff8                  ; 00491859
    MOV EDX,0x3                         ; 0049185c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00491861
    MOV dword ptr [0x01c3d440],EDX      ; 00491864 | DAT_01c3d440
    CMP ECX,0x1c3d444                   ; 0049186a
    JNZ 0x004919fe                      ; 00491870
        ;   XREF to: 004919fe (CONDITIONAL_JUMP)  ; LAB_004919fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 00491876
        ;   Label: LAB_00491876
    ADD EDX,0xc                         ; 00491879
    CMP EDX,0x1c3d450                   ; 0049187c
    JZ 0x0049189d                       ; 00491882
        ;   XREF to: 0049189d (CONDITIONAL_JUMP)  ; LAB_0049189d
    FLD float ptr [EDX]                 ; 00491884
    FLD float ptr [EDX + 0x8]           ; 00491886
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491889
    MOV [0x01c3d454],EAX                ; 0049188c | DAT_01c3d454
    FSTP float ptr [0x01c3d458]         ; 00491891 | DAT_01c3d458
    FSTP float ptr [0x01c3d450]         ; 00491897 | DAT_01c3d450
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049189d
        ;   Label: LAB_0049189d
    ADD EDX,0x18                        ; 004918a0
    CMP EDX,0x1c3d45c                   ; 004918a3
    JZ 0x004918c4                       ; 004918a9
        ;   XREF to: 004918c4 (CONDITIONAL_JUMP)  ; LAB_004918c4
    FLD float ptr [EDX]                 ; 004918ab
    FLD float ptr [EDX + 0x8]           ; 004918ad
    MOV EAX,dword ptr [EDX + 0x4]       ; 004918b0
    MOV [0x01c3d460],EAX                ; 004918b3 | DAT_01c3d460
    FSTP float ptr [0x01c3d464]         ; 004918b8 | DAT_01c3d464
    FSTP float ptr [0x01c3d45c]         ; 004918be | DAT_01c3d45c
    MOV EBX,0xffffffff                  ; 004918c4
        ;   Label: LAB_004918c4
    MOV EAX,[0x01c3d440]                ; 004918c9 | DAT_01c3d440
    XOR EDI,EDI                         ; 004918ce
    XOR ESI,ESI                         ; 004918d0
    MOV dword ptr [ESP + 0x10],EBX      ; 004918d2
    TEST EAX,EAX                        ; 004918d6
    JLE 0x00491968                      ; 004918d8
        ;   XREF to: 00491968 (CONDITIONAL_JUMP)  ; LAB_00491968
    MOV EBX,0x1c3d444                   ; 004918de
    FLD float ptr [EBX]                 ; 004918e3
        ;   Label: LAB_004918e3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004918e5
    MOV ECX,EBX                         ; 004918e8
    XOR EDX,EDX                         ; 004918ea
    FCOMP float ptr [EAX]               ; 004918ec
    FNSTSW AX                           ; 004918ee
    SAHF                                ; 004918f0
    JBE 0x004918f8                      ; 004918f1
        ;   XREF to: 004918f8 (CONDITIONAL_JUMP)  ; LAB_004918f8
    MOV EDX,0x1                         ; 004918f3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004918f8
        ;   Label: LAB_004918f8
    FLD float ptr [ECX + 0x4]           ; 004918fb
    FCOMP float ptr [EAX + 0x4]         ; 004918fe
    FNSTSW AX                           ; 00491901
    SAHF                                ; 00491903
    JBE 0x00491909                      ; 00491904
        ;   XREF to: 00491909 (CONDITIONAL_JUMP)  ; LAB_00491909
    OR DL,0x2                           ; 00491906
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00491909
        ;   Label: LAB_00491909
    FLD float ptr [ECX + 0x8]           ; 0049190c
    FCOMP float ptr [EAX + 0x8]         ; 0049190f
    FNSTSW AX                           ; 00491912
    SAHF                                ; 00491914
    JBE 0x0049191a                      ; 00491915
        ;   XREF to: 0049191a (CONDITIONAL_JUMP)  ; LAB_0049191a
    OR DL,0x4                           ; 00491917
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049191a
        ;   Label: LAB_0049191a
    FLD float ptr [ECX]                 ; 0049191d
    FCOMP float ptr [EAX]               ; 0049191f
    FNSTSW AX                           ; 00491921
    SAHF                                ; 00491923
    JNC 0x00491929                      ; 00491924
        ;   XREF to: 00491929 (CONDITIONAL_JUMP)  ; LAB_00491929
    OR DL,0x8                           ; 00491926
    MOV EAX,dword ptr [EBP + 0x18]      ; 00491929
        ;   Label: LAB_00491929
    FLD float ptr [ECX + 0x4]           ; 0049192c
    FCOMP float ptr [EAX + 0x4]         ; 0049192f
    FNSTSW AX                           ; 00491932
    SAHF                                ; 00491934
    JNC 0x0049193a                      ; 00491935
        ;   XREF to: 0049193a (CONDITIONAL_JUMP)  ; LAB_0049193a
    OR DL,0x10                          ; 00491937
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049193a
        ;   Label: LAB_0049193a
    FLD float ptr [ECX + 0x8]           ; 0049193d
    FCOMP float ptr [EAX + 0x8]         ; 00491940
    FNSTSW AX                           ; 00491943
    SAHF                                ; 00491945
    JNC 0x0049194b                      ; 00491946
        ;   XREF to: 0049194b (CONDITIONAL_JUMP)  ; LAB_0049194b
    OR DL,0x20                          ; 00491948
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049194b
        ;   Label: LAB_0049194b
    MOV EAX,[0x01c3d440]                ; 0049194f | DAT_01c3d440
    ADD EBX,0xc                         ; 00491954
    INC ESI                             ; 00491957
    AND ECX,EDX                         ; 00491958
    OR EDI,EDX                          ; 0049195a
    MOV dword ptr [ESP + 0x10],ECX      ; 0049195c
    CMP ESI,EAX                         ; 00491960
    JL 0x004918e3                       ; 00491962
        ;   XREF to: 004918e3 (CONDITIONAL_JUMP)  ; LAB_004918e3
    TEST EDI,EDI                        ; 00491968
        ;   Label: LAB_00491968
    JNZ 0x00491a1f                      ; 0049196a
        ;   XREF to: 00491a1f (CONDITIONAL_JUMP)  ; LAB_00491a1f
    MOV EBX,0x3                         ; 00491970
    MOV ESI,dword ptr [EBP + 0x14]      ; 00491975
    MOV dword ptr [0x01c3d8d8],EBX      ; 00491978 | DAT_01c3d8d8
    CMP ESI,0x1c3d8dc                   ; 0049197e
    JZ 0x004919a2                       ; 00491984
        ;   XREF to: 004919a2 (CONDITIONAL_JUMP)  ; LAB_004919a2
    MOV EAX,ESI                         ; 00491986
    FLD float ptr [EAX]                 ; 00491988
    FLD float ptr [EAX + 0x8]           ; 0049198a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049198d
    MOV dword ptr [0x01c3d8e0],EDX      ; 00491990 | DAT_01c3d8e0
    FSTP float ptr [0x01c3d8e4]         ; 00491996 | DAT_01c3d8e4
    FSTP float ptr [0x01c3d8dc]         ; 0049199c | DAT_01c3d8dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004919a2
        ;   Label: LAB_004919a2
    ADD EDX,0xc                         ; 004919a5
    CMP EDX,0x1c3d8e8                   ; 004919a8
    JZ 0x004919c9                       ; 004919ae
        ;   XREF to: 004919c9 (CONDITIONAL_JUMP)  ; LAB_004919c9
    FLD float ptr [EDX]                 ; 004919b0
    FLD float ptr [EDX + 0x8]           ; 004919b2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004919b5
    MOV [0x01c3d8ec],EAX                ; 004919b8 | DAT_01c3d8ec
    FSTP float ptr [0x01c3d8f0]         ; 004919bd | DAT_01c3d8f0
    FSTP float ptr [0x01c3d8e8]         ; 004919c3 | DAT_01c3d8e8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004919c9
        ;   Label: LAB_004919c9
    ADD EDX,0x18                        ; 004919cc
    CMP EDX,0x1c3d8f4                   ; 004919cf
    JZ 0x004919f0                       ; 004919d5
        ;   XREF to: 004919f0 (CONDITIONAL_JUMP)  ; LAB_004919f0
    FLD float ptr [EDX]                 ; 004919d7
    FLD float ptr [EDX + 0x8]           ; 004919d9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004919dc
    MOV [0x01c3d8f8],EAX                ; 004919df | DAT_01c3d8f8
    FSTP float ptr [0x01c3d8fc]         ; 004919e4 | DAT_01c3d8fc
    FSTP float ptr [0x01c3d8f4]         ; 004919ea | DAT_01c3d8f4
    MOV ECX,0x1                         ; 004919f0
        ;   Label: LAB_004919f0
    MOV EAX,ECX                         ; 004919f5
    MOV ESP,EBP                         ; 004919f7
    POP EBP                             ; 004919f9
    POP EDI                             ; 004919fa
    POP ESI                             ; 004919fb
    POP EBX                             ; 004919fc
    RET                                 ; 004919fd
    MOV EAX,ECX                         ; 004919fe
        ;   Label: LAB_004919fe
    FLD float ptr [EAX]                 ; 00491a00
    FLD float ptr [EAX + 0x8]           ; 00491a02
    MOV EDX,dword ptr [EAX + 0x4]       ; 00491a05
    MOV dword ptr [0x01c3d448],EDX      ; 00491a08 | DAT_01c3d448
    FSTP float ptr [0x01c3d44c]         ; 00491a0e | DAT_01c3d44c
    FSTP float ptr [0x01c3d444]         ; 00491a14 | DAT_01c3d444
    JMP 0x00491876                      ; 00491a1a
        ;   XREF to: 00491876 (UNCONDITIONAL_JUMP)  ; LAB_00491876
    MOV EDX,dword ptr [ESP + 0x10]      ; 00491a1f
        ;   Label: LAB_00491a1f
    TEST EDX,EDX                        ; 00491a23
    JNZ 0x00491e2d                      ; 00491a25
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV dword ptr [0x01c3d5c8],EDX      ; 00491a2b | DAT_01c3d5c8
    MOV dword ptr [0x01c3d68c],EDX      ; 00491a31 | DAT_01c3d68c
    MOV dword ptr [0x01c3d750],EDX      ; 00491a37 | DAT_01c3d750
    MOV dword ptr [0x01c3d814],EDX      ; 00491a3d | DAT_01c3d814
    MOV dword ptr [0x01c3d8d8],EDX      ; 00491a43 | DAT_01c3d8d8
    MOV dword ptr [0x01c3d504],EDX      ; 00491a49 | DAT_01c3d504
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00491a4f
    MOV ECX,dword ptr [0x01c3d440]      ; 00491a52 | DAT_01c3d440
    MOV EDX,dword ptr [EDX + 0x4]       ; 00491a58
    XOR EBX,EBX                         ; 00491a5b
    MOV dword ptr [ESP + 0x18],EDX      ; 00491a5d
    TEST ECX,ECX                        ; 00491a61
    JLE 0x00491aec                      ; 00491a63
        ;   XREF to: 00491aec (CONDITIONAL_JUMP)  ; LAB_00491aec
    MOV ESI,0x1c3d444                   ; 00491a69
    MOV EDI,dword ptr [0x01c3d440]      ; 00491a6e | DAT_01c3d440
        ;   Label: LAB_00491a6e
    LEA ECX,[EBX + 0x1]                 ; 00491a74
    CMP ECX,EDI                         ; 00491a77
    JNZ 0x00491a7d                      ; 00491a79
        ;   XREF to: 00491a7d (CONDITIONAL_JUMP)  ; LAB_00491a7d
    XOR ECX,EDI                         ; 00491a7b
    IMUL ECX,ECX,0xc                    ; 00491a7d
        ;   Label: LAB_00491a7d
    FLD float ptr [ESI + 0x4]           ; 00491a80
    MOV EDI,0x1c3d444                   ; 00491a83
    MOV EDX,ESI                         ; 00491a88
    ADD EDI,ECX                         ; 00491a8a
    XOR ECX,ECX                         ; 00491a8c
    FCOMP float ptr [ESP + 0x18]        ; 00491a8e
    FNSTSW AX                           ; 00491a92
    SAHF                                ; 00491a94
    JBE 0x00491a9c                      ; 00491a95
        ;   XREF to: 00491a9c (CONDITIONAL_JUMP)  ; LAB_00491a9c
    MOV ECX,0x1                         ; 00491a97
    FLD float ptr [EDI + 0x4]           ; 00491a9c
        ;   Label: LAB_00491a9c
    FCOMP float ptr [ESP + 0x18]        ; 00491a9f
    FNSTSW AX                           ; 00491aa3
    SAHF                                ; 00491aa5
    JBE 0x00491aab                      ; 00491aa6
        ;   XREF to: 00491aab (CONDITIONAL_JUMP)  ; LAB_00491aab
    OR CL,0x2                           ; 00491aa8
    CMP ECX,0x3                         ; 00491aab
        ;   Label: LAB_00491aab
    JA 0x00491ade                       ; 00491aae
        ;   XREF to: 00491ade (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4917e4]  ; 00491ab0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d504],0xc ; 00491ab7 | DAT_01c3d504
        ;   Label: caseD_0
    ADD ECX,0x1c3d508                   ; 00491abe
    CMP ECX,EDX                         ; 00491ac4
    JZ 0x00491ad8                       ; 00491ac6
        ;   XREF to: 00491ad8 (CONDITIONAL_JUMP)  ; LAB_00491ad8
    MOV EAX,dword ptr [EDX]             ; 00491ac8
    MOV dword ptr [ECX],EAX             ; 00491aca | DAT_01c3d508
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491acc
    MOV dword ptr [ECX + 0x4],EAX       ; 00491acf | DAT_01c3d50c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491ad2
    MOV dword ptr [ECX + 0x8],EAX       ; 00491ad5 | DAT_01c3d510
    INC dword ptr [0x01c3d504]          ; 00491ad8 | DAT_01c3d504
        ;   Label: LAB_00491ad8
    MOV EDI,dword ptr [0x01c3d440]      ; 00491ade | DAT_01c3d440
        ;   Label: caseD_3
    INC EBX                             ; 00491ae4
    ADD ESI,0xc                         ; 00491ae5
    CMP EBX,EDI                         ; 00491ae8
    JL 0x00491a6e                       ; 00491aea
        ;   XREF to: 00491a6e (CONDITIONAL_JUMP)  ; LAB_00491a6e
    MOV EAX,[0x01c3d504]                ; 00491aec | DAT_01c3d504
        ;   Label: LAB_00491aec
    CMP EAX,0x3                         ; 00491af1
    JL 0x00491e2d                       ; 00491af4
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00491afa
    MOV EDX,dword ptr [EDX + 0x4]       ; 00491afd
    XOR EBX,EBX                         ; 00491b00
    MOV dword ptr [ESP + 0x8],EDX       ; 00491b02
    TEST EAX,EAX                        ; 00491b06
    JLE 0x00491b91                      ; 00491b08
        ;   XREF to: 00491b91 (CONDITIONAL_JUMP)  ; LAB_00491b91
    MOV ESI,0x1c3d508                   ; 00491b0e
    MOV EDI,dword ptr [0x01c3d504]      ; 00491b13 | DAT_01c3d504
        ;   Label: LAB_00491b13
    LEA ECX,[EBX + 0x1]                 ; 00491b19
    CMP ECX,EDI                         ; 00491b1c
    JNZ 0x00491b22                      ; 00491b1e
        ;   XREF to: 00491b22 (CONDITIONAL_JUMP)  ; LAB_00491b22
    XOR ECX,EDI                         ; 00491b20
    IMUL ECX,ECX,0xc                    ; 00491b22
        ;   Label: LAB_00491b22
    FLD float ptr [ESI + 0x4]           ; 00491b25 | DAT_01c3d50c | DAT_01c3d518
    MOV EDI,0x1c3d508                   ; 00491b28
    MOV EDX,ESI                         ; 00491b2d
    ADD EDI,ECX                         ; 00491b2f
    XOR ECX,ECX                         ; 00491b31
    FCOMP float ptr [ESP + 0x8]         ; 00491b33
    FNSTSW AX                           ; 00491b37
    SAHF                                ; 00491b39
    JNC 0x00491b41                      ; 00491b3a
        ;   XREF to: 00491b41 (CONDITIONAL_JUMP)  ; LAB_00491b41
    MOV ECX,0x1                         ; 00491b3c
    FLD float ptr [EDI + 0x4]           ; 00491b41 | DAT_01c3d50c | DAT_01c3d524
        ;   Label: LAB_00491b41
    FCOMP float ptr [ESP + 0x8]         ; 00491b44
    FNSTSW AX                           ; 00491b48
    SAHF                                ; 00491b4a
    JNC 0x00491b50                      ; 00491b4b
        ;   XREF to: 00491b50 (CONDITIONAL_JUMP)  ; LAB_00491b50
    OR CL,0x2                           ; 00491b4d
    CMP ECX,0x3                         ; 00491b50
        ;   Label: LAB_00491b50
    JA 0x00491b83                       ; 00491b53
        ;   XREF to: 00491b83 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4917f4]  ; 00491b55 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d5c8],0xc ; 00491b5c | DAT_01c3d5c8
        ;   Label: caseD_0
    ADD ECX,0x1c3d5cc                   ; 00491b63
    CMP ECX,EDX                         ; 00491b69
    JZ 0x00491b7d                       ; 00491b6b
        ;   XREF to: 00491b7d (CONDITIONAL_JUMP)  ; LAB_00491b7d
    MOV EAX,dword ptr [EDX]             ; 00491b6d | DAT_01c3d508
    MOV dword ptr [ECX],EAX             ; 00491b6f | DAT_01c3d5cc
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491b71 | DAT_01c3d50c
    MOV dword ptr [ECX + 0x4],EAX       ; 00491b74 | DAT_01c3d5d0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491b77 | DAT_01c3d510
    MOV dword ptr [ECX + 0x8],EAX       ; 00491b7a | DAT_01c3d5d4
    INC dword ptr [0x01c3d5c8]          ; 00491b7d | DAT_01c3d5c8
        ;   Label: LAB_00491b7d
    MOV EDX,dword ptr [0x01c3d504]      ; 00491b83 | DAT_01c3d504
        ;   Label: caseD_3
    INC EBX                             ; 00491b89
    ADD ESI,0xc                         ; 00491b8a
    CMP EBX,EDX                         ; 00491b8d
    JL 0x00491b13                       ; 00491b8f
        ;   XREF to: 00491b13 (CONDITIONAL_JUMP)  ; LAB_00491b13
    MOV ECX,dword ptr [0x01c3d5c8]      ; 00491b91 | DAT_01c3d5c8
        ;   Label: LAB_00491b91
    CMP ECX,0x3                         ; 00491b97
    JL 0x00491e2d                       ; 00491b9a
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00491ba0
    MOV EDX,dword ptr [EDX]             ; 00491ba3
    XOR ESI,ESI                         ; 00491ba5
    MOV dword ptr [ESP + 0x14],EDX      ; 00491ba7
    TEST ECX,ECX                        ; 00491bab
    JLE 0x00491c34                      ; 00491bad
        ;   XREF to: 00491c34 (CONDITIONAL_JUMP)  ; LAB_00491c34
    MOV EBX,0x1c3d5cc                   ; 00491bb3
    MOV EDI,dword ptr [0x01c3d5c8]      ; 00491bb8 | DAT_01c3d5c8
        ;   Label: LAB_00491bb8
    LEA ECX,[ESI + 0x1]                 ; 00491bbe
    CMP ECX,EDI                         ; 00491bc1
    JNZ 0x00491bc7                      ; 00491bc3
        ;   XREF to: 00491bc7 (CONDITIONAL_JUMP)  ; LAB_00491bc7
    XOR ECX,EDI                         ; 00491bc5
    IMUL ECX,ECX,0xc                    ; 00491bc7
        ;   Label: LAB_00491bc7
    FLD float ptr [EBX]                 ; 00491bca | DAT_01c3d5cc | DAT_01c3d5d8
    MOV EDI,0x1c3d5cc                   ; 00491bcc
    MOV EDX,EBX                         ; 00491bd1
    ADD EDI,ECX                         ; 00491bd3
    XOR ECX,ECX                         ; 00491bd5
    FCOMP float ptr [ESP + 0x14]        ; 00491bd7
    FNSTSW AX                           ; 00491bdb
    SAHF                                ; 00491bdd
    JBE 0x00491be5                      ; 00491bde
        ;   XREF to: 00491be5 (CONDITIONAL_JUMP)  ; LAB_00491be5
    MOV ECX,0x1                         ; 00491be0
    FLD float ptr [EDI]                 ; 00491be5 | DAT_01c3d5cc | DAT_01c3d5e4
        ;   Label: LAB_00491be5
    FCOMP float ptr [ESP + 0x14]        ; 00491be7
    FNSTSW AX                           ; 00491beb
    SAHF                                ; 00491bed
    JBE 0x00491bf3                      ; 00491bee
        ;   XREF to: 00491bf3 (CONDITIONAL_JUMP)  ; LAB_00491bf3
    OR CL,0x2                           ; 00491bf0
    CMP ECX,0x3                         ; 00491bf3
        ;   Label: LAB_00491bf3
    JA 0x00491c26                       ; 00491bf6
        ;   XREF to: 00491c26 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491804]  ; 00491bf8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d68c],0xc ; 00491bff | DAT_01c3d68c
        ;   Label: caseD_0
    ADD ECX,0x1c3d690                   ; 00491c06
    CMP ECX,EDX                         ; 00491c0c
    JZ 0x00491c20                       ; 00491c0e
        ;   XREF to: 00491c20 (CONDITIONAL_JUMP)  ; LAB_00491c20
    MOV EAX,dword ptr [EDX]             ; 00491c10 | DAT_01c3d5cc
    MOV dword ptr [ECX],EAX             ; 00491c12 | DAT_01c3d690
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491c14 | DAT_01c3d5d0
    MOV dword ptr [ECX + 0x4],EAX       ; 00491c17 | DAT_01c3d694
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491c1a | DAT_01c3d5d4
    MOV dword ptr [ECX + 0x8],EAX       ; 00491c1d | DAT_01c3d698
    INC dword ptr [0x01c3d68c]          ; 00491c20 | DAT_01c3d68c
        ;   Label: LAB_00491c20
    MOV EDX,dword ptr [0x01c3d5c8]      ; 00491c26 | DAT_01c3d5c8
        ;   Label: caseD_3
    INC ESI                             ; 00491c2c
    ADD EBX,0xc                         ; 00491c2d
    CMP ESI,EDX                         ; 00491c30
    JL 0x00491bb8                       ; 00491c32
        ;   XREF to: 00491bb8 (CONDITIONAL_JUMP)  ; LAB_00491bb8
    MOV ECX,dword ptr [0x01c3d68c]      ; 00491c34 | DAT_01c3d68c
        ;   Label: LAB_00491c34
    CMP ECX,0x3                         ; 00491c3a
    JL 0x00491e2d                       ; 00491c3d
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00491c43
    MOV EDX,dword ptr [EDX]             ; 00491c46
    XOR ESI,ESI                         ; 00491c48
    MOV dword ptr [ESP],EDX             ; 00491c4a
    TEST ECX,ECX                        ; 00491c4d
    JLE 0x00491cd4                      ; 00491c4f
        ;   XREF to: 00491cd4 (CONDITIONAL_JUMP)  ; LAB_00491cd4
    MOV EBX,0x1c3d690                   ; 00491c55
    MOV EDI,dword ptr [0x01c3d68c]      ; 00491c5a | DAT_01c3d68c
        ;   Label: LAB_00491c5a
    LEA ECX,[ESI + 0x1]                 ; 00491c60
    CMP ECX,EDI                         ; 00491c63
    JNZ 0x00491c69                      ; 00491c65
        ;   XREF to: 00491c69 (CONDITIONAL_JUMP)  ; LAB_00491c69
    XOR ECX,EDI                         ; 00491c67
    IMUL ECX,ECX,0xc                    ; 00491c69
        ;   Label: LAB_00491c69
    FLD float ptr [EBX]                 ; 00491c6c | DAT_01c3d690 | DAT_01c3d69c
    MOV EDI,0x1c3d690                   ; 00491c6e
    MOV EDX,EBX                         ; 00491c73
    ADD EDI,ECX                         ; 00491c75
    XOR ECX,ECX                         ; 00491c77
    FCOMP float ptr [ESP]               ; 00491c79
    FNSTSW AX                           ; 00491c7c
    SAHF                                ; 00491c7e
    JNC 0x00491c86                      ; 00491c7f
        ;   XREF to: 00491c86 (CONDITIONAL_JUMP)  ; LAB_00491c86
    MOV ECX,0x1                         ; 00491c81
    FLD float ptr [EDI]                 ; 00491c86 | DAT_01c3d690 | DAT_01c3d6a8
        ;   Label: LAB_00491c86
    FCOMP float ptr [ESP]               ; 00491c88
    FNSTSW AX                           ; 00491c8b
    SAHF                                ; 00491c8d
    JNC 0x00491c93                      ; 00491c8e
        ;   XREF to: 00491c93 (CONDITIONAL_JUMP)  ; LAB_00491c93
    OR CL,0x2                           ; 00491c90
    CMP ECX,0x3                         ; 00491c93
        ;   Label: LAB_00491c93
    JA 0x00491cc6                       ; 00491c96
        ;   XREF to: 00491cc6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491814]  ; 00491c98 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d750],0xc ; 00491c9f | DAT_01c3d750
        ;   Label: caseD_0
    ADD ECX,0x1c3d754                   ; 00491ca6
    CMP ECX,EDX                         ; 00491cac
    JZ 0x00491cc0                       ; 00491cae
        ;   XREF to: 00491cc0 (CONDITIONAL_JUMP)  ; LAB_00491cc0
    MOV EAX,dword ptr [EDX]             ; 00491cb0 | DAT_01c3d690
    MOV dword ptr [ECX],EAX             ; 00491cb2 | DAT_01c3d754
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491cb4 | DAT_01c3d694
    MOV dword ptr [ECX + 0x4],EAX       ; 00491cb7 | DAT_01c3d758
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491cba | DAT_01c3d698
    MOV dword ptr [ECX + 0x8],EAX       ; 00491cbd | DAT_01c3d75c
    INC dword ptr [0x01c3d750]          ; 00491cc0 | DAT_01c3d750
        ;   Label: LAB_00491cc0
    MOV EDX,dword ptr [0x01c3d68c]      ; 00491cc6 | DAT_01c3d68c
        ;   Label: caseD_3
    INC ESI                             ; 00491ccc
    ADD EBX,0xc                         ; 00491ccd
    CMP ESI,EDX                         ; 00491cd0
    JL 0x00491c5a                       ; 00491cd2
        ;   XREF to: 00491c5a (CONDITIONAL_JUMP)  ; LAB_00491c5a
    MOV ECX,dword ptr [0x01c3d750]      ; 00491cd4 | DAT_01c3d750
        ;   Label: LAB_00491cd4
    CMP ECX,0x3                         ; 00491cda
    JL 0x00491e2d                       ; 00491cdd
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00491ce3
    MOV EDX,dword ptr [EDX + 0x8]       ; 00491ce6
    XOR EBX,EBX                         ; 00491ce9
    MOV dword ptr [ESP + 0xc],EDX       ; 00491ceb
    TEST ECX,ECX                        ; 00491cef
    JLE 0x00491d7a                      ; 00491cf1
        ;   XREF to: 00491d7a (CONDITIONAL_JUMP)  ; LAB_00491d7a
    MOV ESI,0x1c3d754                   ; 00491cf7
    MOV EDI,dword ptr [0x01c3d750]      ; 00491cfc | DAT_01c3d750
        ;   Label: LAB_00491cfc
    LEA ECX,[EBX + 0x1]                 ; 00491d02
    CMP ECX,EDI                         ; 00491d05
    JNZ 0x00491d0b                      ; 00491d07
        ;   XREF to: 00491d0b (CONDITIONAL_JUMP)  ; LAB_00491d0b
    XOR ECX,EDI                         ; 00491d09
    IMUL ECX,ECX,0xc                    ; 00491d0b
        ;   Label: LAB_00491d0b
    FLD float ptr [ESI + 0x8]           ; 00491d0e | DAT_01c3d75c | DAT_01c3d768
    MOV EDI,0x1c3d754                   ; 00491d11
    MOV EDX,ESI                         ; 00491d16
    ADD EDI,ECX                         ; 00491d18
    XOR ECX,ECX                         ; 00491d1a
    FCOMP float ptr [ESP + 0xc]         ; 00491d1c
    FNSTSW AX                           ; 00491d20
    SAHF                                ; 00491d22
    JNC 0x00491d2a                      ; 00491d23
        ;   XREF to: 00491d2a (CONDITIONAL_JUMP)  ; LAB_00491d2a
    MOV ECX,0x1                         ; 00491d25
    FLD float ptr [EDI + 0x8]           ; 00491d2a | DAT_01c3d75c | DAT_01c3d774
        ;   Label: LAB_00491d2a
    FCOMP float ptr [ESP + 0xc]         ; 00491d2d
    FNSTSW AX                           ; 00491d31
    SAHF                                ; 00491d33
    JNC 0x00491d39                      ; 00491d34
        ;   XREF to: 00491d39 (CONDITIONAL_JUMP)  ; LAB_00491d39
    OR CL,0x2                           ; 00491d36
    CMP ECX,0x3                         ; 00491d39
        ;   Label: LAB_00491d39
    JA 0x00491d6c                       ; 00491d3c
        ;   XREF to: 00491d6c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491824]  ; 00491d3e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d814],0xc ; 00491d45 | DAT_01c3d814
        ;   Label: caseD_0
    ADD ECX,0x1c3d818                   ; 00491d4c
    CMP ECX,EDX                         ; 00491d52
    JZ 0x00491d66                       ; 00491d54
        ;   XREF to: 00491d66 (CONDITIONAL_JUMP)  ; LAB_00491d66
    MOV EAX,dword ptr [EDX]             ; 00491d56 | DAT_01c3d754
    MOV dword ptr [ECX],EAX             ; 00491d58 | DAT_01c3d818
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491d5a | DAT_01c3d758
    MOV dword ptr [ECX + 0x4],EAX       ; 00491d5d | DAT_01c3d81c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491d60 | DAT_01c3d75c
    MOV dword ptr [ECX + 0x8],EAX       ; 00491d63 | DAT_01c3d820
    INC dword ptr [0x01c3d814]          ; 00491d66 | DAT_01c3d814
        ;   Label: LAB_00491d66
    MOV EDX,dword ptr [0x01c3d750]      ; 00491d6c | DAT_01c3d750
        ;   Label: caseD_3
    INC EBX                             ; 00491d72
    ADD ESI,0xc                         ; 00491d73
    CMP EBX,EDX                         ; 00491d76
    JL 0x00491cfc                       ; 00491d78
        ;   XREF to: 00491cfc (CONDITIONAL_JUMP)  ; LAB_00491cfc
    MOV ECX,dword ptr [0x01c3d814]      ; 00491d7a | DAT_01c3d814
        ;   Label: LAB_00491d7a
    CMP ECX,0x3                         ; 00491d80
    JL 0x00491e2d                       ; 00491d83
        ;   XREF to: 00491e2d (CONDITIONAL_JUMP)  ; LAB_00491e2d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00491d89
    MOV EDX,dword ptr [EDX + 0x8]       ; 00491d8c
    XOR ESI,ESI                         ; 00491d8f
    MOV dword ptr [ESP + 0x4],EDX       ; 00491d91
    TEST ECX,ECX                        ; 00491d95
    JLE 0x00491e20                      ; 00491d97
        ;   XREF to: 00491e20 (CONDITIONAL_JUMP)  ; LAB_00491e20
    MOV EBX,0x1c3d818                   ; 00491d9d
    MOV EDI,dword ptr [0x01c3d814]      ; 00491da2 | DAT_01c3d814
        ;   Label: LAB_00491da2
    LEA ECX,[ESI + 0x1]                 ; 00491da8
    CMP ECX,EDI                         ; 00491dab
    JNZ 0x00491db1                      ; 00491dad
        ;   XREF to: 00491db1 (CONDITIONAL_JUMP)  ; LAB_00491db1
    XOR ECX,EDI                         ; 00491daf
    IMUL ECX,ECX,0xc                    ; 00491db1
        ;   Label: LAB_00491db1
    FLD float ptr [EBX + 0x8]           ; 00491db4 | DAT_01c3d820 | DAT_01c3d82c
    MOV EDI,0x1c3d818                   ; 00491db7
    MOV EDX,EBX                         ; 00491dbc
    ADD EDI,ECX                         ; 00491dbe
    XOR ECX,ECX                         ; 00491dc0
    FCOMP float ptr [ESP + 0x4]         ; 00491dc2
    FNSTSW AX                           ; 00491dc6
    SAHF                                ; 00491dc8
    JBE 0x00491dd0                      ; 00491dc9
        ;   XREF to: 00491dd0 (CONDITIONAL_JUMP)  ; LAB_00491dd0
    MOV ECX,0x1                         ; 00491dcb
    FLD float ptr [EDI + 0x8]           ; 00491dd0 | DAT_01c3d820 | DAT_01c3d838
        ;   Label: LAB_00491dd0
    FCOMP float ptr [ESP + 0x4]         ; 00491dd3
    FNSTSW AX                           ; 00491dd7
    SAHF                                ; 00491dd9
    JBE 0x00491ddf                      ; 00491dda
        ;   XREF to: 00491ddf (CONDITIONAL_JUMP)  ; LAB_00491ddf
    OR CL,0x2                           ; 00491ddc
    CMP ECX,0x3                         ; 00491ddf
        ;   Label: LAB_00491ddf
    JA 0x00491e12                       ; 00491de2
        ;   XREF to: 00491e12 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x491834]  ; 00491de4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01c3d8d8],0xc ; 00491deb | DAT_01c3d8d8
        ;   Label: caseD_0
    ADD ECX,0x1c3d8dc                   ; 00491df2
    CMP ECX,EDX                         ; 00491df8
    JZ 0x00491e0c                       ; 00491dfa
        ;   XREF to: 00491e0c (CONDITIONAL_JUMP)  ; LAB_00491e0c
    MOV EAX,dword ptr [EDX]             ; 00491dfc | DAT_01c3d818
    MOV dword ptr [ECX],EAX             ; 00491dfe
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491e00 | DAT_01c3d81c
    MOV dword ptr [ECX + 0x4],EAX       ; 00491e03
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491e06 | DAT_01c3d820
    MOV dword ptr [ECX + 0x8],EAX       ; 00491e09
    INC dword ptr [0x01c3d8d8]          ; 00491e0c | DAT_01c3d8d8
        ;   Label: LAB_00491e0c
    MOV EDX,dword ptr [0x01c3d814]      ; 00491e12 | DAT_01c3d814
        ;   Label: caseD_3
    INC ESI                             ; 00491e18
    ADD EBX,0xc                         ; 00491e19
    CMP ESI,EDX                         ; 00491e1c
    JL 0x00491da2                       ; 00491e1e
        ;   XREF to: 00491da2 (CONDITIONAL_JUMP)  ; LAB_00491da2
    CMP dword ptr [0x01c3d8d8],0x3      ; 00491e20 | DAT_01c3d8d8
        ;   Label: LAB_00491e20
    JGE 0x004919f0                      ; 00491e27
        ;   XREF to: 004919f0 (CONDITIONAL_JUMP)  ; LAB_004919f0
    XOR ECX,ECX                         ; 00491e2d
        ;   Label: LAB_00491e2d
    MOV EAX,ECX                         ; 00491e2f
    MOV ESP,EBP                         ; 00491e31
    POP EBP                             ; 00491e33
    POP EDI                             ; 00491e34
    POP ESI                             ; 00491e35
    POP EBX                             ; 00491e36
    RET                                 ; 00491e37
    IMUL ECX,dword ptr [0x01c3d504],0xc ; 00491e38 | DAT_01c3d504
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 00491e3f
    SUB ESP,0x8                         ; 00491e43
    FCHS                                ; 00491e46
    FSTP double ptr [ESP]               ; 00491e48
    PUSH 0x0                            ; 00491e4b
    PUSH 0x0                            ; 00491e4d
    PUSH 0x3ff00000                     ; 00491e4f
    PUSH 0x0                            ; 00491e54
    PUSH 0x0                            ; 00491e56
    PUSH 0x0                            ; 00491e58
    ADD ECX,0x1c3d508                   ; 00491e5a
    PUSH ECX                            ; 00491e60
    PUSH EDX                            ; 00491e61
    PUSH EDI                            ; 00491e62
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491e63
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d504]      ; 00491e68 | DAT_01c3d504
    INC EDX                             ; 00491e6e
    ADD ESP,0x2c                        ; 00491e6f
    MOV dword ptr [0x01c3d504],EDX      ; 00491e72 | DAT_01c3d504
    JMP 0x00491ade                      ; 00491e78
        ;   XREF to: 00491ade (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d504],0xc ; 00491e7d | DAT_01c3d504
        ;   Label: caseD_2
    ADD ECX,0x1c3d508                   ; 00491e84
    CMP ECX,EDX                         ; 00491e8a
    JZ 0x00491e9e                       ; 00491e8c
        ;   XREF to: 00491e9e (CONDITIONAL_JUMP)  ; LAB_00491e9e
    MOV EAX,dword ptr [EDX]             ; 00491e8e
    MOV dword ptr [ECX],EAX             ; 00491e90 | DAT_01c3d508
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491e92
    MOV dword ptr [ECX + 0x4],EAX       ; 00491e95 | DAT_01c3d50c
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491e98
    MOV dword ptr [ECX + 0x8],EAX       ; 00491e9b | DAT_01c3d510
    MOV ECX,dword ptr [0x01c3d504]      ; 00491e9e | DAT_01c3d504
        ;   Label: LAB_00491e9e
    INC ECX                             ; 00491ea4
    MOV dword ptr [0x01c3d504],ECX      ; 00491ea5 | DAT_01c3d504
    IMUL ECX,ECX,0xc                    ; 00491eab
    FLD float ptr [ESP + 0x18]          ; 00491eae
    SUB ESP,0x8                         ; 00491eb2
    FCHS                                ; 00491eb5
    FSTP double ptr [ESP]               ; 00491eb7
    PUSH 0x0                            ; 00491eba
    PUSH 0x0                            ; 00491ebc
    PUSH 0x3ff00000                     ; 00491ebe
    PUSH 0x0                            ; 00491ec3
    PUSH 0x0                            ; 00491ec5
    PUSH 0x0                            ; 00491ec7
    ADD ECX,0x1c3d508                   ; 00491ec9
    PUSH ECX                            ; 00491ecf
    PUSH EDI                            ; 00491ed0
    PUSH EDX                            ; 00491ed1
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491ed2
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d504]      ; 00491ed7 | DAT_01c3d504
    INC EDX                             ; 00491edd
    ADD ESP,0x2c                        ; 00491ede
    MOV dword ptr [0x01c3d504],EDX      ; 00491ee1 | DAT_01c3d504
    JMP 0x00491ade                      ; 00491ee7
        ;   XREF to: 00491ade (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d5c8],0xc ; 00491eec | DAT_01c3d5c8
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 00491ef3
    SUB ESP,0x8                         ; 00491ef7
    FSTP double ptr [ESP]               ; 00491efa
    PUSH 0x0                            ; 00491efd
    PUSH 0x0                            ; 00491eff
    PUSH 0xbff00000                     ; 00491f01
    PUSH 0x0                            ; 00491f06
    PUSH 0x0                            ; 00491f08
    PUSH 0x0                            ; 00491f0a
    ADD ECX,0x1c3d5cc                   ; 00491f0c
    PUSH ECX                            ; 00491f12
    PUSH EDX                            ; 00491f13 | DAT_01c3d508
    PUSH EDI                            ; 00491f14
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491f15
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d5c8]      ; 00491f1a | DAT_01c3d5c8
    INC EDX                             ; 00491f20
    ADD ESP,0x2c                        ; 00491f21
    MOV dword ptr [0x01c3d5c8],EDX      ; 00491f24 | DAT_01c3d5c8
    JMP 0x00491b83                      ; 00491f2a
        ;   XREF to: 00491b83 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d5c8],0xc ; 00491f2f | DAT_01c3d5c8
        ;   Label: caseD_2
    ADD ECX,0x1c3d5cc                   ; 00491f36
    CMP ECX,EDX                         ; 00491f3c
    JZ 0x00491f50                       ; 00491f3e
        ;   XREF to: 00491f50 (CONDITIONAL_JUMP)  ; LAB_00491f50
    MOV EAX,dword ptr [EDX]             ; 00491f40 | DAT_01c3d508
    MOV dword ptr [ECX],EAX             ; 00491f42 | DAT_01c3d5cc
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491f44 | DAT_01c3d50c
    MOV dword ptr [ECX + 0x4],EAX       ; 00491f47 | DAT_01c3d5d0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491f4a | DAT_01c3d510
    MOV dword ptr [ECX + 0x8],EAX       ; 00491f4d | DAT_01c3d5d4
    MOV ECX,dword ptr [0x01c3d5c8]      ; 00491f50 | DAT_01c3d5c8
        ;   Label: LAB_00491f50
    INC ECX                             ; 00491f56
    MOV dword ptr [0x01c3d5c8],ECX      ; 00491f57 | DAT_01c3d5c8
    IMUL ECX,ECX,0xc                    ; 00491f5d
    FLD float ptr [ESP + 0x8]           ; 00491f60
    SUB ESP,0x8                         ; 00491f64
    FSTP double ptr [ESP]               ; 00491f67
    PUSH 0x0                            ; 00491f6a
    PUSH 0x0                            ; 00491f6c
    PUSH 0xbff00000                     ; 00491f6e
    PUSH 0x0                            ; 00491f73
    PUSH 0x0                            ; 00491f75
    PUSH 0x0                            ; 00491f77
    ADD ECX,0x1c3d5cc                   ; 00491f79
    PUSH ECX                            ; 00491f7f
    PUSH EDI                            ; 00491f80
    PUSH EDX                            ; 00491f81 | DAT_01c3d508
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491f82
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d5c8]      ; 00491f87 | DAT_01c3d5c8
    INC EDX                             ; 00491f8d
    ADD ESP,0x2c                        ; 00491f8e
    MOV dword ptr [0x01c3d5c8],EDX      ; 00491f91 | DAT_01c3d5c8
    JMP 0x00491b83                      ; 00491f97
        ;   XREF to: 00491b83 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d68c],0xc ; 00491f9c | DAT_01c3d68c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 00491fa3
    SUB ESP,0x8                         ; 00491fa7
    FCHS                                ; 00491faa
    FSTP double ptr [ESP]               ; 00491fac
    PUSH 0x0                            ; 00491faf
    PUSH 0x0                            ; 00491fb1
    PUSH 0x0                            ; 00491fb3
    PUSH 0x0                            ; 00491fb5
    PUSH 0x3ff00000                     ; 00491fb7
    PUSH 0x0                            ; 00491fbc
    ADD ECX,0x1c3d690                   ; 00491fbe
    PUSH ECX                            ; 00491fc4
    PUSH EDX                            ; 00491fc5 | DAT_01c3d5cc
    PUSH EDI                            ; 00491fc6
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00491fc7
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d68c]      ; 00491fcc | DAT_01c3d68c
    INC EDX                             ; 00491fd2
    ADD ESP,0x2c                        ; 00491fd3
    MOV dword ptr [0x01c3d68c],EDX      ; 00491fd6 | DAT_01c3d68c
    JMP 0x00491c26                      ; 00491fdc
        ;   XREF to: 00491c26 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d68c],0xc ; 00491fe1 | DAT_01c3d68c
        ;   Label: caseD_2
    ADD ECX,0x1c3d690                   ; 00491fe8
    CMP ECX,EDX                         ; 00491fee
    JZ 0x00492002                       ; 00491ff0
        ;   XREF to: 00492002 (CONDITIONAL_JUMP)  ; LAB_00492002
    MOV EAX,dword ptr [EDX]             ; 00491ff2 | DAT_01c3d5cc
    MOV dword ptr [ECX],EAX             ; 00491ff4 | DAT_01c3d690
    MOV EAX,dword ptr [EDX + 0x4]       ; 00491ff6 | DAT_01c3d5d0
    MOV dword ptr [ECX + 0x4],EAX       ; 00491ff9 | DAT_01c3d694
    MOV EAX,dword ptr [EDX + 0x8]       ; 00491ffc | DAT_01c3d5d4
    MOV dword ptr [ECX + 0x8],EAX       ; 00491fff | DAT_01c3d698
    MOV ECX,dword ptr [0x01c3d68c]      ; 00492002 | DAT_01c3d68c
        ;   Label: LAB_00492002
    INC ECX                             ; 00492008
    MOV dword ptr [0x01c3d68c],ECX      ; 00492009 | DAT_01c3d68c
    IMUL ECX,ECX,0xc                    ; 0049200f
    FLD float ptr [ESP + 0x14]          ; 00492012
    SUB ESP,0x8                         ; 00492016
    FCHS                                ; 00492019
    FSTP double ptr [ESP]               ; 0049201b
    PUSH 0x0                            ; 0049201e
    PUSH 0x0                            ; 00492020
    PUSH 0x0                            ; 00492022
    PUSH 0x0                            ; 00492024
    PUSH 0x3ff00000                     ; 00492026
    PUSH 0x0                            ; 0049202b
    ADD ECX,0x1c3d690                   ; 0049202d
    PUSH ECX                            ; 00492033
    PUSH EDI                            ; 00492034
    PUSH EDX                            ; 00492035 | DAT_01c3d5cc
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00492036
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d68c]      ; 0049203b | DAT_01c3d68c
    INC EDX                             ; 00492041
    ADD ESP,0x2c                        ; 00492042
    MOV dword ptr [0x01c3d68c],EDX      ; 00492045 | DAT_01c3d68c
    JMP 0x00491c26                      ; 0049204b
        ;   XREF to: 00491c26 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d750],0xc ; 00492050 | DAT_01c3d750
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00492057
    SUB ESP,0x8                         ; 0049205a
    FSTP double ptr [ESP]               ; 0049205d
    PUSH 0x0                            ; 00492060
    PUSH 0x0                            ; 00492062
    PUSH 0x0                            ; 00492064
    PUSH 0x0                            ; 00492066
    PUSH 0xbff00000                     ; 00492068
    PUSH 0x0                            ; 0049206d
    ADD ECX,0x1c3d754                   ; 0049206f
    PUSH ECX                            ; 00492075
    PUSH EDX                            ; 00492076 | DAT_01c3d690
    PUSH EDI                            ; 00492077
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00492078
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d750]      ; 0049207d | DAT_01c3d750
    INC EDX                             ; 00492083
    ADD ESP,0x2c                        ; 00492084
    MOV dword ptr [0x01c3d750],EDX      ; 00492087 | DAT_01c3d750
    JMP 0x00491cc6                      ; 0049208d
        ;   XREF to: 00491cc6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d750],0xc ; 00492092 | DAT_01c3d750
        ;   Label: caseD_2
    ADD ECX,0x1c3d754                   ; 00492099
    CMP ECX,EDX                         ; 0049209f
    JZ 0x004920b3                       ; 004920a1
        ;   XREF to: 004920b3 (CONDITIONAL_JUMP)  ; LAB_004920b3
    MOV EAX,dword ptr [EDX]             ; 004920a3 | DAT_01c3d690
    MOV dword ptr [ECX],EAX             ; 004920a5 | DAT_01c3d754
    MOV EAX,dword ptr [EDX + 0x4]       ; 004920a7 | DAT_01c3d694
    MOV dword ptr [ECX + 0x4],EAX       ; 004920aa | DAT_01c3d758
    MOV EAX,dword ptr [EDX + 0x8]       ; 004920ad | DAT_01c3d698
    MOV dword ptr [ECX + 0x8],EAX       ; 004920b0 | DAT_01c3d75c
    MOV ECX,dword ptr [0x01c3d750]      ; 004920b3 | DAT_01c3d750
        ;   Label: LAB_004920b3
    INC ECX                             ; 004920b9
    MOV dword ptr [0x01c3d750],ECX      ; 004920ba | DAT_01c3d750
    IMUL ECX,ECX,0xc                    ; 004920c0
    FLD float ptr [ESP]                 ; 004920c3
    SUB ESP,0x8                         ; 004920c6
    FSTP double ptr [ESP]               ; 004920c9
    PUSH 0x0                            ; 004920cc
    PUSH 0x0                            ; 004920ce
    PUSH 0x0                            ; 004920d0
    PUSH 0x0                            ; 004920d2
    PUSH 0xbff00000                     ; 004920d4
    PUSH 0x0                            ; 004920d9
    ADD ECX,0x1c3d754                   ; 004920db
    PUSH ECX                            ; 004920e1
    PUSH EDI                            ; 004920e2
    PUSH EDX                            ; 004920e3 | DAT_01c3d690
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 004920e4
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d750]      ; 004920e9 | DAT_01c3d750
    INC EDX                             ; 004920ef
    ADD ESP,0x2c                        ; 004920f0
    MOV dword ptr [0x01c3d750],EDX      ; 004920f3 | DAT_01c3d750
    JMP 0x00491cc6                      ; 004920f9
        ;   XREF to: 00491cc6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d814],0xc ; 004920fe | DAT_01c3d814
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 00492105
    SUB ESP,0x8                         ; 00492109
    FSTP double ptr [ESP]               ; 0049210c
    PUSH 0xbff00000                     ; 0049210f
    PUSH 0x0                            ; 00492114
    PUSH 0x0                            ; 00492116
    PUSH 0x0                            ; 00492118
    PUSH 0x0                            ; 0049211a
    PUSH 0x0                            ; 0049211c
    ADD ECX,0x1c3d818                   ; 0049211e
    PUSH ECX                            ; 00492124
    PUSH EDX                            ; 00492125 | DAT_01c3d754
    PUSH EDI                            ; 00492126
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00492127
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d814]      ; 0049212c | DAT_01c3d814
    INC EDX                             ; 00492132
    ADD ESP,0x2c                        ; 00492133
    MOV dword ptr [0x01c3d814],EDX      ; 00492136 | DAT_01c3d814
    JMP 0x00491d6c                      ; 0049213c
        ;   XREF to: 00491d6c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d814],0xc ; 00492141 | DAT_01c3d814
        ;   Label: caseD_2
    ADD ECX,0x1c3d818                   ; 00492148
    CMP ECX,EDX                         ; 0049214e
    JZ 0x00492162                       ; 00492150
        ;   XREF to: 00492162 (CONDITIONAL_JUMP)  ; LAB_00492162
    MOV EAX,dword ptr [EDX]             ; 00492152 | DAT_01c3d754
    MOV dword ptr [ECX],EAX             ; 00492154 | DAT_01c3d818
    MOV EAX,dword ptr [EDX + 0x4]       ; 00492156 | DAT_01c3d758
    MOV dword ptr [ECX + 0x4],EAX       ; 00492159 | DAT_01c3d81c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049215c | DAT_01c3d75c
    MOV dword ptr [ECX + 0x8],EAX       ; 0049215f | DAT_01c3d820
    MOV ECX,dword ptr [0x01c3d814]      ; 00492162 | DAT_01c3d814
        ;   Label: LAB_00492162
    INC ECX                             ; 00492168
    MOV dword ptr [0x01c3d814],ECX      ; 00492169 | DAT_01c3d814
    IMUL ECX,ECX,0xc                    ; 0049216f
    FLD float ptr [ESP + 0xc]           ; 00492172
    SUB ESP,0x8                         ; 00492176
    FSTP double ptr [ESP]               ; 00492179
    PUSH 0xbff00000                     ; 0049217c
    PUSH 0x0                            ; 00492181
    PUSH 0x0                            ; 00492183
    PUSH 0x0                            ; 00492185
    PUSH 0x0                            ; 00492187
    PUSH 0x0                            ; 00492189
    ADD ECX,0x1c3d818                   ; 0049218b
    PUSH ECX                            ; 00492191
    PUSH EDI                            ; 00492192
    PUSH EDX                            ; 00492193 | DAT_01c3d754
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00492194
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d814]      ; 00492199 | DAT_01c3d814
    INC EDX                             ; 0049219f
    ADD ESP,0x2c                        ; 004921a0
    MOV dword ptr [0x01c3d814],EDX      ; 004921a3 | DAT_01c3d814
    JMP 0x00491d6c                      ; 004921a9
        ;   XREF to: 00491d6c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d8d8],0xc ; 004921ae | DAT_01c3d8d8
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 004921b5
    SUB ESP,0x8                         ; 004921b9
    FSTP double ptr [ESP]               ; 004921bc
    PUSH 0xbff00000                     ; 004921bf
    PUSH 0x0                            ; 004921c4
    PUSH 0x0                            ; 004921c6
    PUSH 0x0                            ; 004921c8
    PUSH 0x0                            ; 004921ca
    PUSH 0x0                            ; 004921cc
    ADD ECX,0x1c3d8dc                   ; 004921ce
    PUSH ECX                            ; 004921d4
    PUSH EDX                            ; 004921d5 | DAT_01c3d818
    PUSH EDI                            ; 004921d6
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 004921d7
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d8d8]      ; 004921dc | DAT_01c3d8d8
    INC EDX                             ; 004921e2
    ADD ESP,0x2c                        ; 004921e3
    MOV dword ptr [0x01c3d8d8],EDX      ; 004921e6 | DAT_01c3d8d8
    JMP 0x00491e12                      ; 004921ec
        ;   XREF to: 00491e12 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01c3d8d8],0xc ; 004921f1 | DAT_01c3d8d8
        ;   Label: caseD_2
    ADD ECX,0x1c3d8dc                   ; 004921f8
    CMP ECX,EDX                         ; 004921fe
    JZ 0x00492212                       ; 00492200
        ;   XREF to: 00492212 (CONDITIONAL_JUMP)  ; LAB_00492212
    MOV EAX,dword ptr [EDX]             ; 00492202 | DAT_01c3d818
    MOV dword ptr [ECX],EAX             ; 00492204
    MOV EAX,dword ptr [EDX + 0x4]       ; 00492206 | DAT_01c3d81c
    MOV dword ptr [ECX + 0x4],EAX       ; 00492209
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049220c | DAT_01c3d820
    MOV dword ptr [ECX + 0x8],EAX       ; 0049220f
    MOV ECX,dword ptr [0x01c3d8d8]      ; 00492212 | DAT_01c3d8d8
        ;   Label: LAB_00492212
    INC ECX                             ; 00492218
    MOV dword ptr [0x01c3d8d8],ECX      ; 00492219 | DAT_01c3d8d8
    IMUL ECX,ECX,0xc                    ; 0049221f
    FLD float ptr [ESP + 0x4]           ; 00492222
    SUB ESP,0x8                         ; 00492226
    FSTP double ptr [ESP]               ; 00492229
    PUSH 0xbff00000                     ; 0049222c
    PUSH 0x0                            ; 00492231
    PUSH 0x0                            ; 00492233
    PUSH 0x0                            ; 00492235
    PUSH 0x0                            ; 00492237
    PUSH 0x0                            ; 00492239
    ADD ECX,0x1c3d8dc                   ; 0049223b
    PUSH ECX                            ; 00492241
    PUSH EDI                            ; 00492242
    PUSH EDX                            ; 00492243 | DAT_01c3d818
    CALL core_dtri.cpp_clipLineToPlane_FUN_00490df0 ; 00492244
        ;   XREF to: 00490df0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_00490df0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01c3d8d8]      ; 00492249 | DAT_01c3d8d8
    INC EDX                             ; 0049224f
    ADD ESP,0x2c                        ; 00492250
    MOV dword ptr [0x01c3d8d8],EDX      ; 00492253 | DAT_01c3d8d8
    JMP 0x00491e12                      ; 00492259
        ;   XREF to: 00491e12 (UNCONDITIONAL_JUMP)  ; caseD_3

