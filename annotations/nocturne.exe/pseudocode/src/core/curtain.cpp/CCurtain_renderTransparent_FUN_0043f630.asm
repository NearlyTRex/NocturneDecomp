; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f630
        ;   Label: core_curtain.cpp_CCurtain_renderTransparent_FUN_0043f630
    CMP dword ptr [EAX + 0x174],0xfde8  ; 0043f634
    JLE 0x0043f623                      ; 0043f63e
        ;   XREF to: 0043f623 (CONDITIONAL_JUMP)  ; LAB_0043f623

