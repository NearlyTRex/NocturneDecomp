; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_004787a0(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004787a0
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_004787a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004787a1
    LEA EAX,[EBX + 0x20]                ; 004787a5
    PUSH EAX                            ; 004787a8
    LEA EAX,[EBX + 0x1c]                ; 004787a9
    PUSH EAX                            ; 004787ac
    LEA EAX,[EBX + 0x18]                ; 004787ad
    PUSH EAX                            ; 004787b0
    LEA EAX,[EBX + 0x14]                ; 004787b1
    PUSH EAX                            ; 004787b4
    LEA EAX,[EBX + 0x10]                ; 004787b5
    PUSH EAX                            ; 004787b8
    LEA EAX,[EBX + 0xc]                 ; 004787b9
    PUSH EAX                            ; 004787bc
    LEA EAX,[EBX + 0x8]                 ; 004787bd
    PUSH EAX                            ; 004787c0
    LEA EAX,[EBX + 0x4]                 ; 004787c1
    PUSH EAX                            ; 004787c4
    PUSH EBX                            ; 004787c5
    PUSH 0x5bcc51                       ; 004787c6
    MOV EDX,dword ptr [ESP + 0x34]      ; 004787cb
    PUSH EDX                            ; 004787cf
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004787d0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x2c                        ; 004787d5
    PUSH EBX                            ; 004787d8
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900 ; 004787d9
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_00478900(CDemonTriangle * this_ptr)
    ADD ESP,0x4                         ; 004787de
    POP EBX                             ; 004787e1
    RET                                 ; 004787e2

