; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_005a0930(CInStreamFile *this_ptr,char *path,int binary_mode)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; int              Stack[0xc]:4   binary_mode
;
; XREF[1]:
;   support_codec.cpp_FUN_00442e10 at 00442e24
;
; Referenced Globals:
;   undefined1* g_CInStreamFileVTable = 005a0a50
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_0059f540
;   support_trstream.cpp_CInStreamFile_open_FUN_005a0f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0930
        ;   Label: support_trstream.cpp_CInStreamFile_ctorOpen_FUN_005a0930
    PUSH ESI                            ; 005a0931
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a0932
    PUSH EDX                            ; 005a0936
    CALL support_trstream.cpp_CInStream_ctor_FUN_0059f540 ; 005a0937
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_0059f540(CInStream * this_ptr)
    MOV dword ptr [EAX],0x607384        ; 005a093c | g_CInStreamFileVTable
    MOV dword ptr [EAX + 0x4],0x0       ; 005a0942
    MOV dword ptr [EAX + 0x8],0x0       ; 005a0949
    MOV dword ptr [EAX + 0xc],0x0       ; 005a0950
    MOV dword ptr [EAX + 0x10],0x0      ; 005a0957
    ADD ESP,0x4                         ; 005a095e
    MOV dword ptr [EAX + 0x14],0x0      ; 005a0961
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a0968
    MOV dword ptr [EAX + 0x18],0x0      ; 005a096c
    PUSH ECX                            ; 005a0973
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a0974
    MOV dword ptr [EAX + 0x1c],0x0      ; 005a0978
    PUSH ESI                            ; 005a097f
    MOV dword ptr [EAX + 0x20],0x0      ; 005a0980
    PUSH EAX                            ; 005a0987
    MOV EBX,EAX                         ; 005a0988
    MOV dword ptr [EAX + 0x24],0x0      ; 005a098a
    CALL support_trstream.cpp_CInStreamFile_open_FUN_005a0f60 ; 005a0991
        ;   XREF to: 005a0f60 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_open_FUN_005a0f60(CInStreamFile * this_ptr, char * path, int binary_mode)
    ADD ESP,0xc                         ; 005a0996
    MOV EAX,EBX                         ; 005a0999
    POP ESI                             ; 005a099b
    POP EBX                             ; 005a099c
    RET                                 ; 005a099d

