; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_SRA4HQPoint_copy_FUN_0047ef60(SRA4HQPoint *this_ptr,SRA4HQPoint *other)
;
; Parameters:
; SRA4HQPoint *    Stack[0x4]:4   this_ptr
; SRA4HQPoint *    Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ef60
        ;   Label: core_dmodel.cpp_SRA4HQPoint_copy_FUN_0047ef60
    MOV ECX,dword ptr [ESP + 0x8]       ; 0047ef64
    ADD EAX,0x4                         ; 0047ef68
    MOV EDX,dword ptr [ECX]             ; 0047ef6b
    MOV dword ptr [EAX + -0x4],EDX      ; 0047ef6d
    LEA EDX,[ECX + 0x4]                 ; 0047ef70
    ADD EAX,0x4                         ; 0047ef73
    MOV EDX,dword ptr [EDX]             ; 0047ef76
    MOV dword ptr [EAX + -0x4],EDX      ; 0047ef78
    LEA EDX,[ECX + 0x8]                 ; 0047ef7b
    SUB EAX,0x8                         ; 0047ef7e
    MOV EDX,dword ptr [EDX]             ; 0047ef81
    MOV dword ptr [EAX + 0x8],EDX       ; 0047ef83
    RET                                 ; 0047ef86

