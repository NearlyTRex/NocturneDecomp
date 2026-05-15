; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00481dc0(CFileFinder *finder,LPWIN32_FIND_DATAA find_data)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   finder
; LPWIN32_FIND_DATAA Stack[0x8]:4   find_data
; Local Variables:
; _tm              Stack[-0x4c]:36  _Stack_4c
; _SYSTEMTIME      Stack[-0x28]:16  _Stack_28
; _FILETIME        Stack[-0x18]:8  local_18
;
; XREF[2]:
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0 at 00481d46
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00481c70 at 00481cbf
;
; Referenced Globals:
;   FILE_TIME_TO_LOCAL_FILE_TIME_FUNC* g_FileTimeToLocalFileTimeFunc = 00211d46
;   FILE_TIME_TO_SYSTEM_TIME_FUNC* g_FileTimeToSystemTimeFunc = 00211d60
;   TerminatedCString s_engine_dosio_c_00621617
;   TerminatedCString s_CFileFinder_convertStruc_00621629
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c__strncpy_FUN_00600f40
;   crt_time.c__mktime_FUN_00600f80
;   FileTimeToSystemTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481dc0
        ;   Label: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00481dc0
    PUSH ESI                            ; 00481dc1
    PUSH EDI                            ; 00481dc2
    PUSH EBP                            ; 00481dc3
    SUB ESP,0x3c                        ; 00481dc4
    MOV EBX,dword ptr [ESP + 0x50]      ; 00481dc7
    MOV EDI,dword ptr [ESP + 0x54]      ; 00481dcb
    PUSH 0x100                          ; 00481dcf
    PUSH 0x0                            ; 00481dd4
    PUSH EBX                            ; 00481dd6
    CALL crt_memory.c_memset_FUN_005fde40 ; 00481dd7
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00481ddc
    PUSH 0xff                           ; 00481ddf
    MOV ESI,EDI                         ; 00481de4
    LEA EAX,[EDI + 0x2c]                ; 00481de6
    PUSH EAX                            ; 00481de9
    PUSH EBX                            ; 00481dea
    CALL crt_string.c__strncpy_FUN_00600f40 ; 00481deb
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    MOV dword ptr [EBX + 0x100],0x0     ; 00481df0
    MOV AH,byte ptr [EDI]               ; 00481dfa
    ADD ESP,0xc                         ; 00481dfc
    TEST AH,0x20                        ; 00481dff
    JNZ 0x00481e84                      ; 00481e02
        ;   XREF to: 00481e84 (CONDITIONAL_JUMP)  ; LAB_00481e84
    TEST byte ptr [ESI],0x2             ; 00481e08
        ;   Label: LAB_00481e08
    JZ 0x00481e14                       ; 00481e0b
        ;   XREF to: 00481e14 (CONDITIONAL_JUMP)  ; LAB_00481e14
    OR byte ptr [EBX + 0x100],0x2       ; 00481e0d
    TEST byte ptr [ESI],0x10            ; 00481e14
        ;   Label: LAB_00481e14
    JZ 0x00481e20                       ; 00481e17
        ;   XREF to: 00481e20 (CONDITIONAL_JUMP)  ; LAB_00481e20
    OR byte ptr [EBX + 0x100],0x4       ; 00481e19
    TEST byte ptr [ESI],0x1             ; 00481e20
        ;   Label: LAB_00481e20
    JZ 0x00481e2c                       ; 00481e23
        ;   XREF to: 00481e2c (CONDITIONAL_JUMP)  ; LAB_00481e2c
    OR byte ptr [EBX + 0x100],0x8       ; 00481e25
    CMP dword ptr [ESI + 0x1c],0x0      ; 00481e2c
        ;   Label: LAB_00481e2c
    JZ 0x00481e90                       ; 00481e30
        ;   XREF to: 00481e90 (CONDITIONAL_JUMP)  ; LAB_00481e90
    MOV EDI,0x621617                    ; 00481e32 | = "..\\engine\\dosio.c"
        ;   Label: LAB_00481e32
    MOV EBP,0x2a7                       ; 00481e37
    PUSH 0x621629                       ; 00481e3c | = "CFileFinder::convertStruct - file too..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00481e41 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00481e47 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00481e4d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00481e52
    MOV EAX,dword ptr [ESI + 0x20]      ; 00481e55
        ;   Label: LAB_00481e55
    MOV dword ptr [EBX + 0x104],EAX     ; 00481e58
    LEA EAX,[ESP + 0x34]                ; 00481e5e
    PUSH EAX                            ; 00481e62
    ADD ESI,0x14                        ; 00481e63
    PUSH ESI                            ; 00481e66
    MOV dword ptr [EBX + 0x108],0x0     ; 00481e67
    CALL dword ptr CS:[0x611540]        ; 00481e71 | g_FileTimeToLocalFileTimeFunc
    TEST EAX,EAX                        ; 00481e78
    JNZ 0x00481e9b                      ; 00481e7a
        ;   XREF to: 00481e9b (CONDITIONAL_JUMP)  ; LAB_00481e9b
    ADD ESP,0x3c                        ; 00481e7c
        ;   Label: LAB_00481e7c
    POP EBP                             ; 00481e7f
    POP EDI                             ; 00481e80
    POP ESI                             ; 00481e81
    POP EBX                             ; 00481e82
    RET                                 ; 00481e83
    OR byte ptr [EBX + 0x100],0x1       ; 00481e84
        ;   Label: LAB_00481e84
    JMP 0x00481e08                      ; 00481e8b
        ;   XREF to: 00481e08 (UNCONDITIONAL_JUMP)  ; LAB_00481e08
    CMP dword ptr [ESI + 0x20],0x7fffffff ; 00481e90
        ;   Label: LAB_00481e90
    JA 0x00481e32                       ; 00481e97
        ;   XREF to: 00481e32 (CONDITIONAL_JUMP)  ; LAB_00481e32
    JMP 0x00481e55                      ; 00481e99
        ;   XREF to: 00481e55 (UNCONDITIONAL_JUMP)  ; LAB_00481e55
    LEA EAX,[ESP + 0x24]                ; 00481e9b
        ;   Label: LAB_00481e9b
    PUSH EAX                            ; 00481e9f
    LEA EAX,[ESP + 0x38]                ; 00481ea0
    PUSH EAX                            ; 00481ea4
    CALL dword ptr CS:[0x611544]        ; 00481ea5 | g_FileTimeToSystemTimeFunc
    TEST EAX,EAX                        ; 00481eac
    JZ 0x00481e7c                       ; 00481eae
        ;   XREF to: 00481e7c (CONDITIONAL_JUMP)  ; LAB_00481e7c
    XOR EAX,EAX                         ; 00481eb0
    MOV AX,word ptr [ESP + 0x30]        ; 00481eb2
    MOV dword ptr [ESP],EAX             ; 00481eb7
    XOR EAX,EAX                         ; 00481eba
    MOV AX,word ptr [ESP + 0x2e]        ; 00481ebc
    MOV dword ptr [ESP + 0x4],EAX       ; 00481ec1
    XOR EAX,EAX                         ; 00481ec5
    MOV AX,word ptr [ESP + 0x2c]        ; 00481ec7
    MOV dword ptr [ESP + 0x8],EAX       ; 00481ecc
    XOR EAX,EAX                         ; 00481ed0
    MOV AX,word ptr [ESP + 0x2a]        ; 00481ed2
    MOV dword ptr [ESP + 0xc],EAX       ; 00481ed7
    XOR EAX,EAX                         ; 00481edb
    MOV AX,word ptr [ESP + 0x26]        ; 00481edd
    DEC EAX                             ; 00481ee2
    MOV dword ptr [ESP + 0x10],EAX      ; 00481ee3
    XOR EAX,EAX                         ; 00481ee7
    MOV AX,word ptr [ESP + 0x24]        ; 00481ee9
    SUB EAX,0x76c                       ; 00481eee
    MOV dword ptr [ESP + 0x14],EAX      ; 00481ef3
    XOR EAX,EAX                         ; 00481ef7
    MOV dword ptr [ESP + 0x20],EAX      ; 00481ef9
    MOV EAX,ESP                         ; 00481efd
    PUSH EAX                            ; 00481eff
    CALL crt_time.c__mktime_FUN_00600f80 ; 00481f00
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00600f80(_tm * timeptr)
    ADD ESP,0x4                         ; 00481f05
    MOV dword ptr [EBX + 0x108],EAX     ; 00481f08
    ADD ESP,0x3c                        ; 00481f0e
    POP EBP                             ; 00481f11
    POP EDI                             ; 00481f12
    POP ESI                             ; 00481f13
    POP EBX                             ; 00481f14
    RET                                 ; 00481f15

