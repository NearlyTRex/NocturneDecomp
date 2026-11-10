; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFont * __cdecl unkafter_npc_cpp_FUN_00510ca0(CFont *this_ptr)
;
; Parameters:
; CFont *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_ctor_FUN_0058df90 at 0058df96
;
; Referenced Globals:
;   undefined1* PTR_engine_palette.cpp_FUN_00510cc0_005fa8bc = 00510cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510ca0
        ;   Label: unkafter_npc.cpp_FUN_00510ca0
    MOV dword ptr [EAX],0x0             ; 00510ca4
    MOV dword ptr [EAX + 0x6a44],0x5fa8bc ; 00510caa | PTR_engine_palette.cpp_FUN_00510cc0_005fa8bc
    RET                                 ; 00510cb4

