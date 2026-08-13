; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c3c0
        ;   Label: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0
    PUSH ESI                            ; 0046c3c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046c3c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046c3c6
    PUSH ESI                            ; 0046c3ca
    PUSH 0x1                            ; 0046c3cb
    PUSH 0xc                            ; 0046c3cd
    PUSH EBX                            ; 0046c3cf
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0046c3d0
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c3d5
    PUSH ESI                            ; 0046c3d8
    PUSH 0x1                            ; 0046c3d9
    PUSH 0xc                            ; 0046c3db
    LEA EAX,[EBX + 0xc]                 ; 0046c3dd
    PUSH EAX                            ; 0046c3e0
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0046c3e1
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c3e6
    PUSH ESI                            ; 0046c3e9
    PUSH 0x1                            ; 0046c3ea
    PUSH 0xc                            ; 0046c3ec
    LEA EAX,[EBX + 0x18]                ; 0046c3ee
    PUSH EAX                            ; 0046c3f1
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0046c3f2
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c3f7
    PUSH ESI                            ; 0046c3fa
    PUSH 0x1                            ; 0046c3fb
    PUSH 0x14                           ; 0046c3fd
    ADD EBX,0x24                        ; 0046c3ff
    PUSH EBX                            ; 0046c402
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0046c403
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046c408
    POP ESI                             ; 0046c40b
    POP EBX                             ; 0046c40c
    RET                                 ; 0046c40d

