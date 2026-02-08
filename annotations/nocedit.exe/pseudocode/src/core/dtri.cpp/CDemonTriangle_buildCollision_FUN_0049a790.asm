; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790 (CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
;
; XREF[11]:
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 at 004783a1
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00478950 at 00478b6f
;   core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100 at 0049512a
;   core_dtri.cpp_buildClipTriangleFan_FUN_0049cb5a at 0049cb7e
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 00572003
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 at 00573201
;   core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0 at 005715ef
;   core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0 at 005730eb
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 at 0059cd14
;   core_stairs.cpp_CStairs_FUN_005ba700 at 005ba811
;   ... and 1 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a790
        ;   Label: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
    PUSH ESI                            ; 0049a791
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049a792
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a796
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049a79a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049a79e
    CMP EAX,EDX                         ; 0049a7a2
    JNZ 0x0049a7e0                      ; 0049a7a4
        ;   XREF to: 0049a7e0 (CONDITIONAL_JUMP)  ; LAB_0049a7e0
    LEA EDX,[EAX + 0xc]                 ; 0049a7a6
        ;   Label: LAB_0049a7a6
    CMP EDX,ECX                         ; 0049a7a9
    JZ 0x0049a7bd                       ; 0049a7ab
        ;   XREF to: 0049a7bd (CONDITIONAL_JUMP)  ; LAB_0049a7bd
    MOV ESI,dword ptr [ECX]             ; 0049a7ad
    MOV dword ptr [EDX],ESI             ; 0049a7af
    MOV ESI,dword ptr [ECX + 0x4]       ; 0049a7b1
    MOV dword ptr [EDX + 0x4],ESI       ; 0049a7b4
    MOV ESI,dword ptr [ECX + 0x8]       ; 0049a7b7
    MOV dword ptr [EDX + 0x8],ESI       ; 0049a7ba
    LEA EDX,[EAX + 0x18]                ; 0049a7bd
        ;   Label: LAB_0049a7bd
    CMP EDX,EBX                         ; 0049a7c0
    JZ 0x0049a7d4                       ; 0049a7c2
        ;   XREF to: 0049a7d4 (CONDITIONAL_JUMP)  ; LAB_0049a7d4
    MOV ECX,dword ptr [EBX]             ; 0049a7c4
    MOV dword ptr [EDX],ECX             ; 0049a7c6
    MOV ECX,dword ptr [EBX + 0x4]       ; 0049a7c8
    MOV dword ptr [EDX + 0x4],ECX       ; 0049a7cb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049a7ce
    MOV dword ptr [EDX + 0x8],ECX       ; 0049a7d1
    PUSH EAX                            ; 0049a7d4
        ;   Label: LAB_0049a7d4
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640 ; 0049a7d5
        ;   XREF to: 0049a640 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle * triangle)
    ADD ESP,0x4                         ; 0049a7da
    POP ESI                             ; 0049a7dd
    POP EBX                             ; 0049a7de
    RET                                 ; 0049a7df
    MOV ESI,dword ptr [EDX]             ; 0049a7e0
        ;   Label: LAB_0049a7e0
    MOV dword ptr [EAX],ESI             ; 0049a7e2
    MOV ESI,dword ptr [EDX + 0x4]       ; 0049a7e4
    MOV dword ptr [EAX + 0x4],ESI       ; 0049a7e7
    MOV ESI,dword ptr [EDX + 0x8]       ; 0049a7ea
    MOV dword ptr [EAX + 0x8],ESI       ; 0049a7ed
    JMP 0x0049a7a6                      ; 0049a7f0
        ;   XREF to: 0049a7a6 (UNCONDITIONAL_JUMP)  ; LAB_0049a7a6

