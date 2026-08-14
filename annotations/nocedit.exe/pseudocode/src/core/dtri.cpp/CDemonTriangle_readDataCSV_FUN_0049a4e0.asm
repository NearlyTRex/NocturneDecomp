; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_f_f_f_f_f_00622dc2
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a4e0
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049a4e1
    LEA EAX,[EBX + 0x20]                ; 0049a4e5
    PUSH EAX                            ; 0049a4e8
    LEA EAX,[EBX + 0x1c]                ; 0049a4e9
    PUSH EAX                            ; 0049a4ec
    LEA EAX,[EBX + 0x18]                ; 0049a4ed
    PUSH EAX                            ; 0049a4f0
    LEA EAX,[EBX + 0x14]                ; 0049a4f1
    PUSH EAX                            ; 0049a4f4
    LEA EAX,[EBX + 0x10]                ; 0049a4f5
    PUSH EAX                            ; 0049a4f8
    LEA EAX,[EBX + 0xc]                 ; 0049a4f9
    PUSH EAX                            ; 0049a4fc
    LEA EAX,[EBX + 0x8]                 ; 0049a4fd
    PUSH EAX                            ; 0049a500
    LEA EAX,[EBX + 0x4]                 ; 0049a501
    PUSH EAX                            ; 0049a504
    PUSH EBX                            ; 0049a505
    PUSH 0x622dc2                       ; 0049a506 | = "%f,%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x34]      ; 0049a50b
    PUSH EDX                            ; 0049a50f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0049a510
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x2c                        ; 0049a515
    PUSH EBX                            ; 0049a518
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640 ; 0049a519
        ;   XREF to: 0049a640 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle * this_ptr)
    ADD ESP,0x4                         ; 0049a51e
    POP EBX                             ; 0049a521
    RET                                 ; 0049a522

