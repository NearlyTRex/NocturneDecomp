; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CP2D_set_FUN_005d8310(CP2D *this_ptr,double x,double y)
;
; Parameters:
; CP2D *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   x
; double           Stack[0x10]:8   y
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d8310
        ;   Label: shape_superopt.cpp_CP2D_set_FUN_005d8310
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d8314
    MOV dword ptr [EAX],EDX             ; 005d8318
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d831a
    MOV dword ptr [EAX + 0x4],EDX       ; 005d831e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d8321
    MOV dword ptr [EAX + 0x8],EDX       ; 005d8325
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d8328
    MOV dword ptr [EAX + 0xc],EDX       ; 005d832c
    RET                                 ; 005d832f

