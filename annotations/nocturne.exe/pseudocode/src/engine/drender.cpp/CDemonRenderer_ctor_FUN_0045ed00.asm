; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0045ed00(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_drender.cpp_staticInit_FUN_0045ecf0 at 0045ecf5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045ed00
        ;   Label: engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00
    MOV dword ptr [EAX + 0x8],0x0       ; 0045ed04
    MOV dword ptr [EAX],0x5c5014        ; 0045ed0b
    MOV dword ptr [EAX + 0xc],0x1       ; 0045ed11
    MOV dword ptr [EAX + 0x10],0x1      ; 0045ed18
    MOV dword ptr [EAX + 0x14],0x0      ; 0045ed1f
    MOV dword ptr [EAX + 0x1c],0x0      ; 0045ed26
    MOV dword ptr [EAX + 0x20],0x0      ; 0045ed2d
    MOV dword ptr [EAX + 0x4],0x0       ; 0045ed34
    RET                                 ; 0045ed3b

