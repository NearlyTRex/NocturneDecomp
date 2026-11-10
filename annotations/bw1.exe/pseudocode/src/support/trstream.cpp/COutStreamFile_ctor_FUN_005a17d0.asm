; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004d6420 at 004d66e0
;   core_game.cpp_FUN_004d6990 at 004d6c05
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 004029f6
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 005a1860
;
; Called Functions:
;   support_trstream.cpp_FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a17d0
        ;   Label: support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0
    PUSH EDX                            ; 005a17d4
    CALL support_trstream.cpp_FUN_005a14b0 ; 005a17d5
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14b0()
    MOV dword ptr [EAX],0x607424        ; 005a17da | g_COutStreamFileVTable
    ADD ESP,0x4                         ; 005a17e0
    MOV dword ptr [EAX + 0x4],0x0       ; 005a17e3
    RET                                 ; 005a17ea

