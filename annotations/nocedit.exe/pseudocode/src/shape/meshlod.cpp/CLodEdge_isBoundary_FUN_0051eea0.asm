; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodEdge_isBoundary_FUN_0051eea0(CLodEdge *this_ptr)
;
; Parameters:
; CLodEdge *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051eea0
        ;   Label: shape_meshlod.cpp_CLodEdge_isBoundary_FUN_0051eea0
    CMP dword ptr [EAX + 0x24],0x2      ; 0051eea4
    SETL AL                             ; 0051eea8
    AND EAX,0xff                        ; 0051eeab
    RET                                 ; 0051eeb0

