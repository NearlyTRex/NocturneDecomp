; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_00554aa0(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5fbc80                       ; 00554aa0
        ;   Label: sound_sndmain.cpp_CSfxSample_arrdtor64_FUN_00554aa0
    PUSH 0x40                           ; 00554aa5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00554aa7
    PUSH EDX                            ; 00554aab
    CALL crt_memory.c___arrfini_FUN_005b854f ; 00554aac
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00554ab1
    RET                                 ; 00554ab4

