; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SRoom * __cdecl core_set_cpp_SRoom_arrdtor_FUN_00571570(SRoom *objs,uint flags)
;
; Parameters:
; SRoom *          Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569377
;
; Referenced Globals:
;   WatcomTypeInfo g_SRoomTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6628f0                       ; 00571570 | g_SRoomTypeInfo
        ;   Label: core_set.cpp_SRoom_arrdtor_FUN_00571570
    PUSH 0x14                           ; 00571575
    MOV EDX,dword ptr [ESP + 0xc]       ; 00571577
    PUSH EDX                            ; 0057157b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0057157c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00571581
    RET                                 ; 00571584

