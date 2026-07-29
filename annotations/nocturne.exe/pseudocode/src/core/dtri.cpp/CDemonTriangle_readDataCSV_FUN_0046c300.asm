; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0046c300(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_f_f_f_f_f_0057e426
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c300
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0046c300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046c301
    LEA EAX,[EBX + 0x20]                ; 0046c305
    PUSH EAX                            ; 0046c308
    LEA EAX,[EBX + 0x1c]                ; 0046c309
    PUSH EAX                            ; 0046c30c
    LEA EAX,[EBX + 0x18]                ; 0046c30d
    PUSH EAX                            ; 0046c310
    LEA EAX,[EBX + 0x14]                ; 0046c311
    PUSH EAX                            ; 0046c314
    LEA EAX,[EBX + 0x10]                ; 0046c315
    PUSH EAX                            ; 0046c318
    LEA EAX,[EBX + 0xc]                 ; 0046c319
    PUSH EAX                            ; 0046c31c
    LEA EAX,[EBX + 0x8]                 ; 0046c31d
    PUSH EAX                            ; 0046c320
    LEA EAX,[EBX + 0x4]                 ; 0046c321
    PUSH EAX                            ; 0046c324
    PUSH EBX                            ; 0046c325
    PUSH 0x57e426                       ; 0046c326 | = "%f,%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x34]      ; 0046c32b
    PUSH EDX                            ; 0046c32f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0046c330
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x2c                        ; 0046c335
    PUSH EBX                            ; 0046c338
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460 ; 0046c339
        ;   XREF to: 0046c460 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460(CDemonTriangle * triangle)
    ADD ESP,0x4                         ; 0046c33e
    POP EBX                             ; 0046c341
    RET                                 ; 0046c342

