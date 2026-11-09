; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0048fc20(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0048fd80
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fc20
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0048fc20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fc21
    LEA EAX,[EBX + 0x20]                ; 0048fc25
    PUSH EAX                            ; 0048fc28
    LEA EAX,[EBX + 0x1c]                ; 0048fc29
    PUSH EAX                            ; 0048fc2c
    LEA EAX,[EBX + 0x18]                ; 0048fc2d
    PUSH EAX                            ; 0048fc30
    LEA EAX,[EBX + 0x14]                ; 0048fc31
    PUSH EAX                            ; 0048fc34
    LEA EAX,[EBX + 0x10]                ; 0048fc35
    PUSH EAX                            ; 0048fc38
    LEA EAX,[EBX + 0xc]                 ; 0048fc39
    PUSH EAX                            ; 0048fc3c
    LEA EAX,[EBX + 0x8]                 ; 0048fc3d
    PUSH EAX                            ; 0048fc40
    LEA EAX,[EBX + 0x4]                 ; 0048fc41
    PUSH EAX                            ; 0048fc44
    PUSH EBX                            ; 0048fc45
    PUSH 0x5dbb94                       ; 0048fc46
    MOV EDX,dword ptr [ESP + 0x34]      ; 0048fc4b
    PUSH EDX                            ; 0048fc4f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0048fc50
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x2c                        ; 0048fc55
    PUSH EBX                            ; 0048fc58
    CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0048fd80 ; 0048fc59
        ;   XREF to: 0048fd80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_calculateData_FUN_0048fd80(CDemonTriangle * this_ptr)
    ADD ESP,0x4                         ; 0048fc5e
    POP EBX                             ; 0048fc61
    RET                                 ; 0048fc62

