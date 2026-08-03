; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   bounds_min
; CVector3f *      Stack[0xc]:4   bounds_max
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_0046ded4 = 0046e1a7
;   undefined1* PTR_caseD_1_0046ded8 = 0046e528
;   undefined1* PTR_caseD_3_0046dee0 = 0046e1ce
;   undefined1* switchdataD_0046dee4 = 0046e24c
;   undefined1* PTR_caseD_1_0046dee8 = 0046e5dc
;   undefined1* PTR_caseD_3_0046def0 = 0046e273
;   undefined1* switchdataD_0046def4 = 0046e2ef
;   undefined1* PTR_caseD_1_0046def8 = 0046e68c
;   undefined1* PTR_caseD_3_0046df00 = 0046e316
;   undefined1* switchdataD_0046df04 = 0046e38f
;   undefined1* PTR_caseD_1_0046df08 = 0046e740
;   undefined1* PTR_caseD_3_0046df10 = 0046e3b6
;   undefined1* switchdataD_0046df14 = 0046e435
;   undefined1* PTR_caseD_1_0046df18 = 0046e7ee
;   undefined1* PTR_caseD_3_0046df20 = 0046e45c
;   ... and 86 more
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046df40
        ;   Label: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
    PUSH ESI                            ; 0046df41
    PUSH EDI                            ; 0046df42
    PUSH EBP                            ; 0046df43
    MOV EBP,ESP                         ; 0046df44
    SUB ESP,0x1c                        ; 0046df46
    AND ESP,0xfffffff8                  ; 0046df49
    MOV EDX,0x3                         ; 0046df4c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0046df51
    MOV dword ptr [0x01bc996c],EDX      ; 0046df54 | DAT_01bc996c
    CMP ECX,0x1bc9970                   ; 0046df5a
    JNZ 0x0046e0ee                      ; 0046df60
        ;   XREF to: 0046e0ee (CONDITIONAL_JUMP)  ; LAB_0046e0ee
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046df66
        ;   Label: LAB_0046df66
    ADD EDX,0xc                         ; 0046df69
    CMP EDX,0x1bc997c                   ; 0046df6c
    JZ 0x0046df8d                       ; 0046df72
        ;   XREF to: 0046df8d (CONDITIONAL_JUMP)  ; LAB_0046df8d
    FLD float ptr [EDX]                 ; 0046df74
    FLD float ptr [EDX + 0x8]           ; 0046df76
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046df79
    MOV [0x01bc9980],EAX                ; 0046df7c | g_CVector3f_ARRAY_01bc9970[1].y
    FSTP float ptr [0x01bc9984]         ; 0046df81 | g_CVector3f_ARRAY_01bc9970[1].z
    FSTP float ptr [0x01bc997c]         ; 0046df87 | g_CVector3f_ARRAY_01bc9970[1].x
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046df8d
        ;   Label: LAB_0046df8d
    ADD EDX,0x18                        ; 0046df90
    CMP EDX,0x1bc9988                   ; 0046df93
    JZ 0x0046dfb4                       ; 0046df99
        ;   XREF to: 0046dfb4 (CONDITIONAL_JUMP)  ; LAB_0046dfb4
    FLD float ptr [EDX]                 ; 0046df9b
    FLD float ptr [EDX + 0x8]           ; 0046df9d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046dfa0
    MOV [0x01bc998c],EAX                ; 0046dfa3 | g_CVector3f_ARRAY_01bc9970[2].y
    FSTP float ptr [0x01bc9990]         ; 0046dfa8 | g_CVector3f_ARRAY_01bc9970[2].z
    FSTP float ptr [0x01bc9988]         ; 0046dfae | g_CVector3f_ARRAY_01bc9970[2].x
    MOV EBX,0xffffffff                  ; 0046dfb4
        ;   Label: LAB_0046dfb4
    MOV EAX,[0x01bc996c]                ; 0046dfb9 | DAT_01bc996c
    XOR EDI,EDI                         ; 0046dfbe
    XOR ESI,ESI                         ; 0046dfc0
    MOV dword ptr [ESP + 0x10],EBX      ; 0046dfc2
    TEST EAX,EAX                        ; 0046dfc6
    JLE 0x0046e058                      ; 0046dfc8
        ;   XREF to: 0046e058 (CONDITIONAL_JUMP)  ; LAB_0046e058
    MOV EBX,0x1bc9970                   ; 0046dfce
    FLD float ptr [EBX]                 ; 0046dfd3 | g_CVector3f_ARRAY_01bc9970 | g_CVector3f_ARRAY_01bc9970[1].x
        ;   Label: LAB_0046dfd3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046dfd5
    MOV ECX,EBX                         ; 0046dfd8
    XOR EDX,EDX                         ; 0046dfda
    FCOMP float ptr [EAX]               ; 0046dfdc
    FNSTSW AX                           ; 0046dfde
    SAHF                                ; 0046dfe0
    JBE 0x0046dfe8                      ; 0046dfe1
        ;   XREF to: 0046dfe8 (CONDITIONAL_JUMP)  ; LAB_0046dfe8
    MOV EDX,0x1                         ; 0046dfe3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046dfe8
        ;   Label: LAB_0046dfe8
    FLD float ptr [ECX + 0x4]           ; 0046dfeb | g_CVector3f_ARRAY_01bc9970[0].y | g_CVector3f_ARRAY_01bc9970[1].y
    FCOMP float ptr [EAX + 0x4]         ; 0046dfee
    FNSTSW AX                           ; 0046dff1
    SAHF                                ; 0046dff3
    JBE 0x0046dff9                      ; 0046dff4
        ;   XREF to: 0046dff9 (CONDITIONAL_JUMP)  ; LAB_0046dff9
    OR DL,0x2                           ; 0046dff6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046dff9
        ;   Label: LAB_0046dff9
    FLD float ptr [ECX + 0x8]           ; 0046dffc | g_CVector3f_ARRAY_01bc9970[0].z | g_CVector3f_ARRAY_01bc9970[1].z
    FCOMP float ptr [EAX + 0x8]         ; 0046dfff
    FNSTSW AX                           ; 0046e002
    SAHF                                ; 0046e004
    JBE 0x0046e00a                      ; 0046e005
        ;   XREF to: 0046e00a (CONDITIONAL_JUMP)  ; LAB_0046e00a
    OR DL,0x4                           ; 0046e007
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e00a
        ;   Label: LAB_0046e00a
    FLD float ptr [ECX]                 ; 0046e00d | g_CVector3f_ARRAY_01bc9970
    FCOMP float ptr [EAX]               ; 0046e00f
    FNSTSW AX                           ; 0046e011
    SAHF                                ; 0046e013
    JNC 0x0046e019                      ; 0046e014
        ;   XREF to: 0046e019 (CONDITIONAL_JUMP)  ; LAB_0046e019
    OR DL,0x8                           ; 0046e016
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e019
        ;   Label: LAB_0046e019
    FLD float ptr [ECX + 0x4]           ; 0046e01c | g_CVector3f_ARRAY_01bc9970[0].y
    FCOMP float ptr [EAX + 0x4]         ; 0046e01f
    FNSTSW AX                           ; 0046e022
    SAHF                                ; 0046e024
    JNC 0x0046e02a                      ; 0046e025
        ;   XREF to: 0046e02a (CONDITIONAL_JUMP)  ; LAB_0046e02a
    OR DL,0x10                          ; 0046e027
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046e02a
        ;   Label: LAB_0046e02a
    FLD float ptr [ECX + 0x8]           ; 0046e02d | g_CVector3f_ARRAY_01bc9970[0].z
    FCOMP float ptr [EAX + 0x8]         ; 0046e030
    FNSTSW AX                           ; 0046e033
    SAHF                                ; 0046e035
    JNC 0x0046e03b                      ; 0046e036
        ;   XREF to: 0046e03b (CONDITIONAL_JUMP)  ; LAB_0046e03b
    OR DL,0x20                          ; 0046e038
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046e03b
        ;   Label: LAB_0046e03b
    MOV EAX,[0x01bc996c]                ; 0046e03f | DAT_01bc996c
    ADD EBX,0xc                         ; 0046e044
    INC ESI                             ; 0046e047
    AND ECX,EDX                         ; 0046e048
    OR EDI,EDX                          ; 0046e04a
    MOV dword ptr [ESP + 0x10],ECX      ; 0046e04c
    CMP ESI,EAX                         ; 0046e050
    JL 0x0046dfd3                       ; 0046e052
        ;   XREF to: 0046dfd3 (CONDITIONAL_JUMP)  ; LAB_0046dfd3
    TEST EDI,EDI                        ; 0046e058
        ;   Label: LAB_0046e058
    JNZ 0x0046e10f                      ; 0046e05a
        ;   XREF to: 0046e10f (CONDITIONAL_JUMP)  ; LAB_0046e10f
    MOV EBX,0x3                         ; 0046e060
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046e065
    MOV dword ptr [0x01bc9e04],EBX      ; 0046e068 | DAT_01bc9e04
    CMP ESI,0x1bc9e08                   ; 0046e06e
    JZ 0x0046e092                       ; 0046e074
        ;   XREF to: 0046e092 (CONDITIONAL_JUMP)  ; LAB_0046e092
    MOV EAX,ESI                         ; 0046e076
    FLD float ptr [EAX]                 ; 0046e078
    FLD float ptr [EAX + 0x8]           ; 0046e07a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046e07d
    MOV dword ptr [0x01bc9e0c],EDX      ; 0046e080 | g_CVector3f_ARRAY_01bc9e08[0].y
    FSTP float ptr [0x01bc9e10]         ; 0046e086 | g_CVector3f_ARRAY_01bc9e08[0].z
    FSTP float ptr [0x01bc9e08]         ; 0046e08c | g_CVector3f_ARRAY_01bc9e08
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046e092
        ;   Label: LAB_0046e092
    ADD EDX,0xc                         ; 0046e095
    CMP EDX,0x1bc9e14                   ; 0046e098
    JZ 0x0046e0b9                       ; 0046e09e
        ;   XREF to: 0046e0b9 (CONDITIONAL_JUMP)  ; LAB_0046e0b9
    FLD float ptr [EDX]                 ; 0046e0a0
    FLD float ptr [EDX + 0x8]           ; 0046e0a2
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e0a5
    MOV [0x01bc9e18],EAX                ; 0046e0a8 | g_CVector3f_ARRAY_01bc9e08[1].y
    FSTP float ptr [0x01bc9e1c]         ; 0046e0ad | g_CVector3f_ARRAY_01bc9e08[1].z
    FSTP float ptr [0x01bc9e14]         ; 0046e0b3 | g_CVector3f_ARRAY_01bc9e08[1].x
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046e0b9
        ;   Label: LAB_0046e0b9
    ADD EDX,0x18                        ; 0046e0bc
    CMP EDX,0x1bc9e20                   ; 0046e0bf
    JZ 0x0046e0e0                       ; 0046e0c5
        ;   XREF to: 0046e0e0 (CONDITIONAL_JUMP)  ; LAB_0046e0e0
    FLD float ptr [EDX]                 ; 0046e0c7
    FLD float ptr [EDX + 0x8]           ; 0046e0c9
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e0cc
    MOV [0x01bc9e24],EAX                ; 0046e0cf | g_CVector3f_ARRAY_01bc9e08[2].y
    FSTP float ptr [0x01bc9e28]         ; 0046e0d4 | g_CVector3f_ARRAY_01bc9e08[2].z
    FSTP float ptr [0x01bc9e20]         ; 0046e0da | g_CVector3f_ARRAY_01bc9e08[2].x
    MOV ECX,0x1                         ; 0046e0e0
        ;   Label: LAB_0046e0e0
    MOV EAX,ECX                         ; 0046e0e5
    MOV ESP,EBP                         ; 0046e0e7
    POP EBP                             ; 0046e0e9
    POP EDI                             ; 0046e0ea
    POP ESI                             ; 0046e0eb
    POP EBX                             ; 0046e0ec
    RET                                 ; 0046e0ed
    MOV EAX,ECX                         ; 0046e0ee
        ;   Label: LAB_0046e0ee
    FLD float ptr [EAX]                 ; 0046e0f0
    FLD float ptr [EAX + 0x8]           ; 0046e0f2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046e0f5
    MOV dword ptr [0x01bc9974],EDX      ; 0046e0f8 | g_CVector3f_ARRAY_01bc9970[0].y
    FSTP float ptr [0x01bc9978]         ; 0046e0fe | g_CVector3f_ARRAY_01bc9970[0].z
    FSTP float ptr [0x01bc9970]         ; 0046e104 | g_CVector3f_ARRAY_01bc9970
    JMP 0x0046df66                      ; 0046e10a
        ;   XREF to: 0046df66 (UNCONDITIONAL_JUMP)  ; LAB_0046df66
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046e10f
        ;   Label: LAB_0046e10f
    TEST EDX,EDX                        ; 0046e113
    JNZ 0x0046e51d                      ; 0046e115
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV dword ptr [0x01bc9af4],EDX      ; 0046e11b | DAT_01bc9af4
    MOV dword ptr [0x01bc9bb8],EDX      ; 0046e121 | DAT_01bc9bb8
    MOV dword ptr [0x01bc9c7c],EDX      ; 0046e127 | DAT_01bc9c7c
    MOV dword ptr [0x01bc9d40],EDX      ; 0046e12d | DAT_01bc9d40
    MOV dword ptr [0x01bc9e04],EDX      ; 0046e133 | DAT_01bc9e04
    MOV dword ptr [0x01bc9a30],EDX      ; 0046e139 | DAT_01bc9a30
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046e13f
    MOV ECX,dword ptr [0x01bc996c]      ; 0046e142 | DAT_01bc996c
    MOV EDX,dword ptr [EDX + 0x4]       ; 0046e148
    XOR EBX,EBX                         ; 0046e14b
    MOV dword ptr [ESP + 0x18],EDX      ; 0046e14d
    TEST ECX,ECX                        ; 0046e151
    JLE 0x0046e1dc                      ; 0046e153
        ;   XREF to: 0046e1dc (CONDITIONAL_JUMP)  ; LAB_0046e1dc
    MOV ESI,0x1bc9970                   ; 0046e159
    MOV EDI,dword ptr [0x01bc996c]      ; 0046e15e | DAT_01bc996c
        ;   Label: LAB_0046e15e
    LEA ECX,[EBX + 0x1]                 ; 0046e164
    CMP ECX,EDI                         ; 0046e167
    JNZ 0x0046e16d                      ; 0046e169
        ;   XREF to: 0046e16d (CONDITIONAL_JUMP)  ; LAB_0046e16d
    XOR ECX,EDI                         ; 0046e16b
    IMUL ECX,ECX,0xc                    ; 0046e16d
        ;   Label: LAB_0046e16d
    FLD float ptr [ESI + 0x4]           ; 0046e170 | g_CVector3f_ARRAY_01bc9970[0].y | g_CVector3f_ARRAY_01bc9970[1].y
    MOV EDI,0x1bc9970                   ; 0046e173
    MOV EDX,ESI                         ; 0046e178
    ADD EDI,ECX                         ; 0046e17a
    XOR ECX,ECX                         ; 0046e17c
    FCOMP float ptr [ESP + 0x18]        ; 0046e17e
    FNSTSW AX                           ; 0046e182
    SAHF                                ; 0046e184
    JBE 0x0046e18c                      ; 0046e185
        ;   XREF to: 0046e18c (CONDITIONAL_JUMP)  ; LAB_0046e18c
    MOV ECX,0x1                         ; 0046e187
    FLD float ptr [EDI + 0x4]           ; 0046e18c | g_CVector3f_ARRAY_01bc9970[0].y | g_CVector3f_ARRAY_01bc9970[1].y | g_CVector3f_ARRAY_01bc9970[2].y
        ;   Label: LAB_0046e18c
    FCOMP float ptr [ESP + 0x18]        ; 0046e18f
    FNSTSW AX                           ; 0046e193
    SAHF                                ; 0046e195
    JBE 0x0046e19b                      ; 0046e196
        ;   XREF to: 0046e19b (CONDITIONAL_JUMP)  ; LAB_0046e19b
    OR CL,0x2                           ; 0046e198
    CMP ECX,0x3                         ; 0046e19b
        ;   Label: LAB_0046e19b
    JA 0x0046e1ce                       ; 0046e19e
        ;   XREF to: 0046e1ce (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46ded4]  ; 0046e1a0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9a30],0xc ; 0046e1a7 | DAT_01bc9a30
        ;   Label: caseD_0
    ADD ECX,0x1bc9a34                   ; 0046e1ae
    CMP ECX,EDX                         ; 0046e1b4
    JZ 0x0046e1c8                       ; 0046e1b6
        ;   XREF to: 0046e1c8 (CONDITIONAL_JUMP)  ; LAB_0046e1c8
    MOV EAX,dword ptr [EDX]             ; 0046e1b8 | g_CVector3f_ARRAY_01bc9970 | g_CVector3f_ARRAY_01bc9970[1].x
    MOV dword ptr [ECX],EAX             ; 0046e1ba | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9c80[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e1bc | g_CVector3f_ARRAY_01bc9970[0].y | g_CVector3f_ARRAY_01bc9970[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e1bf | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9c80[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e1c2 | g_CVector3f_ARRAY_01bc9970[0].z | g_CVector3f_ARRAY_01bc9970[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e1c5 | g_CVector3f_ARRAY_01bc9a34[0].z | g_CVector3f_ARRAY_01bc9c80[14].z
    INC dword ptr [0x01bc9a30]          ; 0046e1c8 | DAT_01bc9a30
        ;   Label: LAB_0046e1c8
    MOV EDI,dword ptr [0x01bc996c]      ; 0046e1ce | DAT_01bc996c
        ;   Label: caseD_3
    INC EBX                             ; 0046e1d4
    ADD ESI,0xc                         ; 0046e1d5
    CMP EBX,EDI                         ; 0046e1d8
    JL 0x0046e15e                       ; 0046e1da
        ;   XREF to: 0046e15e (CONDITIONAL_JUMP)  ; LAB_0046e15e
    MOV EAX,[0x01bc9a30]                ; 0046e1dc | DAT_01bc9a30
        ;   Label: LAB_0046e1dc
    CMP EAX,0x3                         ; 0046e1e1
    JL 0x0046e51d                       ; 0046e1e4
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046e1ea
    MOV EDX,dword ptr [EDX + 0x4]       ; 0046e1ed
    XOR EBX,EBX                         ; 0046e1f0
    MOV dword ptr [ESP + 0x8],EDX       ; 0046e1f2
    TEST EAX,EAX                        ; 0046e1f6
    JLE 0x0046e281                      ; 0046e1f8
        ;   XREF to: 0046e281 (CONDITIONAL_JUMP)  ; LAB_0046e281
    MOV ESI,0x1bc9a34                   ; 0046e1fe
    MOV EDI,dword ptr [0x01bc9a30]      ; 0046e203 | DAT_01bc9a30
        ;   Label: LAB_0046e203
    LEA ECX,[EBX + 0x1]                 ; 0046e209
    CMP ECX,EDI                         ; 0046e20c
    JNZ 0x0046e212                      ; 0046e20e
        ;   XREF to: 0046e212 (CONDITIONAL_JUMP)  ; LAB_0046e212
    XOR ECX,EDI                         ; 0046e210
    IMUL ECX,ECX,0xc                    ; 0046e212
        ;   Label: LAB_0046e212
    FLD float ptr [ESI + 0x4]           ; 0046e215 | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9a34[1].y
    MOV EDI,0x1bc9a34                   ; 0046e218
    MOV EDX,ESI                         ; 0046e21d
    ADD EDI,ECX                         ; 0046e21f
    XOR ECX,ECX                         ; 0046e221
    FCOMP float ptr [ESP + 0x8]         ; 0046e223
    FNSTSW AX                           ; 0046e227
    SAHF                                ; 0046e229
    JNC 0x0046e231                      ; 0046e22a
        ;   XREF to: 0046e231 (CONDITIONAL_JUMP)  ; LAB_0046e231
    MOV ECX,0x1                         ; 0046e22c
    FLD float ptr [EDI + 0x4]           ; 0046e231 | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9a34[2].y | g_CVector3f_ARRAY_01bc9a34[1].y
        ;   Label: LAB_0046e231
    FCOMP float ptr [ESP + 0x8]         ; 0046e234
    FNSTSW AX                           ; 0046e238
    SAHF                                ; 0046e23a
    JNC 0x0046e240                      ; 0046e23b
        ;   XREF to: 0046e240 (CONDITIONAL_JUMP)  ; LAB_0046e240
    OR CL,0x2                           ; 0046e23d
    CMP ECX,0x3                         ; 0046e240
        ;   Label: LAB_0046e240
    JA 0x0046e273                       ; 0046e243
        ;   XREF to: 0046e273 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46dee4]  ; 0046e245 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9af4],0xc ; 0046e24c | DAT_01bc9af4
        ;   Label: caseD_0
    ADD ECX,0x1bc9af8                   ; 0046e253
    CMP ECX,EDX                         ; 0046e259
    JZ 0x0046e26d                       ; 0046e25b
        ;   XREF to: 0046e26d (CONDITIONAL_JUMP)  ; LAB_0046e26d
    MOV EAX,dword ptr [EDX]             ; 0046e25d | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9a34[1].x
    MOV dword ptr [ECX],EAX             ; 0046e25f | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9d44[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e261 | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9a34[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e264 | g_CVector3f_ARRAY_01bc9af8[0].y | g_CVector3f_ARRAY_01bc9d44[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e267 | g_CVector3f_ARRAY_01bc9a34[0].z | g_CVector3f_ARRAY_01bc9a34[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e26a | g_CVector3f_ARRAY_01bc9af8[0].z | g_CVector3f_ARRAY_01bc9d44[14].z
    INC dword ptr [0x01bc9af4]          ; 0046e26d | DAT_01bc9af4
        ;   Label: LAB_0046e26d
    MOV EDX,dword ptr [0x01bc9a30]      ; 0046e273 | DAT_01bc9a30
        ;   Label: caseD_3
    INC EBX                             ; 0046e279
    ADD ESI,0xc                         ; 0046e27a
    CMP EBX,EDX                         ; 0046e27d
    JL 0x0046e203                       ; 0046e27f
        ;   XREF to: 0046e203 (CONDITIONAL_JUMP)  ; LAB_0046e203
    MOV ECX,dword ptr [0x01bc9af4]      ; 0046e281 | DAT_01bc9af4
        ;   Label: LAB_0046e281
    CMP ECX,0x3                         ; 0046e287
    JL 0x0046e51d                       ; 0046e28a
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046e290
    MOV EDX,dword ptr [EDX]             ; 0046e293
    XOR ESI,ESI                         ; 0046e295
    MOV dword ptr [ESP + 0x14],EDX      ; 0046e297
    TEST ECX,ECX                        ; 0046e29b
    JLE 0x0046e324                      ; 0046e29d
        ;   XREF to: 0046e324 (CONDITIONAL_JUMP)  ; LAB_0046e324
    MOV EBX,0x1bc9af8                   ; 0046e2a3
    MOV EDI,dword ptr [0x01bc9af4]      ; 0046e2a8 | DAT_01bc9af4
        ;   Label: LAB_0046e2a8
    LEA ECX,[ESI + 0x1]                 ; 0046e2ae
    CMP ECX,EDI                         ; 0046e2b1
    JNZ 0x0046e2b7                      ; 0046e2b3
        ;   XREF to: 0046e2b7 (CONDITIONAL_JUMP)  ; LAB_0046e2b7
    XOR ECX,EDI                         ; 0046e2b5
    IMUL ECX,ECX,0xc                    ; 0046e2b7
        ;   Label: LAB_0046e2b7
    FLD float ptr [EBX]                 ; 0046e2ba | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[1].x
    MOV EDI,0x1bc9af8                   ; 0046e2bc
    MOV EDX,EBX                         ; 0046e2c1
    ADD EDI,ECX                         ; 0046e2c3
    XOR ECX,ECX                         ; 0046e2c5
    FCOMP float ptr [ESP + 0x14]        ; 0046e2c7
    FNSTSW AX                           ; 0046e2cb
    SAHF                                ; 0046e2cd
    JBE 0x0046e2d5                      ; 0046e2ce
        ;   XREF to: 0046e2d5 (CONDITIONAL_JUMP)  ; LAB_0046e2d5
    MOV ECX,0x1                         ; 0046e2d0
    FLD float ptr [EDI]                 ; 0046e2d5 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[2].x | g_CVector3f_ARRAY_01bc9af8[1].x
        ;   Label: LAB_0046e2d5
    FCOMP float ptr [ESP + 0x14]        ; 0046e2d7
    FNSTSW AX                           ; 0046e2db
    SAHF                                ; 0046e2dd
    JBE 0x0046e2e3                      ; 0046e2de
        ;   XREF to: 0046e2e3 (CONDITIONAL_JUMP)  ; LAB_0046e2e3
    OR CL,0x2                           ; 0046e2e0
    CMP ECX,0x3                         ; 0046e2e3
        ;   Label: LAB_0046e2e3
    JA 0x0046e316                       ; 0046e2e6
        ;   XREF to: 0046e316 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46def4]  ; 0046e2e8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9bb8],0xc ; 0046e2ef | DAT_01bc9bb8
        ;   Label: caseD_0
    ADD ECX,0x1bc9bbc                   ; 0046e2f6
    CMP ECX,EDX                         ; 0046e2fc
    JZ 0x0046e310                       ; 0046e2fe
        ;   XREF to: 0046e310 (CONDITIONAL_JUMP)  ; LAB_0046e310
    MOV EAX,dword ptr [EDX]             ; 0046e300 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[1].x
    MOV dword ptr [ECX],EAX             ; 0046e302 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9e08[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e304 | g_CVector3f_ARRAY_01bc9af8[0].y | g_CVector3f_ARRAY_01bc9af8[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e307 | g_CVector3f_ARRAY_01bc9bbc[0].y | g_CVector3f_ARRAY_01bc9e08[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e30a | g_CVector3f_ARRAY_01bc9af8[0].z | g_CVector3f_ARRAY_01bc9af8[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e30d | g_CVector3f_ARRAY_01bc9bbc[0].z | g_CVector3f_ARRAY_01bc9e08[14].z
    INC dword ptr [0x01bc9bb8]          ; 0046e310 | DAT_01bc9bb8
        ;   Label: LAB_0046e310
    MOV EDX,dword ptr [0x01bc9af4]      ; 0046e316 | DAT_01bc9af4
        ;   Label: caseD_3
    INC ESI                             ; 0046e31c
    ADD EBX,0xc                         ; 0046e31d
    CMP ESI,EDX                         ; 0046e320
    JL 0x0046e2a8                       ; 0046e322
        ;   XREF to: 0046e2a8 (CONDITIONAL_JUMP)  ; LAB_0046e2a8
    MOV ECX,dword ptr [0x01bc9bb8]      ; 0046e324 | DAT_01bc9bb8
        ;   Label: LAB_0046e324
    CMP ECX,0x3                         ; 0046e32a
    JL 0x0046e51d                       ; 0046e32d
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046e333
    MOV EDX,dword ptr [EDX]             ; 0046e336
    XOR ESI,ESI                         ; 0046e338
    MOV dword ptr [ESP],EDX             ; 0046e33a
    TEST ECX,ECX                        ; 0046e33d
    JLE 0x0046e3c4                      ; 0046e33f
        ;   XREF to: 0046e3c4 (CONDITIONAL_JUMP)  ; LAB_0046e3c4
    MOV EBX,0x1bc9bbc                   ; 0046e345
    MOV EDI,dword ptr [0x01bc9bb8]      ; 0046e34a | DAT_01bc9bb8
        ;   Label: LAB_0046e34a
    LEA ECX,[ESI + 0x1]                 ; 0046e350
    CMP ECX,EDI                         ; 0046e353
    JNZ 0x0046e359                      ; 0046e355
        ;   XREF to: 0046e359 (CONDITIONAL_JUMP)  ; LAB_0046e359
    XOR ECX,EDI                         ; 0046e357
    IMUL ECX,ECX,0xc                    ; 0046e359
        ;   Label: LAB_0046e359
    FLD float ptr [EBX]                 ; 0046e35c | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    MOV EDI,0x1bc9bbc                   ; 0046e35e
    MOV EDX,EBX                         ; 0046e363
    ADD EDI,ECX                         ; 0046e365
    XOR ECX,ECX                         ; 0046e367
    FCOMP float ptr [ESP]               ; 0046e369
    FNSTSW AX                           ; 0046e36c
    SAHF                                ; 0046e36e
    JNC 0x0046e376                      ; 0046e36f
        ;   XREF to: 0046e376 (CONDITIONAL_JUMP)  ; LAB_0046e376
    MOV ECX,0x1                         ; 0046e371
    FLD float ptr [EDI]                 ; 0046e376 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[2].x | g_CVector3f_ARRAY_01bc9bbc[1].x
        ;   Label: LAB_0046e376
    FCOMP float ptr [ESP]               ; 0046e378
    FNSTSW AX                           ; 0046e37b
    SAHF                                ; 0046e37d
    JNC 0x0046e383                      ; 0046e37e
        ;   XREF to: 0046e383 (CONDITIONAL_JUMP)  ; LAB_0046e383
    OR CL,0x2                           ; 0046e380
    CMP ECX,0x3                         ; 0046e383
        ;   Label: LAB_0046e383
    JA 0x0046e3b6                       ; 0046e386
        ;   XREF to: 0046e3b6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46df04]  ; 0046e388 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9c7c],0xc ; 0046e38f | DAT_01bc9c7c
        ;   Label: caseD_0
    ADD ECX,0x1bc9c80                   ; 0046e396
    CMP ECX,EDX                         ; 0046e39c
    JZ 0x0046e3b0                       ; 0046e39e
        ;   XREF to: 0046e3b0 (CONDITIONAL_JUMP)  ; LAB_0046e3b0
    MOV EAX,dword ptr [EDX]             ; 0046e3a0 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    MOV dword ptr [ECX],EAX             ; 0046e3a2 | g_CVector3f_ARRAY_01bc9c80 | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex1.y
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e3a4 | g_CVector3f_ARRAY_01bc9bbc[0].y | g_CVector3f_ARRAY_01bc9bbc[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e3a7 | g_CVector3f_ARRAY_01bc9c80[0].y | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex1.z
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e3aa | g_CVector3f_ARRAY_01bc9bbc[0].z | g_CVector3f_ARRAY_01bc9bbc[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e3ad | g_CVector3f_ARRAY_01bc9c80[0].z | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex2.x
    INC dword ptr [0x01bc9c7c]          ; 0046e3b0 | DAT_01bc9c7c
        ;   Label: LAB_0046e3b0
    MOV EDX,dword ptr [0x01bc9bb8]      ; 0046e3b6 | DAT_01bc9bb8
        ;   Label: caseD_3
    INC ESI                             ; 0046e3bc
    ADD EBX,0xc                         ; 0046e3bd
    CMP ESI,EDX                         ; 0046e3c0
    JL 0x0046e34a                       ; 0046e3c2
        ;   XREF to: 0046e34a (CONDITIONAL_JUMP)  ; LAB_0046e34a
    MOV ECX,dword ptr [0x01bc9c7c]      ; 0046e3c4 | DAT_01bc9c7c
        ;   Label: LAB_0046e3c4
    CMP ECX,0x3                         ; 0046e3ca
    JL 0x0046e51d                       ; 0046e3cd
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046e3d3
    MOV EDX,dword ptr [EDX + 0x8]       ; 0046e3d6
    XOR EBX,EBX                         ; 0046e3d9
    MOV dword ptr [ESP + 0xc],EDX       ; 0046e3db
    TEST ECX,ECX                        ; 0046e3df
    JLE 0x0046e46a                      ; 0046e3e1
        ;   XREF to: 0046e46a (CONDITIONAL_JUMP)  ; LAB_0046e46a
    MOV ESI,0x1bc9c80                   ; 0046e3e7
    MOV EDI,dword ptr [0x01bc9c7c]      ; 0046e3ec | DAT_01bc9c7c
        ;   Label: LAB_0046e3ec
    LEA ECX,[EBX + 0x1]                 ; 0046e3f2
    CMP ECX,EDI                         ; 0046e3f5
    JNZ 0x0046e3fb                      ; 0046e3f7
        ;   XREF to: 0046e3fb (CONDITIONAL_JUMP)  ; LAB_0046e3fb
    XOR ECX,EDI                         ; 0046e3f9
    IMUL ECX,ECX,0xc                    ; 0046e3fb
        ;   Label: LAB_0046e3fb
    FLD float ptr [ESI + 0x8]           ; 0046e3fe | g_CVector3f_ARRAY_01bc9c80[0].z | g_CVector3f_ARRAY_01bc9c80[1].z
    MOV EDI,0x1bc9c80                   ; 0046e401
    MOV EDX,ESI                         ; 0046e406
    ADD EDI,ECX                         ; 0046e408
    XOR ECX,ECX                         ; 0046e40a
    FCOMP float ptr [ESP + 0xc]         ; 0046e40c
    FNSTSW AX                           ; 0046e410
    SAHF                                ; 0046e412
    JNC 0x0046e41a                      ; 0046e413
        ;   XREF to: 0046e41a (CONDITIONAL_JUMP)  ; LAB_0046e41a
    MOV ECX,0x1                         ; 0046e415
    FLD float ptr [EDI + 0x8]           ; 0046e41a | g_CVector3f_ARRAY_01bc9c80[0].z | g_CVector3f_ARRAY_01bc9c80[2].z | g_CVector3f_ARRAY_01bc9c80[1].z
        ;   Label: LAB_0046e41a
    FCOMP float ptr [ESP + 0xc]         ; 0046e41d
    FNSTSW AX                           ; 0046e421
    SAHF                                ; 0046e423
    JNC 0x0046e429                      ; 0046e424
        ;   XREF to: 0046e429 (CONDITIONAL_JUMP)  ; LAB_0046e429
    OR CL,0x2                           ; 0046e426
    CMP ECX,0x3                         ; 0046e429
        ;   Label: LAB_0046e429
    JA 0x0046e45c                       ; 0046e42c
        ;   XREF to: 0046e45c (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46df14]  ; 0046e42e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9d40],0xc ; 0046e435 | DAT_01bc9d40
        ;   Label: caseD_0
    ADD ECX,0x1bc9d44                   ; 0046e43c
    CMP ECX,EDX                         ; 0046e442
    JZ 0x0046e456                       ; 0046e444
        ;   XREF to: 0046e456 (CONDITIONAL_JUMP)  ; LAB_0046e456
    MOV EAX,dword ptr [EDX]             ; 0046e446 | g_CVector3f_ARRAY_01bc9c80 | g_CVector3f_ARRAY_01bc9c80[1].x
    MOV dword ptr [ECX],EAX             ; 0046e448 | g_CVector3f_ARRAY_01bc9d44 | g_CDemonTriangle_ARRAY_01bc9ec8[6].vertex3.z
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e44a | g_CVector3f_ARRAY_01bc9c80[0].y | g_CVector3f_ARRAY_01bc9c80[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e44d | g_CVector3f_ARRAY_01bc9d44[0].y | g_CDemonTriangle_ARRAY_01bc9ec8[6].normal.x
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e450 | g_CVector3f_ARRAY_01bc9c80[0].z | g_CVector3f_ARRAY_01bc9c80[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e453 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CDemonTriangle_ARRAY_01bc9ec8[6].normal.y
    INC dword ptr [0x01bc9d40]          ; 0046e456 | DAT_01bc9d40
        ;   Label: LAB_0046e456
    MOV EDX,dword ptr [0x01bc9c7c]      ; 0046e45c | DAT_01bc9c7c
        ;   Label: caseD_3
    INC EBX                             ; 0046e462
    ADD ESI,0xc                         ; 0046e463
    CMP EBX,EDX                         ; 0046e466
    JL 0x0046e3ec                       ; 0046e468
        ;   XREF to: 0046e3ec (CONDITIONAL_JUMP)  ; LAB_0046e3ec
    MOV ECX,dword ptr [0x01bc9d40]      ; 0046e46a | DAT_01bc9d40
        ;   Label: LAB_0046e46a
    CMP ECX,0x3                         ; 0046e470
    JL 0x0046e51d                       ; 0046e473
        ;   XREF to: 0046e51d (CONDITIONAL_JUMP)  ; LAB_0046e51d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046e479
    MOV EDX,dword ptr [EDX + 0x8]       ; 0046e47c
    XOR ESI,ESI                         ; 0046e47f
    MOV dword ptr [ESP + 0x4],EDX       ; 0046e481
    TEST ECX,ECX                        ; 0046e485
    JLE 0x0046e510                      ; 0046e487
        ;   XREF to: 0046e510 (CONDITIONAL_JUMP)  ; LAB_0046e510
    MOV EBX,0x1bc9d44                   ; 0046e48d
    MOV EDI,dword ptr [0x01bc9d40]      ; 0046e492 | DAT_01bc9d40
        ;   Label: LAB_0046e492
    LEA ECX,[ESI + 0x1]                 ; 0046e498
    CMP ECX,EDI                         ; 0046e49b
    JNZ 0x0046e4a1                      ; 0046e49d
        ;   XREF to: 0046e4a1 (CONDITIONAL_JUMP)  ; LAB_0046e4a1
    XOR ECX,EDI                         ; 0046e49f
    IMUL ECX,ECX,0xc                    ; 0046e4a1
        ;   Label: LAB_0046e4a1
    FLD float ptr [EBX + 0x8]           ; 0046e4a4 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[1].z
    MOV EDI,0x1bc9d44                   ; 0046e4a7
    MOV EDX,EBX                         ; 0046e4ac
    ADD EDI,ECX                         ; 0046e4ae
    XOR ECX,ECX                         ; 0046e4b0
    FCOMP float ptr [ESP + 0x4]         ; 0046e4b2
    FNSTSW AX                           ; 0046e4b6
    SAHF                                ; 0046e4b8
    JBE 0x0046e4c0                      ; 0046e4b9
        ;   XREF to: 0046e4c0 (CONDITIONAL_JUMP)  ; LAB_0046e4c0
    MOV ECX,0x1                         ; 0046e4bb
    FLD float ptr [EDI + 0x8]           ; 0046e4c0 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[2].z | g_CVector3f_ARRAY_01bc9d44[1].z
        ;   Label: LAB_0046e4c0
    FCOMP float ptr [ESP + 0x4]         ; 0046e4c3
    FNSTSW AX                           ; 0046e4c7
    SAHF                                ; 0046e4c9
    JBE 0x0046e4cf                      ; 0046e4ca
        ;   XREF to: 0046e4cf (CONDITIONAL_JUMP)  ; LAB_0046e4cf
    OR CL,0x2                           ; 0046e4cc
    CMP ECX,0x3                         ; 0046e4cf
        ;   Label: LAB_0046e4cf
    JA 0x0046e502                       ; 0046e4d2
        ;   XREF to: 0046e502 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46df24]  ; 0046e4d4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01bc9e04],0xc ; 0046e4db | DAT_01bc9e04
        ;   Label: caseD_0
    ADD ECX,0x1bc9e08                   ; 0046e4e2
    CMP ECX,EDX                         ; 0046e4e8
    JZ 0x0046e4fc                       ; 0046e4ea
        ;   XREF to: 0046e4fc (CONDITIONAL_JUMP)  ; LAB_0046e4fc
    MOV EAX,dword ptr [EDX]             ; 0046e4ec | g_CVector3f_ARRAY_01bc9d44 | g_CVector3f_ARRAY_01bc9d44[1].x
    MOV dword ptr [ECX],EAX             ; 0046e4ee | DAT_01bca0fc
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e4f0 | g_CVector3f_ARRAY_01bc9d44[0].y | g_CVector3f_ARRAY_01bc9d44[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e4f3 | DAT_01bca100
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e4f6 | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e4f9 | DAT_01bca104
    INC dword ptr [0x01bc9e04]          ; 0046e4fc | DAT_01bc9e04
        ;   Label: LAB_0046e4fc
    MOV EDX,dword ptr [0x01bc9d40]      ; 0046e502 | DAT_01bc9d40
        ;   Label: caseD_3
    INC ESI                             ; 0046e508
    ADD EBX,0xc                         ; 0046e509
    CMP ESI,EDX                         ; 0046e50c
    JL 0x0046e492                       ; 0046e50e
        ;   XREF to: 0046e492 (CONDITIONAL_JUMP)  ; LAB_0046e492
    CMP dword ptr [0x01bc9e04],0x3      ; 0046e510 | DAT_01bc9e04
        ;   Label: LAB_0046e510
    JGE 0x0046e0e0                      ; 0046e517
        ;   XREF to: 0046e0e0 (CONDITIONAL_JUMP)  ; LAB_0046e0e0
    XOR ECX,ECX                         ; 0046e51d
        ;   Label: LAB_0046e51d
    MOV EAX,ECX                         ; 0046e51f
    MOV ESP,EBP                         ; 0046e521
    POP EBP                             ; 0046e523
    POP EDI                             ; 0046e524
    POP ESI                             ; 0046e525
    POP EBX                             ; 0046e526
    RET                                 ; 0046e527
    IMUL ECX,dword ptr [0x01bc9a30],0xc ; 0046e528 | DAT_01bc9a30
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0046e52f
    SUB ESP,0x8                         ; 0046e533
    FCHS                                ; 0046e536
    FSTP double ptr [ESP]               ; 0046e538
    PUSH 0x0                            ; 0046e53b
    PUSH 0x0                            ; 0046e53d
    PUSH 0x3ff00000                     ; 0046e53f
    PUSH 0x0                            ; 0046e544
    PUSH 0x0                            ; 0046e546
    PUSH 0x0                            ; 0046e548
    ADD ECX,0x1bc9a34                   ; 0046e54a
    PUSH ECX                            ; 0046e550 | g_CVector3f_ARRAY_01bc9c80[14].x
    PUSH EDX                            ; 0046e551 | g_CVector3f_ARRAY_01bc9970 | g_CVector3f_ARRAY_01bc9970[1].x
    PUSH EDI                            ; 0046e552 | g_CVector3f_ARRAY_01bc9970[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e553
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9a30]      ; 0046e558 | DAT_01bc9a30
    INC EDX                             ; 0046e55e
    ADD ESP,0x2c                        ; 0046e55f
    MOV dword ptr [0x01bc9a30],EDX      ; 0046e562 | DAT_01bc9a30
    JMP 0x0046e1ce                      ; 0046e568
        ;   XREF to: 0046e1ce (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9a30],0xc ; 0046e56d | DAT_01bc9a30
        ;   Label: caseD_2
    ADD ECX,0x1bc9a34                   ; 0046e574
    CMP ECX,EDX                         ; 0046e57a
    JZ 0x0046e58e                       ; 0046e57c
        ;   XREF to: 0046e58e (CONDITIONAL_JUMP)  ; LAB_0046e58e
    MOV EAX,dword ptr [EDX]             ; 0046e57e | g_CVector3f_ARRAY_01bc9970[1].x
    MOV dword ptr [ECX],EAX             ; 0046e580 | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9c80[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e582 | g_CVector3f_ARRAY_01bc9970[1].y | g_CVector3f_ARRAY_01bc9970[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e585 | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9c80[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e588 | g_CVector3f_ARRAY_01bc9970[1].z | g_CVector3f_ARRAY_01bc9970[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e58b | g_CVector3f_ARRAY_01bc9a34[0].z | g_CVector3f_ARRAY_01bc9c80[14].z
    MOV ECX,dword ptr [0x01bc9a30]      ; 0046e58e | DAT_01bc9a30
        ;   Label: LAB_0046e58e
    INC ECX                             ; 0046e594
    MOV dword ptr [0x01bc9a30],ECX      ; 0046e595 | DAT_01bc9a30
    IMUL ECX,ECX,0xc                    ; 0046e59b
    FLD float ptr [ESP + 0x18]          ; 0046e59e
    SUB ESP,0x8                         ; 0046e5a2
    FCHS                                ; 0046e5a5
    FSTP double ptr [ESP]               ; 0046e5a7
    PUSH 0x0                            ; 0046e5aa
    PUSH 0x0                            ; 0046e5ac
    PUSH 0x3ff00000                     ; 0046e5ae
    PUSH 0x0                            ; 0046e5b3
    PUSH 0x0                            ; 0046e5b5
    PUSH 0x0                            ; 0046e5b7
    ADD ECX,0x1bc9a34                   ; 0046e5b9
    PUSH ECX                            ; 0046e5bf
    PUSH EDI                            ; 0046e5c0 | g_CVector3f_ARRAY_01bc9970[1].x
    PUSH EDX                            ; 0046e5c1 | g_CVector3f_ARRAY_01bc9970[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e5c2
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9a30]      ; 0046e5c7 | DAT_01bc9a30
    INC EDX                             ; 0046e5cd
    ADD ESP,0x2c                        ; 0046e5ce
    MOV dword ptr [0x01bc9a30],EDX      ; 0046e5d1 | DAT_01bc9a30
    JMP 0x0046e1ce                      ; 0046e5d7
        ;   XREF to: 0046e1ce (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9af4],0xc ; 0046e5dc | DAT_01bc9af4
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 0046e5e3
    SUB ESP,0x8                         ; 0046e5e7
    FSTP double ptr [ESP]               ; 0046e5ea
    PUSH 0x0                            ; 0046e5ed
    PUSH 0x0                            ; 0046e5ef
    PUSH 0xbff00000                     ; 0046e5f1
    PUSH 0x0                            ; 0046e5f6
    PUSH 0x0                            ; 0046e5f8
    PUSH 0x0                            ; 0046e5fa
    ADD ECX,0x1bc9af8                   ; 0046e5fc
    PUSH ECX                            ; 0046e602 | g_CVector3f_ARRAY_01bc9d44[14].x
    PUSH EDX                            ; 0046e603 | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9a34[1].x
    PUSH EDI                            ; 0046e604 | g_CVector3f_ARRAY_01bc9d44[1].z
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e605
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9af4]      ; 0046e60a | DAT_01bc9af4
    INC EDX                             ; 0046e610
    ADD ESP,0x2c                        ; 0046e611
    MOV dword ptr [0x01bc9af4],EDX      ; 0046e614 | DAT_01bc9af4
    JMP 0x0046e273                      ; 0046e61a
        ;   XREF to: 0046e273 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9af4],0xc ; 0046e61f | DAT_01bc9af4
        ;   Label: caseD_2
    ADD ECX,0x1bc9af8                   ; 0046e626
    CMP ECX,EDX                         ; 0046e62c
    JZ 0x0046e640                       ; 0046e62e
        ;   XREF to: 0046e640 (CONDITIONAL_JUMP)  ; LAB_0046e640
    MOV EAX,dword ptr [EDX]             ; 0046e630 | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9a34[1].x
    MOV dword ptr [ECX],EAX             ; 0046e632 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9d44[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e634 | g_CVector3f_ARRAY_01bc9a34[0].y | g_CVector3f_ARRAY_01bc9a34[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e637 | g_CVector3f_ARRAY_01bc9af8[0].y | g_CVector3f_ARRAY_01bc9d44[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e63a | g_CVector3f_ARRAY_01bc9a34[0].z | g_CVector3f_ARRAY_01bc9a34[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e63d | g_CVector3f_ARRAY_01bc9af8[0].z | g_CVector3f_ARRAY_01bc9d44[14].z
    MOV ECX,dword ptr [0x01bc9af4]      ; 0046e640 | DAT_01bc9af4
        ;   Label: LAB_0046e640
    INC ECX                             ; 0046e646
    MOV dword ptr [0x01bc9af4],ECX      ; 0046e647 | DAT_01bc9af4
    IMUL ECX,ECX,0xc                    ; 0046e64d
    FLD float ptr [ESP + 0x8]           ; 0046e650
    SUB ESP,0x8                         ; 0046e654
    FSTP double ptr [ESP]               ; 0046e657
    PUSH 0x0                            ; 0046e65a
    PUSH 0x0                            ; 0046e65c
    PUSH 0xbff00000                     ; 0046e65e
    PUSH 0x0                            ; 0046e663
    PUSH 0x0                            ; 0046e665
    PUSH 0x0                            ; 0046e667
    ADD ECX,0x1bc9af8                   ; 0046e669
    PUSH ECX                            ; 0046e66f
    PUSH EDI                            ; 0046e670 | g_CVector3f_ARRAY_01bc9d44[1].z
    PUSH EDX                            ; 0046e671 | g_CVector3f_ARRAY_01bc9a34 | g_CVector3f_ARRAY_01bc9a34[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e672
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9af4]      ; 0046e677 | DAT_01bc9af4
    INC EDX                             ; 0046e67d
    ADD ESP,0x2c                        ; 0046e67e
    MOV dword ptr [0x01bc9af4],EDX      ; 0046e681 | DAT_01bc9af4
    JMP 0x0046e273                      ; 0046e687
        ;   XREF to: 0046e273 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9bb8],0xc ; 0046e68c | DAT_01bc9bb8
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0046e693
    SUB ESP,0x8                         ; 0046e697
    FCHS                                ; 0046e69a
    FSTP double ptr [ESP]               ; 0046e69c
    PUSH 0x0                            ; 0046e69f
    PUSH 0x0                            ; 0046e6a1
    PUSH 0x0                            ; 0046e6a3
    PUSH 0x0                            ; 0046e6a5
    PUSH 0x3ff00000                     ; 0046e6a7
    PUSH 0x0                            ; 0046e6ac
    ADD ECX,0x1bc9bbc                   ; 0046e6ae
    PUSH ECX                            ; 0046e6b4 | g_CVector3f_ARRAY_01bc9e08[14].x
    PUSH EDX                            ; 0046e6b5 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[1].x
    PUSH EDI                            ; 0046e6b6 | g_CVector3f_ARRAY_01bc9e08[1].z
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e6b7
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9bb8]      ; 0046e6bc | DAT_01bc9bb8
    INC EDX                             ; 0046e6c2
    ADD ESP,0x2c                        ; 0046e6c3
    MOV dword ptr [0x01bc9bb8],EDX      ; 0046e6c6 | DAT_01bc9bb8
    JMP 0x0046e316                      ; 0046e6cc
        ;   XREF to: 0046e316 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9bb8],0xc ; 0046e6d1 | DAT_01bc9bb8
        ;   Label: caseD_2
    ADD ECX,0x1bc9bbc                   ; 0046e6d8
    CMP ECX,EDX                         ; 0046e6de
    JZ 0x0046e6f2                       ; 0046e6e0
        ;   XREF to: 0046e6f2 (CONDITIONAL_JUMP)  ; LAB_0046e6f2
    MOV EAX,dword ptr [EDX]             ; 0046e6e2 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[1].x
    MOV dword ptr [ECX],EAX             ; 0046e6e4 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9e08[14].x
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e6e6 | g_CVector3f_ARRAY_01bc9af8[0].y | g_CVector3f_ARRAY_01bc9af8[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e6e9 | g_CVector3f_ARRAY_01bc9bbc[0].y | g_CVector3f_ARRAY_01bc9e08[14].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e6ec | g_CVector3f_ARRAY_01bc9af8[0].z | g_CVector3f_ARRAY_01bc9af8[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e6ef | g_CVector3f_ARRAY_01bc9bbc[0].z | g_CVector3f_ARRAY_01bc9e08[14].z
    MOV ECX,dword ptr [0x01bc9bb8]      ; 0046e6f2 | DAT_01bc9bb8
        ;   Label: LAB_0046e6f2
    INC ECX                             ; 0046e6f8
    MOV dword ptr [0x01bc9bb8],ECX      ; 0046e6f9 | DAT_01bc9bb8
    IMUL ECX,ECX,0xc                    ; 0046e6ff
    FLD float ptr [ESP + 0x14]          ; 0046e702
    SUB ESP,0x8                         ; 0046e706
    FCHS                                ; 0046e709
    FSTP double ptr [ESP]               ; 0046e70b
    PUSH 0x0                            ; 0046e70e
    PUSH 0x0                            ; 0046e710
    PUSH 0x0                            ; 0046e712
    PUSH 0x0                            ; 0046e714
    PUSH 0x3ff00000                     ; 0046e716
    PUSH 0x0                            ; 0046e71b
    ADD ECX,0x1bc9bbc                   ; 0046e71d
    PUSH ECX                            ; 0046e723
    PUSH EDI                            ; 0046e724 | g_CVector3f_ARRAY_01bc9e08[1].z
    PUSH EDX                            ; 0046e725 | g_CVector3f_ARRAY_01bc9af8 | g_CVector3f_ARRAY_01bc9af8[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e726
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9bb8]      ; 0046e72b | DAT_01bc9bb8
    INC EDX                             ; 0046e731
    ADD ESP,0x2c                        ; 0046e732
    MOV dword ptr [0x01bc9bb8],EDX      ; 0046e735 | DAT_01bc9bb8
    JMP 0x0046e316                      ; 0046e73b
        ;   XREF to: 0046e316 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9c7c],0xc ; 0046e740 | DAT_01bc9c7c
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0046e747
    SUB ESP,0x8                         ; 0046e74a
    FSTP double ptr [ESP]               ; 0046e74d
    PUSH 0x0                            ; 0046e750
    PUSH 0x0                            ; 0046e752
    PUSH 0x0                            ; 0046e754
    PUSH 0x0                            ; 0046e756
    PUSH 0xbff00000                     ; 0046e758
    PUSH 0x0                            ; 0046e75d
    ADD ECX,0x1bc9c80                   ; 0046e75f
    PUSH ECX                            ; 0046e765 | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex1.y
    PUSH EDX                            ; 0046e766 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    PUSH EDI                            ; 0046e767 | g_CDemonTriangle_ARRAY_01bc9ec8[0].vertex3.x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e768
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9c7c]      ; 0046e76d | DAT_01bc9c7c
    INC EDX                             ; 0046e773
    ADD ESP,0x2c                        ; 0046e774
    MOV dword ptr [0x01bc9c7c],EDX      ; 0046e777 | DAT_01bc9c7c
    JMP 0x0046e3b6                      ; 0046e77d
        ;   XREF to: 0046e3b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9c7c],0xc ; 0046e782 | DAT_01bc9c7c
        ;   Label: caseD_2
    ADD ECX,0x1bc9c80                   ; 0046e789
    CMP ECX,EDX                         ; 0046e78f
    JZ 0x0046e7a3                       ; 0046e791
        ;   XREF to: 0046e7a3 (CONDITIONAL_JUMP)  ; LAB_0046e7a3
    MOV EAX,dword ptr [EDX]             ; 0046e793 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    MOV dword ptr [ECX],EAX             ; 0046e795 | g_CVector3f_ARRAY_01bc9c80 | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex1.y
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e797 | g_CVector3f_ARRAY_01bc9bbc[0].y | g_CVector3f_ARRAY_01bc9bbc[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e79a | g_CVector3f_ARRAY_01bc9c80[0].y | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex1.z
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e79d | g_CVector3f_ARRAY_01bc9bbc[0].z | g_CVector3f_ARRAY_01bc9bbc[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e7a0 | g_CVector3f_ARRAY_01bc9c80[0].z | g_CDemonTriangle_ARRAY_01bc9ec8[3].vertex2.x
    MOV ECX,dword ptr [0x01bc9c7c]      ; 0046e7a3 | DAT_01bc9c7c
        ;   Label: LAB_0046e7a3
    INC ECX                             ; 0046e7a9
    MOV dword ptr [0x01bc9c7c],ECX      ; 0046e7aa | DAT_01bc9c7c
    IMUL ECX,ECX,0xc                    ; 0046e7b0
    FLD float ptr [ESP]                 ; 0046e7b3
    SUB ESP,0x8                         ; 0046e7b6
    FSTP double ptr [ESP]               ; 0046e7b9
    PUSH 0x0                            ; 0046e7bc
    PUSH 0x0                            ; 0046e7be
    PUSH 0x0                            ; 0046e7c0
    PUSH 0x0                            ; 0046e7c2
    PUSH 0xbff00000                     ; 0046e7c4
    PUSH 0x0                            ; 0046e7c9
    ADD ECX,0x1bc9c80                   ; 0046e7cb
    PUSH ECX                            ; 0046e7d1
    PUSH EDI                            ; 0046e7d2 | g_CDemonTriangle_ARRAY_01bc9ec8[0].vertex3.x
    PUSH EDX                            ; 0046e7d3 | g_CVector3f_ARRAY_01bc9bbc | g_CVector3f_ARRAY_01bc9bbc[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e7d4
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9c7c]      ; 0046e7d9 | DAT_01bc9c7c
    INC EDX                             ; 0046e7df
    ADD ESP,0x2c                        ; 0046e7e0
    MOV dword ptr [0x01bc9c7c],EDX      ; 0046e7e3 | DAT_01bc9c7c
    JMP 0x0046e3b6                      ; 0046e7e9
        ;   XREF to: 0046e3b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9d40],0xc ; 0046e7ee | DAT_01bc9d40
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 0046e7f5
    SUB ESP,0x8                         ; 0046e7f9
    FSTP double ptr [ESP]               ; 0046e7fc
    PUSH 0xbff00000                     ; 0046e7ff
    PUSH 0x0                            ; 0046e804
    PUSH 0x0                            ; 0046e806
    PUSH 0x0                            ; 0046e808
    PUSH 0x0                            ; 0046e80a
    PUSH 0x0                            ; 0046e80c
    ADD ECX,0x1bc9d44                   ; 0046e80e
    PUSH ECX                            ; 0046e814 | g_CDemonTriangle_ARRAY_01bc9ec8[6].vertex3.z
    PUSH EDX                            ; 0046e815 | g_CVector3f_ARRAY_01bc9c80 | g_CVector3f_ARRAY_01bc9c80[1].x
    PUSH EDI                            ; 0046e816
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e817
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9d40]      ; 0046e81c | DAT_01bc9d40
    INC EDX                             ; 0046e822
    ADD ESP,0x2c                        ; 0046e823
    MOV dword ptr [0x01bc9d40],EDX      ; 0046e826 | DAT_01bc9d40
    JMP 0x0046e45c                      ; 0046e82c
        ;   XREF to: 0046e45c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9d40],0xc ; 0046e831 | DAT_01bc9d40
        ;   Label: caseD_2
    ADD ECX,0x1bc9d44                   ; 0046e838
    CMP ECX,EDX                         ; 0046e83e
    JZ 0x0046e852                       ; 0046e840
        ;   XREF to: 0046e852 (CONDITIONAL_JUMP)  ; LAB_0046e852
    MOV EAX,dword ptr [EDX]             ; 0046e842 | g_CVector3f_ARRAY_01bc9c80 | g_CVector3f_ARRAY_01bc9c80[1].x
    MOV dword ptr [ECX],EAX             ; 0046e844 | g_CVector3f_ARRAY_01bc9d44 | g_CDemonTriangle_ARRAY_01bc9ec8[6].vertex3.z
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e846 | g_CVector3f_ARRAY_01bc9c80[0].y | g_CVector3f_ARRAY_01bc9c80[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e849 | g_CVector3f_ARRAY_01bc9d44[0].y | g_CDemonTriangle_ARRAY_01bc9ec8[6].normal.x
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e84c | g_CVector3f_ARRAY_01bc9c80[0].z | g_CVector3f_ARRAY_01bc9c80[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e84f | g_CVector3f_ARRAY_01bc9d44[0].z | g_CDemonTriangle_ARRAY_01bc9ec8[6].normal.y
    MOV ECX,dword ptr [0x01bc9d40]      ; 0046e852 | DAT_01bc9d40
        ;   Label: LAB_0046e852
    INC ECX                             ; 0046e858
    MOV dword ptr [0x01bc9d40],ECX      ; 0046e859 | DAT_01bc9d40
    IMUL ECX,ECX,0xc                    ; 0046e85f
    FLD float ptr [ESP + 0xc]           ; 0046e862
    SUB ESP,0x8                         ; 0046e866
    FSTP double ptr [ESP]               ; 0046e869
    PUSH 0xbff00000                     ; 0046e86c
    PUSH 0x0                            ; 0046e871
    PUSH 0x0                            ; 0046e873
    PUSH 0x0                            ; 0046e875
    PUSH 0x0                            ; 0046e877
    PUSH 0x0                            ; 0046e879
    ADD ECX,0x1bc9d44                   ; 0046e87b
    PUSH ECX                            ; 0046e881
    PUSH EDI                            ; 0046e882
    PUSH EDX                            ; 0046e883 | g_CVector3f_ARRAY_01bc9c80 | g_CVector3f_ARRAY_01bc9c80[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e884
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9d40]      ; 0046e889 | DAT_01bc9d40
    INC EDX                             ; 0046e88f
    ADD ESP,0x2c                        ; 0046e890
    MOV dword ptr [0x01bc9d40],EDX      ; 0046e893 | DAT_01bc9d40
    JMP 0x0046e45c                      ; 0046e899
        ;   XREF to: 0046e45c (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9e04],0xc ; 0046e89e | DAT_01bc9e04
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 0046e8a5
    SUB ESP,0x8                         ; 0046e8a9
    FSTP double ptr [ESP]               ; 0046e8ac
    PUSH 0xbff00000                     ; 0046e8af
    PUSH 0x0                            ; 0046e8b4
    PUSH 0x0                            ; 0046e8b6
    PUSH 0x0                            ; 0046e8b8
    PUSH 0x0                            ; 0046e8ba
    PUSH 0x0                            ; 0046e8bc
    ADD ECX,0x1bc9e08                   ; 0046e8be
    PUSH ECX                            ; 0046e8c4 | DAT_01bca0fc
    PUSH EDX                            ; 0046e8c5 | g_CVector3f_ARRAY_01bc9d44 | g_CVector3f_ARRAY_01bc9d44[1].x
    PUSH EDI                            ; 0046e8c6
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e8c7
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9e04]      ; 0046e8cc | DAT_01bc9e04
    INC EDX                             ; 0046e8d2
    ADD ESP,0x2c                        ; 0046e8d3
    MOV dword ptr [0x01bc9e04],EDX      ; 0046e8d6 | DAT_01bc9e04
    JMP 0x0046e502                      ; 0046e8dc
        ;   XREF to: 0046e502 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01bc9e04],0xc ; 0046e8e1 | DAT_01bc9e04
        ;   Label: caseD_2
    ADD ECX,0x1bc9e08                   ; 0046e8e8
    CMP ECX,EDX                         ; 0046e8ee
    JZ 0x0046e902                       ; 0046e8f0
        ;   XREF to: 0046e902 (CONDITIONAL_JUMP)  ; LAB_0046e902
    MOV EAX,dword ptr [EDX]             ; 0046e8f2 | g_CVector3f_ARRAY_01bc9d44 | g_CVector3f_ARRAY_01bc9d44[1].x
    MOV dword ptr [ECX],EAX             ; 0046e8f4 | DAT_01bca0fc
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046e8f6 | g_CVector3f_ARRAY_01bc9d44[0].y | g_CVector3f_ARRAY_01bc9d44[1].y
    MOV dword ptr [ECX + 0x4],EAX       ; 0046e8f9 | DAT_01bca100
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046e8fc | g_CVector3f_ARRAY_01bc9d44[0].z | g_CVector3f_ARRAY_01bc9d44[1].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0046e8ff | DAT_01bca104
    MOV ECX,dword ptr [0x01bc9e04]      ; 0046e902 | DAT_01bc9e04
        ;   Label: LAB_0046e902
    INC ECX                             ; 0046e908
    MOV dword ptr [0x01bc9e04],ECX      ; 0046e909 | DAT_01bc9e04
    IMUL ECX,ECX,0xc                    ; 0046e90f
    FLD float ptr [ESP + 0x4]           ; 0046e912
    SUB ESP,0x8                         ; 0046e916
    FSTP double ptr [ESP]               ; 0046e919
    PUSH 0xbff00000                     ; 0046e91c
    PUSH 0x0                            ; 0046e921
    PUSH 0x0                            ; 0046e923
    PUSH 0x0                            ; 0046e925
    PUSH 0x0                            ; 0046e927
    PUSH 0x0                            ; 0046e929
    ADD ECX,0x1bc9e08                   ; 0046e92b
    PUSH ECX                            ; 0046e931
    PUSH EDI                            ; 0046e932
    PUSH EDX                            ; 0046e933 | g_CVector3f_ARRAY_01bc9d44 | g_CVector3f_ARRAY_01bc9d44[1].x
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046e934
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_clipLineToPlane_FUN_0046d4e0(CVector3f * point1_ptr, CVector3f * point2_ptr, CVector3f * result_ptr, double plane_nx, ...)
    MOV EDX,dword ptr [0x01bc9e04]      ; 0046e939 | DAT_01bc9e04
    INC EDX                             ; 0046e93f
    ADD ESP,0x2c                        ; 0046e940
    MOV dword ptr [0x01bc9e04],EDX      ; 0046e943 | DAT_01bc9e04
    JMP 0x0046e502                      ; 0046e949
        ;   XREF to: 0046e502 (UNCONDITIONAL_JUMP)  ; caseD_3

