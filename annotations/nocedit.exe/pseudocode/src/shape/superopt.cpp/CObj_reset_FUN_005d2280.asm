; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_reset_FUN_005d2280(CObj * this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_CObj_ctor_FUN_005d2230 at 005d223d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005d2280
        ;   Label: shape_superopt.cpp_CObj_reset_FUN_005d2280
    MOV dword ptr [EAX + 0x4],0x0       ; 005d2284
    MOV dword ptr [EAX + 0x8],0x0       ; 005d228b
    MOV dword ptr [EAX + 0xc],0x0       ; 005d2292
    MOV dword ptr [EAX + 0x10],0x0      ; 005d2299
    MOV dword ptr [EAX + 0x14],0x1      ; 005d22a0
    MOV dword ptr [EAX],0x0             ; 005d22a7
    RET                                 ; 005d22ad

