; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * support_trstream_cpp_COutStreamMemory_ctor_FUN_00574a80(COutStreamMemory *this_ptr)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trstream.cpp_FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574a80
        ;   Label: support_trstream.cpp_COutStreamMemory_ctor_FUN_00574a80
    PUSH EDX                            ; 00574a84
    CALL support_trstream.cpp_FUN_005744a0 ; 00574a85
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005744a0()
    MOV dword ptr [EAX],0x5e5b54        ; 00574a8a
    MOV dword ptr [EAX + 0x4],0x0       ; 00574a90
    MOV dword ptr [EAX + 0x8],0x0       ; 00574a97
    MOV dword ptr [EAX + 0xc],0x0       ; 00574a9e
    MOV dword ptr [EAX + 0x10],0x0      ; 00574aa5
    ADD ESP,0x4                         ; 00574aac
    MOV dword ptr [EAX + 0x14],0x1      ; 00574aaf
    RET                                 ; 00574ab6

