; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0(COutStreamMemory *this_ptr,COutStreamMemory *other)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; COutStreamMemory * Stack[0x8]:4   other
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057dee0
        ;   Label: support_trstream.cpp_COutStreamMemory_copy_FUN_0057dee0
    PUSH EDX                            ; 0057dee4
    CALL support_trstream.cpp_COutStream_dtor_FUN_0057d860 ; 0057dee5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_0057d860(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 0057deea
    MOV dword ptr [EAX],0x5fd4b4        ; 0057deed
    RET                                 ; 0057def3

