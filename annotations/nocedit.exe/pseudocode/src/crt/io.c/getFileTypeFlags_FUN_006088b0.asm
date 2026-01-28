; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack uint __watcallStack crt_io_c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
;
; Parameters:
; int              Stack[0x4]:4   file_handle_index
;
; XREF[6]:
;   crt_io.c_extend_file_for_append_FUN_00608410 at 00608455
;   crt_io.c_write_FUN_006084ec at 00608522
;   crt_process.c_build_file_info_env_FUN_0060ffd0 at 0061003c
;   crt_stdio.c_lseek_FUN_00606690 at 006066c1
;   crt_stdio.c_write_FUN_006038c0 at 00603903
;   crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930 at 0060e970
;
; Referenced Globals:
;   uint g_MaxHandleCount = 0x14
;   undefined4 g_FileDescriptorTable
;   undefined4 DAT_00685219
;   FileDescriptor* PTR_g_FileDescriptorTable_00685268 = 00685218
;
; Called Functions:
;   crt_io.c_IsSpecialDevice_FUN_0060c270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006088b0
        ;   Label: crt_io.c_getFileTypeFlags_FUN_006088b0
    PUSH ESI                            ; 006088b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 006088b2
    CMP EBX,dword ptr [0x00685214]      ; 006088b6 | g_MaxHandleCount
    JC 0x006088c3                       ; 006088bc
        ;   XREF to: 006088c3 (CONDITIONAL_JUMP)  ; LAB_006088c3
    XOR EAX,EAX                         ; 006088be
    POP ESI                             ; 006088c0
    POP EBX                             ; 006088c1
    RET                                 ; 006088c2
    CMP EBX,0x3                         ; 006088c3
        ;   Label: LAB_006088c3
    JGE 0x006088fd                      ; 006088c6
        ;   XREF to: 006088fd (CONDITIONAL_JUMP)  ; LAB_006088fd
    MOV EAX,[0x00685268]                ; 006088c8 | PTR_g_FileDescriptorTable_00685268
    LEA ESI,[EBX*0x4 + 0x0]             ; 006088cd
    ADD EAX,ESI                         ; 006088d4
    MOV DL,byte ptr [EAX + 0x1]         ; 006088d6 | DAT_00685219
    TEST DL,0x40                        ; 006088d9
    JNZ 0x006088fd                      ; 006088dc
        ;   XREF to: 006088fd (CONDITIONAL_JUMP)  ; LAB_006088fd
    MOV DH,DL                           ; 006088de
    OR DH,0x40                          ; 006088e0
    PUSH EBX                            ; 006088e3
    MOV byte ptr [EAX + 0x1],DH         ; 006088e4 | DAT_00685219
    CALL crt_io.c_IsSpecialDevice_FUN_0060c270 ; 006088e7
        ;   XREF to: 0060c270 (UNCONDITIONAL_CALL)  ; int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)
    ADD ESP,0x4                         ; 006088ec
    TEST EAX,EAX                        ; 006088ef
    JZ 0x006088fd                       ; 006088f1
        ;   XREF to: 006088fd (CONDITIONAL_JUMP)  ; LAB_006088fd
    MOV EAX,[0x00685268]                ; 006088f3 | PTR_g_FileDescriptorTable_00685268
    OR byte ptr [ESI + EAX*0x1 + 0x1],0x20 ; 006088f8 | DAT_00685219
    MOV EAX,[0x00685268]                ; 006088fd | PTR_g_FileDescriptorTable_00685268
        ;   Label: LAB_006088fd
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 00608902 | g_FileDescriptorTable
    POP ESI                             ; 00608905
    POP EBX                             ; 00608906
    RET                                 ; 00608907

