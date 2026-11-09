; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0044c240(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c240
        ;   Label: core_curtain.cpp_CCurtain_renderTransparent_FUN_0044c240
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 0044c244
    JLE 0x0044c233                      ; 0044c24e
        ;   XREF to: 0044c233 (CONDITIONAL_JUMP)  ; LAB_0044c233

