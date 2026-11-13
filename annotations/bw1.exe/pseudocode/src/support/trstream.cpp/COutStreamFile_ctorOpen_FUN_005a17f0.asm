; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005a17f0(COutStreamFile *this_ptr,char *path,char *mode)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; char *           Stack[0xc]:4   mode
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 004536d5
;   support_codec.cpp_FUN_00442e10 at 00442e4e
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 005a1860
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005a14b0
;   support_trstream.cpp_COutStreamFile_open_FUN_005a19e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a17f0
        ;   Label: support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005a17f0
    PUSH ESI                            ; 005a17f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a17f2
    PUSH EDX                            ; 005a17f6
    CALL support_trstream.cpp_COutStream_dtor_FUN_005a14b0 ; 005a17f7
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005a14b0(COutStream * this_ptr, uint flags)
    ADD ESP,0x4                         ; 005a17fc
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a17ff
    PUSH ECX                            ; 005a1803
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a1804
    PUSH ESI                            ; 005a1808
    MOV dword ptr [EAX],0x607424        ; 005a1809 | g_COutStreamFileVTable
    PUSH EAX                            ; 005a180f
    MOV EBX,EAX                         ; 005a1810
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1812
    CALL support_trstream.cpp_COutStreamFile_open_FUN_005a19e0 ; 005a1819
        ;   XREF to: 005a19e0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_open_FUN_005a19e0(COutStreamFile * this_ptr, char * path, char * mode)
    ADD ESP,0xc                         ; 005a181e
    MOV EAX,EBX                         ; 005a1821
    POP ESI                             ; 005a1823
    POP EBX                             ; 005a1824
    RET                                 ; 005a1825

