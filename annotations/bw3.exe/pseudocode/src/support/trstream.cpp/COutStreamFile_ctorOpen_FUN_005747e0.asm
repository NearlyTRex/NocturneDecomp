; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005747e0(COutStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f815
;   support_codec.cpp_FUN_00440a70 at 00440aae
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 00574850
;
; Called Functions:
;   support_trstream.cpp_COutStreamFile_open_FUN_005749d0
;   support_trstream.cpp_FUN_005744a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005747e0
        ;   Label: support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005747e0
    PUSH ESI                            ; 005747e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005747e2
    PUSH EDX                            ; 005747e6
    CALL support_trstream.cpp_FUN_005744a0 ; 005747e7
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005744a0()
    ADD ESP,0x4                         ; 005747ec
    MOV ECX,dword ptr [ESP + 0x14]      ; 005747ef
    PUSH ECX                            ; 005747f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005747f4
    PUSH ESI                            ; 005747f8
    MOV dword ptr [EAX],0x5e5b24        ; 005747f9 | g_COutStreamFileVTable
    PUSH EAX                            ; 005747ff
    MOV EBX,EAX                         ; 00574800
    MOV dword ptr [EAX + 0x4],0x0       ; 00574802
    CALL support_trstream.cpp_COutStreamFile_open_FUN_005749d0 ; 00574809
        ;   XREF to: 005749d0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0057480e
    MOV EAX,EBX                         ; 00574811
    POP ESI                             ; 00574813
    POP EBX                             ; 00574814
    RET                                 ; 00574815

