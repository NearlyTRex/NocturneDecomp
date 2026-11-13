; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_0056d200(CSmiley *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_02c5fcd8
;   undefined4 DAT_02c5fcec
;   undefined4 DAT_02c5fcf0
;   undefined4 DAT_02c5fcfc
;   undefined4 DAT_02c5fd04
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056d200
        ;   Label: core_smiley.cpp_CSmiley_getTargetPoints_FUN_0056d200
    SUB ESP,0x78                        ; 0056d201
    MOV EBP,dword ptr [ESP + 0x84]      ; 0056d204
    MOV EAX,dword ptr [ESP + 0x80]      ; 0056d20b
    CMP dword ptr [EAX + 0xc2a8],0x3    ; 0056d212
    JNZ 0x0056d222                      ; 0056d219
        ;   XREF to: 0056d222 (CONDITIONAL_JUMP)  ; LAB_0056d222
    XOR EAX,EAX                         ; 0056d21b
    ADD ESP,0x78                        ; 0056d21d
    POP EBP                             ; 0056d220
    RET                                 ; 0056d221
    PUSH EDI                            ; 0056d222
        ;   Label: LAB_0056d222
    PUSH ESI                            ; 0056d223
    PUSH EBX                            ; 0056d224
    MOV ECX,dword ptr [0x02c5fcd8]      ; 0056d225 | DAT_02c5fcd8
    PUSH ECX                            ; 0056d22b
    ADD EAX,0x158                       ; 0056d22c
    MOV EBX,0x1                         ; 0056d231
    PUSH EAX                            ; 0056d236
    LEA ESI,[ESP + 0x2c]                ; 0056d237
    LEA EDI,[ESP + 0x44]                ; 0056d23b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0056d23f
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 0056d244
    ADD ESP,0x8                         ; 0056d248
    LEA EAX,[ESP + 0x3c]                ; 0056d24b
    MOVSD ES:EDI,ESI                    ; 0056d24f
    MOVSD ES:EDI,ESI                    ; 0056d250
    MOVSD ES:EDI,ESI                    ; 0056d251
    CMP EBP,EAX                         ; 0056d252
    JZ 0x0056d26b                       ; 0056d254
        ;   XREF to: 0056d26b (CONDITIONAL_JUMP)  ; LAB_0056d26b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056d256
    MOV dword ptr [EBP],EAX             ; 0056d25a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056d25d
    MOV dword ptr [EBP + 0x4],EAX       ; 0056d261
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056d264
    MOV dword ptr [EBP + 0x8],EAX       ; 0056d268
    MOV ESI,dword ptr [0x02c5fcec]      ; 0056d26b | DAT_02c5fcec
        ;   Label: LAB_0056d26b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056d271
    PUSH ESI                            ; 0056d278
    ADD EAX,0x158                       ; 0056d279
    PUSH EAX                            ; 0056d27e
    LEA ESI,[ESP + 0x50]                ; 0056d27f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0056d283
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056d288
    LEA EDI,[ESP + 0x68]                ; 0056d28f
    SUB EAX,EBX                         ; 0056d293
    LEA ESI,[ESP + 0x50]                ; 0056d295
    SHL EAX,0x2                         ; 0056d299
    ADD ESP,0x8                         ; 0056d29c
    LEA EDX,[EAX + EBP*0x1]             ; 0056d29f
    LEA EAX,[ESP + 0x60]                ; 0056d2a2
    MOVSD ES:EDI,ESI                    ; 0056d2a6
    MOVSD ES:EDI,ESI                    ; 0056d2a7
    MOVSD ES:EDI,ESI                    ; 0056d2a8
    CMP EDX,EAX                         ; 0056d2a9
    JZ 0x0056d2c1                       ; 0056d2ab
        ;   XREF to: 0056d2c1 (CONDITIONAL_JUMP)  ; LAB_0056d2c1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0056d2ad
    MOV dword ptr [EDX],EAX             ; 0056d2b1
    MOV EAX,dword ptr [ESP + 0x64]      ; 0056d2b3
    MOV dword ptr [EDX + 0x4],EAX       ; 0056d2b7
    MOV EAX,dword ptr [ESP + 0x68]      ; 0056d2ba
    MOV dword ptr [EDX + 0x8],EAX       ; 0056d2be
    MOV EDI,dword ptr [0x02c5fcf0]      ; 0056d2c1 | DAT_02c5fcf0
        ;   Label: LAB_0056d2c1
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056d2c7
    PUSH EDI                            ; 0056d2ce
    ADD EAX,0x158                       ; 0056d2cf
    PUSH EAX                            ; 0056d2d4
    LEA ESI,[ESP + 0x80]                ; 0056d2d5
    INC EBX                             ; 0056d2dc
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0056d2dd
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056d2e2
    LEA EDI,[ESP + 0x20]                ; 0056d2e9
    SUB EAX,EBX                         ; 0056d2ed
    LEA ESI,[ESP + 0x80]                ; 0056d2ef
    SHL EAX,0x2                         ; 0056d2f6
    ADD ESP,0x8                         ; 0056d2f9
    LEA EDX,[EAX + EBP*0x1]             ; 0056d2fc
    LEA EAX,[ESP + 0x18]                ; 0056d2ff
    MOVSD ES:EDI,ESI                    ; 0056d303
    MOVSD ES:EDI,ESI                    ; 0056d304
    MOVSD ES:EDI,ESI                    ; 0056d305
    CMP EDX,EAX                         ; 0056d306
    JZ 0x0056d31e                       ; 0056d308
        ;   XREF to: 0056d31e (CONDITIONAL_JUMP)  ; LAB_0056d31e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0056d30a
    MOV dword ptr [EDX],EAX             ; 0056d30e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056d310
    MOV dword ptr [EDX + 0x4],EAX       ; 0056d314
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056d317
    MOV dword ptr [EDX + 0x8],EAX       ; 0056d31b
    MOV EAX,[0x02c5fcfc]                ; 0056d31e | DAT_02c5fcfc
        ;   Label: LAB_0056d31e
    PUSH EAX                            ; 0056d323
    MOV EAX,dword ptr [ESP + 0x90]      ; 0056d324
    ADD EAX,0x158                       ; 0056d32b
    PUSH EAX                            ; 0056d330
    LEA ESI,[ESP + 0x14]                ; 0056d331
    INC EBX                             ; 0056d335
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0056d336
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056d33b
    LEA EDI,[ESP + 0x5c]                ; 0056d342
    SUB EAX,EBX                         ; 0056d346
    LEA ESI,[ESP + 0x14]                ; 0056d348
    SHL EAX,0x2                         ; 0056d34c
    ADD ESP,0x8                         ; 0056d34f
    LEA EDX,[EAX + EBP*0x1]             ; 0056d352
    LEA EAX,[ESP + 0x54]                ; 0056d355
    MOVSD ES:EDI,ESI                    ; 0056d359
    MOVSD ES:EDI,ESI                    ; 0056d35a
    MOVSD ES:EDI,ESI                    ; 0056d35b
    CMP EDX,EAX                         ; 0056d35c
    JZ 0x0056d374                       ; 0056d35e
        ;   XREF to: 0056d374 (CONDITIONAL_JUMP)  ; LAB_0056d374
    MOV EAX,dword ptr [ESP + 0x54]      ; 0056d360
    MOV dword ptr [EDX],EAX             ; 0056d364
    MOV EAX,dword ptr [ESP + 0x58]      ; 0056d366
    MOV dword ptr [EDX + 0x4],EAX       ; 0056d36a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056d36d
    MOV dword ptr [EDX + 0x8],EAX       ; 0056d371
    MOV EDX,dword ptr [0x02c5fd04]      ; 0056d374 | DAT_02c5fd04
        ;   Label: LAB_0056d374
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0056d37a
    PUSH EDX                            ; 0056d381
    ADD EAX,0x158                       ; 0056d382
    PUSH EAX                            ; 0056d387
    LEA ESI,[ESP + 0x38]                ; 0056d388
    INC EBX                             ; 0056d38c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 0056d38d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056d392
    LEA EDI,[ESP + 0x74]                ; 0056d399
    SUB EAX,EBX                         ; 0056d39d
    LEA ESI,[ESP + 0x38]                ; 0056d39f
    SHL EAX,0x2                         ; 0056d3a3
    ADD ESP,0x8                         ; 0056d3a6
    ADD EBP,EAX                         ; 0056d3a9
    LEA EAX,[ESP + 0x6c]                ; 0056d3ab
    MOVSD ES:EDI,ESI                    ; 0056d3af
    MOVSD ES:EDI,ESI                    ; 0056d3b0
    MOVSD ES:EDI,ESI                    ; 0056d3b1
    CMP EBP,EAX                         ; 0056d3b2
    JZ 0x0056d3cb                       ; 0056d3b4
        ;   XREF to: 0056d3cb (CONDITIONAL_JUMP)  ; LAB_0056d3cb
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0056d3b6
    MOV dword ptr [EBP],EAX             ; 0056d3ba
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056d3bd
    MOV dword ptr [EBP + 0x4],EAX       ; 0056d3c1
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056d3c4
    MOV dword ptr [EBP + 0x8],EAX       ; 0056d3c8
    LEA EAX,[EBX + 0x1]                 ; 0056d3cb
        ;   Label: LAB_0056d3cb
    POP EBX                             ; 0056d3ce
    POP ESI                             ; 0056d3cf
    POP EDI                             ; 0056d3d0
    ADD ESP,0x78                        ; 0056d3d1
    POP EBP                             ; 0056d3d4
    RET                                 ; 0056d3d5

