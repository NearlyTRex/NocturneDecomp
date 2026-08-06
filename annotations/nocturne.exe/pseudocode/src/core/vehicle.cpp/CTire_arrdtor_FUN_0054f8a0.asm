; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTire * __cdecl core_vehicle_cpp_CTire_arrdtor_FUN_0054f8a0(CTire *this_ptr,uint flags)
;
; Parameters:
; CTire *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_vehicle.cpp_CVehicle_dtor_FUN_0054f7f0 at 0054f815
;
; Referenced Globals:
;   WatcomTypeInfo g_CTireTypeInfo_005a3d20
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a3d20                       ; 0054f8a0 | g_CTireTypeInfo_005a3d20
        ;   Label: core_vehicle.cpp_CTire_arrdtor_FUN_0054f8a0
    PUSH 0x4                            ; 0054f8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054f8a7
    PUSH EDX                            ; 0054f8ab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0054f8ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054f8b1
    RET                                 ; 0054f8b4

