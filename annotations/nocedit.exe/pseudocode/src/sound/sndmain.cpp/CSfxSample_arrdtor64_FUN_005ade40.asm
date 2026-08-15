; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_005ade40(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_SfxSampleTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6631c0                       ; 005ade40 | g_SfxSampleTypeInfo
        ;   Label: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_005ade40
    PUSH 0x40                           ; 005ade45
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ade47
    PUSH EDX                            ; 005ade4b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005ade4c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005ade51
    RET                                 ; 005ade54

