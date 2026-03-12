; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_superopt_cpp_COptimize_getCoplanarDistanceThreshold_FUN_005d7190(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d7190
        ;   Label: shape_superopt.cpp_COptimize_getCoplanarDistanceThreshold_FUN_005d7190
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d7193
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005d7197
    MOV dword ptr [ESP],EAX             ; 005d719a
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d719d
    MOV EAX,dword ptr [EAX + 0x30]      ; 005d71a1
    MOV dword ptr [ESP + 0x4],EAX       ; 005d71a4
    MOV EAX,dword ptr [ESP]             ; 005d71a8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d71ab
    ADD ESP,0x8                         ; 005d71af
    RET                                 ; 005d71b2

