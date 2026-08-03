; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_arrdtor_FUN_00529a60(CSfxSample *this_ptr,uint flags)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a21c0                       ; 00529a60
        ;   Label: sound_sndmain.cpp_CSfxSample_arrdtor_FUN_00529a60
    PUSH 0x40                           ; 00529a65
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529a67
    PUSH EDX                            ; 00529a6b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00529a6c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00529a71
    RET                                 ; 00529a74

