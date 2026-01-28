; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0 (CDemonTriangle *triangle,float x,float z,float *out_height)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   z
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
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 at 004787e3
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 00571f20
;   core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0 at 0057160a
;   core_stairs.cpp_FUN_005ba6a0 at 005ba6d4
;
; Referenced Globals:
;   double g_MinFloorNormal = -0.340000000000000
;   double g_Epsilon = 0.0100000000000000
;   CVector3f g_FloorRayDirection
;   undefined4 g_FloorCacheHeight
;   undefined4 g_FloorCacheReserved
;   byte g_FloorCacheValid
;
; Called Functions:
;   core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
;   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b2f0
        ;   Label: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
    PUSH ESI                            ; 0049b2f1
    PUSH EDI                            ; 0049b2f2
    PUSH EBP                            ; 0049b2f3
    MOV EBP,ESP                         ; 0049b2f4
    SUB ESP,0x78                        ; 0049b2f6
    AND ESP,0xfffffff8                  ; 0049b2f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b2fc
    MOV ESI,dword ptr [EBP + 0x18]      ; 0049b2ff
    FLD float ptr [EBX + 0x28]          ; 0049b302
    FCOMP double ptr [0x00622e1a]       ; 0049b305 | g_MinFloorNormal
    FNSTSW AX                           ; 0049b30b
    SAHF                                ; 0049b30d
    JA 0x0049b554                       ; 0049b30e
        ;   XREF to: 0049b554 (CONDITIONAL_JUMP)  ; LAB_0049b554
    FLD float ptr [EBX]                 ; 0049b314
    FSUB float ptr [ESI]                ; 0049b316
    FSTP float ptr [ESP + 0x3c]         ; 0049b318
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049b31c
    MOV dword ptr [ESP + 0x40],EAX      ; 0049b31f
    FLD float ptr [EBX + 0x8]           ; 0049b323
    FSUB float ptr [ESI + 0x8]          ; 0049b326
    FSTP float ptr [ESP + 0x44]         ; 0049b329
    FLD float ptr [EBX + 0xc]           ; 0049b32d
    FSUB float ptr [ESI]                ; 0049b330
    FSTP float ptr [ESP + 0x30]         ; 0049b332
    MOV EAX,dword ptr [EBX + 0x10]      ; 0049b336
    MOV dword ptr [ESP + 0x34],EAX      ; 0049b339
    FLD float ptr [EBX + 0x14]          ; 0049b33d
    FSUB float ptr [ESI + 0x8]          ; 0049b340
    FSTP float ptr [ESP + 0x38]         ; 0049b343
    FLD float ptr [EBX + 0x18]          ; 0049b347
    FSUB float ptr [ESI]                ; 0049b34a
    FSTP float ptr [ESP + 0x18]         ; 0049b34c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0049b350
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049b353
    FLD float ptr [EBX + 0x20]          ; 0049b357
    FSUB float ptr [ESI + 0x8]          ; 0049b35a
    FLD float ptr [ESP + 0x40]          ; 0049b35d
    FXCH                                ; 0049b361
    FSTP float ptr [ESP + 0x20]         ; 0049b363
    FCOMP float ptr [ESP + 0x34]        ; 0049b367
    FNSTSW AX                           ; 0049b36b
    SAHF                                ; 0049b36d
    JC 0x0049b55d                       ; 0049b36e
        ;   XREF to: 0049b55d (CONDITIONAL_JUMP)  ; LAB_0049b55d
    FLD float ptr [ESP + 0x34]          ; 0049b374
        ;   Label: LAB_0049b374
    FCOMP float ptr [ESP + 0x1c]        ; 0049b378
    FNSTSW AX                           ; 0049b37c
    SAHF                                ; 0049b37e
    JNC 0x0049b3e1                      ; 0049b37f
        ;   XREF to: 0049b3e1 (CONDITIONAL_JUMP)  ; LAB_0049b3e1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049b381
    MOV dword ptr [ESP + 0x54],EAX      ; 0049b385
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049b389
    MOV dword ptr [ESP + 0x58],EAX      ; 0049b38d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049b391
    LEA EDI,[ESP + 0x30]                ; 0049b395
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049b399
    LEA EAX,[ESP + 0x18]                ; 0049b39d
    CMP EDI,EAX                         ; 0049b3a1
    JZ 0x0049b3bd                       ; 0049b3a3
        ;   XREF to: 0049b3bd (CONDITIONAL_JUMP)  ; LAB_0049b3bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049b3a5
    MOV dword ptr [ESP + 0x30],EAX      ; 0049b3a9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049b3ad
    MOV dword ptr [ESP + 0x34],EAX      ; 0049b3b1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049b3b5
    MOV dword ptr [ESP + 0x38],EAX      ; 0049b3b9
    LEA EAX,[ESP + 0x18]                ; 0049b3bd
        ;   Label: LAB_0049b3bd
    LEA EDI,[ESP + 0x54]                ; 0049b3c1
    CMP EAX,EDI                         ; 0049b3c5
    JZ 0x0049b3e1                       ; 0049b3c7
        ;   XREF to: 0049b3e1 (CONDITIONAL_JUMP)  ; LAB_0049b3e1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0049b3c9
    MOV dword ptr [ESP + 0x18],EAX      ; 0049b3cd
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049b3d1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049b3d5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049b3d9
    MOV dword ptr [ESP + 0x20],EAX      ; 0049b3dd
    FLD float ptr [ESP + 0x1c]          ; 0049b3e1
        ;   Label: LAB_0049b3e1
    FCOMP float ptr [ESI + 0x4]         ; 0049b3e5
    FNSTSW AX                           ; 0049b3e8
    SAHF                                ; 0049b3ea
    JA 0x0049b554                       ; 0049b3eb
        ;   XREF to: 0049b554 (CONDITIONAL_JUMP)  ; LAB_0049b554
    FLD float ptr [ESP + 0x40]          ; 0049b3f1
    FCOMP float ptr [ESP + 0x34]        ; 0049b3f5
    FNSTSW AX                           ; 0049b3f9
    SAHF                                ; 0049b3fb
    JNC 0x0049b45e                      ; 0049b3fc
        ;   XREF to: 0049b45e (CONDITIONAL_JUMP)  ; LAB_0049b45e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049b3fe
    MOV dword ptr [ESP + 0xc],EAX       ; 0049b402
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049b406
    MOV dword ptr [ESP + 0x10],EAX      ; 0049b40a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0049b40e
    LEA EDI,[ESP + 0x3c]                ; 0049b412
    MOV dword ptr [ESP + 0x14],EAX      ; 0049b416
    LEA EAX,[ESP + 0x30]                ; 0049b41a
    CMP EDI,EAX                         ; 0049b41e
    JZ 0x0049b43a                       ; 0049b420
        ;   XREF to: 0049b43a (CONDITIONAL_JUMP)  ; LAB_0049b43a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049b422
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049b426
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049b42a
    MOV dword ptr [ESP + 0x40],EAX      ; 0049b42e
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049b432
    MOV dword ptr [ESP + 0x44],EAX      ; 0049b436
    LEA EDI,[ESP + 0x30]                ; 0049b43a
        ;   Label: LAB_0049b43a
    LEA EAX,[ESP + 0xc]                 ; 0049b43e
    CMP EDI,EAX                         ; 0049b442
    JZ 0x0049b45e                       ; 0049b444
        ;   XREF to: 0049b45e (CONDITIONAL_JUMP)  ; LAB_0049b45e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049b446
    MOV dword ptr [ESP + 0x30],EAX      ; 0049b44a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049b44e
    MOV dword ptr [ESP + 0x34],EAX      ; 0049b452
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049b456
    MOV dword ptr [ESP + 0x38],EAX      ; 0049b45a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049b45e
        ;   Label: LAB_0049b45e
    FLD float ptr [ESP + 0x40]          ; 0049b461
    FCOMP float ptr [EAX]               ; 0049b465
    FNSTSW AX                           ; 0049b467
    SAHF                                ; 0049b469
    JC 0x0049b554                       ; 0049b46a
        ;   XREF to: 0049b554 (CONDITIONAL_JUMP)  ; LAB_0049b554
    FLD float ptr [ESP + 0x44]          ; 0049b470
    FMUL ST0                            ; 0049b474
    FLD float ptr [ESP + 0x3c]          ; 0049b476
    FMUL ST0                            ; 0049b47a
    FLD float ptr [EBP + 0x1c]          ; 0049b47c
    FMUL ST0                            ; 0049b47f
    FXCH                                ; 0049b481
    FADDP ST2,ST0                       ; 0049b483
    FCOMPP                              ; 0049b485
    FNSTSW AX                           ; 0049b487
    SAHF                                ; 0049b489
    JA 0x0049b5c6                       ; 0049b48a
        ;   XREF to: 0049b5c6 (CONDITIONAL_JUMP)  ; LAB_0049b5c6
    MOV EDX,dword ptr [EBP + 0x20]      ; 0049b490
    PUSH EDX                            ; 0049b493
    LEA EAX,[ESP + 0x34]                ; 0049b494
    PUSH dword ptr [EBP + 0x1c]         ; 0049b498
    PUSH EAX                            ; 0049b49b
    LEA EAX,[ESP + 0x48]                ; 0049b49c
    PUSH EAX                            ; 0049b4a0
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180 ; 0049b4a1
        ;   XREF to: 0049b180 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f * vertex1, CVector3f * vertex2, float rayRadius, float * outHeight)
    ADD ESP,0x10                        ; 0049b4a6
    MOV ECX,dword ptr [EBP + 0x20]      ; 0049b4a9
    PUSH ECX                            ; 0049b4ac
    MOV EDI,EAX                         ; 0049b4ad
    LEA EAX,[ESP + 0x1c]                ; 0049b4af
    PUSH dword ptr [EBP + 0x1c]         ; 0049b4b3
    PUSH EAX                            ; 0049b4b6
    LEA EAX,[ESP + 0x3c]                ; 0049b4b7
    PUSH EAX                            ; 0049b4bb
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180 ; 0049b4bc
        ;   XREF to: 0049b180 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f * vertex1, CVector3f * vertex2, float rayRadius, float * outHeight)
    ADD ESP,0x10                        ; 0049b4c1
    OR EDI,EAX                          ; 0049b4c4
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049b4c6
    PUSH EAX                            ; 0049b4c9
    LEA EAX,[ESP + 0x40]                ; 0049b4ca
    PUSH dword ptr [EBP + 0x1c]         ; 0049b4ce
    PUSH EAX                            ; 0049b4d1
    LEA EAX,[ESP + 0x24]                ; 0049b4d2
    PUSH EAX                            ; 0049b4d6
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180 ; 0049b4d7
        ;   XREF to: 0049b180 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180(CVector3f * vertex1, CVector3f * vertex2, float rayRadius, float * outHeight)
    FLD float ptr [EBX + 0x24]          ; 0049b4dc
    FMUL ST0                            ; 0049b4df
    FLD float ptr [EBX + 0x2c]          ; 0049b4e1
    FMUL ST0                            ; 0049b4e4
    FADDP                               ; 0049b4e6
    OR EDI,EAX                          ; 0049b4e8
    FSQRT                               ; 0049b4ea
    ADD ESP,0x10                        ; 0049b4ec
    MOV AH,byte ptr [0x02cee5c8]        ; 0049b4ef | g_FloorCacheValid
    FSTP double ptr [ESP]               ; 0049b4f5
    TEST AH,0x1                         ; 0049b4f8
    JZ 0x0049b5db                       ; 0049b4fb
        ;   XREF to: 0049b5db (CONDITIONAL_JUMP)  ; LAB_0049b5db
    FLD double ptr [ESP]                ; 0049b501
        ;   Label: LAB_0049b501
    FCOMP double ptr [0x00622e22]       ; 0049b504 | g_Epsilon
    FNSTSW AX                           ; 0049b50a
    SAHF                                ; 0049b50c
    JNC 0x0049b604                      ; 0049b50d
        ;   XREF to: 0049b604 (CONDITIONAL_JUMP)  ; LAB_0049b604
    TEST EDI,EDI                        ; 0049b513
    JNZ 0x0049b54b                      ; 0049b515
        ;   XREF to: 0049b54b (CONDITIONAL_JUMP)  ; LAB_0049b54b
    PUSH 0x2cee5bc                      ; 0049b517 | g_FloorRayDirection
    PUSH ESI                            ; 0049b51c
    PUSH EBX                            ; 0049b51d
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 0049b51e
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049b523
    FLD float ptr [ESP + 0x80]          ; 0049b52a
    FLDZ                                ; 0049b531
    ADD ESP,0xc                         ; 0049b533
    FCOMPP                              ; 0049b536
    FNSTSW AX                           ; 0049b538
    SAHF                                ; 0049b53a
    JA 0x0049b54b                       ; 0049b53b
        ;   XREF to: 0049b54b (CONDITIONAL_JUMP)  ; LAB_0049b54b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0049b53d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049b540
    MOV EDI,0x1                         ; 0049b544
    MOV dword ptr [EBX],EAX             ; 0049b549
    MOV EAX,EDI                         ; 0049b54b
        ;   Label: LAB_0049b54b
    MOV ESP,EBP                         ; 0049b54d
    POP EBP                             ; 0049b54f
    POP EDI                             ; 0049b550
    POP ESI                             ; 0049b551
    POP EBX                             ; 0049b552
    RET                                 ; 0049b553
    XOR EAX,EAX                         ; 0049b554
        ;   Label: LAB_0049b554
    MOV ESP,EBP                         ; 0049b556
    POP EBP                             ; 0049b558
    POP EDI                             ; 0049b559
    POP ESI                             ; 0049b55a
    POP EBX                             ; 0049b55b
    RET                                 ; 0049b55c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049b55d
        ;   Label: LAB_0049b55d
    MOV dword ptr [ESP + 0x48],EAX      ; 0049b561
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049b565
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049b569
    MOV EAX,dword ptr [ESP + 0x44]      ; 0049b56d
    LEA EDI,[ESP + 0x3c]                ; 0049b571
    MOV dword ptr [ESP + 0x50],EAX      ; 0049b575
    LEA EAX,[ESP + 0x30]                ; 0049b579
    CMP EDI,EAX                         ; 0049b57d
    JZ 0x0049b599                       ; 0049b57f
        ;   XREF to: 0049b599 (CONDITIONAL_JUMP)  ; LAB_0049b599
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049b581
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049b585
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049b589
    MOV dword ptr [ESP + 0x40],EAX      ; 0049b58d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049b591
    MOV dword ptr [ESP + 0x44],EAX      ; 0049b595
    LEA EDI,[ESP + 0x30]                ; 0049b599
        ;   Label: LAB_0049b599
    LEA EAX,[ESP + 0x48]                ; 0049b59d
    CMP EDI,EAX                         ; 0049b5a1
    JZ 0x0049b374                       ; 0049b5a3
        ;   XREF to: 0049b374 (CONDITIONAL_JUMP)  ; LAB_0049b374
    MOV EAX,dword ptr [ESP + 0x48]      ; 0049b5a9
    MOV dword ptr [ESP + 0x30],EAX      ; 0049b5ad
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0049b5b1
    MOV dword ptr [ESP + 0x34],EAX      ; 0049b5b5
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049b5b9
    MOV dword ptr [ESP + 0x38],EAX      ; 0049b5bd
    JMP 0x0049b374                      ; 0049b5c1
        ;   XREF to: 0049b374 (UNCONDITIONAL_JUMP)  ; LAB_0049b374
    MOV EBX,dword ptr [EBP + 0x20]      ; 0049b5c6
        ;   Label: LAB_0049b5c6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049b5c9
    MOV dword ptr [EBX],EAX             ; 0049b5cd
    MOV EAX,0x1                         ; 0049b5cf
    MOV ESP,EBP                         ; 0049b5d4
    POP EBP                             ; 0049b5d6
    POP EDI                             ; 0049b5d7
    POP ESI                             ; 0049b5d8
    POP EBX                             ; 0049b5d9
    RET                                 ; 0049b5da
    MOV DL,AH                           ; 0049b5db
        ;   Label: LAB_0049b5db
    OR DL,0x1                           ; 0049b5dd
    MOV ECX,0xc2c80000                  ; 0049b5e0
    MOV byte ptr [0x02cee5c8],DL        ; 0049b5e5 | g_FloorCacheValid
    XOR EDX,EDX                         ; 0049b5eb
    MOV dword ptr [0x02cee5c0],ECX      ; 0049b5ed | g_FloorCacheHeight
    MOV dword ptr [0x02cee5bc],EDX      ; 0049b5f3 | g_FloorRayDirection
    MOV dword ptr [0x02cee5c4],EDX      ; 0049b5f9 | g_FloorCacheReserved
    JMP 0x0049b501                      ; 0049b5ff
        ;   XREF to: 0049b501 (UNCONDITIONAL_JUMP)  ; LAB_0049b501
    FLD float ptr [EBX + 0x24]          ; 0049b604
        ;   Label: LAB_0049b604
    FLD float ptr [EBP + 0x1c]          ; 0049b607
    FDIV double ptr [ESP]               ; 0049b60a
    FXCH                                ; 0049b60d
    FMUL ST1                            ; 0049b60f
    FADD float ptr [ESI]                ; 0049b611
    FSTP float ptr [ESP + 0x24]         ; 0049b613
    FMUL float ptr [EBX + 0x2c]         ; 0049b617
    FADD float ptr [ESI + 0x8]          ; 0049b61a
    FSTP float ptr [ESP + 0x2c]         ; 0049b61d
    MOV EAX,dword ptr [ESI + 0x4]       ; 0049b621
    PUSH 0x2cee5bc                      ; 0049b624 | g_FloorRayDirection
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049b629
    LEA EAX,[ESP + 0x28]                ; 0049b62d
    PUSH EAX                            ; 0049b631
    PUSH EBX                            ; 0049b632
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800 ; 0049b633
        ;   XREF to: 0049a800 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0049a800(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x80],EAX      ; 0049b638
    FLD float ptr [ESP + 0x80]          ; 0049b63f
    ADD ESP,0xc                         ; 0049b646
    FST float ptr [ESP + 0x8]           ; 0049b649
    FLDZ                                ; 0049b64d
    FCOMPP                              ; 0049b64f
    FNSTSW AX                           ; 0049b651
    SAHF                                ; 0049b653
    JA 0x0049b54b                       ; 0049b654
        ;   XREF to: 0049b54b (CONDITIONAL_JUMP)  ; LAB_0049b54b
    FLD float ptr [ESP + 0x8]           ; 0049b65a
    FMUL float ptr [0x02cee5c0]         ; 0049b65e | g_FloorCacheHeight
    FADD float ptr [ESP + 0x28]         ; 0049b664
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049b668
    FST float ptr [ESP + 0x70]          ; 0049b66b
    FCOMP float ptr [EAX]               ; 0049b66f
    FNSTSW AX                           ; 0049b671
    SAHF                                ; 0049b673
    JBE 0x0049b54b                      ; 0049b674
        ;   XREF to: 0049b54b (CONDITIONAL_JUMP)  ; LAB_0049b54b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0049b67a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049b67d
    MOV EDI,0x1                         ; 0049b681
    MOV dword ptr [EBX],EAX             ; 0049b686
    MOV EAX,EDI                         ; 0049b688
    MOV ESP,EBP                         ; 0049b68a
    POP EBP                             ; 0049b68c
    POP EDI                             ; 0049b68d
    POP ESI                             ; 0049b68e
    POP EBX                             ; 0049b68f
    RET                                 ; 0049b690

