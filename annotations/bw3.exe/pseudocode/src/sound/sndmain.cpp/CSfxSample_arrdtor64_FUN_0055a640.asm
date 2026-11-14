; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_0055a640(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e48a0                       ; 0055a640
        ;   Label: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_0055a640
    PUSH 0x40                           ; 0055a645
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055a647
    PUSH EDX                            ; 0055a64b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0055a64c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0055a651
    RET                                 ; 0055a654

