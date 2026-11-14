; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_005a1d60(COutStreamMemory *this_ptr,int param_2,int param_3)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[1]:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0 at 005a1b15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1d60
        ;   Label: support_trstream.cpp_COutStreamMemory_open_FUN_005a1d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1d61
    PUSH EBX                            ; 005a1d65
    MOV EAX,dword ptr [EBX]             ; 005a1d66
    CALL dword ptr [EAX + 0x14]         ; 005a1d68
    MOV dword ptr [EBX + 0xc],0x0       ; 005a1d6b
    MOV dword ptr [EBX + 0x10],0x0      ; 005a1d72
    ADD ESP,0x4                         ; 005a1d79
    MOV dword ptr [EBX + 0x14],0x0      ; 005a1d7c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a1d83
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1d87
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a1d8a
    MOV dword ptr [EBX + 0x8],EAX       ; 005a1d8e
    POP EBX                             ; 005a1d91
    RET                                 ; 005a1d92

