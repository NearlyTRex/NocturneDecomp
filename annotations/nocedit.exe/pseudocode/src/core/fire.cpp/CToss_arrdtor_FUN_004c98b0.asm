; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_arrdtor_FUN_004c98b0(CToss *objs,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTossTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df10                       ; 004c98b0 | g_CTossTypeInfo
        ;   Label: core_fire.cpp_CToss_arrdtor_FUN_004c98b0
    PUSH 0x14                           ; 004c98b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c98b7
    PUSH EDX                            ; 004c98bb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c98bc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c98c1
    RET                                 ; 004c98c4

