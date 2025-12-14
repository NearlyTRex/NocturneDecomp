; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vehicle.cpp_FUN_005e8dd0()
;
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 at 005e8d45
;
; Referenced Globals:
;   WatcomTypeInfo g_CTireTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x665150                       ; 005e8dd0 | g_CTireTypeInfo
        ;   Label: core_vehicle.cpp_FUN_005e8dd0
    PUSH 0x4                            ; 005e8dd5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005e8dd7
    PUSH EDX                            ; 005e8ddb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 005e8ddc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005e8de1
    RET                                 ; 005e8de4

