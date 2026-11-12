; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_00477730(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_00477890
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477730
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_00477730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00477731
    LEA EAX,[EBX + 0x20]                ; 00477735
    PUSH EAX                            ; 00477738
    LEA EAX,[EBX + 0x1c]                ; 00477739
    PUSH EAX                            ; 0047773c
    LEA EAX,[EBX + 0x18]                ; 0047773d
    PUSH EAX                            ; 00477740
    LEA EAX,[EBX + 0x14]                ; 00477741
    PUSH EAX                            ; 00477744
    LEA EAX,[EBX + 0x10]                ; 00477745
    PUSH EAX                            ; 00477748
    LEA EAX,[EBX + 0xc]                 ; 00477749
    PUSH EAX                            ; 0047774c
    LEA EAX,[EBX + 0x8]                 ; 0047774d
    PUSH EAX                            ; 00477750
    LEA EAX,[EBX + 0x4]                 ; 00477751
    PUSH EAX                            ; 00477754
    PUSH EBX                            ; 00477755
    PUSH 0x5d1d9b                       ; 00477756
    MOV EDX,dword ptr [ESP + 0x34]      ; 0047775b
    PUSH EDX                            ; 0047775f
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00477760
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x2c                        ; 00477765
    PUSH EBX                            ; 00477768
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_00477890 ; 00477769
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_00477890(CDemonTriangle * this_ptr)
    ADD ESP,0x4                         ; 0047776e
    POP EBX                             ; 00477771
    RET                                 ; 00477772

