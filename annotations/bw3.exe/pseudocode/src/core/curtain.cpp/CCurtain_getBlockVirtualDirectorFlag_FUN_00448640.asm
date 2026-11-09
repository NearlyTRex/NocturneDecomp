; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_00448640(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448640
        ;   Label: core_curtain.cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_00448640
    MOV EAX,dword ptr [EAX + 0x200]     ; 00448644
    RET                                 ; 0044864a

