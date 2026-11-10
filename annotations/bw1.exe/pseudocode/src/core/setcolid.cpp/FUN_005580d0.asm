; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_FUN_005580d0(CDemonSet *this_ptr,SIntersectXZCylinder *cylinder,CBoundingBox3D *bounding_box,CVector3f *position,CMatrix3x3f *orientation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; CBoundingBox3D * Stack[0xc]:4   bounding_box
; CVector3f *      Stack[0x10]:4   position
; CMatrix3x3f *    Stack[0x14]:4   orientation_matrix
; Local Variables:
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined        Stack[-0x200]:1  local_200
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined        Stack[-0x1e8]:1  local_1e8
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined        Stack[-0x1c4]:1  local_1c4
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10 at 00504b76
;   core_setcolid.cpp_FUN_00558450 at 00558935
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_00420570
;   core_dirmat.cpp_FUN_0045f690
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;   core_dtri.cpp_cylinderTriangleTest_FUN_004904d0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005580d0
        ;   Label: core_setcolid.cpp_FUN_005580d0
    PUSH ESI                            ; 005580d1
    PUSH EDI                            ; 005580d2
    PUSH EBP                            ; 005580d3
    SUB ESP,0x1fc                       ; 005580d4
    PUSH 0x5fb430                       ; 005580da | g_CVectorTypeInfo
    PUSH 0x8                            ; 005580df
    LEA EAX,[ESP + 0x8]                 ; 005580e1
    PUSH EAX                            ; 005580e5
    LEA EBX,[ESP + 0xc]                 ; 005580e6
    XOR EBP,EBP                         ; 005580ea
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005580ec
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005580f1
    PUSH EBP                            ; 005580f4
        ;   Label: LAB_005580f4
    MOV EDX,dword ptr [ESP + 0x21c]     ; 005580f5
    PUSH EDX                            ; 005580fc
    LEA ESI,[ESP + 0x1dc]               ; 005580fd
    LEA EDI,[ESP + 0x1e8]               ; 00558104
    CALL core_box.cpp_FUN_00420570      ; 0055810b
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x1dc]               ; 00558110
    ADD ESP,0x8                         ; 00558117
    LEA EAX,[ESP + 0x1e0]               ; 0055811a
    MOV ECX,dword ptr [ESP + 0x220]     ; 00558121
    PUSH EAX                            ; 00558128
    MOVSD ES:EDI,ESI                    ; 00558129
    MOVSD ES:EDI,ESI                    ; 0055812a
    MOVSD ES:EDI,ESI                    ; 0055812b
    PUSH ECX                            ; 0055812c
    LEA ESI,[ESP + 0x1b8]               ; 0055812d
    LEA EDI,[ESP + 0x1d0]               ; 00558134
    CALL core_dirmat.cpp_FUN_0045f690   ; 0055813b
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x1b8]               ; 00558140
    ADD ESP,0x8                         ; 00558147
    MOVSD ES:EDI,ESI                    ; 0055814a
    MOVSD ES:EDI,ESI                    ; 0055814b
    MOVSD ES:EDI,ESI                    ; 0055814c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0055814d
    FLD float ptr [ESP + 0x1c8]         ; 00558154
    FLD float ptr [ESP + 0x1cc]         ; 0055815b
    FLD float ptr [ESP + 0x1d0]         ; 00558162
    LEA EDI,[ESP + 0x1bc]               ; 00558169
    LEA ESI,[ESP + 0x1ec]               ; 00558170
    FXCH ST2                            ; 00558177
    FADD float ptr [EAX]                ; 00558179
    FXCH                                ; 0055817b
    FADD float ptr [EAX + 0x4]          ; 0055817d
    FXCH ST2                            ; 00558180
    FADD float ptr [EAX + 0x8]          ; 00558182
    FXCH                                ; 00558185
    FSTP float ptr [ESP + 0x1ec]        ; 00558187
    FXCH                                ; 0055818e
    FSTP float ptr [ESP + 0x1f0]        ; 00558190
    FSTP float ptr [ESP + 0x1f4]        ; 00558197
    LEA EAX,[ESP + 0x1bc]               ; 0055819e
    MOVSD ES:EDI,ESI                    ; 005581a5
    MOVSD ES:EDI,ESI                    ; 005581a6
    MOVSD ES:EDI,ESI                    ; 005581a7
    CMP EBX,EAX                         ; 005581a8
    JNZ 0x00558427                      ; 005581aa
        ;   XREF to: 00558427 (CONDITIONAL_JUMP)  ; LAB_00558427
    INC EBP                             ; 005581b0
        ;   Label: LAB_005581b0
    ADD EBX,0xc                         ; 005581b1
    CMP EBP,0x8                         ; 005581b4
    JL 0x005580f4                       ; 005581b7
        ;   XREF to: 005580f4 (CONDITIONAL_JUMP)  ; LAB_005580f4
    MOV EAX,dword ptr [ESP + 0x214]     ; 005581bd
    MOV EAX,dword ptr [EAX]             ; 005581c4
    MOV dword ptr [ESP + 0x1f8],EAX     ; 005581c6
    LEA EAX,[ESP + 0x48]                ; 005581cd
    PUSH EAX                            ; 005581d1
    LEA EAX,[ESP + 0x34]                ; 005581d2
    PUSH EAX                            ; 005581d6
    LEA EAX,[ESP + 0x8]                 ; 005581d7
    PUSH EAX                            ; 005581db
    LEA EAX,[ESP + 0x14c]               ; 005581dc
    PUSH EAX                            ; 005581e3
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005581e4
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005581e9
    MOV EBX,dword ptr [ESP + 0x214]     ; 005581ec
    PUSH EBX                            ; 005581f3
    LEA EAX,[ESP + 0x144]               ; 005581f4
    PUSH EAX                            ; 005581fb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 005581fc
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558201
    LEA EAX,[ESP + 0x18]                ; 00558204
    PUSH EAX                            ; 00558208
    LEA EAX,[ESP + 0x4c]                ; 00558209
    PUSH EAX                            ; 0055820d
    LEA EAX,[ESP + 0x8]                 ; 0055820e
    PUSH EAX                            ; 00558212
    LEA EAX,[ESP + 0x14c]               ; 00558213
    PUSH EAX                            ; 0055821a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055821b
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558220
    PUSH EBX                            ; 00558223
    LEA EAX,[ESP + 0x144]               ; 00558224
    PUSH EAX                            ; 0055822b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 0055822c
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558231
    LEA EAX,[ESP + 0x54]                ; 00558234
    PUSH EAX                            ; 00558238
    LEA EAX,[ESP + 0x28]                ; 00558239
    PUSH EAX                            ; 0055823d
    LEA EAX,[ESP + 0x14]                ; 0055823e
    PUSH EAX                            ; 00558242
    LEA EAX,[ESP + 0x114]               ; 00558243
    PUSH EAX                            ; 0055824a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055824b
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558250
    PUSH EBX                            ; 00558253
    LEA EAX,[ESP + 0x10c]               ; 00558254
    PUSH EAX                            ; 0055825b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 0055825c
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558261
    LEA EAX,[ESP + 0x3c]                ; 00558264
    PUSH EAX                            ; 00558268
    LEA EAX,[ESP + 0x58]                ; 00558269
    PUSH EAX                            ; 0055826d
    LEA EAX,[ESP + 0x14]                ; 0055826e
    PUSH EAX                            ; 00558272
    LEA EAX,[ESP + 0x114]               ; 00558273
    PUSH EAX                            ; 0055827a
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055827b
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558280
    PUSH EBX                            ; 00558283
    LEA EAX,[ESP + 0x10c]               ; 00558284
    PUSH EAX                            ; 0055828b
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 0055828c
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558291
    LEA EAX,[ESP + 0x3c]                ; 00558294
    PUSH EAX                            ; 00558298
    LEA EAX,[ESP + 0x10]                ; 00558299
    PUSH EAX                            ; 0055829d
    LEA EAX,[ESP + 0x8]                 ; 0055829e
    PUSH EAX                            ; 005582a2
    LEA EAX,[ESP + 0xdc]                ; 005582a3
    PUSH EAX                            ; 005582aa
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005582ab
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005582b0
    PUSH EBX                            ; 005582b3
    LEA EAX,[ESP + 0xd4]                ; 005582b4
    PUSH EAX                            ; 005582bb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 005582bc
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 005582c1
    LEA EAX,[ESP + 0x30]                ; 005582c4
    PUSH EAX                            ; 005582c8
    LEA EAX,[ESP + 0x40]                ; 005582c9
    PUSH EAX                            ; 005582cd
    LEA EAX,[ESP + 0x8]                 ; 005582ce
    PUSH EAX                            ; 005582d2
    LEA EAX,[ESP + 0xdc]                ; 005582d3
    PUSH EAX                            ; 005582da
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005582db
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005582e0
    PUSH EBX                            ; 005582e3
    LEA EAX,[ESP + 0xd4]                ; 005582e4
    PUSH EAX                            ; 005582eb
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 005582ec
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 005582f1
    LEA EAX,[ESP + 0x54]                ; 005582f4
    PUSH EAX                            ; 005582f8
    LEA EAX,[ESP + 0x4c]                ; 005582f9
    PUSH EAX                            ; 005582fd
    LEA EAX,[ESP + 0x20]                ; 005582fe
    PUSH EAX                            ; 00558302
    LEA EAX,[ESP + 0x6c]                ; 00558303
    PUSH EAX                            ; 00558307
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00558308
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0055830d
    PUSH EBX                            ; 00558310
    LEA EAX,[ESP + 0x64]                ; 00558311
    PUSH EAX                            ; 00558315
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 00558316
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 0055831b
    LEA EAX,[ESP + 0x24]                ; 0055831e
    PUSH EAX                            ; 00558322
    LEA EAX,[ESP + 0x58]                ; 00558323
    PUSH EAX                            ; 00558327
    LEA EAX,[ESP + 0x20]                ; 00558328
    PUSH EAX                            ; 0055832c
    LEA EAX,[ESP + 0x6c]                ; 0055832d
    PUSH EAX                            ; 00558331
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00558332
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558337
    PUSH EBX                            ; 0055833a
    LEA EAX,[ESP + 0x64]                ; 0055833b
    PUSH EAX                            ; 0055833f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 00558340
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558345
    LEA EAX,[ESP + 0x24]                ; 00558348
    PUSH EAX                            ; 0055834c
    LEA EAX,[ESP + 0x1c]                ; 0055834d
    PUSH EAX                            ; 00558351
    LEA EAX,[ESP + 0x8]                 ; 00558352
    PUSH EAX                            ; 00558356
    LEA EAX,[ESP + 0xa4]                ; 00558357
    PUSH EAX                            ; 0055835e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055835f
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558364
    PUSH EBX                            ; 00558367
    LEA EAX,[ESP + 0x9c]                ; 00558368
    PUSH EAX                            ; 0055836f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 00558370
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558375
    LEA EAX,[ESP + 0xc]                 ; 00558378
    PUSH EAX                            ; 0055837c
    LEA EAX,[ESP + 0x28]                ; 0055837d
    PUSH EAX                            ; 00558381
    LEA EAX,[ESP + 0x8]                 ; 00558382
    PUSH EAX                            ; 00558386
    LEA EAX,[ESP + 0xa4]                ; 00558387
    PUSH EAX                            ; 0055838e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055838f
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00558394
    PUSH EBX                            ; 00558397
    LEA EAX,[ESP + 0x9c]                ; 00558398
    PUSH EAX                            ; 0055839f
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 005583a0
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 005583a5
    LEA EAX,[ESP + 0x54]                ; 005583a8
    PUSH EAX                            ; 005583ac
    LEA EAX,[ESP + 0x40]                ; 005583ad
    PUSH EAX                            ; 005583b1
    LEA EAX,[ESP + 0x38]                ; 005583b2
    PUSH EAX                            ; 005583b6
    LEA EAX,[ESP + 0x184]               ; 005583b7
    PUSH EAX                            ; 005583be
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005583bf
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005583c4
    PUSH EBX                            ; 005583c7
    LEA EAX,[ESP + 0x17c]               ; 005583c8
    PUSH EAX                            ; 005583cf
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 005583d0
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 005583d5
    LEA EAX,[ESP + 0x48]                ; 005583d8
    PUSH EAX                            ; 005583dc
    LEA EAX,[ESP + 0x58]                ; 005583dd
    PUSH EAX                            ; 005583e1
    LEA EAX,[ESP + 0x38]                ; 005583e2
    PUSH EAX                            ; 005583e6
    LEA EAX,[ESP + 0x184]               ; 005583e7
    PUSH EAX                            ; 005583ee
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005583ef
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005583f4
    PUSH EBX                            ; 005583f7
    LEA EAX,[ESP + 0x17c]               ; 005583f8
    PUSH EAX                            ; 005583ff
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_004904d0 ; 00558400
        ;   XREF to: 004904d0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_004904d0()
    ADD ESP,0x8                         ; 00558405
    FLD float ptr [EBX]                 ; 00558408
    FCOMP float ptr [ESP + 0x1f8]       ; 0055840a
    FNSTSW AX                           ; 00558411
    SAHF                                ; 00558413
    SETC AL                             ; 00558414
    AND EAX,0xff                        ; 00558417
    ADD ESP,0x1fc                       ; 0055841c
    POP EBP                             ; 00558422
    POP EDI                             ; 00558423
    POP ESI                             ; 00558424
    POP EBX                             ; 00558425
    RET                                 ; 00558426
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00558427
        ;   Label: LAB_00558427
    MOV dword ptr [EBX],EAX             ; 0055842e
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00558430
    MOV dword ptr [EBX + 0x4],EAX       ; 00558437
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0055843a
    MOV dword ptr [EBX + 0x8],EAX       ; 00558441
    JMP 0x005581b0                      ; 00558444
        ;   XREF to: 005581b0 (UNCONDITIONAL_JUMP)  ; LAB_005581b0

