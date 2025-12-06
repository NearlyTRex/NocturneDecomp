; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_freeRooms_FUN_00571570(SRoom * * array)
;
; Parameters:
; SRoom * *        Stack[0x4]:4   array
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569377
;
; Referenced Globals:
;   WatcomTypeInfo g_SRoomTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6628f0                       ; 00571570 | WatcomTypeInfo g_SRoomTypeInfo
        ;   Label: core_set.cpp_freeRooms_FUN_00571570
    PUSH 0x14                           ; 00571575
    MOV EDX,dword ptr [ESP + 0xc]       ; 00571577
    PUSH EDX                            ; 0057157b
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0057157c | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00571581
    RET                                 ; 00571584

