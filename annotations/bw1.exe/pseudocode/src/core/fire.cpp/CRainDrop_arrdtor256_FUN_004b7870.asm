; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * core_fire_cpp_CRainDrop_arrdtor256_FUN_004b7870(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600360                       ; 004b7870
        ;   Label: core_fire.cpp_CRainDrop_arrdtor256_FUN_004b7870
    PUSH 0x100                          ; 004b7875
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b787a
    PUSH EDX                            ; 004b787e
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004b787f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005c1066(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b7884
    RET                                 ; 004b7887

