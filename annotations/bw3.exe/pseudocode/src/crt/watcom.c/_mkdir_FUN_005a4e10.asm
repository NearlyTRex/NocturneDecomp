; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_watcom_c__mkdir_FUN_005a4e10(char *path)
;
; Parameters:
; char *           Stack[0x4]:4   path
;
; XREF[3]:
;   core_game.cpp_FUN_004bda10 at 004bdacb
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465ad7
;   unkafter_dosio.cpp_FUN_00466190 at 004661de
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_005b351c = 001b3c56
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005a4e10
        ;   Label: crt_watcom.c__mkdir_FUN_005a4e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4e12
    PUSH EDX                            ; 005a4e16
    CALL dword ptr CS:[0x5b351c]        ; 005a4e17 | PTR_CreateDirectoryA_005b351c
    TEST EAX,EAX                        ; 005a4e1e
    JZ 0x005ab46c                       ; 005a4e20
        ;   XREF to: 005ab46c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005a4e26
    RET                                 ; 005a4e28

