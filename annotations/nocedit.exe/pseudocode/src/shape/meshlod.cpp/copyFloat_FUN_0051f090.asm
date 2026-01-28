; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float * __cdecl shape_meshlod_cpp_copyFloat_FUN_0051f090(float *dest_ptr,float *src_ptr)
;
; Parameters:
; float *          Stack[0x4]:4   dest_ptr
; float *          Stack[0x8]:4   src_ptr
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051be88
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f090
        ;   Label: shape_meshlod.cpp_copyFloat_FUN_0051f090
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051f094
    MOV EAX,dword ptr [EAX]             ; 0051f098
    MOV dword ptr [EDX],EAX             ; 0051f09a
    MOV EAX,EDX                         ; 0051f09c
    RET                                 ; 0051f09e

