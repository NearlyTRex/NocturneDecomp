; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(CInStreamFile *this_ptr,char *path)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
;
; XREF[1]:
;   support_codec.cpp_FUN_004340f0 at 00434102
;
; Referenced Globals:
;   undefined1* g_CInStreamFileVTable = 0057cec0
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0057b9c0
;   support_trstream.cpp_CInStreamFile_open_FUN_0057d320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cdb0
        ;   Label: support_trstream.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057cdb1
    PUSH EDX                            ; 0057cdb5
    CALL support_trstream.cpp_CInStream_ctor_FUN_0057b9c0 ; 0057cdb6
        ;   XREF to: 0057b9c0 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0057b9c0(CInStream * this_ptr)
    MOV dword ptr [EAX],0x5fd3e4        ; 0057cdbb | g_CInStreamFileVTable
    MOV dword ptr [EAX + 0x4],0x0       ; 0057cdc1
    MOV dword ptr [EAX + 0x8],0x0       ; 0057cdc8
    MOV dword ptr [EAX + 0xc],0x0       ; 0057cdcf
    MOV dword ptr [EAX + 0x10],0x0      ; 0057cdd6
    MOV dword ptr [EAX + 0x14],0x0      ; 0057cddd
    ADD ESP,0x4                         ; 0057cde4
    MOV dword ptr [EAX + 0x18],0x0      ; 0057cde7
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057cdee
    MOV dword ptr [EAX + 0x1c],0x0      ; 0057cdf2
    PUSH ECX                            ; 0057cdf9
    MOV dword ptr [EAX + 0x20],0x0      ; 0057cdfa
    PUSH EAX                            ; 0057ce01
    MOV EBX,EAX                         ; 0057ce02
    MOV dword ptr [EAX + 0x24],0x0      ; 0057ce04
    CALL support_trstream.cpp_CInStreamFile_open_FUN_0057d320 ; 0057ce0b
        ;   XREF to: 0057d320 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_open_FUN_0057d320(CInStreamFile * this_ptr, char * path)
    ADD ESP,0x8                         ; 0057ce10
    MOV EAX,EBX                         ; 0057ce13
    POP EBX                             ; 0057ce15
    RET                                 ; 0057ce16

