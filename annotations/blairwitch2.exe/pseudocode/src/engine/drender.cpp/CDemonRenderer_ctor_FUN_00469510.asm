; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_00469510(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_drender.cpp_staticInit_FUN_00469500 at 00469505
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00469510
        ;   Label: engine_drender.cpp_CDemonRenderer_ctor_FUN_00469510
    MOV dword ptr [EAX + 0x8],0x0       ; 00469514
    MOV dword ptr [EAX],0x622014        ; 0046951b
    MOV dword ptr [EAX + 0xc],0x1       ; 00469521
    MOV dword ptr [EAX + 0x10],0x1      ; 00469528
    MOV dword ptr [EAX + 0x14],0x0      ; 0046952f
    MOV dword ptr [EAX + 0x1c],0x0      ; 00469536
    MOV dword ptr [EAX + 0x20],0x0      ; 0046953d
    MOV dword ptr [EAX + 0x4],0x0       ; 00469544
    RET                                 ; 0046954b

