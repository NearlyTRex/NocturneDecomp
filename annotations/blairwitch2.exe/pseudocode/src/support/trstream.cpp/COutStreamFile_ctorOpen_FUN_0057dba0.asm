; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(COutStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442015
;   support_codec.cpp_FUN_004340f0 at 0043412c
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 0057dc10
;
; Called Functions:
;   support_trstream.cpp_COutStreamFile_open_FUN_0057dd90
;   support_trstream.cpp_FUN_0057d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dba0
        ;   Label: support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0
    PUSH ESI                            ; 0057dba1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057dba2
    PUSH EDX                            ; 0057dba6
    CALL support_trstream.cpp_FUN_0057d860 ; 0057dba7
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    ADD ESP,0x4                         ; 0057dbac
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057dbaf
    PUSH ECX                            ; 0057dbb3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057dbb4
    PUSH ESI                            ; 0057dbb8
    MOV dword ptr [EAX],0x5fd484        ; 0057dbb9 | g_COutStreamFileVTable
    PUSH EAX                            ; 0057dbbf
    MOV EBX,EAX                         ; 0057dbc0
    MOV dword ptr [EAX + 0x4],0x0       ; 0057dbc2
    CALL support_trstream.cpp_COutStreamFile_open_FUN_0057dd90 ; 0057dbc9
        ;   XREF to: 0057dd90 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_open_FUN_0057dd90(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0057dbce
    MOV EAX,EBX                         ; 0057dbd1
    POP ESI                             ; 0057dbd3
    POP EBX                             ; 0057dbd4
    RET                                 ; 0057dbd5

