; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SRoom * __cdecl core_set_cpp_FUN_0050eb40(SRoom *objs,uint flags)
;
; Parameters:
; SRoom *          Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00506e50 at 00506e77
;
; Referenced Globals:
;   WatcomTypeInfo g_SRoomTypeInfo_005a19b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a19b0                       ; 0050eb40 | g_SRoomTypeInfo_005a19b0
        ;   Label: core_set.cpp_FUN_0050eb40
    PUSH 0x14                           ; 0050eb45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb47
    PUSH EDX                            ; 0050eb4b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eb4c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050eb51
    RET                                 ; 0050eb54

