; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_watcom_c__mkdir_FUN_00565e40(LPCSTR param_1)
;
;
; XREF[3]:
;   FUN_00456b20 at 00456b77
;   FUN_004a3b90 at 004a3c46
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456aac
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_00575490 = 00175ae2
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00565e40
        ;   Label: crt_watcom.c__mkdir_FUN_00565e40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00565e42
    PUSH EDX                            ; 00565e46
    CALL dword ptr CS:[0x575490]        ; 00565e47 | PTR_CreateDirectoryA_00575490
    TEST EAX,EAX                        ; 00565e4e
    JZ 0x0056c73c                       ; 00565e50
        ;   XREF to: 0056c73c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00565e56
    RET                                 ; 00565e58

