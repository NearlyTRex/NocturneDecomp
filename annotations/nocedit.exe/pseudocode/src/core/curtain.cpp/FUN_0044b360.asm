; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_curtain_cpp_FUN_0044b360(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044b360
        ;   Label: core_curtain.cpp_FUN_0044b360
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 0044b364
    JLE 0x0044b353                      ; 0044b36e
        ;   XREF to: 0044b353 (CONDITIONAL_JUMP)  ; LAB_0044b353

