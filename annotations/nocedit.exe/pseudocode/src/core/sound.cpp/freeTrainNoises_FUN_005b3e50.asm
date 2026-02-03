; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl STrainNoise * __cdecl core_sound_cpp_freeTrainNoises_FUN_005b3e50(STrainNoise *objs)
;
; Parameters:
; STrainNoise *    Stack[0x4]:4   objs
;
; Referenced Globals:
;   WatcomTypeInfo g_STrainNoiseTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x663320                       ; 005b3e50 | g_STrainNoiseTypeInfo
        ;   Label: core_sound.cpp_freeTrainNoises_FUN_005b3e50
    PUSH 0xa                            ; 005b3e55
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b3e57
    PUSH EDX                            ; 005b3e5b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005b3e5c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b3e61
    RET                                 ; 005b3e64

