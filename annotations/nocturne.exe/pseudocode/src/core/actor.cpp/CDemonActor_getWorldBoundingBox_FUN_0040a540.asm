; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   output_bbox
; SCollisionInfo * Stack[0xc]:4   collision_info
; int              Stack[0x10]:4   bounding_box_type
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a783
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050ef95
;   core_setcolid.cpp_CDemonSet_testCylinderCollision_FUN_00510a40 at 00510d46
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a540
        ;   Label: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
    PUSH ESI                            ; 0040a541
    PUSH EDI                            ; 0040a542
    SUB ESP,0x48                        ; 0040a543
    MOV EDI,dword ptr [ESP + 0x58]      ; 0040a546
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0040a54a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0040a54e
    MOV EBX,dword ptr [ESP + 0x64]      ; 0040a552
    CMP EBX,0x2                         ; 0040a556
    JNC 0x0040a682                      ; 0040a559
        ;   XREF to: 0040a682 (CONDITIONAL_JUMP)  ; LAB_0040a682
    CMP EBX,0x1                         ; 0040a55f
    JNZ 0x0040a68d                      ; 0040a562
        ;   XREF to: 0040a68d (CONDITIONAL_JUMP)  ; LAB_0040a68d
    MOV EBX,ESP                         ; 0040a568
        ;   Label: LAB_0040a568
    PUSH EBX                            ; 0040a56a
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0040a56b
    PUSH EDI                            ; 0040a571
    CALL dword ptr [EAX + 0x14]         ; 0040a572
    ADD ESP,0x8                         ; 0040a575
    PUSH 0x0                            ; 0040a578
    LEA EAX,[ESP + 0x1c]                ; 0040a57a
    PUSH EAX                            ; 0040a57e
    LEA EAX,[ESP + 0x8]                 ; 0040a57f
    PUSH EAX                            ; 0040a583
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0040a584
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040a589
    PUSH EAX                            ; 0040a58c
    LEA EAX,[ESP + 0x40]                ; 0040a58d
    PUSH EAX                            ; 0040a591
    PUSH EDI                            ; 0040a592
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0040a593
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040a598
    MOV EDX,ESI                         ; 0040a59b
    MOV EBX,EAX                         ; 0040a59d
    CMP ESI,EAX                         ; 0040a59f
    JZ 0x0040a5b3                       ; 0040a5a1
        ;   XREF to: 0040a5b3 (CONDITIONAL_JUMP)  ; LAB_0040a5b3
    MOV ECX,dword ptr [EAX]             ; 0040a5a3
    MOV dword ptr [ESI],ECX             ; 0040a5a5
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040a5a7
    MOV dword ptr [ESI + 0x4],ECX       ; 0040a5aa
    MOV ECX,dword ptr [EAX + 0x8]       ; 0040a5ad
    MOV dword ptr [ESI + 0x8],ECX       ; 0040a5b0
    LEA EAX,[EDX + 0xc]                 ; 0040a5b3
        ;   Label: LAB_0040a5b3
    CMP EAX,EBX                         ; 0040a5b6
    JNZ 0x0040a62f                      ; 0040a5b8
        ;   XREF to: 0040a62f (CONDITIONAL_JUMP)  ; LAB_0040a62f
    MOV EBX,0x1                         ; 0040a5ba
        ;   Label: LAB_0040a5ba
    PUSH EBX                            ; 0040a5bf
        ;   Label: LAB_0040a5bf
    LEA EAX,[ESP + 0x28]                ; 0040a5c0
    PUSH EAX                            ; 0040a5c4
    LEA EAX,[ESP + 0x8]                 ; 0040a5c5
    PUSH EAX                            ; 0040a5c9
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 0040a5ca
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040a5cf
    PUSH EAX                            ; 0040a5d2
    LEA EAX,[ESP + 0x34]                ; 0040a5d3
    PUSH EAX                            ; 0040a5d7
    PUSH EDI                            ; 0040a5d8
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0040a5d9
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040a5de
    PUSH EAX                            ; 0040a5e1
    PUSH ESI                            ; 0040a5e2
    INC EBX                             ; 0040a5e3
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0040a5e4
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040a5e9
    CMP EBX,0x8                         ; 0040a5ec
    JL 0x0040a5bf                       ; 0040a5ef
        ;   XREF to: 0040a5bf (CONDITIONAL_JUMP)  ; LAB_0040a5bf
    FLD float ptr [EDI + 0x20]          ; 0040a5f1
    FADD float ptr [ESI]                ; 0040a5f4
    FSTP float ptr [ESI]                ; 0040a5f6
    FLD float ptr [EDI + 0x24]          ; 0040a5f8
    FADD float ptr [ESI + 0x4]          ; 0040a5fb
    FSTP float ptr [ESI + 0x4]          ; 0040a5fe
    FLD float ptr [EDI + 0x28]          ; 0040a601
    FADD float ptr [ESI + 0x8]          ; 0040a604
    LEA EAX,[ESI + 0xc]                 ; 0040a607
    FSTP float ptr [ESI + 0x8]          ; 0040a60a
    FLD float ptr [EDI + 0x20]          ; 0040a60d
    FADD float ptr [EAX]                ; 0040a610
    FSTP float ptr [EAX]                ; 0040a612
    FLD float ptr [EDI + 0x24]          ; 0040a614
    FADD float ptr [EAX + 0x4]          ; 0040a617
    FSTP float ptr [EAX + 0x4]          ; 0040a61a
    FLD float ptr [EDI + 0x28]          ; 0040a61d
    FADD float ptr [EAX + 0x8]          ; 0040a620
    FSTP float ptr [EAX + 0x8]          ; 0040a623
    MOV EAX,ESI                         ; 0040a626
        ;   Label: LAB_0040a626
    ADD ESP,0x48                        ; 0040a628
    POP EDI                             ; 0040a62b
    POP ESI                             ; 0040a62c
    POP EBX                             ; 0040a62d
    RET                                 ; 0040a62e
    MOV EDX,dword ptr [EBX]             ; 0040a62f
        ;   Label: LAB_0040a62f
    MOV dword ptr [EAX],EDX             ; 0040a631
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040a633
    MOV dword ptr [EAX + 0x4],EDX       ; 0040a636
    MOV EDX,dword ptr [EBX + 0x8]       ; 0040a639
    MOV dword ptr [EAX + 0x8],EDX       ; 0040a63c
    JMP 0x0040a5ba                      ; 0040a63f
        ;   XREF to: 0040a5ba (UNCONDITIONAL_JUMP)  ; LAB_0040a5ba
    FLD float ptr [EDI + 0x20]          ; 0040a644
        ;   Label: LAB_0040a644
    FSUB float ptr [EAX + 0x1c]         ; 0040a647
    FSTP float ptr [ESI]                ; 0040a64a
    FLD float ptr [EDI + 0x24]          ; 0040a64c
    FADD float ptr [EAX + 0x14]         ; 0040a64f
    FSTP float ptr [ESI + 0x4]          ; 0040a652
    FLD float ptr [EDI + 0x28]          ; 0040a655
    FSUB float ptr [EAX + 0x1c]         ; 0040a658
    FSTP float ptr [ESI + 0x8]          ; 0040a65b
    FLD float ptr [EDI + 0x20]          ; 0040a65e
    FADD float ptr [EAX + 0x1c]         ; 0040a661
    FSTP float ptr [ESI + 0xc]          ; 0040a664
    FLD float ptr [EDI + 0x24]          ; 0040a667
    FADD float ptr [EAX + 0x18]         ; 0040a66a
    FSTP float ptr [ESI + 0x10]         ; 0040a66d
    FLD float ptr [EDI + 0x28]          ; 0040a670
    FADD float ptr [EAX + 0x1c]         ; 0040a673
    FSTP float ptr [ESI + 0x14]         ; 0040a676
    MOV EAX,ESI                         ; 0040a679
    ADD ESP,0x48                        ; 0040a67b
    POP EDI                             ; 0040a67e
    POP ESI                             ; 0040a67f
    POP EBX                             ; 0040a680
    RET                                 ; 0040a681
    JBE 0x0040a644                      ; 0040a682
        ;   XREF to: 0040a644 (CONDITIONAL_JUMP)  ; LAB_0040a644
        ;   Label: LAB_0040a682
    CMP EBX,0x3                         ; 0040a684
    JZ 0x0040a568                       ; 0040a687
        ;   XREF to: 0040a568 (CONDITIONAL_JUMP)  ; LAB_0040a568
    MOV dword ptr [ESI + 0x8],0x4cbebc20 ; 0040a68d
        ;   Label: LAB_0040a68d
    LEA EAX,[ESI + 0xc]                 ; 0040a694
    MOV EDX,dword ptr [ESI + 0x8]       ; 0040a697
    MOV dword ptr [ESI + 0x4],EDX       ; 0040a69a
    MOV EDX,dword ptr [ESI + 0x4]       ; 0040a69d
    MOV dword ptr [ESI],EDX             ; 0040a6a0
    CMP EAX,ESI                         ; 0040a6a2
    JZ 0x0040a626                       ; 0040a6a4
        ;   XREF to: 0040a626 (CONDITIONAL_JUMP)  ; LAB_0040a626
    MOV EDX,dword ptr [ESI]             ; 0040a6a6
    MOV dword ptr [EAX],EDX             ; 0040a6a8
    MOV EDX,dword ptr [ESI + 0x4]       ; 0040a6aa
    MOV dword ptr [EAX + 0x4],EDX       ; 0040a6ad
    MOV EDX,dword ptr [ESI + 0x8]       ; 0040a6b0
    MOV dword ptr [EAX + 0x8],EDX       ; 0040a6b3
    MOV EAX,ESI                         ; 0040a6b6
    ADD ESP,0x48                        ; 0040a6b8
    POP EDI                             ; 0040a6bb
    POP ESI                             ; 0040a6bc
    POP EBX                             ; 0040a6bd
    RET                                 ; 0040a6be

