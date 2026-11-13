; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_ctor_FUN_00574e00(COutStreamDebug *this_ptr)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_trstream.cpp_staticInit_FUN_00572510 at 00572515
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574e00
        ;   Label: support_trstream.cpp_COutStreamDebug_ctor_FUN_00574e00
    PUSH EDX                            ; 00574e04
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 00574e05
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 00574e0a
    MOV dword ptr [EAX],0x5e5b74        ; 00574e0d
    RET                                 ; 00574e13

