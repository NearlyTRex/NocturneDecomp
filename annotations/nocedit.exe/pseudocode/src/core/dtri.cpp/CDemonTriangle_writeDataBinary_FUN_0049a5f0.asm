; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0(CDemonTriangle * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a5f0
        ;   Label: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
    PUSH ESI                            ; 0049a5f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049a5f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049a5f6
    PUSH ESI                            ; 0049a5fa
    PUSH 0x1                            ; 0049a5fb
    PUSH 0xc                            ; 0049a5fd
    PUSH EBX                            ; 0049a5ff
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0049a600
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0049a605
    PUSH ESI                            ; 0049a608
    PUSH 0x1                            ; 0049a609
    PUSH 0xc                            ; 0049a60b
    LEA EAX,[EBX + 0xc]                 ; 0049a60d
    PUSH EAX                            ; 0049a610
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0049a611
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0049a616
    PUSH ESI                            ; 0049a619
    PUSH 0x1                            ; 0049a61a
    PUSH 0xc                            ; 0049a61c
    LEA EAX,[EBX + 0x18]                ; 0049a61e
    PUSH EAX                            ; 0049a621
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0049a622
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0049a627
    PUSH ESI                            ; 0049a62a
    PUSH 0x1                            ; 0049a62b
    PUSH 0x14                           ; 0049a62d
    ADD EBX,0x24                        ; 0049a62f
    PUSH EBX                            ; 0049a632
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0049a633
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0049a638
    POP ESI                             ; 0049a63b
    POP EBX                             ; 0049a63c
    RET                                 ; 0049a63d

