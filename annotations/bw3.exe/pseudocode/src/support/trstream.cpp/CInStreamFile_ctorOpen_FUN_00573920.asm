; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctorOpen_FUN_00573920(CInStreamFile *this_ptr,char *path,int binary_mode)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; int              Stack[0xc]:4   binary_mode
;
; XREF[1]:
;   support_codec.cpp_FUN_00440a70 at 00440a84
;
; Referenced Globals:
;   undefined1* g_CInStreamFileVTable = 00573a40
;
; Called Functions:
;   support_trstream.cpp_CInStream_ctor_FUN_00572530
;   support_trstream.cpp_CInStreamFile_open_FUN_00573f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573920
        ;   Label: support_trstream.cpp_CInStreamFile_ctorOpen_FUN_00573920
    PUSH ESI                            ; 00573921
    MOV EDX,dword ptr [ESP + 0xc]       ; 00573922
    PUSH EDX                            ; 00573926
    CALL support_trstream.cpp_CInStream_ctor_FUN_00572530 ; 00573927
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; CInStream * support_trstream.cpp_CInStream_ctor_FUN_00572530(CInStream * this_ptr)
    MOV dword ptr [EAX],0x5e5a84        ; 0057392c | g_CInStreamFileVTable
    MOV dword ptr [EAX + 0x4],0x0       ; 00573932
    MOV dword ptr [EAX + 0x8],0x0       ; 00573939
    MOV dword ptr [EAX + 0xc],0x0       ; 00573940
    MOV dword ptr [EAX + 0x10],0x0      ; 00573947
    ADD ESP,0x4                         ; 0057394e
    MOV dword ptr [EAX + 0x14],0x0      ; 00573951
    MOV ECX,dword ptr [ESP + 0x14]      ; 00573958
    MOV dword ptr [EAX + 0x18],0x0      ; 0057395c
    PUSH ECX                            ; 00573963
    MOV ESI,dword ptr [ESP + 0x14]      ; 00573964
    MOV dword ptr [EAX + 0x1c],0x0      ; 00573968
    PUSH ESI                            ; 0057396f
    MOV dword ptr [EAX + 0x20],0x0      ; 00573970
    PUSH EAX                            ; 00573977
    MOV EBX,EAX                         ; 00573978
    MOV dword ptr [EAX + 0x24],0x0      ; 0057397a
    CALL support_trstream.cpp_CInStreamFile_open_FUN_00573f50 ; 00573981
        ;   XREF to: 00573f50 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile * this_ptr, char * path, int binary_mode)
    ADD ESP,0xc                         ; 00573986
    MOV EAX,EBX                         ; 00573989
    POP ESI                             ; 0057398b
    POP EBX                             ; 0057398c
    RET                                 ; 0057398d

