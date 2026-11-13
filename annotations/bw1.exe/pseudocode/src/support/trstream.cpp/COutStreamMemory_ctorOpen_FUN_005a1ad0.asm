; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * __cdecl support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(COutStreamMemory *this_ptr,char *buffer,int capacity)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   capacity
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020 at 0044405a
;   support_codec.cpp_FUN_00442c80 at 00442c9b
;   support_codec.cpp_FUN_00442f00 at 00442f18
;
; Referenced Globals:
;   undefined1* g_COutStreamMemoryVTable = 005a1b60
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005a14b0
;   support_trstream.cpp_COutStreamMemory_open_FUN_005a1d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ad0
        ;   Label: support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
    PUSH ESI                            ; 005a1ad1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1ad2
    PUSH EDX                            ; 005a1ad6
    CALL support_trstream.cpp_COutStream_dtor_FUN_005a14b0 ; 005a1ad7
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005a14b0(COutStream * this_ptr, uint flags)
    MOV dword ptr [EAX],0x607454        ; 005a1adc | g_COutStreamMemoryVTable
    ADD ESP,0x4                         ; 005a1ae2
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1ae5
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a1aec
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1af0
    PUSH ECX                            ; 005a1af7
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a1af8
    MOV dword ptr [EAX + 0xc],0x0       ; 005a1afc
    PUSH ESI                            ; 005a1b03
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1b04
    PUSH EAX                            ; 005a1b0b
    MOV EBX,EAX                         ; 005a1b0c
    MOV dword ptr [EAX + 0x14],0x1      ; 005a1b0e
    CALL support_trstream.cpp_COutStreamMemory_open_FUN_005a1d60 ; 005a1b15
        ;   XREF to: 005a1d60 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_COutStreamMemory_open_FUN_005a1d60(COutStreamMemory * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 005a1b1a
    MOV EAX,EBX                         ; 005a1b1d
    POP ESI                             ; 005a1b1f
    POP EBX                             ; 005a1b20
    RET                                 ; 005a1b21

