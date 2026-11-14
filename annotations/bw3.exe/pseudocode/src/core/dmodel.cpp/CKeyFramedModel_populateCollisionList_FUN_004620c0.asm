; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0(CKeyFramedModel *this_ptr,CVector3f *transform_vector)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   transform_vector
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0 at 004620b2
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0 at 00461f53
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00461e00 at 00461e3e
;
; Referenced Globals:
;   undefined4 DAT_005de564
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004620c0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0
    PUSH ESI                            ; 004620c1
    PUSH EDI                            ; 004620c2
    PUSH EBP                            ; 004620c3
    SUB ESP,0x94                        ; 004620c4
    MOV EBX,dword ptr [ESP + 0xac]      ; 004620ca
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004620d1
    ADD EAX,0x364                       ; 004620d8
    CMP EAX,EBX                         ; 004620dd
    JZ 0x004620f1                       ; 004620df
        ;   XREF to: 004620f1 (CONDITIONAL_JUMP)  ; LAB_004620f1
    MOV EDX,dword ptr [EBX]             ; 004620e1
    MOV dword ptr [EAX],EDX             ; 004620e3
    MOV EDX,dword ptr [EBX + 0x4]       ; 004620e5
    MOV dword ptr [EAX + 0x4],EDX       ; 004620e8
    MOV EDX,dword ptr [EBX + 0x8]       ; 004620eb
    MOV dword ptr [EAX + 0x8],EDX       ; 004620ee
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004620f1
        ;   Label: LAB_004620f1
    ADD EAX,0x364                       ; 004620f8
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004620fd
    PUSH EAX                            ; 00462104
    ADD EBX,0x370                       ; 00462105
    PUSH EBX                            ; 0046210b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0046210c
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00462111
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00462114
    MOV EAX,dword ptr [EAX + 0x358]     ; 0046211b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00462121
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00462128
    XOR EDX,EDX                         ; 0046212f
    MOV ECX,dword ptr [EAX + 0x100]     ; 00462131
    MOV dword ptr [ESP + 0x6c],EDX      ; 00462137
    TEST ECX,ECX                        ; 0046213b
    JLE 0x0046240a                      ; 0046213d
        ;   XREF to: 0046240a (CONDITIONAL_JUMP)  ; LAB_0046240a
    MOV dword ptr [ESP + 0x74],EBX      ; 00462143
    MOV dword ptr [ESP + 0x70],EBX      ; 00462147
    MOV dword ptr [ESP + 0x80],EBX      ; 0046214b
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00462152
        ;   Label: LAB_00462152
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00462159
    MOV EBX,dword ptr [EBX + 0x104]     ; 0046215d
    IMUL EBX,EDI                        ; 00462163
    IMUL EBX,EBX,0xc                    ; 00462166
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00462169
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00462170
    ADD EAX,EBX                         ; 00462176
    MOV dword ptr [ESP + 0x84],EAX      ; 00462178
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0046217f
    XOR EBP,EBP                         ; 00462186
    MOV EDX,dword ptr [EAX + 0x110]     ; 00462188
    MOV dword ptr [ESP + 0x7c],EBP      ; 0046218e
    TEST EDX,EDX                        ; 00462192
    JLE 0x004623ec                      ; 00462194
        ;   XREF to: 004623ec (CONDITIONAL_JUMP)  ; LAB_004623ec
    MOV dword ptr [ESP + 0x78],EBP      ; 0046219a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0046219e
        ;   Label: LAB_0046219e
    MOV EBX,dword ptr [ESP + 0x78]      ; 004621a5
    MOV EAX,dword ptr [EAX + 0x114]     ; 004621a9
    ADD EBX,EAX                         ; 004621af
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 004621b1
    MOV EDX,dword ptr [ESP + 0x84]      ; 004621b5
    MOV dword ptr [ESP + 0x88],EBX      ; 004621bc
    LEA EBX,[ESP + 0x24]                ; 004621c3
    ADD EAX,EDX                         ; 004621c7
    FILD dword ptr [EAX]                ; 004621c9
    FMUL float ptr [0x005de564]         ; 004621cb | DAT_005de564
    FSTP float ptr [EBX]                ; 004621d1
    FILD dword ptr [EAX + 0x4]          ; 004621d3
    FMUL float ptr [0x005de564]         ; 004621d6 | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 004621dc
    FILD dword ptr [EAX + 0x8]          ; 004621df
    FMUL float ptr [0x005de564]         ; 004621e2 | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 004621e8
    MOV EAX,dword ptr [ESP + 0x88]      ; 004621eb
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 004621f2
    LEA EBX,[ESP + 0x18]                ; 004621f6
    ADD EAX,EDX                         ; 004621fa
    FILD dword ptr [EAX]                ; 004621fc
    FMUL float ptr [0x005de564]         ; 004621fe | DAT_005de564
    FSTP float ptr [EBX]                ; 00462204
    FILD dword ptr [EAX + 0x4]          ; 00462206
    FMUL float ptr [0x005de564]         ; 00462209 | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 0046220f
    FILD dword ptr [EAX + 0x8]          ; 00462212
    FMUL float ptr [0x005de564]         ; 00462215 | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 0046221b
    LEA EAX,[ESP + 0x24]                ; 0046221e
    PUSH EAX                            ; 00462222
    MOV ESI,dword ptr [ESP + 0x74]      ; 00462223
    LEA EDI,[ESP + 0x64]                ; 00462227
    PUSH ESI                            ; 0046222b
    LEA ESI,[ESP + 0x5c]                ; 0046222c
    LEA EBX,[ESP + 0x2c]                ; 00462230
    CALL core_dirmat.cpp_FUN_0045b800   ; 00462234
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x5c]                ; 00462239
    ADD ESP,0x8                         ; 0046223d
    LEA EAX,[ESP + 0x60]                ; 00462240
    MOVSD ES:EDI,ESI                    ; 00462244
    MOVSD ES:EDI,ESI                    ; 00462245
    MOVSD ES:EDI,ESI                    ; 00462246
    CMP EBX,EAX                         ; 00462247
    JZ 0x00462263                       ; 00462249
        ;   XREF to: 00462263 (CONDITIONAL_JUMP)  ; LAB_00462263
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046224b
    MOV dword ptr [ESP + 0x24],EAX      ; 0046224f
    MOV EAX,dword ptr [ESP + 0x64]      ; 00462253
    MOV dword ptr [ESP + 0x28],EAX      ; 00462257
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046225b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0046225f
    LEA EAX,[ESP + 0x18]                ; 00462263
        ;   Label: LAB_00462263
    PUSH EAX                            ; 00462267
    MOV EDI,dword ptr [ESP + 0x78]      ; 00462268
    PUSH EDI                            ; 0046226c
    LEA ESI,[ESP + 0x8]                 ; 0046226d
    LEA EBX,[ESP + 0x14]                ; 00462271
    CALL core_dirmat.cpp_FUN_0045b800   ; 00462275
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA EDI,[ESP + 0x14]                ; 0046227a
    LEA ESI,[ESP + 0x8]                 ; 0046227e
    ADD ESP,0x8                         ; 00462282
    LEA EAX,[ESP + 0x18]                ; 00462285
    MOVSD ES:EDI,ESI                    ; 00462289
    MOVSD ES:EDI,ESI                    ; 0046228a
    MOVSD ES:EDI,ESI                    ; 0046228b
    CMP EAX,EBX                         ; 0046228c
    JZ 0x004622a8                       ; 0046228e
        ;   XREF to: 004622a8 (CONDITIONAL_JUMP)  ; LAB_004622a8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00462290
    MOV dword ptr [ESP + 0x18],EAX      ; 00462294
    MOV EAX,dword ptr [ESP + 0x10]      ; 00462298
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046229c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004622a0
    MOV dword ptr [ESP + 0x20],EAX      ; 004622a4
    MOV EAX,dword ptr [ESP + 0x88]      ; 004622a8
        ;   Label: LAB_004622a8
    MOV EBP,0x2                         ; 004622af
    CMP EBP,dword ptr [EAX + 0x4]       ; 004622b4
    JGE 0x004623c1                      ; 004622b7
        ;   XREF to: 004623c1 (CONDITIONAL_JUMP)  ; LAB_004623c1
    ADD EAX,0x18                        ; 004622bd
    MOV dword ptr [ESP + 0x90],EAX      ; 004622c0
    MOV EAX,dword ptr [ESP + 0x90]      ; 004622c7
        ;   Label: LAB_004622c7
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 004622ce
    MOV EDI,dword ptr [ESP + 0x84]      ; 004622d2
    LEA EBX,[ESP + 0x3c]                ; 004622d9
    ADD EAX,EDI                         ; 004622dd
    FILD dword ptr [EAX]                ; 004622df
    FMUL float ptr [0x005de564]         ; 004622e1 | DAT_005de564
    FSTP float ptr [EBX]                ; 004622e7
    FILD dword ptr [EAX + 0x4]          ; 004622e9
    FMUL float ptr [0x005de564]         ; 004622ec | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 004622f2
    FILD dword ptr [EAX + 0x8]          ; 004622f5
    FMUL float ptr [0x005de564]         ; 004622f8 | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 004622fe
    LEA EAX,[ESP + 0x3c]                ; 00462301
    PUSH EAX                            ; 00462305
    MOV EAX,dword ptr [ESP + 0x84]      ; 00462306
    LEA ESI,[ESP + 0x34]                ; 0046230d
    PUSH EAX                            ; 00462311
    LEA EDI,[ESP + 0x50]                ; 00462312
    LEA EBX,[ESP + 0x44]                ; 00462316
    CALL core_dirmat.cpp_FUN_0045b800   ; 0046231a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x38]                ; 0046231f
    ADD ESP,0x8                         ; 00462323
    LEA EAX,[ESP + 0x48]                ; 00462326
    MOVSD ES:EDI,ESI                    ; 0046232a
    MOVSD ES:EDI,ESI                    ; 0046232b
    MOVSD ES:EDI,ESI                    ; 0046232c
    CMP EBX,EAX                         ; 0046232d
    JZ 0x00462349                       ; 0046232f
        ;   XREF to: 00462349 (CONDITIONAL_JUMP)  ; LAB_00462349
    MOV EAX,dword ptr [ESP + 0x48]      ; 00462331
    MOV dword ptr [ESP + 0x3c],EAX      ; 00462335
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00462339
    MOV dword ptr [ESP + 0x40],EAX      ; 0046233d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00462341
    MOV dword ptr [ESP + 0x44],EAX      ; 00462345
    LEA EAX,[ESP + 0x3c]                ; 00462349
        ;   Label: LAB_00462349
    PUSH EAX                            ; 0046234d
    LEA EAX,[ESP + 0x1c]                ; 0046234e
    PUSH EAX                            ; 00462352
    LEA EAX,[ESP + 0x2c]                ; 00462353
    PUSH EAX                            ; 00462357
    MOV EDX,dword ptr [ESP + 0x98]      ; 00462358
    PUSH EDX                            ; 0046235f
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 00462360
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00462365
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00462368
    LEA EBX,[ESP + 0x18]                ; 0046236f
    ADD ECX,0x38                        ; 00462373
    LEA EAX,[ESP + 0x3c]                ; 00462376
    MOV dword ptr [ESP + 0x8c],ECX      ; 0046237a
    CMP EBX,EAX                         ; 00462381
    JZ 0x0046239d                       ; 00462383
        ;   XREF to: 0046239d (CONDITIONAL_JUMP)  ; LAB_0046239d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00462385
    MOV dword ptr [ESP + 0x18],EAX      ; 00462389
    MOV EAX,dword ptr [ESP + 0x40]      ; 0046238d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00462391
    MOV EAX,dword ptr [ESP + 0x44]      ; 00462395
    MOV dword ptr [ESP + 0x20],EAX      ; 00462399
    MOV ECX,dword ptr [ESP + 0x90]      ; 0046239d
        ;   Label: LAB_0046239d
    MOV EAX,dword ptr [ESP + 0x88]      ; 004623a4
    INC EBP                             ; 004623ab
    ADD ECX,0xc                         ; 004623ac
    MOV EBX,dword ptr [EAX + 0x4]       ; 004623af
    MOV dword ptr [ESP + 0x90],ECX      ; 004623b2
    CMP EBP,EBX                         ; 004623b9
    JL 0x004622c7                       ; 004623bb
        ;   XREF to: 004622c7 (CONDITIONAL_JUMP)  ; LAB_004622c7
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004623c1
        ;   Label: LAB_004623c1
    INC EBX                             ; 004623c5
    MOV ECX,dword ptr [ESP + 0x78]      ; 004623c6
    MOV dword ptr [ESP + 0x7c],EBX      ; 004623ca
    MOV EAX,EBX                         ; 004623ce
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004623d0
    ADD ECX,0x48                        ; 004623d7
    MOV ESI,dword ptr [EBX + 0x110]     ; 004623da
    MOV dword ptr [ESP + 0x78],ECX      ; 004623e0
    CMP EAX,ESI                         ; 004623e4
    JL 0x0046219e                       ; 004623e6
        ;   XREF to: 0046219e (CONDITIONAL_JUMP)  ; LAB_0046219e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004623ec
        ;   Label: LAB_004623ec
    INC EBX                             ; 004623f0
    MOV dword ptr [ESP + 0x6c],EBX      ; 004623f1
    MOV EAX,EBX                         ; 004623f5
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004623f7
    CMP EAX,dword ptr [EBX + 0x100]     ; 004623fe
    JL 0x00462152                       ; 00462404
        ;   XREF to: 00462152 (CONDITIONAL_JUMP)  ; LAB_00462152
    ADD ESP,0x94                        ; 0046240a
        ;   Label: LAB_0046240a
    POP EBP                             ; 00462410
    POP EDI                             ; 00462411
    POP ESI                             ; 00462412
    POP EBX                             ; 00462413
    RET                                 ; 00462414

