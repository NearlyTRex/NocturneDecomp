; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (CDemonSet *this_ptr,CBoundingBox3D *bounding_box,CMatrix3x3f *orientation_matrix, SIntersectXZCylinder *cylinder1,SIntersectXZCylinder *cylinder2)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   bounding_box
; CMatrix3x3f *    Stack[0xc]:4   orientation_matrix
; SIntersectXZCylinder * Stack[0x10]:4   cylinder1
; SIntersectXZCylinder * Stack[0x14]:4   cylinder2
; Local Variables:
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined1       Stack[-0x1dc]:1  local_1dc
; undefined1       Stack[-0x1d0]:1  local_1d0
; undefined1       Stack[-0x1c4]:1  local_1c4
; undefined1       Stack[-0x1b8]:1  local_1b8
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x1a0]:1  local_1a0
; undefined1       Stack[-0x194]:1  local_194
; undefined1       Stack[-0x188]:1  local_188
; undefined1       Stack[-0x150]:1  local_150
; undefined1       Stack[-0x118]:1  local_118
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720 at 005097ac
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 005738f2
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573140
        ;   Label: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
    PUSH ESI                            ; 00573141
    PUSH EDI                            ; 00573142
    PUSH EBP                            ; 00573143
    SUB ESP,0x1d8                       ; 00573144
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 0057314a
    MOV EBP,dword ptr [ESP + 0x1fc]     ; 00573151
    PUSH 0x6598c0                       ; 00573158 | g_CVectorTypeInfo
    PUSH 0x8                            ; 0057315d
    LEA EAX,[ESP + 0x8]                 ; 0057315f
    PUSH EAX                            ; 00573163
    LEA EBX,[ESP + 0xc]                 ; 00573164
    XOR ESI,ESI                         ; 00573168
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0057316a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057316f
    PUSH ESI                            ; 00573172
        ;   Label: LAB_00573172
    LEA EAX,[ESP + 0x1b4]               ; 00573173
    PUSH EAX                            ; 0057317a
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0057317b
    PUSH EDX                            ; 00573182
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 00573183
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 00573188
    PUSH EAX                            ; 0057318b
    LEA EAX,[ESP + 0x1c0]               ; 0057318c
    PUSH EAX                            ; 00573193
    PUSH EBP                            ; 00573194
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00573195
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 0057319a
    FADD float ptr [EDI]                ; 0057319c
    ADD ESP,0xc                         ; 0057319e
    FSTP float ptr [ESP + 0x1c8]        ; 005731a1
    FLD float ptr [EAX + 0x4]           ; 005731a8
    FADD float ptr [EDI + 0x4]          ; 005731ab
    FSTP float ptr [ESP + 0x1cc]        ; 005731ae
    FLD float ptr [EAX + 0x8]           ; 005731b5
    FADD float ptr [EDI + 0x8]          ; 005731b8
    LEA EAX,[ESP + 0x1c8]               ; 005731bb
    FSTP float ptr [ESP + 0x1d0]        ; 005731c2
    CMP EBX,EAX                         ; 005731c9
    JNZ 0x0057344b                      ; 005731cb
        ;   XREF to: 0057344b (CONDITIONAL_JUMP)  ; LAB_0057344b
    INC ESI                             ; 005731d1
        ;   Label: LAB_005731d1
    ADD EBX,0xc                         ; 005731d2
    CMP ESI,0x8                         ; 005731d5
    JL 0x00573172                       ; 005731d8
        ;   XREF to: 00573172 (CONDITIONAL_JUMP)  ; LAB_00573172
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005731da
    MOV EAX,dword ptr [EAX]             ; 005731e1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005731e3
    LEA EAX,[ESP + 0x48]                ; 005731ea
    PUSH EAX                            ; 005731ee
    LEA EAX,[ESP + 0x34]                ; 005731ef
    PUSH EAX                            ; 005731f3
    LEA EAX,[ESP + 0x8]                 ; 005731f4
    PUSH EAX                            ; 005731f8
    LEA EAX,[ESP + 0x184]               ; 005731f9
    PUSH EAX                            ; 00573200
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573201
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573206
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 00573209
    PUSH ECX                            ; 00573210
    LEA EAX,[ESP + 0x17c]               ; 00573211
    PUSH EAX                            ; 00573218
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573219
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0057321e
    LEA EAX,[ESP + 0x18]                ; 00573221
    PUSH EAX                            ; 00573225
    LEA EAX,[ESP + 0x4c]                ; 00573226
    PUSH EAX                            ; 0057322a
    LEA EAX,[ESP + 0x8]                 ; 0057322b
    PUSH EAX                            ; 0057322f
    LEA EAX,[ESP + 0x184]               ; 00573230
    PUSH EAX                            ; 00573237
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573238
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0057323d
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 00573240
    PUSH EBX                            ; 00573247
    LEA EAX,[ESP + 0x17c]               ; 00573248
    PUSH EAX                            ; 0057324f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573250
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573255
    LEA EAX,[ESP + 0x54]                ; 00573258
    PUSH EAX                            ; 0057325c
    LEA EAX,[ESP + 0x28]                ; 0057325d
    PUSH EAX                            ; 00573261
    LEA EAX,[ESP + 0x14]                ; 00573262
    PUSH EAX                            ; 00573266
    LEA EAX,[ESP + 0x6c]                ; 00573267
    PUSH EAX                            ; 0057326b
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 0057326c
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573271
    PUSH EBX                            ; 00573274
    LEA EAX,[ESP + 0x64]                ; 00573275
    PUSH EAX                            ; 00573279
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 0057327a
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0057327f
    LEA EAX,[ESP + 0x3c]                ; 00573282
    PUSH EAX                            ; 00573286
    LEA EAX,[ESP + 0x58]                ; 00573287
    PUSH EAX                            ; 0057328b
    LEA EAX,[ESP + 0x14]                ; 0057328c
    PUSH EAX                            ; 00573290
    LEA EAX,[ESP + 0x6c]                ; 00573291
    PUSH EAX                            ; 00573295
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573296
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0057329b
    PUSH EBX                            ; 0057329e
    LEA EAX,[ESP + 0x64]                ; 0057329f
    PUSH EAX                            ; 005732a3
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005732a4
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005732a9
    LEA EAX,[ESP + 0x3c]                ; 005732ac
    PUSH EAX                            ; 005732b0
    LEA EAX,[ESP + 0x10]                ; 005732b1
    PUSH EAX                            ; 005732b5
    LEA EAX,[ESP + 0x8]                 ; 005732b6
    PUSH EAX                            ; 005732ba
    LEA EAX,[ESP + 0xa4]                ; 005732bb
    PUSH EAX                            ; 005732c2
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005732c3
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005732c8
    PUSH EBX                            ; 005732cb
    LEA EAX,[ESP + 0x9c]                ; 005732cc
    PUSH EAX                            ; 005732d3
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005732d4
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005732d9
    LEA EAX,[ESP + 0x30]                ; 005732dc
    PUSH EAX                            ; 005732e0
    LEA EAX,[ESP + 0x40]                ; 005732e1
    PUSH EAX                            ; 005732e5
    LEA EAX,[ESP + 0x8]                 ; 005732e6
    PUSH EAX                            ; 005732ea
    LEA EAX,[ESP + 0xa4]                ; 005732eb
    PUSH EAX                            ; 005732f2
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005732f3
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005732f8
    PUSH EBX                            ; 005732fb
    LEA EAX,[ESP + 0x9c]                ; 005732fc
    PUSH EAX                            ; 00573303
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573304
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573309
    LEA EAX,[ESP + 0x54]                ; 0057330c
    PUSH EAX                            ; 00573310
    LEA EAX,[ESP + 0x4c]                ; 00573311
    PUSH EAX                            ; 00573315
    LEA EAX,[ESP + 0x20]                ; 00573316
    PUSH EAX                            ; 0057331a
    LEA EAX,[ESP + 0xdc]                ; 0057331b
    PUSH EAX                            ; 00573322
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573323
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573328
    PUSH EBX                            ; 0057332b
    LEA EAX,[ESP + 0xd4]                ; 0057332c
    PUSH EAX                            ; 00573333
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573334
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573339
    LEA EAX,[ESP + 0x24]                ; 0057333c
    PUSH EAX                            ; 00573340
    LEA EAX,[ESP + 0x58]                ; 00573341
    PUSH EAX                            ; 00573345
    LEA EAX,[ESP + 0x20]                ; 00573346
    PUSH EAX                            ; 0057334a
    LEA EAX,[ESP + 0xdc]                ; 0057334b
    PUSH EAX                            ; 00573352
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573353
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573358
    PUSH EBX                            ; 0057335b
    LEA EAX,[ESP + 0xd4]                ; 0057335c
    PUSH EAX                            ; 00573363
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573364
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573369
    LEA EAX,[ESP + 0x24]                ; 0057336c
    PUSH EAX                            ; 00573370
    LEA EAX,[ESP + 0x1c]                ; 00573371
    PUSH EAX                            ; 00573375
    LEA EAX,[ESP + 0x8]                 ; 00573376
    PUSH EAX                            ; 0057337a
    LEA EAX,[ESP + 0x114]               ; 0057337b
    PUSH EAX                            ; 00573382
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573383
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573388
    PUSH EBX                            ; 0057338b
    LEA EAX,[ESP + 0x10c]               ; 0057338c
    PUSH EAX                            ; 00573393
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573394
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573399
    LEA EAX,[ESP + 0xc]                 ; 0057339c
    PUSH EAX                            ; 005733a0
    LEA EAX,[ESP + 0x28]                ; 005733a1
    PUSH EAX                            ; 005733a5
    LEA EAX,[ESP + 0x8]                 ; 005733a6
    PUSH EAX                            ; 005733aa
    LEA EAX,[ESP + 0x114]               ; 005733ab
    PUSH EAX                            ; 005733b2
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005733b3
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005733b8
    PUSH EBX                            ; 005733bb
    LEA EAX,[ESP + 0x10c]               ; 005733bc
    PUSH EAX                            ; 005733c3
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005733c4
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005733c9
    LEA EAX,[ESP + 0x54]                ; 005733cc
    PUSH EAX                            ; 005733d0
    LEA EAX,[ESP + 0x40]                ; 005733d1
    PUSH EAX                            ; 005733d5
    LEA EAX,[ESP + 0x38]                ; 005733d6
    PUSH EAX                            ; 005733da
    LEA EAX,[ESP + 0x14c]               ; 005733db
    PUSH EAX                            ; 005733e2
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005733e3
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005733e8
    PUSH EBX                            ; 005733eb
    LEA EAX,[ESP + 0x144]               ; 005733ec
    PUSH EAX                            ; 005733f3
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005733f4
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005733f9
    LEA EAX,[ESP + 0x48]                ; 005733fc
    PUSH EAX                            ; 00573400
    LEA EAX,[ESP + 0x58]                ; 00573401
    PUSH EAX                            ; 00573405
    LEA EAX,[ESP + 0x38]                ; 00573406
    PUSH EAX                            ; 0057340a
    LEA EAX,[ESP + 0x14c]               ; 0057340b
    PUSH EAX                            ; 00573412
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00573413
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00573418
    PUSH EBX                            ; 0057341b
    LEA EAX,[ESP + 0x144]               ; 0057341c
    PUSH EAX                            ; 00573423
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 00573424
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00573429
    FLD float ptr [EBX]                 ; 0057342c
    FCOMP float ptr [ESP + 0x1d4]       ; 0057342e
    FNSTSW AX                           ; 00573435
    SAHF                                ; 00573437
    SETC AL                             ; 00573438
    AND EAX,0xff                        ; 0057343b
    ADD ESP,0x1d8                       ; 00573440
    POP EBP                             ; 00573446
    POP EDI                             ; 00573447
    POP ESI                             ; 00573448
    POP EBX                             ; 00573449
    RET                                 ; 0057344a
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0057344b
        ;   Label: LAB_0057344b
    MOV dword ptr [EBX],EAX             ; 00573452
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00573454
    MOV dword ptr [EBX + 0x4],EAX       ; 0057345b
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0057345e
    MOV dword ptr [EBX + 0x8],EAX       ; 00573465
    JMP 0x005731d1                      ; 00573468
        ;   XREF to: 005731d1 (UNCONDITIONAL_JUMP)  ; LAB_005731d1

