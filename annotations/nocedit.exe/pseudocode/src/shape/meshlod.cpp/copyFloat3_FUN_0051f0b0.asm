; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl shape_meshlod_cpp_copyFloat3_FUN_0051f0b0(float *dest_ptr,float *src_ptr)
;
; Parameters:
; float *          Stack[0x4]:4   dest_ptr
; float *          Stack[0x8]:4   src_ptr
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 at 0051be62
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f0b0
        ;   Label: shape_meshlod.cpp_copyFloat3_FUN_0051f0b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051f0b4
    MOV EAX,dword ptr [EAX]             ; 0051f0b8
    MOV dword ptr [EDX],EAX             ; 0051f0ba
    MOV EAX,EDX                         ; 0051f0bc
    RET                                 ; 0051f0be

