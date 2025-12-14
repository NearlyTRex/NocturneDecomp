; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex0
; CVector3f *      Stack[0xc]:4   vertex1
; CVector3f *      Stack[0x10]:4   vertex2
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData at 00457031
;   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 at 0045737a
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00455430
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
    MOV EDX,dword ptr [ESP + 0x8]       ; 00455434
    MOV dword ptr [EAX],EDX             ; 00455438
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045543a
    MOV dword ptr [EAX + 0x4],EDX       ; 0045543e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00455441
    PUSH EAX                            ; 00455445
    MOV dword ptr [EAX + 0x8],EDX       ; 00455446
    CALL core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0 ; 00455449
        ;   XREF to: 004552c0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle * this_ptr)
    ADD ESP,0x4                         ; 0045544e
    RET                                 ; 00455451

