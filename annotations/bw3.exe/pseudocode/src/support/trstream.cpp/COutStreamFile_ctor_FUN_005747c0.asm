; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004bda10 at 004bdcf7
;   core_game.cpp_FUN_004bdfb0 at 004be24b
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 004029f6
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 00574850
;
; Called Functions:
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005747c0
        ;   Label: support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0
    PUSH EDX                            ; 005747c4
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 005747c5
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    MOV dword ptr [EAX],0x5e5b24        ; 005747ca | g_COutStreamFileVTable
    ADD ESP,0x4                         ; 005747d0
    MOV dword ptr [EAX + 0x4],0x0       ; 005747d3
    RET                                 ; 005747da

