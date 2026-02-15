; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CPoly_getMaterialId_FUN_005ce3d0(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ce3d0
        ;   Label: shape_superopt.cpp_CPoly_getMaterialId_FUN_005ce3d0
    MOV EAX,dword ptr [EAX + 0x5c]      ; 005ce3d4
    RET                                 ; 005ce3d7

