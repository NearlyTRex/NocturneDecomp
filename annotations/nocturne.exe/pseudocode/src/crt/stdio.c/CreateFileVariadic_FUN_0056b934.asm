; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_CreateFileVariadic_FUN_0056b934(char *filename,int access_mode,int share_mode,...)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   access_mode
; int              Stack[0xc]:4   share_mode
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   crt_unknown.c_FUN_00570ad0 at 00570bb4
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c at 005655b1
;
; Called Functions:
;   crt_stdio.c_CreateFileImpl_FUN_0056b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b934
        ;   Label: crt_stdio.c_CreateFileVariadic_FUN_0056b934
    SUB ESP,0x4                         ; 0056b935
    LEA EAX,[ESP + 0x18]                ; 0056b938
    MOV dword ptr [ESP],EAX             ; 0056b93c
    MOV EAX,ESP                         ; 0056b93f
    PUSH EAX                            ; 0056b941
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056b942
    PUSH EDX                            ; 0056b946
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056b947
    PUSH EBX                            ; 0056b94b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056b94c
    PUSH ECX                            ; 0056b950
    CALL crt_stdio.c_CreateFileImpl_FUN_0056b960 ; 0056b951
        ;   XREF to: 0056b960 (UNCONDITIONAL_CALL)  ; HANDLE crt_stdio.c_CreateFileImpl_FUN_0056b960(char * filename, dword access_mode, dword share_mode, va_list_t * extra_args)
    ADD ESP,0x10                        ; 0056b956
    ADD ESP,0x4                         ; 0056b959
    POP EBX                             ; 0056b95c
    RET                                 ; 0056b95d

