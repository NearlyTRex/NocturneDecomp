; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_write_FUN_00538670(CZThumb *this_ptr,_FILE *file_handle)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_setdir.cpp_FUN_00539c30 at 00539c98
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005b9690
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00538670
        ;   Label: core_setdir.cpp_CZThumb_write_FUN_00538670
    MOV EDX,dword ptr [ESP + 0x8]       ; 00538671
    MOV EAX,dword ptr [EDX]             ; 00538675
    IMUL EAX,dword ptr [EDX + 0x4]      ; 00538677
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053867b
    PUSH ECX                            ; 0053867f
    PUSH 0x4                            ; 00538680
    PUSH EAX                            ; 00538682
    MOV ESI,dword ptr [EDX + 0x24]      ; 00538683
    PUSH ESI                            ; 00538686
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00538687
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005b9690()
    ADD ESP,0x10                        ; 0053868c
    POP ESI                             ; 0053868f
    RET                                 ; 00538690

