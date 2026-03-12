; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; CBoundingBox3D   Stack[-0xcc]:24  local_cc
; CVector3f        Stack[-0xb4]:12  local_b4
; CVector3f        Stack[-0xa8]:12  local_a8
; CVector3f        Stack[-0x9c]:12  local_9c
; CVector3f        Stack[-0x90]:12  local_90
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; int              Stack[-0x30]:4  local_30
; SPanel *         Stack[-0x2c]:4  local_2c
; SGem *           Stack[-0x28]:4  local_28
; int *            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509330
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
    PUSH ESI                            ; 00509331
    PUSH EDI                            ; 00509332
    PUSH EBP                            ; 00509333
    MOV EBP,ESP                         ; 00509334
    SUB ESP,0xc4                        ; 00509336
    AND ESP,0xfffffff8                  ; 0050933c
    MOV EBX,dword ptr [EBP + 0x20]      ; 0050933f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00509342
    ADD EAX,0x158                       ; 00509345
    PUSH EAX                            ; 0050934a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0050934b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x5678]              ; 00509350
    ADD ESP,0x4                         ; 00509356
    MOV EAX,dword ptr [ESI]             ; 00509359
    MOV dword ptr [ESP + 0xc],EAX       ; 0050935b
    LEA EAX,[ESI + 0x4]                 ; 0050935f
    MOV EAX,dword ptr [EAX]             ; 00509362
    MOV dword ptr [ESP + 0x10],EAX      ; 00509364
    LEA EAX,[ESI + 0x8]                 ; 00509368
    MOV EAX,dword ptr [EAX]             ; 0050936b
    MOV dword ptr [ESP + 0x14],EAX      ; 0050936d
    MOV EAX,dword ptr [ESI + 0xc]       ; 00509371
    ADD ESI,0xc                         ; 00509374
    MOV dword ptr [ESP + 0x18],EAX      ; 00509377
    LEA EAX,[ESI + 0x4]                 ; 0050937b
    MOV EAX,dword ptr [EAX]             ; 0050937e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00509380
    LEA EAX,[ESI + 0x8]                 ; 00509384
    MOV EAX,dword ptr [EAX]             ; 00509387
    MOV dword ptr [ESP + 0x20],EAX      ; 00509389
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050938d
    MOV EDX,0x3f8147ae                  ; 00509390
    ADD EAX,0xaa0                       ; 00509395
    XOR ECX,ECX                         ; 0050939a
    MOV dword ptr [ESP + 0xb0],EAX      ; 0050939c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005093a3
    MOV dword ptr [ESP + 0xbc],EDX      ; 005093a6
    ADD EAX,0x5f0                       ; 005093ad
    MOV dword ptr [ESP + 0xb8],ECX      ; 005093b2
    MOV dword ptr [ESP + 0xac],EAX      ; 005093b9
    MOV EAX,dword ptr [ESP + 0xac]      ; 005093c0
        ;   Label: LAB_005093c0
    CMP dword ptr [EAX],0x0             ; 005093c7
    JNZ 0x0050954b                      ; 005093ca
        ;   XREF to: 0050954b (CONDITIONAL_JUMP)  ; LAB_0050954b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005093d0
        ;   Label: LAB_005093d0
    ADD EAX,dword ptr [ESP + 0xb8]      ; 005093d7
    XOR ESI,ESI                         ; 005093de
    MOV dword ptr [ESP + 0xa8],EAX      ; 005093e0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005093e7
        ;   Label: LAB_005093e7
    PUSH ECX                            ; 005093ea
    MOV EDI,dword ptr [EBP + 0x18]      ; 005093eb
    PUSH EDI                            ; 005093ee
    MOV EDI,dword ptr [ESP + 0xb0]      ; 005093ef
    ADD EDI,0x3c                        ; 005093f6
    ADD EDI,ESI                         ; 005093f9
    PUSH EDI                            ; 005093fb
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 005093fc
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xcc],EAX      ; 00509401
    FLD float ptr [ESP + 0xcc]          ; 00509408
    ADD ESP,0xc                         ; 0050940f
    FST float ptr [ESP + 0x4]           ; 00509412
    FLDZ                                ; 00509416
    FCOMPP                              ; 00509418
    FNSTSW AX                           ; 0050941a
    SAHF                                ; 0050941c
    JA 0x00509488                       ; 0050941d
        ;   XREF to: 00509488 (CONDITIONAL_JUMP)  ; LAB_00509488
    FLD float ptr [ESP + 0x4]           ; 0050941f
    FCOMP float ptr [ESP + 0xbc]        ; 00509423
    FNSTSW AX                           ; 0050942a
    SAHF                                ; 0050942c
    JNC 0x00509488                      ; 0050942d
        ;   XREF to: 00509488 (CONDITIONAL_JUMP)  ; LAB_00509488
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050942f
    MOV dword ptr [ESP + 0xbc],EAX      ; 00509433
    LEA EAX,[EDI + 0x24]                ; 0050943a
    FLD float ptr [EAX]                 ; 0050943d
    FCHS                                ; 0050943f
    FSTP float ptr [ESP + 0x90]         ; 00509441
    FLD float ptr [EAX + 0x4]           ; 00509448
    FCHS                                ; 0050944b
    FSTP float ptr [ESP + 0x94]         ; 0050944d
    FLD float ptr [EAX + 0x8]           ; 00509454
    FCHS                                ; 00509457
    LEA EAX,[ESP + 0x90]                ; 00509459
    FSTP float ptr [ESP + 0x98]         ; 00509460
    CMP EBX,EAX                         ; 00509467
    JZ 0x00509488                       ; 00509469
        ;   XREF to: 00509488 (CONDITIONAL_JUMP)  ; LAB_00509488
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050946b
    MOV dword ptr [EBX],EAX             ; 00509472
    MOV EAX,dword ptr [ESP + 0x94]      ; 00509474
    MOV dword ptr [EBX + 0x4],EAX       ; 0050947b
    MOV EAX,dword ptr [ESP + 0x98]      ; 0050947e
    MOV dword ptr [EBX + 0x8],EAX       ; 00509485
    ADD ESI,0x38                        ; 00509488
        ;   Label: LAB_00509488
    CMP ESI,0x70                        ; 0050948b
    JNZ 0x005093e7                      ; 0050948e
        ;   XREF to: 005093e7 (CONDITIONAL_JUMP)  ; LAB_005093e7
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00509494
    MOV EAX,dword ptr [ESP + 0xac]      ; 0050949b
    ADD EDX,0xb8                        ; 005094a2
    ADD EAX,0x64                        ; 005094a8
    MOV dword ptr [ESP + 0xb8],EDX      ; 005094ab
    MOV dword ptr [ESP + 0xac],EAX      ; 005094b2
    CMP EDX,0x8a0                       ; 005094b9
    JNZ 0x005093c0                      ; 005094bf
        ;   XREF to: 005093c0 (CONDITIONAL_JUMP)  ; LAB_005093c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005094c5
    ADD EAX,0x450                       ; 005094c8
    PUSH EAX                            ; 005094cd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005094ce
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA ESI,[EAX + 0x5678]              ; 005094d3
    ADD ESP,0x4                         ; 005094d9
    LEA EAX,[ESP + 0xc]                 ; 005094dc
    MOV EDI,ESI                         ; 005094e0
    CMP EAX,ESI                         ; 005094e2
    JZ 0x005094fa                       ; 005094e4
        ;   XREF to: 005094fa (CONDITIONAL_JUMP)  ; LAB_005094fa
    MOV EAX,dword ptr [ESI]             ; 005094e6
    MOV dword ptr [ESP + 0xc],EAX       ; 005094e8
    MOV EAX,dword ptr [ESI + 0x4]       ; 005094ec
    MOV dword ptr [ESP + 0x10],EAX      ; 005094ef
    MOV EAX,dword ptr [ESI + 0x8]       ; 005094f3
    MOV dword ptr [ESP + 0x14],EAX      ; 005094f6
    LEA EAX,[ESP + 0x18]                ; 005094fa
        ;   Label: LAB_005094fa
    LEA ESI,[EDI + 0xc]                 ; 005094fe
    CMP EAX,ESI                         ; 00509501
    JNZ 0x00509627                      ; 00509503
        ;   XREF to: 00509627 (CONDITIONAL_JUMP)  ; LAB_00509627
    MOV EAX,dword ptr [EBP + 0x14]      ; 00509509
        ;   Label: LAB_00509509
    ADD EAX,0x1340                      ; 0050950c
    MOV ESI,EAX                         ; 00509511
    ADD EAX,0xc0                        ; 00509513
    MOV dword ptr [ESP + 0xb4],EAX      ; 00509518
    FLD float ptr [ESI + 0x18]          ; 0050951f
        ;   Label: LAB_0050951f
    FLDZ                                ; 00509522
    FCOMPP                              ; 00509524
    FNSTSW AX                           ; 00509526
    SAHF                                ; 00509528
    JC 0x00509640                       ; 00509529
        ;   XREF to: 00509640 (CONDITIONAL_JUMP)  ; LAB_00509640
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0050952f
        ;   Label: LAB_0050952f
    ADD ESI,0x60                        ; 00509536
    CMP ESI,EDX                         ; 00509539
    JNZ 0x0050951f                      ; 0050953b
        ;   XREF to: 0050951f (CONDITIONAL_JUMP)  ; LAB_0050951f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0050953d
    MOV ESP,EBP                         ; 00509544
    POP EBP                             ; 00509546
    POP EDI                             ; 00509547
    POP ESI                             ; 00509548
    POP EBX                             ; 00509549
    RET                                 ; 0050954a
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050954b
        ;   Label: LAB_0050954b
    FLD float ptr [ESI]                 ; 0050954e
    FSUB float ptr [EAX + 0xc]          ; 00509550
    FSTP float ptr [ESP + 0x24]         ; 00509553
    FLD float ptr [ESI + 0x4]           ; 00509557
    FSUB float ptr [EAX + 0x10]         ; 0050955a
    FSTP float ptr [ESP + 0x28]         ; 0050955d
    FLD float ptr [ESI + 0x8]           ; 00509561
    FSUB float ptr [EAX + 0x14]         ; 00509564
    LEA EAX,[ESP + 0x24]                ; 00509567
    PUSH EAX                            ; 0050956b
    LEA EAX,[ESP + 0x70]                ; 0050956c
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00509570
    PUSH EAX                            ; 00509577
    ADD ESI,0x24                        ; 00509578
    PUSH ESI                            ; 0050957b
    FSTP float ptr [ESP + 0x38]         ; 0050957c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00509580
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00509585
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00509588
    PUSH EDI                            ; 0050958b
    LEA EAX,[ESP + 0xa0]                ; 0050958c
    PUSH EAX                            ; 00509593
    PUSH ESI                            ; 00509594
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00509595
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050959a
    LEA EAX,[ESP + 0x30]                ; 0050959d
    PUSH EAX                            ; 005095a1
    LEA EAX,[ESP + 0xa0]                ; 005095a2
    PUSH EAX                            ; 005095a9
    LEA EAX,[ESP + 0x74]                ; 005095aa
    PUSH EAX                            ; 005095ae
    LEA EAX,[ESP + 0x18]                ; 005095af
    PUSH EAX                            ; 005095b3
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 005095b4
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0xd0],EAX      ; 005095b9
    FLD float ptr [ESP + 0xd0]          ; 005095c0
    ADD ESP,0x10                        ; 005095c7
    FST float ptr [ESP]                 ; 005095ca
    FLDZ                                ; 005095cd
    FCOMPP                              ; 005095cf
    FNSTSW AX                           ; 005095d1
    SAHF                                ; 005095d3
    JA 0x005093d0                       ; 005095d4
        ;   XREF to: 005093d0 (CONDITIONAL_JUMP)  ; LAB_005093d0
    FLD float ptr [ESP]                 ; 005095da
    FCOMP float ptr [ESP + 0xbc]        ; 005095dd
    FNSTSW AX                           ; 005095e4
    SAHF                                ; 005095e6
    JNC 0x005093d0                      ; 005095e7
        ;   XREF to: 005093d0 (CONDITIONAL_JUMP)  ; LAB_005093d0
    MOV EAX,dword ptr [ESP]             ; 005095ed
    MOV dword ptr [ESP + 0xbc],EAX      ; 005095f0
    LEA EAX,[ESP + 0x30]                ; 005095f7
    PUSH EAX                            ; 005095fb
    LEA EAX,[ESP + 0x4c]                ; 005095fc
    PUSH EAX                            ; 00509600
    PUSH ESI                            ; 00509601
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00509602
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00509607
    CMP EBX,EAX                         ; 0050960a
    JZ 0x005093d0                       ; 0050960c
        ;   XREF to: 005093d0 (CONDITIONAL_JUMP)  ; LAB_005093d0
    MOV EDX,dword ptr [EAX]             ; 00509612
    MOV dword ptr [EBX],EDX             ; 00509614
    MOV EDX,dword ptr [EAX + 0x4]       ; 00509616
    MOV dword ptr [EBX + 0x4],EDX       ; 00509619
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050961c
    MOV dword ptr [EBX + 0x8],EDX       ; 0050961f
    JMP 0x005093d0                      ; 00509622
        ;   XREF to: 005093d0 (UNCONDITIONAL_JUMP)  ; LAB_005093d0
    MOV EAX,dword ptr [ESI]             ; 00509627
        ;   Label: LAB_00509627
    MOV dword ptr [ESP + 0x18],EAX      ; 00509629
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050962d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00509630
    MOV EAX,dword ptr [ESI + 0x8]       ; 00509634
    MOV dword ptr [ESP + 0x20],EAX      ; 00509637
    JMP 0x00509509                      ; 0050963b
        ;   XREF to: 00509509 (UNCONDITIONAL_JUMP)  ; LAB_00509509
    MOV EDI,dword ptr [EBP + 0x18]      ; 00509640
        ;   Label: LAB_00509640
    LEA EAX,[ESI + 0x1c]                ; 00509643
    FLD float ptr [EDI]                 ; 00509646
    FSUB float ptr [EAX]                ; 00509648
    FSTP float ptr [ESP + 0x3c]         ; 0050964a
    FLD float ptr [EDI + 0x4]           ; 0050964e
    FSUB float ptr [EAX + 0x4]          ; 00509651
    FSTP float ptr [ESP + 0x40]         ; 00509654
    FLD float ptr [EDI + 0x8]           ; 00509658
    FSUB float ptr [EAX + 0x8]          ; 0050965b
    LEA EAX,[ESP + 0x3c]                ; 0050965e
    PUSH EAX                            ; 00509662
    LEA EAX,[ESP + 0x7c]                ; 00509663
    PUSH EAX                            ; 00509667
    LEA EDI,[ESI + 0x34]                ; 00509668
    PUSH EDI                            ; 0050966b
    FSTP float ptr [ESP + 0x50]         ; 0050966c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00509670
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00509675
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00509678
    PUSH EAX                            ; 0050967b
    LEA EAX,[ESP + 0x64]                ; 0050967c
    PUSH EAX                            ; 00509680
    PUSH EDI                            ; 00509681
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00509682
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00509687
    LEA EAX,[ESP + 0x84]                ; 0050968a
    PUSH EAX                            ; 00509691
    LEA EAX,[ESP + 0x64]                ; 00509692
    PUSH EAX                            ; 00509696
    LEA EAX,[ESP + 0x80]                ; 00509697
    PUSH EAX                            ; 0050969e
    LEA EAX,[ESP + 0x18]                ; 0050969f
    PUSH EAX                            ; 005096a3
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 005096a4
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [ESP + 0xd0],EAX      ; 005096a9
    FLD float ptr [ESP + 0xd0]          ; 005096b0
    ADD ESP,0x10                        ; 005096b7
    FST float ptr [ESP + 0x8]           ; 005096ba
    FLDZ                                ; 005096be
    FCOMPP                              ; 005096c0
    FNSTSW AX                           ; 005096c2
    SAHF                                ; 005096c4
    JA 0x0050952f                       ; 005096c5
        ;   XREF to: 0050952f (CONDITIONAL_JUMP)  ; LAB_0050952f
    FLD float ptr [ESP + 0x8]           ; 005096cb
    FCOMP float ptr [ESP + 0xbc]        ; 005096cf
    FNSTSW AX                           ; 005096d6
    SAHF                                ; 005096d8
    JNC 0x0050952f                      ; 005096d9
        ;   XREF to: 0050952f (CONDITIONAL_JUMP)  ; LAB_0050952f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005096df
    MOV dword ptr [ESP + 0xbc],EAX      ; 005096e3
    LEA EAX,[ESP + 0x84]                ; 005096ea
    PUSH EAX                            ; 005096f1
    LEA EAX,[ESP + 0x58]                ; 005096f2
    PUSH EAX                            ; 005096f6
    PUSH EDI                            ; 005096f7
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005096f8
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005096fd
    CMP EBX,EAX                         ; 00509700
    JZ 0x0050952f                       ; 00509702
        ;   XREF to: 0050952f (CONDITIONAL_JUMP)  ; LAB_0050952f
    MOV EDX,dword ptr [EAX]             ; 00509708
    MOV dword ptr [EBX],EDX             ; 0050970a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050970c
    MOV dword ptr [EBX + 0x4],EDX       ; 0050970f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00509712
    MOV dword ptr [EBX + 0x8],EDX       ; 00509715
    JMP 0x0050952f                      ; 00509718
        ;   XREF to: 0050952f (UNCONDITIONAL_JUMP)  ; LAB_0050952f

