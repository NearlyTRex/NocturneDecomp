; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_FUN_004fa900(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fa900
        ;   Label: core_imp.cpp_FUN_004fa900
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fa904
    MOV dword ptr [EAX],EDX             ; 004fa908
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fa90a
    MOV dword ptr [EAX + 0x8],EDX       ; 004fa90e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fa911
    MOV dword ptr [EAX + 0x4],EDX       ; 004fa915
    RET                                 ; 004fa918

