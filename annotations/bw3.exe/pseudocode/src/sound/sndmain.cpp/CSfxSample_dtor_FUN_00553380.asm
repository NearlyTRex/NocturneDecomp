; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_00553380(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553380
        ;   Label: sound_sndmain.cpp_CSfxSample_dtor_FUN_00553380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553381
    PUSH EBX                            ; 00553385
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00553386
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0055338b
    PUSH 0x0                            ; 0055338e
    ADD EBX,0x17c                       ; 00553390
    PUSH EBX                            ; 00553396
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00553397
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0055339c
    SUB EAX,0x17c                       ; 0055339f
    POP EBX                             ; 005533a4
    RET                                 ; 005533a5

