; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_superopt_cpp_COptimize_getWeldThreshold_FUN_005d70f0(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d70f0
        ;   Label: shape_superopt.cpp_COptimize_getWeldThreshold_FUN_005d70f0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d70f3
    MOV EAX,dword ptr [EAX + 0x1c]      ; 005d70f7
    MOV dword ptr [ESP],EAX             ; 005d70fa
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d70fd
    MOV EAX,dword ptr [EAX + 0x20]      ; 005d7101
    MOV dword ptr [ESP + 0x4],EAX       ; 005d7104
    MOV EAX,dword ptr [ESP]             ; 005d7108
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d710b
    ADD ESP,0x8                         ; 005d710f
    RET                                 ; 005d7112

