; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_CColonel_drawGuns_FUN_004405e0(CColonel *this_ptr,int drawn)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   drawn
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004405e0
        ;   Label: core_colonel.cpp_CColonel_drawGuns_FUN_004405e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004405e4
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004405e8
    RET                                 ; 004405ee

