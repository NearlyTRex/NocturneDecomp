; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_005774d0(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605b60                       ; 005774d0
        ;   Label: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_005774d0
    PUSH 0x40                           ; 005774d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005774d7
    PUSH EDX                            ; 005774db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005774dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 005774e1
    RET                                 ; 005774e4

