; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_cylinderTriangleTest_FUN_00479050(CDemonTriangle *triangle,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00 at 00461e9c
;   core_setcolid.cpp_FUN_0053da90 at 0053dbbc
;   core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00568690 at 005686b8
;
; Called Functions:
;   core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0
;   core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479050
        ;   Label: core_dtri.cpp_cylinderTriangleTest_FUN_00479050
    PUSH ESI                            ; 00479051
    PUSH EDI                            ; 00479052
    PUSH EBP                            ; 00479053
    SUB ESP,0x6c                        ; 00479054
    MOV EBX,dword ptr [ESP + 0x80]      ; 00479057
    MOV ESI,dword ptr [ESP + 0x84]      ; 0047905e
    FLD float ptr [EBX + 0x24]          ; 00479065
    FMUL float ptr [ESI + 0x18]         ; 00479068
    FLD float ptr [EBX + 0x2c]          ; 0047906b
    FMUL float ptr [ESI + 0x1c]         ; 0047906e
    FADDP                               ; 00479071
    FLDZ                                ; 00479073
    FCOMPP                              ; 00479075
    FNSTSW AX                           ; 00479077
    SAHF                                ; 00479079
    JNC 0x004793ca                      ; 0047907a
        ;   XREF to: 004793ca (CONDITIONAL_JUMP)  ; LAB_004793ca
    FLD float ptr [EBX + 0x8]           ; 00479080
    FMUL float ptr [ESI + 0x1c]         ; 00479083
    MOV EBP,EBX                         ; 00479086
    LEA EDI,[EBX + 0xc]                 ; 00479088
    FLD float ptr [EBX]                 ; 0047908b
    FMUL float ptr [ESI + 0x18]         ; 0047908d
    FLD float ptr [EDI + 0x8]           ; 00479090
    LEA EAX,[EBX + 0x18]                ; 00479093
    FMUL float ptr [ESI + 0x1c]         ; 00479096
    FLD float ptr [EAX + 0x8]           ; 00479099
    FMUL float ptr [ESI + 0x1c]         ; 0047909c
    FLD float ptr [EDI]                 ; 0047909f
    FMUL float ptr [ESI + 0x18]         ; 004790a1
    FLD float ptr [EAX]                 ; 004790a4
    FMUL float ptr [ESI + 0x18]         ; 004790a6
    FXCH ST4                            ; 004790a9
    FADDP ST5,ST0                       ; 004790ab
    MOV dword ptr [ESP + 0x3c],EAX      ; 004790ad
    FXCH ST4                            ; 004790b1
    FST float ptr [ESP + 0x40]          ; 004790b3
    FXCH ST4                            ; 004790b7
    FADDP ST2,ST0                       ; 004790b9
    FADDP ST2,ST0                       ; 004790bb
    FSTP float ptr [ESP + 0x50]         ; 004790bd
    FSTP float ptr [ESP + 0x38]         ; 004790c1
    FCOMP float ptr [ESP + 0x50]        ; 004790c5
    FNSTSW AX                           ; 004790c9
    SAHF                                ; 004790cb
    JA 0x004793d2                       ; 004790cc
        ;   XREF to: 004793d2 (CONDITIONAL_JUMP)  ; LAB_004793d2
    FLD float ptr [ESP + 0x50]          ; 004790d2
        ;   Label: LAB_004790d2
    FCOMP float ptr [ESP + 0x38]        ; 004790d6
    FNSTSW AX                           ; 004790da
    SAHF                                ; 004790dc
    JBE 0x00479101                      ; 004790dd
        ;   XREF to: 00479101 (CONDITIONAL_JUMP)  ; LAB_00479101
    MOV EAX,dword ptr [ESP + 0x50]      ; 004790df
    MOV dword ptr [ESP + 0x58],EAX      ; 004790e3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004790e7
    MOV dword ptr [ESP + 0x50],EAX      ; 004790eb
    MOV EAX,dword ptr [ESP + 0x58]      ; 004790ef
    MOV dword ptr [ESP + 0x38],EAX      ; 004790f3
    MOV EAX,EDI                         ; 004790f7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004790f9
    MOV dword ptr [ESP + 0x3c],EAX      ; 004790fd
    FLD float ptr [ESP + 0x40]          ; 00479101
        ;   Label: LAB_00479101
    FCOMP float ptr [ESP + 0x50]        ; 00479105
    FNSTSW AX                           ; 00479109
    SAHF                                ; 0047910b
    JBE 0x0047911c                      ; 0047910c
        ;   XREF to: 0047911c (CONDITIONAL_JUMP)  ; LAB_0047911c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047910e
    MOV dword ptr [ESP + 0x40],EAX      ; 00479112
    MOV EAX,EBP                         ; 00479116
    MOV EBP,EDI                         ; 00479118
    MOV EDI,EAX                         ; 0047911a
    FLD float ptr [ESP + 0x38]          ; 0047911c
        ;   Label: LAB_0047911c
    FCOMP float ptr [ESI + 0x2c]        ; 00479120
    FNSTSW AX                           ; 00479123
    SAHF                                ; 00479125
    JC 0x004793ca                       ; 00479126
        ;   XREF to: 004793ca (CONDITIONAL_JUMP)  ; LAB_004793ca
    FLD float ptr [ESP + 0x40]          ; 0047912c
    FCOMP float ptr [ESI + 0x30]        ; 00479130
    FNSTSW AX                           ; 00479133
    SAHF                                ; 00479135
    JA 0x004793ca                       ; 00479136
        ;   XREF to: 004793ca (CONDITIONAL_JUMP)  ; LAB_004793ca
    XOR EDX,EDX                         ; 0047913c
    FLD float ptr [EBX + 0x4]           ; 0047913e
    MOV dword ptr [ESP + 0x44],EDX      ; 00479141
    FCOMP float ptr [ESI + 0x24]        ; 00479145
    FNSTSW AX                           ; 00479148
    SAHF                                ; 0047914a
    JC 0x00479155                       ; 0047914b
        ;   XREF to: 00479155 (CONDITIONAL_JUMP)  ; LAB_00479155
    MOV dword ptr [ESP + 0x44],0x1      ; 0047914d
    FLD float ptr [EBX + 0x4]           ; 00479155
        ;   Label: LAB_00479155
    FCOMP float ptr [ESI + 0x28]        ; 00479158
    FNSTSW AX                           ; 0047915b
    SAHF                                ; 0047915d
    JA 0x00479165                       ; 0047915e
        ;   XREF to: 00479165 (CONDITIONAL_JUMP)  ; LAB_00479165
    OR byte ptr [ESP + 0x44],0x2        ; 00479160
    XOR EAX,EAX                         ; 00479165
        ;   Label: LAB_00479165
    FLD float ptr [EBX + 0x10]          ; 00479167
    MOV dword ptr [ESP + 0x4c],EAX      ; 0047916a
    FCOMP float ptr [ESI + 0x24]        ; 0047916e
    FNSTSW AX                           ; 00479171
    SAHF                                ; 00479173
    JC 0x0047917e                       ; 00479174
        ;   XREF to: 0047917e (CONDITIONAL_JUMP)  ; LAB_0047917e
    MOV dword ptr [ESP + 0x4c],0x1      ; 00479176
    FLD float ptr [EBX + 0x10]          ; 0047917e
        ;   Label: LAB_0047917e
    FCOMP float ptr [ESI + 0x28]        ; 00479181
    FNSTSW AX                           ; 00479184
    SAHF                                ; 00479186
    JA 0x0047918e                       ; 00479187
        ;   XREF to: 0047918e (CONDITIONAL_JUMP)  ; LAB_0047918e
    OR byte ptr [ESP + 0x4c],0x2        ; 00479189
    XOR ECX,ECX                         ; 0047918e
        ;   Label: LAB_0047918e
    FLD float ptr [EBX + 0x1c]          ; 00479190
    MOV dword ptr [ESP + 0x48],ECX      ; 00479193
    FCOMP float ptr [ESI + 0x24]        ; 00479197
    FNSTSW AX                           ; 0047919a
    SAHF                                ; 0047919c
    JC 0x004791a7                       ; 0047919d
        ;   XREF to: 004791a7 (CONDITIONAL_JUMP)  ; LAB_004791a7
    MOV dword ptr [ESP + 0x48],0x1      ; 0047919f
    FLD float ptr [EBX + 0x1c]          ; 004791a7
        ;   Label: LAB_004791a7
    FCOMP float ptr [ESI + 0x28]        ; 004791aa
    FNSTSW AX                           ; 004791ad
    SAHF                                ; 004791af
    JA 0x004791b7                       ; 004791b0
        ;   XREF to: 004791b7 (CONDITIONAL_JUMP)  ; LAB_004791b7
    OR byte ptr [ESP + 0x48],0x2        ; 004791b2
    MOV EAX,dword ptr [ESP + 0x44]      ; 004791b7
        ;   Label: LAB_004791b7
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004791bb
    MOV ECX,dword ptr [ESP + 0x48]      ; 004791bf
    AND EAX,EDX                         ; 004791c3
    TEST EAX,ECX                        ; 004791c5
    JNZ 0x004793ca                      ; 004791c7
        ;   XREF to: 004793ca (CONDITIONAL_JUMP)  ; LAB_004793ca
    FLDZ                                ; 004791cd
    FCOMP float ptr [EBX + 0x28]        ; 004791cf
    FNSTSW AX                           ; 004791d2
    SAHF                                ; 004791d4
    JA 0x004792c6                       ; 004791d5
        ;   XREF to: 004792c6 (CONDITIONAL_JUMP)  ; LAB_004792c6
    MOV EDX,dword ptr [ESP + 0x44]      ; 004791db
    XOR EDX,dword ptr [ESP + 0x4c]      ; 004791df
    XOR EAX,EAX                         ; 004791e3
    TEST DL,0x1                         ; 004791e5
    JZ 0x0047921c                       ; 004791e8
        ;   XREF to: 0047921c (CONDITIONAL_JUMP)  ; LAB_0047921c
    FLD float ptr [ESI + 0x24]          ; 004791ea
    FSUB float ptr [EBX + 0x4]          ; 004791ed
    FLD float ptr [EBX + 0xc]           ; 004791f0
    FLD float ptr [EBX + 0x10]          ; 004791f3
    FSUB float ptr [EBX + 0x4]          ; 004791f6
    FXCH                                ; 004791f9
    FSUB float ptr [EBX]                ; 004791fb
    FXCH                                ; 004791fd
    FDIVP ST2,ST0                       ; 004791ff
    FMUL ST1                            ; 00479201
    FADD float ptr [EBX]                ; 00479203
    FSTP float ptr [ESP]                ; 00479205
    FLD float ptr [EBX + 0x14]          ; 00479208
    FSUB float ptr [EBX + 0x8]          ; 0047920b
    FMULP                               ; 0047920e
    FADD float ptr [EBX + 0x8]          ; 00479210
    MOV EAX,0x1                         ; 00479213
    FSTP float ptr [ESP + 0x24]         ; 00479218
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0047921c
        ;   Label: LAB_0047921c
    XOR EDX,dword ptr [ESP + 0x48]      ; 00479220
    TEST DL,0x1                         ; 00479224
    JZ 0x00479259                       ; 00479227
        ;   XREF to: 00479259 (CONDITIONAL_JUMP)  ; LAB_00479259
    FLD float ptr [ESI + 0x24]          ; 00479229
    FSUB float ptr [EBX + 0x10]         ; 0047922c
    FLD float ptr [EBX + 0x18]          ; 0047922f
    FLD float ptr [EBX + 0x1c]          ; 00479232
    FSUB float ptr [EBX + 0x10]         ; 00479235
    FXCH                                ; 00479238
    FSUB float ptr [EBX + 0xc]          ; 0047923a
    FXCH                                ; 0047923d
    FDIVP ST2,ST0                       ; 0047923f
    FMUL ST1                            ; 00479241
    FADD float ptr [EBX + 0xc]          ; 00479243
    FSTP float ptr [ESP + EAX*0x4]      ; 00479246
    FLD float ptr [EBX + 0x20]          ; 00479249
    FSUB float ptr [EBX + 0x14]         ; 0047924c
    FMULP                               ; 0047924f
    FADD float ptr [EBX + 0x14]         ; 00479251
    INC EAX                             ; 00479254
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 00479255
    MOV EDX,dword ptr [ESP + 0x48]      ; 00479259
        ;   Label: LAB_00479259
    XOR EDX,dword ptr [ESP + 0x44]      ; 0047925d
    TEST DL,0x1                         ; 00479261
    JZ 0x00479295                       ; 00479264
        ;   XREF to: 00479295 (CONDITIONAL_JUMP)  ; LAB_00479295
    FLD float ptr [ESI + 0x24]          ; 00479266
    FSUB float ptr [EBX + 0x1c]         ; 00479269
    FLD float ptr [EBX]                 ; 0047926c
    FLD float ptr [EBX + 0x4]           ; 0047926e
    FSUB float ptr [EBX + 0x1c]         ; 00479271
    FXCH                                ; 00479274
    FSUB float ptr [EBX + 0x18]         ; 00479276
    FXCH                                ; 00479279
    FDIVP ST2,ST0                       ; 0047927b
    FMUL ST1                            ; 0047927d
    FADD float ptr [EBX + 0x18]         ; 0047927f
    FSTP float ptr [ESP + EAX*0x4]      ; 00479282
    FLD float ptr [EBX + 0x8]           ; 00479285
    FSUB float ptr [EBX + 0x20]         ; 00479288
    FMULP                               ; 0047928b
    FADD float ptr [EBX + 0x20]         ; 0047928d
    INC EAX                             ; 00479290
    FSTP float ptr [ESP + EAX*0x4 + 0x20] ; 00479291
    CMP EAX,0x2                         ; 00479295
        ;   Label: LAB_00479295
    JL 0x004792c6                       ; 00479298
        ;   XREF to: 004792c6 (CONDITIONAL_JUMP)  ; LAB_004792c6
    MOV EAX,dword ptr [ESP]             ; 0047929a
    MOV dword ptr [ESI + 0x3c],EAX      ; 0047929d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004792a0
    MOV dword ptr [ESI + 0x40],EAX      ; 004792a4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004792a7
    MOV dword ptr [ESI + 0x44],EAX      ; 004792ab
    MOV EAX,dword ptr [ESP + 0x28]      ; 004792ae
    PUSH ESI                            ; 004792b2
    MOV dword ptr [ESI + 0x48],EAX      ; 004792b3
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0 ; 004792b6
        ;   XREF to: 00478cd0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 004792bb
    TEST EAX,EAX                        ; 004792be
    JNZ 0x00479398                      ; 004792c0
        ;   XREF to: 00479398 (CONDITIONAL_JUMP)  ; LAB_00479398
    FLDZ                                ; 004792c6
        ;   Label: LAB_004792c6
    FCOMP float ptr [EBX + 0x28]        ; 004792c8
    FNSTSW AX                           ; 004792cb
    SAHF                                ; 004792cd
    JC 0x0047942b                       ; 004792ce
        ;   XREF to: 0047942b (CONDITIONAL_JUMP)  ; LAB_0047942b
    MOV EDX,dword ptr [ESP + 0x44]      ; 004792d4
    XOR EDX,dword ptr [ESP + 0x4c]      ; 004792d8
    XOR EAX,EAX                         ; 004792dc
    TEST DL,0x2                         ; 004792de
    JNZ 0x004793f3                      ; 004792e1
        ;   XREF to: 004793f3 (CONDITIONAL_JUMP)  ; LAB_004793f3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004792e7
        ;   Label: LAB_004792e7
    XOR EDX,dword ptr [ESP + 0x48]      ; 004792eb
    TEST DL,0x2                         ; 004792ef
    JZ 0x00479325                       ; 004792f2
        ;   XREF to: 00479325 (CONDITIONAL_JUMP)  ; LAB_00479325
    FLD float ptr [ESI + 0x28]          ; 004792f4
    FSUB float ptr [EBX + 0x10]         ; 004792f7
    FLD float ptr [EBX + 0x18]          ; 004792fa
    FLD float ptr [EBX + 0x1c]          ; 004792fd
    FSUB float ptr [EBX + 0x10]         ; 00479300
    FXCH                                ; 00479303
    FSUB float ptr [EBX + 0xc]          ; 00479305
    FXCH                                ; 00479308
    FDIVP ST2,ST0                       ; 0047930a
    FMUL ST1                            ; 0047930c
    FADD float ptr [EBX + 0xc]          ; 0047930e
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 00479311
    FLD float ptr [EBX + 0x20]          ; 00479315
    FSUB float ptr [EBX + 0x14]         ; 00479318
    FMULP                               ; 0047931b
    FADD float ptr [EBX + 0x14]         ; 0047931d
    INC EAX                             ; 00479320
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 00479321
    MOV EDX,dword ptr [ESP + 0x48]      ; 00479325
        ;   Label: LAB_00479325
    XOR EDX,dword ptr [ESP + 0x44]      ; 00479329
    TEST DL,0x2                         ; 0047932d
    JZ 0x00479362                       ; 00479330
        ;   XREF to: 00479362 (CONDITIONAL_JUMP)  ; LAB_00479362
    FLD float ptr [ESI + 0x28]          ; 00479332
    FSUB float ptr [EBX + 0x1c]         ; 00479335
    FLD float ptr [EBX]                 ; 00479338
    FLD float ptr [EBX + 0x4]           ; 0047933a
    FSUB float ptr [EBX + 0x1c]         ; 0047933d
    FXCH                                ; 00479340
    FSUB float ptr [EBX + 0x18]         ; 00479342
    FXCH                                ; 00479345
    FDIVP ST2,ST0                       ; 00479347
    FMUL ST1                            ; 00479349
    FADD float ptr [EBX + 0x18]         ; 0047934b
    FSTP float ptr [ESP + EAX*0x4 + 0xc] ; 0047934e
    FLD float ptr [EBX + 0x8]           ; 00479352
    FSUB float ptr [EBX + 0x20]         ; 00479355
    FMULP                               ; 00479358
    FADD float ptr [EBX + 0x20]         ; 0047935a
    INC EAX                             ; 0047935d
    FSTP float ptr [ESP + EAX*0x4 + 0x14] ; 0047935e
    CMP EAX,0x2                         ; 00479362
        ;   Label: LAB_00479362
    JL 0x0047942b                       ; 00479365
        ;   XREF to: 0047942b (CONDITIONAL_JUMP)  ; LAB_0047942b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047936b
    MOV dword ptr [ESI + 0x3c],EAX      ; 0047936f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00479372
    MOV dword ptr [ESI + 0x40],EAX      ; 00479376
    MOV EAX,dword ptr [ESP + 0x10]      ; 00479379
    MOV dword ptr [ESI + 0x44],EAX      ; 0047937d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00479380
    PUSH ESI                            ; 00479384
    MOV dword ptr [ESI + 0x48],EAX      ; 00479385
    CALL core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0 ; 00479388
        ;   XREF to: 00478cd0 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_cylinderEdgeIntersection_FUN_00478cd0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0047938d
    TEST EAX,EAX                        ; 00479390
    JZ 0x0047942b                       ; 00479392
        ;   XREF to: 0047942b (CONDITIONAL_JUMP)  ; LAB_0047942b
    MOV dword ptr [ESI + 0x8],0x0       ; 00479398
        ;   Label: LAB_00479398
    FLD float ptr [ESI + 0x18]          ; 0047939f
    FMUL float ptr [ESI + 0x4c]         ; 004793a2
    FLD float ptr [ESI + 0x1c]          ; 004793a5
    FMUL float ptr [ESI + 0x4c]         ; 004793a8
    MOV EAX,dword ptr [ESI + 0x4c]      ; 004793ab
    MOV dword ptr [ESI],EAX             ; 004793ae
    FXCH                                ; 004793b0
    FADD float ptr [ESI + 0x10]         ; 004793b2
    FXCH                                ; 004793b5
    FADD float ptr [ESI + 0x14]         ; 004793b7
    FLD float ptr [ESI + 0x54]          ; 004793ba
    FLD float ptr [ESI + 0x58]          ; 004793bd
    FSUBP ST2,ST0                       ; 004793c0
    FSUBP ST2,ST0                       ; 004793c2
    FSTP float ptr [ESI + 0xc]          ; 004793c4
    FSTP float ptr [ESI + 0x4]          ; 004793c7
    ADD ESP,0x6c                        ; 004793ca
        ;   Label: LAB_004793ca
    POP EBP                             ; 004793cd
    POP EDI                             ; 004793ce
    POP ESI                             ; 004793cf
    POP EBX                             ; 004793d0
    RET                                 ; 004793d1
    MOV EAX,dword ptr [ESP + 0x40]      ; 004793d2
        ;   Label: LAB_004793d2
    MOV dword ptr [ESP + 0x54],EAX      ; 004793d6
    MOV EAX,dword ptr [ESP + 0x50]      ; 004793da
    MOV EBP,EDI                         ; 004793de
    MOV dword ptr [ESP + 0x40],EAX      ; 004793e0
    MOV EAX,dword ptr [ESP + 0x54]      ; 004793e4
    MOV EDI,EBX                         ; 004793e8
    MOV dword ptr [ESP + 0x50],EAX      ; 004793ea
    JMP 0x004790d2                      ; 004793ee
        ;   XREF to: 004790d2 (UNCONDITIONAL_JUMP)  ; LAB_004790d2
    FLD float ptr [ESI + 0x28]          ; 004793f3
        ;   Label: LAB_004793f3
    FSUB float ptr [EBX + 0x4]          ; 004793f6
    FLD float ptr [EBX + 0xc]           ; 004793f9
    FLD float ptr [EBX + 0x10]          ; 004793fc
    FSUB float ptr [EBX + 0x4]          ; 004793ff
    FXCH                                ; 00479402
    FSUB float ptr [EBX]                ; 00479404
    FXCH                                ; 00479406
    FDIVP ST2,ST0                       ; 00479408
    FMUL ST1                            ; 0047940a
    FADD float ptr [EBX]                ; 0047940c
    FSTP float ptr [ESP + 0xc]          ; 0047940e
    FLD float ptr [EBX + 0x14]          ; 00479412
    FSUB float ptr [EBX + 0x8]          ; 00479415
    FMULP                               ; 00479418
    FADD float ptr [EBX + 0x8]          ; 0047941a
    MOV EAX,0x1                         ; 0047941d
    FSTP float ptr [ESP + 0x18]         ; 00479422
    JMP 0x004792e7                      ; 00479426
        ;   XREF to: 004792e7 (UNCONDITIONAL_JUMP)  ; LAB_004792e7
    PUSH EDI                            ; 0047942b
        ;   Label: LAB_0047942b
    PUSH EBP                            ; 0047942c
    PUSH ESI                            ; 0047942d
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0 ; 0047942e
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 00479433
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00479436
    PUSH EBX                            ; 0047943a
    PUSH EBP                            ; 0047943b
    PUSH ESI                            ; 0047943c
    CALL core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0 ; 0047943d
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_00478fb0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)
    ADD ESP,0xc                         ; 00479442
    ADD ESP,0x6c                        ; 00479445
    POP EBP                             ; 00479448
    POP EDI                             ; 00479449
    POP ESI                             ; 0047944a
    POP EBX                             ; 0047944b
    RET                                 ; 0047944c

