; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
;
; XREF[11]:
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990 at 00453b61
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100 at 0045431f
;   core_dtri.cpp_buildClipTriangleFan_FUN_0046e960 at 0046e99e
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580 at 004c99af
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 at 0050f063
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710 at 005107d1
;   core_setcolid.cpp_rayTestQuadFloor_FUN_0050eba0 at 0050ebbf
;   core_setcolid.cpp_testCylinderQuadCollision_FUN_005106a0 at 005106bb
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470 at 0051a5ca
;   core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0 at 00534bc6
;   ... and 1 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c5b0
        ;   Label: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
    PUSH ESI                            ; 0046c5b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c5b2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0046c5b6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046c5ba
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c5be
    CMP EAX,EDX                         ; 0046c5c2
    JNZ 0x0046c600                      ; 0046c5c4
        ;   XREF to: 0046c600 (CONDITIONAL_JUMP)  ; LAB_0046c600
    LEA EDX,[EAX + 0xc]                 ; 0046c5c6
        ;   Label: LAB_0046c5c6
    CMP EDX,ECX                         ; 0046c5c9
    JZ 0x0046c5dd                       ; 0046c5cb
        ;   XREF to: 0046c5dd (CONDITIONAL_JUMP)  ; LAB_0046c5dd
    MOV ESI,dword ptr [ECX]             ; 0046c5cd
    MOV dword ptr [EDX],ESI             ; 0046c5cf
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046c5d1
    MOV dword ptr [EDX + 0x4],ESI       ; 0046c5d4
    MOV ESI,dword ptr [ECX + 0x8]       ; 0046c5d7
    MOV dword ptr [EDX + 0x8],ESI       ; 0046c5da
    LEA EDX,[EAX + 0x18]                ; 0046c5dd
        ;   Label: LAB_0046c5dd
    CMP EDX,EBX                         ; 0046c5e0
    JZ 0x0046c5f4                       ; 0046c5e2
        ;   XREF to: 0046c5f4 (CONDITIONAL_JUMP)  ; LAB_0046c5f4
    MOV ECX,dword ptr [EBX]             ; 0046c5e4
    MOV dword ptr [EDX],ECX             ; 0046c5e6
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046c5e8
    MOV dword ptr [EDX + 0x4],ECX       ; 0046c5eb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0046c5ee
    MOV dword ptr [EDX + 0x8],ECX       ; 0046c5f1
    PUSH EAX                            ; 0046c5f4
        ;   Label: LAB_0046c5f4
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460 ; 0046c5f5
        ;   XREF to: 0046c460 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460(CDemonTriangle * triangle)
    ADD ESP,0x4                         ; 0046c5fa
    POP ESI                             ; 0046c5fd
    POP EBX                             ; 0046c5fe
    RET                                 ; 0046c5ff
    MOV ESI,dword ptr [EDX]             ; 0046c600
        ;   Label: LAB_0046c600
    MOV dword ptr [EAX],ESI             ; 0046c602
    MOV ESI,dword ptr [EDX + 0x4]       ; 0046c604
    MOV dword ptr [EAX + 0x4],ESI       ; 0046c607
    MOV ESI,dword ptr [EDX + 0x8]       ; 0046c60a
    MOV dword ptr [EAX + 0x8],ESI       ; 0046c60d
    JMP 0x0046c5c6                      ; 0046c610
        ;   XREF to: 0046c5c6 (UNCONDITIONAL_JUMP)  ; LAB_0046c5c6

