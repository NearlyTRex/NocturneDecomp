; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500 (CLodMesh *this_ptr,CBoundingBox3D *out_bbox)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_bbox
;
; XREF[5]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051d9e1
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b9ef
;   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10 at 00516e23
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 at 0051b33c
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d6ee
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516500
        ;   Label: shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
    PUSH EDI                            ; 00516501
    PUSH EBP                            ; 00516502
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516503
    MOV EBP,dword ptr [ESP + 0x14]      ; 00516507
    MOV EAX,dword ptr [EDI + 0x4]       ; 0051650b
    MOV EBX,EBP                         ; 0051650e
    CMP EBP,EAX                         ; 00516510
    JNZ 0x0051655d                      ; 00516512
        ;   XREF to: 0051655d (CONDITIONAL_JUMP)  ; LAB_0051655d
    ADD EBX,0xc                         ; 00516514
        ;   Label: LAB_00516514
    CMP EBX,EAX                         ; 00516517
    JZ 0x0051652b                       ; 00516519
        ;   XREF to: 0051652b (CONDITIONAL_JUMP)  ; LAB_0051652b
    MOV EDX,dword ptr [EAX]             ; 0051651b
    MOV dword ptr [EBX],EDX             ; 0051651d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051651f
    MOV dword ptr [EBX + 0x4],EDX       ; 00516522
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516525
    MOV dword ptr [EBX + 0x8],EDX       ; 00516528
    MOV EBX,0x1                         ; 0051652b
        ;   Label: LAB_0051652b
    CMP EBX,dword ptr [EDI]             ; 00516530
    JGE 0x00516557                      ; 00516532
        ;   XREF to: 00516557 (CONDITIONAL_JUMP)  ; LAB_00516557
    PUSH ESI                            ; 00516534
    MOV ESI,0x4c4                       ; 00516535
    MOV EAX,dword ptr [EDI + 0x4]       ; 0051653a
        ;   Label: LAB_0051653a
    ADD EAX,ESI                         ; 0051653d
    PUSH EAX                            ; 0051653f
    PUSH EBP                            ; 00516540
    INC EBX                             ; 00516541
    ADD ESI,0x4c4                       ; 00516542
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00516548
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    MOV ECX,dword ptr [EDI]             ; 0051654d
    ADD ESP,0x8                         ; 0051654f
    CMP EBX,ECX                         ; 00516552
    JL 0x0051653a                       ; 00516554
        ;   XREF to: 0051653a (CONDITIONAL_JUMP)  ; LAB_0051653a
    POP ESI                             ; 00516556
    MOV EAX,EBP                         ; 00516557
        ;   Label: LAB_00516557
    POP EBP                             ; 00516559
    POP EDI                             ; 0051655a
    POP EBX                             ; 0051655b
    RET                                 ; 0051655c
    MOV EDX,dword ptr [EAX]             ; 0051655d
        ;   Label: LAB_0051655d
    MOV dword ptr [EBP],EDX             ; 0051655f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00516562
    MOV dword ptr [EBP + 0x4],EDX       ; 00516565
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516568
    MOV dword ptr [EBP + 0x8],EDX       ; 0051656b
    JMP 0x00516514                      ; 0051656e
        ;   XREF to: 00516514 (UNCONDITIONAL_JUMP)  ; LAB_00516514

