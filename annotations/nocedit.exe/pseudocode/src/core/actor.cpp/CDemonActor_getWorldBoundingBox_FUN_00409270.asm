; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   output_bbox
; SCollisionInfo * Stack[0xc]:4   collision_info
; int              Stack[0x10]:4   bounding_box_type
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 004094b3
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 005719c5
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 00573776
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409270
        ;   Label: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
    PUSH ESI                            ; 00409271
    PUSH EDI                            ; 00409272
    SUB ESP,0x48                        ; 00409273
    MOV EDI,dword ptr [ESP + 0x58]      ; 00409276
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0040927a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0040927e
    MOV EBX,dword ptr [ESP + 0x64]      ; 00409282
    CMP EBX,0x2                         ; 00409286
    JNC 0x004093b2                      ; 00409289
        ;   XREF to: 004093b2 (CONDITIONAL_JUMP)  ; LAB_004093b2
    CMP EBX,0x1                         ; 0040928f
    JNZ 0x004093bd                      ; 00409292
        ;   XREF to: 004093bd (CONDITIONAL_JUMP)  ; LAB_004093bd
    MOV EBX,ESP                         ; 00409298
        ;   Label: LAB_00409298
    PUSH EBX                            ; 0040929a
    MOV EAX,dword ptr [EDI + 0x154]     ; 0040929b
    PUSH EDI                            ; 004092a1
    CALL dword ptr [EAX + 0x14]         ; 004092a2
    ADD ESP,0x8                         ; 004092a5
    PUSH 0x0                            ; 004092a8
    LEA EAX,[ESP + 0x1c]                ; 004092aa
    PUSH EAX                            ; 004092ae
    LEA EAX,[ESP + 0x8]                 ; 004092af
    PUSH EAX                            ; 004092b3
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 004092b4
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 004092b9
    PUSH EAX                            ; 004092bc
    LEA EAX,[ESP + 0x40]                ; 004092bd
    PUSH EAX                            ; 004092c1
    PUSH EDI                            ; 004092c2
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004092c3
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004092c8
    MOV EDX,ESI                         ; 004092cb
    MOV EBX,EAX                         ; 004092cd
    CMP ESI,EAX                         ; 004092cf
    JZ 0x004092e3                       ; 004092d1
        ;   XREF to: 004092e3 (CONDITIONAL_JUMP)  ; LAB_004092e3
    MOV ECX,dword ptr [EAX]             ; 004092d3
    MOV dword ptr [ESI],ECX             ; 004092d5
    MOV ECX,dword ptr [EAX + 0x4]       ; 004092d7
    MOV dword ptr [ESI + 0x4],ECX       ; 004092da
    MOV ECX,dword ptr [EAX + 0x8]       ; 004092dd
    MOV dword ptr [ESI + 0x8],ECX       ; 004092e0
    LEA EAX,[EDX + 0xc]                 ; 004092e3
        ;   Label: LAB_004092e3
    CMP EAX,EBX                         ; 004092e6
    JNZ 0x0040935f                      ; 004092e8
        ;   XREF to: 0040935f (CONDITIONAL_JUMP)  ; LAB_0040935f
    MOV EBX,0x1                         ; 004092ea
        ;   Label: LAB_004092ea
    PUSH EBX                            ; 004092ef
        ;   Label: LAB_004092ef
    LEA EAX,[ESP + 0x28]                ; 004092f0
    PUSH EAX                            ; 004092f4
    LEA EAX,[ESP + 0x8]                 ; 004092f5
    PUSH EAX                            ; 004092f9
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 004092fa
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 004092ff
    PUSH EAX                            ; 00409302
    LEA EAX,[ESP + 0x34]                ; 00409303
    PUSH EAX                            ; 00409307
    PUSH EDI                            ; 00409308
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00409309
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040930e
    PUSH EAX                            ; 00409311
    PUSH ESI                            ; 00409312
    INC EBX                             ; 00409313
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00409314
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00409319
    CMP EBX,0x8                         ; 0040931c
    JL 0x004092ef                       ; 0040931f
        ;   XREF to: 004092ef (CONDITIONAL_JUMP)  ; LAB_004092ef
    FLD float ptr [EDI + 0x20]          ; 00409321
    FADD float ptr [ESI]                ; 00409324
    FSTP float ptr [ESI]                ; 00409326
    FLD float ptr [EDI + 0x24]          ; 00409328
    FADD float ptr [ESI + 0x4]          ; 0040932b
    FSTP float ptr [ESI + 0x4]          ; 0040932e
    FLD float ptr [EDI + 0x28]          ; 00409331
    FADD float ptr [ESI + 0x8]          ; 00409334
    LEA EAX,[ESI + 0xc]                 ; 00409337
    FSTP float ptr [ESI + 0x8]          ; 0040933a
    FLD float ptr [EDI + 0x20]          ; 0040933d
    FADD float ptr [EAX]                ; 00409340
    FSTP float ptr [EAX]                ; 00409342
    FLD float ptr [EDI + 0x24]          ; 00409344
    FADD float ptr [EAX + 0x4]          ; 00409347
    FSTP float ptr [EAX + 0x4]          ; 0040934a
    FLD float ptr [EDI + 0x28]          ; 0040934d
    FADD float ptr [EAX + 0x8]          ; 00409350
    FSTP float ptr [EAX + 0x8]          ; 00409353
    MOV EAX,ESI                         ; 00409356
        ;   Label: LAB_00409356
    ADD ESP,0x48                        ; 00409358
    POP EDI                             ; 0040935b
    POP ESI                             ; 0040935c
    POP EBX                             ; 0040935d
    RET                                 ; 0040935e
    MOV EDX,dword ptr [EBX]             ; 0040935f
        ;   Label: LAB_0040935f
    MOV dword ptr [EAX],EDX             ; 00409361
    MOV EDX,dword ptr [EBX + 0x4]       ; 00409363
    MOV dword ptr [EAX + 0x4],EDX       ; 00409366
    MOV EDX,dword ptr [EBX + 0x8]       ; 00409369
    MOV dword ptr [EAX + 0x8],EDX       ; 0040936c
    JMP 0x004092ea                      ; 0040936f
        ;   XREF to: 004092ea (UNCONDITIONAL_JUMP)  ; LAB_004092ea
    FLD float ptr [EDI + 0x20]          ; 00409374
        ;   Label: LAB_00409374
    FSUB float ptr [EAX + 0x1c]         ; 00409377
    FSTP float ptr [ESI]                ; 0040937a
    FLD float ptr [EDI + 0x24]          ; 0040937c
    FADD float ptr [EAX + 0x14]         ; 0040937f
    FSTP float ptr [ESI + 0x4]          ; 00409382
    FLD float ptr [EDI + 0x28]          ; 00409385
    FSUB float ptr [EAX + 0x1c]         ; 00409388
    FSTP float ptr [ESI + 0x8]          ; 0040938b
    FLD float ptr [EDI + 0x20]          ; 0040938e
    FADD float ptr [EAX + 0x1c]         ; 00409391
    FSTP float ptr [ESI + 0xc]          ; 00409394
    FLD float ptr [EDI + 0x24]          ; 00409397
    FADD float ptr [EAX + 0x18]         ; 0040939a
    FSTP float ptr [ESI + 0x10]         ; 0040939d
    FLD float ptr [EDI + 0x28]          ; 004093a0
    FADD float ptr [EAX + 0x1c]         ; 004093a3
    FSTP float ptr [ESI + 0x14]         ; 004093a6
    MOV EAX,ESI                         ; 004093a9
    ADD ESP,0x48                        ; 004093ab
    POP EDI                             ; 004093ae
    POP ESI                             ; 004093af
    POP EBX                             ; 004093b0
    RET                                 ; 004093b1
    JBE 0x00409374                      ; 004093b2
        ;   XREF to: 00409374 (CONDITIONAL_JUMP)  ; LAB_00409374
        ;   Label: LAB_004093b2
    CMP EBX,0x3                         ; 004093b4
    JZ 0x00409298                       ; 004093b7
        ;   XREF to: 00409298 (CONDITIONAL_JUMP)  ; LAB_00409298
    MOV dword ptr [ESI + 0x8],0x4cbebc20 ; 004093bd
        ;   Label: LAB_004093bd
    LEA EAX,[ESI + 0xc]                 ; 004093c4
    MOV EDX,dword ptr [ESI + 0x8]       ; 004093c7
    MOV dword ptr [ESI + 0x4],EDX       ; 004093ca
    MOV EDX,dword ptr [ESI + 0x4]       ; 004093cd
    MOV dword ptr [ESI],EDX             ; 004093d0
    CMP EAX,ESI                         ; 004093d2
    JZ 0x00409356                       ; 004093d4
        ;   XREF to: 00409356 (CONDITIONAL_JUMP)  ; LAB_00409356
    MOV EDX,dword ptr [ESI]             ; 004093d6
    MOV dword ptr [EAX],EDX             ; 004093d8
    MOV EDX,dword ptr [ESI + 0x4]       ; 004093da
    MOV dword ptr [EAX + 0x4],EDX       ; 004093dd
    MOV EDX,dword ptr [ESI + 0x8]       ; 004093e0
    MOV dword ptr [EAX + 0x8],EDX       ; 004093e3
    MOV EAX,ESI                         ; 004093e6
    ADD ESP,0x48                        ; 004093e8
    POP EDI                             ; 004093eb
    POP ESI                             ; 004093ec
    POP EBX                             ; 004093ed
    RET                                 ; 004093ee

