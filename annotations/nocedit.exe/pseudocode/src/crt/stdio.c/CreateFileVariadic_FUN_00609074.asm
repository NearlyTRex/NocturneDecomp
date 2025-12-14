; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_CreateFileVariadic_FUN_00609074(char * filename, int access_mode, int share_mode, ...)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   access_mode
; int              Stack[0xc]:4   share_mode
; Local Variables:
; typedef va_list_t char * Stack[-0x8]:4  variadic_args
;
; XREF[2]:
;   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340 at 0060c424
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c at 006019a1
;
; Called Functions:
;   crt_stdio.c_CreateFileImpl_FUN_006090a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609074
        ;   Label: crt_stdio.c_CreateFileVariadic_FUN_00609074
    SUB ESP,0x4                         ; 00609075
    LEA EAX,[ESP + 0x18]                ; 00609078
    MOV dword ptr [ESP],EAX             ; 0060907c
    MOV EAX,ESP                         ; 0060907f
    PUSH EAX                            ; 00609081
    MOV EDX,dword ptr [ESP + 0x18]      ; 00609082
    PUSH EDX                            ; 00609086
    MOV EBX,dword ptr [ESP + 0x18]      ; 00609087
    PUSH EBX                            ; 0060908b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0060908c
    PUSH ECX                            ; 00609090
    CALL crt_stdio.c_CreateFileImpl_FUN_006090a0 ; 00609091
        ;   XREF to: 006090a0 (UNCONDITIONAL_CALL)  ; HANDLE crt_stdio.c_CreateFileImpl_FUN_006090a0(char * filename, dword access_mode, dword share_mode, va_list_t * extra_args)
    ADD ESP,0x10                        ; 00609096
    ADD ESP,0x4                         ; 00609099
    POP EBX                             ; 0060909c
    RET                                 ; 0060909d

