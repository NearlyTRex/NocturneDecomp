; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004bb9b0 at 004bbc70
;   core_game.cpp_FUN_004bbf70 at 004bc1ea
;   engine_2d.c_FUN_00402940 at 004029f2
;
; Referenced Globals:
;   undefined1* g_COutStreamFileVTable = 0057dc10
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057db80
        ;   Label: support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80
    PUSH EDX                            ; 0057db84
    CALL support_trstream.cpp_FUN_0057d860 ; 0057db85
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    MOV dword ptr [EAX],0x5fd484        ; 0057db8a | g_COutStreamFileVTable
    ADD ESP,0x4                         ; 0057db90
    MOV dword ptr [EAX + 0x4],0x0       ; 0057db93
    RET                                 ; 0057db9a

