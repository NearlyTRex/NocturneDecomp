; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_00448380(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448380
        ;   Label: core_curtain.cpp_CCurtain_renderTransparent_FUN_00448380
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 00448384
    JLE 0x00448373                      ; 0044838e
        ;   XREF to: 00448373 (CONDITIONAL_JUMP)  ; LAB_00448373

