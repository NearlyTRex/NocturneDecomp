; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40(COutStreamMemory *this_ptr)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057de40
        ;   Label: support_trstream.cpp_COutStreamMemory_ctor_FUN_0057de40
    PUSH EDX                            ; 0057de44
    CALL support_trstream.cpp_COutStream_dtor_FUN_0057d860 ; 0057de45
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_0057d860(COutStream * this_ptr, uint flags)
    MOV dword ptr [EAX],0x5fd4b4        ; 0057de4a
    MOV dword ptr [EAX + 0x4],0x0       ; 0057de50
    MOV dword ptr [EAX + 0x8],0x0       ; 0057de57
    MOV dword ptr [EAX + 0xc],0x0       ; 0057de5e
    MOV dword ptr [EAX + 0x10],0x0      ; 0057de65
    ADD ESP,0x4                         ; 0057de6c
    MOV dword ptr [EAX + 0x14],0x1      ; 0057de6f
    RET                                 ; 0057de76

