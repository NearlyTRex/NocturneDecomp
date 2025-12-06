; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_process.c_spawn_FUN_006105a0(int mode, char * cmdline, char * envblock, void * reserved)
;
; Parameters:
; int              Stack[0x4]:4   mode
; char *           Stack[0x8]:4   cmdline
; char *           Stack[0xc]:4   envblock
; void *           Stack[0x10]:4   reserved
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined2       Stack[-0x3c]:2  local_3c
; undefined1       Stack[-0x28]:1  local_28
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f74f
;
; Referenced Globals:
;   CloseHandle* CloseHandle = 00211c38
;   CreateProcessA* PTR_CreateProcessA_00611518 = 00211c88
;   DuplicateHandle* PTR_DuplicateHandle_0061152c = 00211ce8
;   GetCurrentProcess* GetCurrentProcess = 00211e5a
;   GetExitCodeProcess* PTR_GetExitCodeProcess_00611590 = 00211ec6
;   GetLastError* GetLastError = 00211f22
;   Sleep* Sleep = 00212228
;   WaitForSingleObject* WaitForSingleObject = 002122c4
;   BYTE g_WindowsMinorVersion = \x00
;   WORD g_WindowsPlatformVersion = 0x0
;
; Called Functions:
;   CloseHandle
;   CreateProcessA
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_memory.c_memset_FUN_005fde40
;   crt_process.c_build_command_line_FUN_006103a4
;   DuplicateHandle
;   GetCurrentProcess
;   GetExitCodeProcess
;   GetLastError
;   Sleep
;   WaitForSingleObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006105a0
        ;   Label: crt_process.c_spawn_FUN_006105a0
    PUSH ESI                            ; 006105a1
    PUSH EDI                            ; 006105a2
    PUSH EBP                            ; 006105a3
    SUB ESP,0x5c                        ; 006105a4
    PUSH 0x0                            ; 006105a7
    MOV EDX,dword ptr [ESP + 0x7c]      ; 006105a9
    PUSH EDX                            ; 006105ad
    MOV EBX,dword ptr [ESP + 0x88]      ; 006105ae
    PUSH EBX                            ; 006105b5
    MOV ECX,dword ptr [ESP + 0x80]      ; 006105b6
    PUSH ECX                            ; 006105bd
    CALL crt_process.c_build_command_line_FUN_006103a4 ; 006105be | void crt_process.c_build_command_line_FUN_006103a4(char * program_name, char * * argv, char * buffer, int skip_program_name)
        ;   XREF to: 006103a4 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 006105c3
    PUSH 0x44                           ; 006105c6
    PUSH 0x0                            ; 006105c8
    LEA EAX,[ESP + 0x8]                 ; 006105ca
    PUSH EAX                            ; 006105ce
    CALL crt_memory.c_memset_FUN_005fde40 ; 006105cf | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 006105d4
    LEA EAX,[ESP + 0x44]                ; 006105d7
    PUSH EAX                            ; 006105db
    LEA EAX,[ESP + 0x4]                 ; 006105dc
    PUSH EAX                            ; 006105e0
    PUSH 0x0                            ; 006105e1
    MOV ESI,dword ptr [ESP + 0x88]      ; 006105e3
    PUSH ESI                            ; 006105ea
    PUSH 0x0                            ; 006105eb
    PUSH 0x1                            ; 006105ed
    PUSH 0x0                            ; 006105ef
    PUSH 0x0                            ; 006105f1
    MOV EDI,dword ptr [ESP + 0x98]      ; 006105f3
    PUSH EDI                            ; 006105fa
    MOV EDX,0x1                         ; 006105fb
    PUSH 0x0                            ; 00610600
    MOV word ptr [ESP + 0x58],DX        ; 00610602
    CALL dword ptr CS:[0x611518]        ; 00610607 | CreateProcessA * PTR_CreateProcessA_00611518
    TEST EAX,EAX                        ; 0061060e
    JNZ 0x00610641                      ; 00610610 | LAB_00610641
        ;   XREF to: 00610641 (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x6115a4]        ; 00610612 | GetLastError * GetLastError
    MOV EDX,EAX                         ; 00610619
    CMP EAX,0x5                         ; 0061061b
    JZ 0x0061062e                       ; 0061061e | LAB_0061062e
        ;   XREF to: 0061062e (CONDITIONAL_JUMP)
    CMP EAX,0xc1                        ; 00610620
    JZ 0x0061062e                       ; 00610625 | LAB_0061062e
        ;   XREF to: 0061062e (CONDITIONAL_JUMP)
    CMP EAX,0xa1                        ; 00610627
    JNZ 0x00610633                      ; 0061062c | LAB_00610633
        ;   XREF to: 00610633 (CONDITIONAL_JUMP)
    MOV EDX,0x2                         ; 0061062e
        ;   Label: LAB_0061062e
    PUSH EDX                            ; 00610633
        ;   Label: LAB_00610633
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 00610634 | int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00610639
    JMP 0x0061074b                      ; 0061063c | LAB_0061074b
        ;   XREF to: 0061074b (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x70]      ; 00610641
        ;   Label: LAB_00610641
    TEST EBP,EBP                        ; 00610645
    JNZ 0x006106e9                      ; 00610647 | LAB_006106e9
        ;   XREF to: 006106e9 (CONDITIONAL_JUMP)
    CMP word ptr [0x00685019],0x8000    ; 0061064d | WORD g_WindowsPlatformVersion
    JC 0x006106ad                       ; 00610656 | LAB_006106ad
        ;   XREF to: 006106ad (CONDITIONAL_JUMP)
    CMP byte ptr [0x00685017],0x4       ; 00610658 | BYTE g_WindowsMinorVersion
    JNC 0x006106ad                      ; 0061065f | LAB_006106ad
        ;   XREF to: 006106ad (CONDITIONAL_JUMP)
    PUSH 0x3e8                          ; 00610661
    MOV EDI,0x103                       ; 00610666
    CALL dword ptr CS:[0x611644]        ; 0061066b | Sleep * Sleep
    MOV dword ptr [ESP + 0x54],EDI      ; 00610672
    JMP 0x00610682                      ; 00610676 | LAB_00610682
        ;   XREF to: 00610682 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x54],0x103    ; 00610678
        ;   Label: LAB_00610678
    JNZ 0x006106db                      ; 00610680 | LAB_006106db
        ;   XREF to: 006106db (CONDITIONAL_JUMP)
    PUSH 0x64                           ; 00610682
        ;   Label: LAB_00610682
    CALL dword ptr CS:[0x611644]        ; 00610684 | Sleep * Sleep
    LEA EAX,[ESP + 0x54]                ; 0061068b
    PUSH EAX                            ; 0061068f
    MOV EBP,dword ptr [ESP + 0x48]      ; 00610690
    PUSH EBP                            ; 00610694
    CALL dword ptr CS:[0x611590]        ; 00610695 | GetExitCodeProcess * PTR_GetExitCodeProcess_00611590
    TEST EAX,EAX                        ; 0061069c
    JNZ 0x00610678                      ; 0061069e | LAB_00610678
        ;   XREF to: 00610678 (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 006106a0 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    ADD ESP,0x5c                        ; 006106a5
    POP EBP                             ; 006106a8
    POP EDI                             ; 006106a9
    POP ESI                             ; 006106aa
    POP EBX                             ; 006106ab
    RET                                 ; 006106ac
    PUSH -0x1                           ; 006106ad
        ;   Label: LAB_006106ad
    MOV ECX,dword ptr [ESP + 0x48]      ; 006106af
    PUSH ECX                            ; 006106b3
    CALL dword ptr CS:[0x61166c]        ; 006106b4 | WaitForSingleObject * WaitForSingleObject
    TEST EAX,EAX                        ; 006106bb
    JNZ 0x006106d2                      ; 006106bd | LAB_006106d2
        ;   XREF to: 006106d2 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x54]                ; 006106bf
    PUSH EAX                            ; 006106c3
    MOV ESI,dword ptr [ESP + 0x48]      ; 006106c4
    PUSH ESI                            ; 006106c8
    CALL dword ptr CS:[0x611590]        ; 006106c9 | GetExitCodeProcess * PTR_GetExitCodeProcess_00611590
    JMP 0x006106db                      ; 006106d0 | LAB_006106db
        ;   XREF to: 006106db (UNCONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 006106d2 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   Label: LAB_006106d2
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x54],EAX      ; 006106d7
    MOV EDX,dword ptr [ESP + 0x44]      ; 006106db
        ;   Label: LAB_006106db
    PUSH EDX                            ; 006106df
    CALL dword ptr CS:[0x611504]        ; 006106e0 | CloseHandle * CloseHandle
    JMP 0x0061073b                      ; 006106e7 | LAB_0061073b
        ;   XREF to: 0061073b (UNCONDITIONAL_JUMP)
    CMP EBP,0x3                         ; 006106e9
        ;   Label: LAB_006106e9
    JNZ 0x00610700                      ; 006106ec | LAB_00610700
        ;   XREF to: 00610700 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x44]      ; 006106ee
    PUSH EBX                            ; 006106f2
    CALL dword ptr CS:[0x611504]        ; 006106f3 | CloseHandle * CloseHandle
    MOV EAX,dword ptr [ESP + 0x4c]      ; 006106fa
    JMP 0x00610737                      ; 006106fe | LAB_00610737
        ;   XREF to: 00610737 (UNCONDITIONAL_JUMP)
    PUSH 0x2                            ; 00610700
        ;   Label: LAB_00610700
    PUSH 0x0                            ; 00610702
    PUSH 0x0                            ; 00610704
    LEA EAX,[ESP + 0x64]                ; 00610706
    PUSH EAX                            ; 0061070a
    CALL dword ptr CS:[0x61157c]        ; 0061070b | GetCurrentProcess * GetCurrentProcess
    PUSH EAX                            ; 00610712
    MOV EDX,dword ptr [ESP + 0x58]      ; 00610713
    PUSH EDX                            ; 00610717
    CALL dword ptr CS:[0x61157c]        ; 00610718 | GetCurrentProcess * GetCurrentProcess
    PUSH EAX                            ; 0061071f
    CALL dword ptr CS:[0x61152c]        ; 00610720 | DuplicateHandle * PTR_DuplicateHandle_0061152c
    TEST EAX,EAX                        ; 00610727
    JNZ 0x00610733                      ; 00610729 | LAB_00610733
        ;   XREF to: 00610733 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x44]      ; 0061072b
    MOV dword ptr [ESP + 0x58],EAX      ; 0061072f
    MOV EAX,dword ptr [ESP + 0x58]      ; 00610733
        ;   Label: LAB_00610733
    MOV dword ptr [ESP + 0x54],EAX      ; 00610737
        ;   Label: LAB_00610737
    MOV EBX,dword ptr [ESP + 0x48]      ; 0061073b
        ;   Label: LAB_0061073b
    PUSH EBX                            ; 0061073f
    CALL dword ptr CS:[0x611504]        ; 00610740 | CloseHandle * CloseHandle
    MOV EAX,dword ptr [ESP + 0x54]      ; 00610747
    ADD ESP,0x5c                        ; 0061074b
        ;   Label: LAB_0061074b
    POP EBP                             ; 0061074e
    POP EDI                             ; 0061074f
    POP ESI                             ; 00610750
    POP EBX                             ; 00610751
    RET                                 ; 00610752

