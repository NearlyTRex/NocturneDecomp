; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CZThumb_write_FUN_00574b20(CZThumb * this_ptr, FILE * file_handle)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 at 00575ea8
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00574b20
        ;   Label: core_setdir.cpp_CZThumb_write_FUN_00574b20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00574b21
    MOV EAX,dword ptr [EDX]             ; 00574b25
    IMUL EAX,dword ptr [EDX + 0x4]      ; 00574b27
    MOV ECX,dword ptr [ESP + 0xc]       ; 00574b2b
    PUSH ECX                            ; 00574b2f
    PUSH 0x4                            ; 00574b30
    PUSH EAX                            ; 00574b32
    MOV ESI,dword ptr [EDX + 0x24]      ; 00574b33
    PUSH ESI                            ; 00574b36
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00574b37
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00574b3c
    POP ESI                             ; 00574b3f
    RET                                 ; 00574b40

