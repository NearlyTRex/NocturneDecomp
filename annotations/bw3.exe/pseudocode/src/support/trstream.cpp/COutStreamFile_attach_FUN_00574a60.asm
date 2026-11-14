; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_00574a60(COutStreamFile *this_ptr,int param_2)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a60
        ;   Label: support_trstream.cpp_COutStreamFile_attach_FUN_00574a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574a61
    PUSH EBX                            ; 00574a65
    MOV EAX,dword ptr [EBX]             ; 00574a66
    CALL dword ptr [EAX + 0x18]         ; 00574a68
    ADD ESP,0x4                         ; 00574a6b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574a6e
    MOV dword ptr [EBX + 0x4],EAX       ; 00574a72
    PUSH EBX                            ; 00574a75
    MOV EAX,dword ptr [EBX]             ; 00574a76
    CALL dword ptr [EAX + 0x14]         ; 00574a78
    ADD ESP,0x4                         ; 00574a7b
    POP EBX                             ; 00574a7e
    RET                                 ; 00574a7f

