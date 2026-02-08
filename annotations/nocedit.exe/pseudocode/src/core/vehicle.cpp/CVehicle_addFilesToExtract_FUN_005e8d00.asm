; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vehicle_cpp_CVehicle_addFilesToExtract_FUN_005e8d00(CVehicle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_data_s_00656fac
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e8d00
        ;   Label: core_vehicle.cpp_CVehicle_addFilesToExtract_FUN_005e8d00
    ADD EAX,0x1034                      ; 005e8d04
    PUSH EAX                            ; 005e8d09
    PUSH 0x656fac                       ; 005e8d0a | = "data\\%s\n"
    MOV EDX,dword ptr [ESP + 0x10]      ; 005e8d0f
    PUSH EDX                            ; 005e8d13
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005e8d14
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005e8d19
    RET                                 ; 005e8d1c

