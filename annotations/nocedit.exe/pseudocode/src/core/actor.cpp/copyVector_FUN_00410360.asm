; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_copyVector_FUN_00410360(CVector3f *dst_ptr,CVector3f *src_ptr)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dst_ptr
; CVector3f *      Stack[0x8]:4   src_ptr
;
; XREF[3]:
;   shape_meshlod.cpp_CLodFace_copy2_FUN_0051efe0 at 0051f033
;   shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570 at 0051b6aa
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051bf37
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410360
        ;   Label: core_actor.cpp_copyVector_FUN_00410360
    MOV EDX,dword ptr [ESP + 0x8]       ; 00410364
    CMP EAX,EDX                         ; 00410368
    JNZ 0x0041036d                      ; 0041036a
        ;   XREF to: 0041036d (CONDITIONAL_JUMP)  ; LAB_0041036d
    RET                                 ; 0041036c
    MOV ECX,dword ptr [EDX]             ; 0041036d
        ;   Label: LAB_0041036d
    MOV dword ptr [EAX],ECX             ; 0041036f
    MOV ECX,dword ptr [EDX + 0x4]       ; 00410371
    MOV dword ptr [EAX + 0x4],ECX       ; 00410374
    MOV ECX,dword ptr [EDX + 0x8]       ; 00410377
    MOV dword ptr [EAX + 0x8],ECX       ; 0041037a
    RET                                 ; 0041037d

