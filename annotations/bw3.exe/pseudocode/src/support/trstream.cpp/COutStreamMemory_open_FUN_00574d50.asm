; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_00574d50(COutStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_00574ac0 at 00574b05
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574d50
        ;   Label: support_trstream.cpp_COutStreamMemory_open_FUN_00574d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574d51
    PUSH EBX                            ; 00574d55
    MOV EAX,dword ptr [EBX]             ; 00574d56
    CALL dword ptr [EAX + 0x14]         ; 00574d58
    MOV dword ptr [EBX + 0xc],0x0       ; 00574d5b
    MOV dword ptr [EBX + 0x10],0x0      ; 00574d62
    ADD ESP,0x4                         ; 00574d69
    MOV dword ptr [EBX + 0x14],0x0      ; 00574d6c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574d73
    MOV dword ptr [EBX + 0x4],EAX       ; 00574d77
    MOV EAX,dword ptr [ESP + 0x10]      ; 00574d7a
    MOV dword ptr [EBX + 0x8],EAX       ; 00574d7e
    POP EBX                             ; 00574d81
    RET                                 ; 00574d82

