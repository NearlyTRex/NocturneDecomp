; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0 (CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494a04
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a5a0
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
    PUSH ESI                            ; 0049a5a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049a5a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049a5a6
    PUSH ESI                            ; 0049a5aa
    PUSH 0x1                            ; 0049a5ab
    PUSH 0xc                            ; 0049a5ad
    PUSH EBX                            ; 0049a5af
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049a5b0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0049a5b5
    PUSH ESI                            ; 0049a5b8
    PUSH 0x1                            ; 0049a5b9
    PUSH 0xc                            ; 0049a5bb
    LEA EAX,[EBX + 0xc]                 ; 0049a5bd
    PUSH EAX                            ; 0049a5c0
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049a5c1
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0049a5c6
    PUSH ESI                            ; 0049a5c9
    PUSH 0x1                            ; 0049a5ca
    PUSH 0xc                            ; 0049a5cc
    LEA EAX,[EBX + 0x18]                ; 0049a5ce
    PUSH EAX                            ; 0049a5d1
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049a5d2
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0049a5d7
    PUSH ESI                            ; 0049a5da
    PUSH 0x1                            ; 0049a5db
    PUSH 0x14                           ; 0049a5dd
    ADD EBX,0x24                        ; 0049a5df
    PUSH EBX                            ; 0049a5e2
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049a5e3
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0049a5e8
    POP ESI                             ; 0049a5eb
    POP EBX                             ; 0049a5ec
    RET                                 ; 0049a5ed

