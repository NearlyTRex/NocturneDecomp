; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCrater * __cdecl core_fire_cpp_CCrater_arrdtor_FUN_004c9890(CCrater *objs,uint flags)
;
; Parameters:
; CCrater *        Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCraterTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df30                       ; 004c9890 | g_CCraterTypeInfo
        ;   Label: core_fire.cpp_CCrater_arrdtor_FUN_004c9890
    PUSH 0x14                           ; 004c9895
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9897
    PUSH EDX                            ; 004c989b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c989c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c98a1
    RET                                 ; 004c98a4

