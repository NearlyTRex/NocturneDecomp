; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
;
; XREF[8]:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_004620c0 at 00462360
;   core_dmodel.cpp_FUN_004618a0 at 00461a80
;   core_dtri.cpp_buildClipTriangleFan_FUN_0047ae10 at 0047ae4e
;   core_setcolid.cpp_FUN_0053bc80 at 0053c106
;   core_setcolid.cpp_FUN_0053da90 at 0053dba4
;   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0054ac50 at 0054adb3
;   core_stairs.cpp_CStairs_buildCollision_FUN_00568730 at 00568826
;   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00578d30 at 00578e0e
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478a50
        ;   Label: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
    PUSH ESI                            ; 00478a51
    MOV EAX,dword ptr [ESP + 0xc]       ; 00478a52
    MOV EDX,dword ptr [ESP + 0x10]      ; 00478a56
    MOV ECX,dword ptr [ESP + 0x14]      ; 00478a5a
    MOV EBX,dword ptr [ESP + 0x18]      ; 00478a5e
    CMP EAX,EDX                         ; 00478a62
    JNZ 0x00478aa0                      ; 00478a64
        ;   XREF to: 00478aa0 (CONDITIONAL_JUMP)  ; LAB_00478aa0
    LEA EDX,[EAX + 0xc]                 ; 00478a66
        ;   Label: LAB_00478a66
    CMP EDX,ECX                         ; 00478a69
    JZ 0x00478a7d                       ; 00478a6b
        ;   XREF to: 00478a7d (CONDITIONAL_JUMP)  ; LAB_00478a7d
    MOV ESI,dword ptr [ECX]             ; 00478a6d
    MOV dword ptr [EDX],ESI             ; 00478a6f
    MOV ESI,dword ptr [ECX + 0x4]       ; 00478a71
    MOV dword ptr [EDX + 0x4],ESI       ; 00478a74
    MOV ESI,dword ptr [ECX + 0x8]       ; 00478a77
    MOV dword ptr [EDX + 0x8],ESI       ; 00478a7a
    LEA EDX,[EAX + 0x18]                ; 00478a7d
        ;   Label: LAB_00478a7d
    CMP EDX,EBX                         ; 00478a80
    JZ 0x00478a94                       ; 00478a82
        ;   XREF to: 00478a94 (CONDITIONAL_JUMP)  ; LAB_00478a94
    MOV ECX,dword ptr [EBX]             ; 00478a84
    MOV dword ptr [EDX],ECX             ; 00478a86
    MOV ECX,dword ptr [EBX + 0x4]       ; 00478a88
    MOV dword ptr [EDX + 0x4],ECX       ; 00478a8b
    MOV ECX,dword ptr [EBX + 0x8]       ; 00478a8e
    MOV dword ptr [EDX + 0x8],ECX       ; 00478a91
    PUSH EAX                            ; 00478a94
        ;   Label: LAB_00478a94
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900 ; 00478a95
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900(CDemonTriangle * this_ptr)
    ADD ESP,0x4                         ; 00478a9a
    POP ESI                             ; 00478a9d
    POP EBX                             ; 00478a9e
    RET                                 ; 00478a9f
    MOV ESI,dword ptr [EDX]             ; 00478aa0
        ;   Label: LAB_00478aa0
    MOV dword ptr [EAX],ESI             ; 00478aa2
    MOV ESI,dword ptr [EDX + 0x4]       ; 00478aa4
    MOV dword ptr [EAX + 0x4],ESI       ; 00478aa7
    MOV ESI,dword ptr [EDX + 0x8]       ; 00478aaa
    MOV dword ptr [EAX + 0x8],ESI       ; 00478aad
    JMP 0x00478a66                      ; 00478ab0
        ;   XREF to: 00478a66 (UNCONDITIONAL_JUMP)  ; LAB_00478a66

