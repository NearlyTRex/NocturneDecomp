; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_io_c_setFileDescriptorFlags_FUN_00608908(int file_handle_index,uint flags)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   crt_io.c_close_FUN_00609bd0 at 00609c62
;   crt_io.c_extend_file_for_append_FUN_00608410 at 00608462
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 006092cf
;   crt_stdio.c_lseek_FUN_00606690 at 006066d9
;
; Referenced Globals:
;   undefined4 g_FileDescriptorTable
;   FileDescriptor* PTR_g_FileDescriptorTable_00685268 = 00685218
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608908
        ;   Label: crt_io.c_setFileDescriptorFlags_FUN_00608908
    MOV EDX,dword ptr [ESP + 0xc]       ; 00608909
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060890d
    SHL EAX,0x2                         ; 00608911
    TEST EDX,EDX                        ; 00608914
    JZ 0x00608926                       ; 00608916
        ;   XREF to: 00608926 (CONDITIONAL_JUMP)  ; LAB_00608926
    MOV EBX,dword ptr [0x00685268]      ; 00608918 | PTR_g_FileDescriptorTable_00685268
    OR DH,0x40                          ; 0060891e
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 00608921 | g_FileDescriptorTable
    POP EBX                             ; 00608924
    RET                                 ; 00608925
    MOV EBX,dword ptr [0x00685268]      ; 00608926 | PTR_g_FileDescriptorTable_00685268
        ;   Label: LAB_00608926
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 0060892c | g_FileDescriptorTable
    POP EBX                             ; 0060892f
    RET                                 ; 00608930

