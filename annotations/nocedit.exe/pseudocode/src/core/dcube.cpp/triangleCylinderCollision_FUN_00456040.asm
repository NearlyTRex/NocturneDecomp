; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_dcube.cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   cylinder_center
; float            Stack[0xc]:4   cylinder_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60 at 00457b8f
;
; Referenced Globals:
;   double g_CylinderCollisionMaxNormalY = -0.340000000000000
;   double g_CylinderCollisionMinNormal2D = 0.0100000000000000
;   CVector3f g_DownwardRayDirection
;   undefined4 g_DownwardRayDirection.y
;   undefined4 g_DownwardRayDirection.z
;   uchar g_DownwardRayInitialized
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
;   core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456040
        ;   Label: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
    PUSH ESI                            ; 00456041
    PUSH EDI                            ; 00456042
    PUSH EBP                            ; 00456043
    MOV EBP,ESP                         ; 00456044
    SUB ESP,0x78                        ; 00456046
    AND ESP,0xfffffff8                  ; 00456049
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045604c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0045604f
    FLD float ptr [EBX + 0x10]          ; 00456052
    FCOMP double ptr [0x0061a50a]       ; 00456055 | g_CylinderCollisionMaxNormalY
    FNSTSW AX                           ; 0045605b
    SAHF                                ; 0045605d
    JA 0x004562ba                       ; 0045605e
        ;   XREF to: 004562ba (CONDITIONAL_JUMP)  ; LAB_004562ba
    MOV EAX,dword ptr [EBX]             ; 00456064
    FLD float ptr [EAX]                 ; 00456066
    FSUB float ptr [ESI]                ; 00456068
    FSTP float ptr [ESP + 0x30]         ; 0045606a
    MOV EAX,dword ptr [EBX]             ; 0045606e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456070
    MOV dword ptr [ESP + 0x34],EAX      ; 00456073
    MOV EAX,dword ptr [EBX]             ; 00456077
    FLD float ptr [EAX + 0x8]           ; 00456079
    FSUB float ptr [ESI + 0x8]          ; 0045607c
    FSTP float ptr [ESP + 0x38]         ; 0045607f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456083
    FLD float ptr [EAX]                 ; 00456086
    FSUB float ptr [ESI]                ; 00456088
    FSTP float ptr [ESP + 0x3c]         ; 0045608a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045608e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00456091
    MOV dword ptr [ESP + 0x40],EAX      ; 00456094
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456098
    FLD float ptr [EAX + 0x8]           ; 0045609b
    FSUB float ptr [ESI + 0x8]          ; 0045609e
    FSTP float ptr [ESP + 0x44]         ; 004560a1
    MOV EAX,dword ptr [EBX + 0x8]       ; 004560a5
    FLD float ptr [EAX]                 ; 004560a8
    FSUB float ptr [ESI]                ; 004560aa
    FSTP float ptr [ESP + 0x48]         ; 004560ac
    MOV EAX,dword ptr [EBX + 0x8]       ; 004560b0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004560b3
    MOV dword ptr [ESP + 0x4c],EAX      ; 004560b6
    MOV EAX,dword ptr [EBX + 0x8]       ; 004560ba
    FLD float ptr [EAX + 0x8]           ; 004560bd
    FSUB float ptr [ESI + 0x8]          ; 004560c0
    FLD float ptr [ESP + 0x34]          ; 004560c3
    FXCH                                ; 004560c7
    FSTP float ptr [ESP + 0x50]         ; 004560c9
    FCOMP float ptr [ESP + 0x40]        ; 004560cd
    FNSTSW AX                           ; 004560d1
    SAHF                                ; 004560d3
    JC 0x004562c3                       ; 004560d4
        ;   XREF to: 004562c3 (CONDITIONAL_JUMP)  ; LAB_004562c3
    FLD float ptr [ESP + 0x40]          ; 004560da
        ;   Label: LAB_004560da
    FCOMP float ptr [ESP + 0x4c]        ; 004560de
    FNSTSW AX                           ; 004560e2
    SAHF                                ; 004560e4
    JNC 0x00456147                      ; 004560e5
        ;   XREF to: 00456147 (CONDITIONAL_JUMP)  ; LAB_00456147
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004560e7
    MOV dword ptr [ESP + 0xc],EAX       ; 004560eb
    MOV EAX,dword ptr [ESP + 0x40]      ; 004560ef
    MOV dword ptr [ESP + 0x10],EAX      ; 004560f3
    MOV EAX,dword ptr [ESP + 0x44]      ; 004560f7
    LEA EDI,[ESP + 0x3c]                ; 004560fb
    MOV dword ptr [ESP + 0x14],EAX      ; 004560ff
    LEA EAX,[ESP + 0x48]                ; 00456103
    CMP EDI,EAX                         ; 00456107
    JZ 0x00456123                       ; 00456109
        ;   XREF to: 00456123 (CONDITIONAL_JUMP)  ; LAB_00456123
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045610b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0045610f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00456113
    MOV dword ptr [ESP + 0x40],EAX      ; 00456117
    MOV EAX,dword ptr [ESP + 0x50]      ; 0045611b
    MOV dword ptr [ESP + 0x44],EAX      ; 0045611f
    LEA EAX,[ESP + 0x48]                ; 00456123
        ;   Label: LAB_00456123
    LEA EDI,[ESP + 0xc]                 ; 00456127
    CMP EAX,EDI                         ; 0045612b
    JZ 0x00456147                       ; 0045612d
        ;   XREF to: 00456147 (CONDITIONAL_JUMP)  ; LAB_00456147
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045612f
    MOV dword ptr [ESP + 0x48],EAX      ; 00456133
    MOV EAX,dword ptr [ESP + 0x10]      ; 00456137
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045613b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045613f
    MOV dword ptr [ESP + 0x50],EAX      ; 00456143
    FLD float ptr [ESP + 0x4c]          ; 00456147
        ;   Label: LAB_00456147
    FCOMP float ptr [ESI + 0x4]         ; 0045614b
    FNSTSW AX                           ; 0045614e
    SAHF                                ; 00456150
    JA 0x004562ba                       ; 00456151
        ;   XREF to: 004562ba (CONDITIONAL_JUMP)  ; LAB_004562ba
    FLD float ptr [ESP + 0x34]          ; 00456157
    FCOMP float ptr [ESP + 0x40]        ; 0045615b
    FNSTSW AX                           ; 0045615f
    SAHF                                ; 00456161
    JNC 0x004561c4                      ; 00456162
        ;   XREF to: 004561c4 (CONDITIONAL_JUMP)  ; LAB_004561c4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00456164
    MOV dword ptr [ESP + 0x24],EAX      ; 00456168
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045616c
    MOV dword ptr [ESP + 0x28],EAX      ; 00456170
    MOV EAX,dword ptr [ESP + 0x38]      ; 00456174
    LEA EDI,[ESP + 0x30]                ; 00456178
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045617c
    LEA EAX,[ESP + 0x3c]                ; 00456180
    CMP EDI,EAX                         ; 00456184
    JZ 0x004561a0                       ; 00456186
        ;   XREF to: 004561a0 (CONDITIONAL_JUMP)  ; LAB_004561a0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00456188
    MOV dword ptr [ESP + 0x30],EAX      ; 0045618c
    MOV EAX,dword ptr [ESP + 0x40]      ; 00456190
    MOV dword ptr [ESP + 0x34],EAX      ; 00456194
    MOV EAX,dword ptr [ESP + 0x44]      ; 00456198
    MOV dword ptr [ESP + 0x38],EAX      ; 0045619c
    LEA EDI,[ESP + 0x3c]                ; 004561a0
        ;   Label: LAB_004561a0
    LEA EAX,[ESP + 0x24]                ; 004561a4
    CMP EDI,EAX                         ; 004561a8
    JZ 0x004561c4                       ; 004561aa
        ;   XREF to: 004561c4 (CONDITIONAL_JUMP)  ; LAB_004561c4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004561ac
    MOV dword ptr [ESP + 0x3c],EAX      ; 004561b0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004561b4
    MOV dword ptr [ESP + 0x40],EAX      ; 004561b8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004561bc
    MOV dword ptr [ESP + 0x44],EAX      ; 004561c0
    MOV EAX,dword ptr [EBP + 0x20]      ; 004561c4
        ;   Label: LAB_004561c4
    FLD float ptr [ESP + 0x34]          ; 004561c7
    FCOMP float ptr [EAX]               ; 004561cb
    FNSTSW AX                           ; 004561cd
    SAHF                                ; 004561cf
    JC 0x004562ba                       ; 004561d0
        ;   XREF to: 004562ba (CONDITIONAL_JUMP)  ; LAB_004562ba
    FLD float ptr [ESP + 0x38]          ; 004561d6
    FMUL ST0                            ; 004561da
    FLD float ptr [ESP + 0x30]          ; 004561dc
    FMUL ST0                            ; 004561e0
    FLD float ptr [EBP + 0x1c]          ; 004561e2
    FMUL ST0                            ; 004561e5
    FXCH                                ; 004561e7
    FADDP ST2,ST0                       ; 004561e9
    FCOMPP                              ; 004561eb
    FNSTSW AX                           ; 004561ed
    SAHF                                ; 004561ef
    JA 0x0045632c                       ; 004561f0
        ;   XREF to: 0045632c (CONDITIONAL_JUMP)  ; LAB_0045632c
    MOV EDX,dword ptr [EBP + 0x20]      ; 004561f6
    PUSH EDX                            ; 004561f9
    LEA EAX,[ESP + 0x40]                ; 004561fa
    PUSH dword ptr [EBP + 0x1c]         ; 004561fe
    PUSH EAX                            ; 00456201
    LEA EAX,[ESP + 0x3c]                ; 00456202
    PUSH EAX                            ; 00456206
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0 ; 00456207
        ;   XREF to: 00455ed0 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height)
    ADD ESP,0x10                        ; 0045620c
    MOV ECX,dword ptr [EBP + 0x20]      ; 0045620f
    PUSH ECX                            ; 00456212
    MOV EDI,EAX                         ; 00456213
    LEA EAX,[ESP + 0x4c]                ; 00456215
    PUSH dword ptr [EBP + 0x1c]         ; 00456219
    PUSH EAX                            ; 0045621c
    LEA EAX,[ESP + 0x48]                ; 0045621d
    PUSH EAX                            ; 00456221
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0 ; 00456222
        ;   XREF to: 00455ed0 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height)
    ADD ESP,0x10                        ; 00456227
    OR EDI,EAX                          ; 0045622a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045622c
    PUSH EAX                            ; 0045622f
    LEA EAX,[ESP + 0x34]                ; 00456230
    PUSH dword ptr [EBP + 0x1c]         ; 00456234
    PUSH EAX                            ; 00456237
    LEA EAX,[ESP + 0x54]                ; 00456238
    PUSH EAX                            ; 0045623c
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0 ; 0045623d
        ;   XREF to: 00455ed0 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f * segment_start, CVector3f * segment_end, float radius, float * out_height)
    FLD float ptr [EBX + 0xc]           ; 00456242
    FMUL ST0                            ; 00456245
    FLD float ptr [EBX + 0x14]          ; 00456247
    FMUL ST0                            ; 0045624a
    FADDP                               ; 0045624c
    OR EDI,EAX                          ; 0045624e
    FSQRT                               ; 00456250
    ADD ESP,0x10                        ; 00456252
    MOV AH,byte ptr [0x015c4290]        ; 00456255 | g_DownwardRayInitialized
    FSTP double ptr [ESP]               ; 0045625b
    TEST AH,0x1                         ; 0045625e
    JZ 0x00456341                       ; 00456261
        ;   XREF to: 00456341 (CONDITIONAL_JUMP)  ; LAB_00456341
    FLD double ptr [ESP]                ; 00456267
        ;   Label: LAB_00456267
    FCOMP double ptr [0x0061a512]       ; 0045626a | g_CylinderCollisionMinNormal2D
    FNSTSW AX                           ; 00456270
    SAHF                                ; 00456272
    JNC 0x0045636a                      ; 00456273
        ;   XREF to: 0045636a (CONDITIONAL_JUMP)  ; LAB_0045636a
    TEST EDI,EDI                        ; 00456279
    JNZ 0x004562b1                      ; 0045627b
        ;   XREF to: 004562b1 (CONDITIONAL_JUMP)  ; LAB_004562b1
    PUSH 0x15c4284                      ; 0045627d | g_DownwardRayDirection
    PUSH ESI                            ; 00456282
    PUSH EBX                            ; 00456283
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460 ; 00456284
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [ESP + 0x80],EAX      ; 00456289
    FLD float ptr [ESP + 0x80]          ; 00456290
    FLDZ                                ; 00456297
    ADD ESP,0xc                         ; 00456299
    FCOMPP                              ; 0045629c
    FNSTSW AX                           ; 0045629e
    SAHF                                ; 004562a0
    JA 0x004562b1                       ; 004562a1
        ;   XREF to: 004562b1 (CONDITIONAL_JUMP)  ; LAB_004562b1
    MOV EBX,dword ptr [EBP + 0x20]      ; 004562a3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004562a6
    MOV EDI,0x1                         ; 004562aa
    MOV dword ptr [EBX],EAX             ; 004562af
    MOV EAX,EDI                         ; 004562b1
        ;   Label: LAB_004562b1
    MOV ESP,EBP                         ; 004562b3
    POP EBP                             ; 004562b5
    POP EDI                             ; 004562b6
    POP ESI                             ; 004562b7
    POP EBX                             ; 004562b8
    RET                                 ; 004562b9
    XOR EAX,EAX                         ; 004562ba
        ;   Label: LAB_004562ba
    MOV ESP,EBP                         ; 004562bc
    POP EBP                             ; 004562be
    POP EDI                             ; 004562bf
    POP ESI                             ; 004562c0
    POP EBX                             ; 004562c1
    RET                                 ; 004562c2
    MOV EAX,dword ptr [ESP + 0x30]      ; 004562c3
        ;   Label: LAB_004562c3
    MOV dword ptr [ESP + 0x18],EAX      ; 004562c7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004562cb
    MOV dword ptr [ESP + 0x1c],EAX      ; 004562cf
    MOV EAX,dword ptr [ESP + 0x38]      ; 004562d3
    LEA EDI,[ESP + 0x30]                ; 004562d7
    MOV dword ptr [ESP + 0x20],EAX      ; 004562db
    LEA EAX,[ESP + 0x3c]                ; 004562df
    CMP EDI,EAX                         ; 004562e3
    JZ 0x004562ff                       ; 004562e5
        ;   XREF to: 004562ff (CONDITIONAL_JUMP)  ; LAB_004562ff
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004562e7
    MOV dword ptr [ESP + 0x30],EAX      ; 004562eb
    MOV EAX,dword ptr [ESP + 0x40]      ; 004562ef
    MOV dword ptr [ESP + 0x34],EAX      ; 004562f3
    MOV EAX,dword ptr [ESP + 0x44]      ; 004562f7
    MOV dword ptr [ESP + 0x38],EAX      ; 004562fb
    LEA EDI,[ESP + 0x3c]                ; 004562ff
        ;   Label: LAB_004562ff
    LEA EAX,[ESP + 0x18]                ; 00456303
    CMP EDI,EAX                         ; 00456307
    JZ 0x004560da                       ; 00456309
        ;   XREF to: 004560da (CONDITIONAL_JUMP)  ; LAB_004560da
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045630f
    MOV dword ptr [ESP + 0x3c],EAX      ; 00456313
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00456317
    MOV dword ptr [ESP + 0x40],EAX      ; 0045631b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045631f
    MOV dword ptr [ESP + 0x44],EAX      ; 00456323
    JMP 0x004560da                      ; 00456327
        ;   XREF to: 004560da (UNCONDITIONAL_JUMP)  ; LAB_004560da
    MOV EBX,dword ptr [EBP + 0x20]      ; 0045632c
        ;   Label: LAB_0045632c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045632f
    MOV dword ptr [EBX],EAX             ; 00456333
    MOV EAX,0x1                         ; 00456335
    MOV ESP,EBP                         ; 0045633a
    POP EBP                             ; 0045633c
    POP EDI                             ; 0045633d
    POP ESI                             ; 0045633e
    POP EBX                             ; 0045633f
    RET                                 ; 00456340
    MOV DL,AH                           ; 00456341
        ;   Label: LAB_00456341
    OR DL,0x1                           ; 00456343
    MOV ECX,0xc2c80000                  ; 00456346
    MOV byte ptr [0x015c4290],DL        ; 0045634b | g_DownwardRayInitialized
    XOR EDX,EDX                         ; 00456351
    MOV dword ptr [0x015c4288],ECX      ; 00456353 | g_DownwardRayDirection.y
    MOV dword ptr [0x015c4284],EDX      ; 00456359 | g_DownwardRayDirection
    MOV dword ptr [0x015c428c],EDX      ; 0045635f | g_DownwardRayDirection.z
    JMP 0x00456267                      ; 00456365
        ;   XREF to: 00456267 (UNCONDITIONAL_JUMP)  ; LAB_00456267
    FLD float ptr [EBX + 0xc]           ; 0045636a
        ;   Label: LAB_0045636a
    FLD float ptr [EBP + 0x1c]          ; 0045636d
    FDIV double ptr [ESP]               ; 00456370
    FXCH                                ; 00456373
    FMUL ST1                            ; 00456375
    FADD float ptr [ESI]                ; 00456377
    FSTP float ptr [ESP + 0x54]         ; 00456379
    FMUL float ptr [EBX + 0x14]         ; 0045637d
    FADD float ptr [ESI + 0x8]          ; 00456380
    FSTP float ptr [ESP + 0x5c]         ; 00456383
    MOV EAX,dword ptr [ESI + 0x4]       ; 00456387
    PUSH 0x15c4284                      ; 0045638a | g_DownwardRayDirection
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045638f
    LEA EAX,[ESP + 0x58]                ; 00456393
    PUSH EAX                            ; 00456397
    PUSH EBX                            ; 00456398
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460 ; 00456399
        ;   XREF to: 00455460 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [ESP + 0x80],EAX      ; 0045639e
    FLD float ptr [ESP + 0x80]          ; 004563a5
    ADD ESP,0xc                         ; 004563ac
    FST float ptr [ESP + 0x8]           ; 004563af
    FLDZ                                ; 004563b3
    FCOMPP                              ; 004563b5
    FNSTSW AX                           ; 004563b7
    SAHF                                ; 004563b9
    JA 0x004562b1                       ; 004563ba
        ;   XREF to: 004562b1 (CONDITIONAL_JUMP)  ; LAB_004562b1
    FLD float ptr [ESP + 0x8]           ; 004563c0
    FMUL float ptr [0x015c4288]         ; 004563c4 | g_DownwardRayDirection.y
    FADD float ptr [ESP + 0x58]         ; 004563ca
    MOV EAX,dword ptr [EBP + 0x20]      ; 004563ce
    FST float ptr [ESP + 0x70]          ; 004563d1
    FCOMP float ptr [EAX]               ; 004563d5
    FNSTSW AX                           ; 004563d7
    SAHF                                ; 004563d9
    JBE 0x004562b1                      ; 004563da
        ;   XREF to: 004562b1 (CONDITIONAL_JUMP)  ; LAB_004562b1
    MOV EBX,dword ptr [EBP + 0x20]      ; 004563e0
    MOV EAX,dword ptr [ESP + 0x70]      ; 004563e3
    MOV EDI,0x1                         ; 004563e7
    MOV dword ptr [EBX],EAX             ; 004563ec
    MOV EAX,EDI                         ; 004563ee
    MOV ESP,EBP                         ; 004563f0
    POP EBP                             ; 004563f2
    POP EDI                             ; 004563f3
    POP ESI                             ; 004563f4
    POP EBX                             ; 004563f5
    RET                                 ; 004563f6

