; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire * * objs)
;
; Parameters:
; SBodyPartFire * * Stack[0x4]:4   objs
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 at 0041916c
;
; Referenced Globals:
;   WatcomTypeInfo g_SBodyPartFireTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65aee0                       ; 0041b6b0 | g_SBodyPartFireTypeInfo
        ;   Label: core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
    PUSH 0x2                            ; 0041b6b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041b6b7
    PUSH EDX                            ; 0041b6bb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0041b6bc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041b6c1
    RET                                 ; 0041b6c4

