; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * shape_meshlod.cpp_copyFloat_FUN_0051f0a0(float * dest_ptr, float * src_ptr)
;
; Parameters:
; float *          Stack[0x4]:4   dest_ptr
; float *          Stack[0x8]:4   src_ptr
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051be75
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f0a0
        ;   Label: shape_meshlod.cpp_copyFloat_FUN_0051f0a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051f0a4
    MOV EAX,dword ptr [EAX]             ; 0051f0a8
    MOV dword ptr [EDX],EAX             ; 0051f0aa
    MOV EAX,EDX                         ; 0051f0ac
    RET                                 ; 0051f0ae

