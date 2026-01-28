; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CPoly_setMaterialId_FUN_005ce3c0(CPoly *this_ptr,int material_id)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   material_id
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ce3c0
        ;   Label: shape_superopt.cpp_CPoly_setMaterialId_FUN_005ce3c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ce3c4
    MOV dword ptr [EDX + 0x5c],EAX      ; 005ce3c8
    RET                                 ; 005ce3cb

