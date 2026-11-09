; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_CSfxSample_dtor_FUN_0056fe80(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fe80
        ;   Label: sound_sndmain.cpp_CSfxSample_dtor_FUN_0056fe80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056fe81
    PUSH EBX                            ; 0056fe85
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056fe86
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056fe8b
    PUSH 0x0                            ; 0056fe8e
    ADD EBX,0x17c                       ; 0056fe90
    PUSH EBX                            ; 0056fe96
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 0056fe97
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056fe9c
    SUB EAX,0x17c                       ; 0056fe9f
    POP EBX                             ; 0056fea4
    RET                                 ; 0056fea5

