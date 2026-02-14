; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_direction
; CVector3f *      Stack[0x14]:4   output_normal
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0xe8]:8  local_e8
; undefined8       Stack[-0xe0]:8  local_e0
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 00409733
;   core_platfrm.cpp_CPlatform_FUN_0054df80 at 0054e139
;
; Referenced Globals:
;   float g_Fixed16ToFloat = 0.00390625
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004781d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
    PUSH ESI                            ; 004781d1
    PUSH EDI                            ; 004781d2
    PUSH EBP                            ; 004781d3
    MOV EBP,ESP                         ; 004781d4
    SUB ESP,0xdc                        ; 004781d6
    AND ESP,0xfffffff8                  ; 004781dc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004781df
    MOV ESI,dword ptr [EBP + 0x24]      ; 004781e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004781e5
    MOV EDX,dword ptr [EAX + 0x100]     ; 004781e8
    CMP EDI,EDX                         ; 004781ee
    JL 0x004781f5                       ; 004781f0
        ;   XREF to: 004781f5 (CONDITIONAL_JUMP)  ; LAB_004781f5
    LEA EDI,[EDX + -0x1]                ; 004781f2
    TEST EDI,EDI                        ; 004781f5
        ;   Label: LAB_004781f5
    JGE 0x004781fb                      ; 004781f7
        ;   XREF to: 004781fb (CONDITIONAL_JUMP)  ; LAB_004781fb
    XOR EDI,EDI                         ; 004781f9
    PUSH 0x0                            ; 004781fb
        ;   Label: LAB_004781fb
    MOV ECX,dword ptr [EBP + 0x20]      ; 004781fd
    LEA EAX,[EDI*0x4 + 0x0]             ; 00478200
    PUSH ECX                            ; 00478207
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00478208
    SUB EAX,EDI                         ; 0047820b
    PUSH EBX                            ; 0047820d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047820e
    SHL EAX,0x3                         ; 00478211
    MOV EBX,dword ptr [EBX + 0x5690]    ; 00478214
    ADD EAX,EBX                         ; 0047821a
    PUSH EAX                            ; 0047821c
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 0047821d
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0xe8],EAX      ; 00478222
    FLD float ptr [ESP + 0xe8]          ; 00478229
    ADD ESP,0x10                        ; 00478230
    FLDZ                                ; 00478233
    FXCH                                ; 00478235
    FSTP double ptr [ESP + 0x10]        ; 00478237
    FCOMP double ptr [ESP + 0x10]       ; 0047823b
    FNSTSW AX                           ; 0047823f
    SAHF                                ; 00478241
    JA 0x00478477                       ; 00478242
        ;   XREF to: 00478477 (CONDITIONAL_JUMP)  ; LAB_00478477
    FLD1                                ; 00478248
    FCOMP double ptr [ESP + 0x10]       ; 0047824a
    FNSTSW AX                           ; 0047824e
    SAHF                                ; 00478250
    JC 0x00478477                       ; 00478251
        ;   XREF to: 00478477 (CONDITIONAL_JUMP)  ; LAB_00478477
    MOV dword ptr [ESP + 0xd0],0x40000000 ; 00478257
    MOV EAX,dword ptr [EBP + 0x14]      ; 00478262
    CMP dword ptr [EAX + 0x5698],0x0    ; 00478265
    JNZ 0x0047850c                      ; 0047826c
        ;   XREF to: 0047850c (CONDITIONAL_JUMP)  ; LAB_0047850c
    PUSH EDI                            ; 00478272
    PUSH EAX                            ; 00478273
    MOV EBX,EAX                         ; 00478274
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890 ; 00478276
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0047827b
    MOV dword ptr [ESP + 0xb8],EAX      ; 0047827e
    MOV EAX,EBX                         ; 00478285
    XOR EDI,EDI                         ; 00478287
    MOV EDX,dword ptr [EAX + 0x110]     ; 00478289
    MOV dword ptr [ESP + 0xc4],EDI      ; 0047828f
    TEST EDX,EDX                        ; 00478296
    JLE 0x0047845b                      ; 00478298
        ;   XREF to: 0047845b (CONDITIONAL_JUMP)  ; LAB_0047845b
    MOV dword ptr [ESP + 0xc8],EDI      ; 0047829e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004782a5
        ;   Label: LAB_004782a5
    MOV EDX,dword ptr [ESP + 0xc8]      ; 004782a8
    MOV EAX,dword ptr [EAX + 0x114]     ; 004782af
    ADD EDX,EAX                         ; 004782b5
    IMUL EAX,dword ptr [EDX + 0x18],0xc ; 004782b7
    MOV EDI,dword ptr [ESP + 0xb8]      ; 004782bb
    LEA EBX,[ESP + 0x88]                ; 004782c2
    ADD EAX,EDI                         ; 004782c9
    MOV dword ptr [ESP + 0xcc],EDX      ; 004782cb
    FILD dword ptr [EAX]                ; 004782d2
    FMUL float ptr [0x0065c974]         ; 004782d4 | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 004782da
    FILD dword ptr [EAX + 0x4]          ; 004782dc
    FMUL float ptr [0x0065c974]         ; 004782df | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 004782e5
    FILD dword ptr [EAX + 0x8]          ; 004782e8
    FMUL float ptr [0x0065c974]         ; 004782eb | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 004782f1
    IMUL EAX,dword ptr [EDX + 0x24],0xc ; 004782f4
    LEA EBX,[ESP + 0x94]                ; 004782f8
    ADD EAX,EDI                         ; 004782ff
    FILD dword ptr [EAX]                ; 00478301
    FMUL float ptr [0x0065c974]         ; 00478303 | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 00478309
    FILD dword ptr [EAX + 0x4]          ; 0047830b
    FMUL float ptr [0x0065c974]         ; 0047830e | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 00478314
    FILD dword ptr [EAX + 0x8]          ; 00478317
    FMUL float ptr [0x0065c974]         ; 0047831a | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 00478320
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00478323
    MOV EDI,0x2                         ; 0047832a
    CMP EDI,dword ptr [EAX + 0x4]       ; 0047832f
    JGE 0x0047842a                      ; 00478332
        ;   XREF to: 0047842a (CONDITIONAL_JUMP)  ; LAB_0047842a
    ADD EAX,0x18                        ; 00478338
    MOV dword ptr [ESP + 0xd4],EAX      ; 0047833b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00478342
        ;   Label: LAB_00478342
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 00478349
    ADD EAX,dword ptr [ESP + 0xb8]      ; 0047834d
    LEA EBX,[ESP + 0xac]                ; 00478354
    FILD dword ptr [EAX]                ; 0047835b
    FMUL float ptr [0x0065c974]         ; 0047835d | g_Fixed16ToFloat
    FSTP float ptr [EBX]                ; 00478363
    FILD dword ptr [EAX + 0x4]          ; 00478365
    FMUL float ptr [0x0065c974]         ; 00478368 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x4]          ; 0047836e
    FILD dword ptr [EAX + 0x8]          ; 00478371
    FMUL float ptr [0x0065c974]         ; 00478374 | g_Fixed16ToFloat
    FSTP float ptr [EBX + 0x8]          ; 0047837a
    LEA EAX,[ESP + 0xac]                ; 0047837d
    PUSH EAX                            ; 00478384
    LEA EAX,[ESP + 0x98]                ; 00478385
    PUSH EAX                            ; 0047838c
    LEA EAX,[ESP + 0x90]                ; 0047838d
    PUSH EAX                            ; 00478394
    LEA EAX,[ESP + 0x2c]                ; 00478395
    PUSH EAX                            ; 00478399
    LEA EBX,[ESP + 0xbc]                ; 0047839a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 004783a1
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    LEA EAX,[ESP + 0xa4]                ; 004783a6
    ADD ESP,0x10                        ; 004783ad
    CMP EAX,EBX                         ; 004783b0
    JZ 0x004783de                       ; 004783b2
        ;   XREF to: 004783de (CONDITIONAL_JUMP)  ; LAB_004783de
    MOV EAX,dword ptr [ESP + 0xac]      ; 004783b4
    MOV dword ptr [ESP + 0x94],EAX      ; 004783bb
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004783c2
    MOV dword ptr [ESP + 0x98],EAX      ; 004783c9
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004783d0
    MOV dword ptr [ESP + 0x9c],EAX      ; 004783d7
    MOV EAX,dword ptr [EBP + 0x20]      ; 004783de
        ;   Label: LAB_004783de
    PUSH EAX                            ; 004783e1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004783e2
    PUSH EDX                            ; 004783e5
    LEA EAX,[ESP + 0x28]                ; 004783e6
    PUSH EAX                            ; 004783ea
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 004783eb
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xe4],EAX      ; 004783f0
    FLD float ptr [ESP + 0xe4]          ; 004783f7
    ADD ESP,0xc                         ; 004783fe
    FST float ptr [ESP + 0x1c]          ; 00478401
    FCOMP float ptr [ESP + 0xd0]        ; 00478405
    FNSTSW AX                           ; 0047840c
    SAHF                                ; 0047840e
    JBE 0x00478484                      ; 0047840f
        ;   XREF to: 00478484 (CONDITIONAL_JUMP)  ; LAB_00478484
    ADD dword ptr [ESP + 0xd4],0xc      ; 00478411
        ;   Label: LAB_00478411
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00478419
    INC EDI                             ; 00478420
    CMP EDI,dword ptr [EAX + 0x4]       ; 00478421
    JL 0x00478342                       ; 00478424
        ;   XREF to: 00478342 (CONDITIONAL_JUMP)  ; LAB_00478342
    MOV EBX,dword ptr [ESP + 0xc8]      ; 0047842a
        ;   Label: LAB_0047842a
    ADD EBX,0x48                        ; 00478431
    MOV EDI,dword ptr [ESP + 0xc4]      ; 00478434
    MOV dword ptr [ESP + 0xc8],EBX      ; 0047843b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00478442
    INC EDI                             ; 00478445
    MOV EDX,dword ptr [EBX + 0x110]     ; 00478446
    MOV dword ptr [ESP + 0xc4],EDI      ; 0047844c
    CMP EDI,EDX                         ; 00478453
    JL 0x004782a5                       ; 00478455
        ;   XREF to: 004782a5 (CONDITIONAL_JUMP)  ; LAB_004782a5
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0047845b
        ;   Label: LAB_0047845b
    MOV dword ptr [ESP + 0xbc],EAX      ; 00478462
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00478469
        ;   Label: LAB_00478469
    MOV ESP,EBP                         ; 00478470
    POP EBP                             ; 00478472
    POP EDI                             ; 00478473
    POP ESI                             ; 00478474
    POP EBX                             ; 00478475
    RET                                 ; 00478476
    MOV dword ptr [ESP + 0xbc],0x40000000 ; 00478477
        ;   Label: LAB_00478477
    JMP 0x00478469                      ; 00478482
        ;   XREF to: 00478469 (UNCONDITIONAL_JUMP)  ; LAB_00478469
    FLD float ptr [ESP + 0x1c]          ; 00478484
        ;   Label: LAB_00478484
    FLDZ                                ; 00478488
    FXCH                                ; 0047848a
    FSTP double ptr [ESP + 0x8]         ; 0047848c
    FCOMP double ptr [ESP + 0x8]        ; 00478490
    FNSTSW AX                           ; 00478494
    SAHF                                ; 00478496
    JA 0x00478411                       ; 00478497
        ;   XREF to: 00478411 (CONDITIONAL_JUMP)  ; LAB_00478411
    FLD1                                ; 0047849d
    FCOMP double ptr [ESP + 0x8]        ; 0047849f
    FNSTSW AX                           ; 004784a3
    SAHF                                ; 004784a5
    JC 0x00478411                       ; 004784a6
        ;   XREF to: 00478411 (CONDITIONAL_JUMP)  ; LAB_00478411
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004784ac
    MOV dword ptr [ESP + 0xd0],EAX      ; 004784b0
    TEST ESI,ESI                        ; 004784b7
    JZ 0x00478411                       ; 004784b9
        ;   XREF to: 00478411 (CONDITIONAL_JUMP)  ; LAB_00478411
    FLD float ptr [ESP + 0x44]          ; 004784bf
    FLD float ptr [ESP + 0x48]          ; 004784c3
    FLD float ptr [ESP + 0x4c]          ; 004784c7
    LEA EAX,[ESP + 0x58]                ; 004784cb
    FXCH ST2                            ; 004784cf
    FCHS                                ; 004784d1
    FXCH                                ; 004784d3
    FCHS                                ; 004784d5
    FXCH ST2                            ; 004784d7
    FCHS                                ; 004784d9
    FXCH ST2                            ; 004784db
    FSTP float ptr [ESP + 0x5c]         ; 004784dd
    FXCH                                ; 004784e1
    FSTP float ptr [ESP + 0x60]         ; 004784e3
    FSTP float ptr [ESP + 0x58]         ; 004784e7
    CMP ESI,EAX                         ; 004784eb
    JZ 0x00478411                       ; 004784ed
        ;   XREF to: 00478411 (CONDITIONAL_JUMP)  ; LAB_00478411
    MOV EAX,dword ptr [ESP + 0x58]      ; 004784f3
    MOV dword ptr [ESI],EAX             ; 004784f7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004784f9
    MOV dword ptr [ESI + 0x4],EAX       ; 004784fd
    MOV EAX,dword ptr [ESP + 0x60]      ; 00478500
    MOV dword ptr [ESI + 0x8],EAX       ; 00478504
    JMP 0x00478411                      ; 00478507
        ;   XREF to: 00478411 (UNCONDITIONAL_JUMP)  ; LAB_00478411
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0047850c
        ;   Label: LAB_0047850c
    PUSH ECX                            ; 0047850f
    LEA EAX,[ESP + 0x74]                ; 00478510
    MOV EBX,dword ptr [EBP + 0x14]      ; 00478514
    PUSH EAX                            ; 00478517
    ADD EBX,0x56b0                      ; 00478518
    PUSH EBX                            ; 0047851e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0047851f
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00478524
    MOV EAX,dword ptr [EBP + 0x20]      ; 00478527
    PUSH EAX                            ; 0047852a
    LEA EAX,[ESP + 0xa4]                ; 0047852b
    PUSH EAX                            ; 00478532
    PUSH EBX                            ; 00478533
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00478534
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00478539
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047853c
    MOV EDX,dword ptr [EAX + 0x5694]    ; 0047853f
    MOV EAX,EDI                         ; 00478545
    IMUL EAX,EDX                        ; 00478547
    SHL EAX,0x3                         ; 0047854a
    MOV EDI,EAX                         ; 0047854d
    SHL EAX,0x3                         ; 0047854f
    SUB EAX,EDI                         ; 00478552
    MOV EDI,EAX                         ; 00478554
    MOV EAX,dword ptr [EBP + 0x14]      ; 00478556
    MOV EDX,dword ptr [EBP + 0x14]      ; 00478559
    MOV EAX,dword ptr [EAX + 0x5698]    ; 0047855c
    MOV ECX,dword ptr [EDX + 0x5694]    ; 00478562
    ADD EAX,EDI                         ; 00478568
    XOR EDI,EDI                         ; 0047856a
    TEST ECX,ECX                        ; 0047856c
    JLE 0x0047845b                      ; 0047856e
        ;   XREF to: 0047845b (CONDITIONAL_JUMP)  ; LAB_0047845b
    MOV dword ptr [ESP + 0xc0],EBX      ; 00478574
    MOV EBX,EAX                         ; 0047857b
    LEA EAX,[ESP + 0xa0]                ; 0047857d
        ;   Label: LAB_0047857d
    PUSH EAX                            ; 00478584
    LEA EAX,[ESP + 0x74]                ; 00478585
    PUSH EAX                            ; 00478589
    PUSH EBX                            ; 0047858a
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 0047858b
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xe4],EAX      ; 00478590
    FLD float ptr [ESP + 0xe4]          ; 00478597
    ADD ESP,0xc                         ; 0047859e
    FST float ptr [ESP + 0x18]          ; 004785a1
    FCOMP float ptr [ESP + 0xd0]        ; 004785a5
    FNSTSW AX                           ; 004785ac
    SAHF                                ; 004785ae
    JBE 0x004785c8                      ; 004785af
        ;   XREF to: 004785c8 (CONDITIONAL_JUMP)  ; LAB_004785c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004785b1
        ;   Label: LAB_004785b1
    INC EDI                             ; 004785b4
    MOV EDX,dword ptr [EAX + 0x5694]    ; 004785b5
    ADD EBX,0x38                        ; 004785bb
    CMP EDI,EDX                         ; 004785be
    JGE 0x0047845b                      ; 004785c0
        ;   XREF to: 0047845b (CONDITIONAL_JUMP)  ; LAB_0047845b
    JMP 0x0047857d                      ; 004785c6
        ;   XREF to: 0047857d (UNCONDITIONAL_JUMP)  ; LAB_0047857d
    FLD float ptr [ESP + 0x18]          ; 004785c8
        ;   Label: LAB_004785c8
    FLDZ                                ; 004785cc
    FXCH                                ; 004785ce
    FSTP double ptr [ESP]               ; 004785d0
    FCOMP double ptr [ESP]              ; 004785d3
    FNSTSW AX                           ; 004785d6
    SAHF                                ; 004785d8
    JA 0x004785b1                       ; 004785d9
        ;   XREF to: 004785b1 (CONDITIONAL_JUMP)  ; LAB_004785b1
    FLD1                                ; 004785db
    FCOMP double ptr [ESP]              ; 004785dd
    FNSTSW AX                           ; 004785e0
    SAHF                                ; 004785e2
    JC 0x004785b1                       ; 004785e3
        ;   XREF to: 004785b1 (CONDITIONAL_JUMP)  ; LAB_004785b1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004785e5
    MOV dword ptr [ESP + 0xd0],EAX      ; 004785e9
    TEST ESI,ESI                        ; 004785f0
    JZ 0x004785b1                       ; 004785f2
        ;   XREF to: 004785b1 (CONDITIONAL_JUMP)  ; LAB_004785b1
    LEA EAX,[EBX + 0x24]                ; 004785f4
    FLD float ptr [EAX]                 ; 004785f7
    FCHS                                ; 004785f9
    FSTP float ptr [ESP + 0x64]         ; 004785fb
    FLD float ptr [EAX + 0x4]           ; 004785ff
    FCHS                                ; 00478602
    FSTP float ptr [ESP + 0x68]         ; 00478604
    FLD float ptr [EAX + 0x8]           ; 00478608
    LEA EAX,[ESP + 0x64]                ; 0047860b
    PUSH EAX                            ; 0047860f
    LEA EAX,[ESP + 0x80]                ; 00478610
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00478617
    PUSH EAX                            ; 0047861e
    FCHS                                ; 0047861f
    PUSH ECX                            ; 00478621
    FSTP float ptr [ESP + 0x78]         ; 00478622
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00478626
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0047862b
    CMP ESI,EAX                         ; 0047862e
    JZ 0x004785b1                       ; 00478630
        ;   XREF to: 004785b1 (CONDITIONAL_JUMP)  ; LAB_004785b1
    MOV EDX,dword ptr [EAX]             ; 00478636
    MOV dword ptr [ESI],EDX             ; 00478638
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047863a
    MOV dword ptr [ESI + 0x4],EDX       ; 0047863d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00478640
    MOV dword ptr [ESI + 0x8],EDX       ; 00478643
    JMP 0x004785b1                      ; 00478646
        ;   XREF to: 004785b1 (UNCONDITIONAL_JUMP)  ; LAB_004785b1

