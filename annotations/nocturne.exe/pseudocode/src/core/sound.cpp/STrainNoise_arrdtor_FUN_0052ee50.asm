; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STrainNoise * __cdecl core_sound_cpp_STrainNoise_arrdtor_FUN_0052ee50(STrainNoise *this_ptr,uint flags)
;
; Parameters:
; STrainNoise *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_STrainNoiseTypeInfo_005a22f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a22f0                       ; 0052ee50 | g_STrainNoiseTypeInfo_005a22f0
        ;   Label: core_sound.cpp_STrainNoise_arrdtor_FUN_0052ee50
    PUSH 0xa                            ; 0052ee55
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ee57
    PUSH EDX                            ; 0052ee5b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0052ee5c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052ee61
    RET                                 ; 0052ee64

