; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(CFileFinder *finder,LPWIN32_FIND_DATAA find_data)
;
; Parameters:
; CFileFinder *    Stack[0x4]:4   finder
; LPWIN32_FIND_DATAA Stack[0x8]:4   find_data
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined2       Stack[-0x28]:2  local_28
; undefined2       Stack[-0x26]:2  local_26
; undefined2       Stack[-0x22]:2  local_22
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1e]:2  local_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 at 00456d16
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 at 00456c8f
;
; Referenced Globals:
;   void* PTR_FileTimeToLocalFileTime_005754c0 = 00175bbe
;   void* PTR_FileTimeToSystemTime_005754c4 = 00175bd8
;   TerminatedCString s_engine_dosio_c_0057d321
;   TerminatedCString s_CFileFinder_convertStruc_0057d333
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_string.c__strncpy_FUN_00565f70
;   crt_time.c__mktime_FUN_00565fb0
;   FileTimeToLocalFileTime
;   FileTimeToSystemTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456d90
        ;   Label: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
    PUSH ESI                            ; 00456d91
    PUSH EDI                            ; 00456d92
    PUSH EBP                            ; 00456d93
    SUB ESP,0x3c                        ; 00456d94
    MOV EBX,dword ptr [ESP + 0x50]      ; 00456d97
    MOV EDI,dword ptr [ESP + 0x54]      ; 00456d9b
    PUSH 0x100                          ; 00456d9f
    PUSH 0x0                            ; 00456da4
    PUSH EBX                            ; 00456da6
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00456da7
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00456dac
    PUSH 0xff                           ; 00456daf
    MOV ESI,EDI                         ; 00456db4
    LEA EAX,[EDI + 0x2c]                ; 00456db6
    PUSH EAX                            ; 00456db9
    PUSH EBX                            ; 00456dba
    CALL crt_string.c__strncpy_FUN_00565f70 ; 00456dbb
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00565f70(char * dest, char * src, SIZE_T count)
    MOV dword ptr [EBX + 0x100],0x0     ; 00456dc0
    MOV AH,byte ptr [EDI]               ; 00456dca
    ADD ESP,0xc                         ; 00456dcc
    TEST AH,0x20                        ; 00456dcf
    JNZ 0x00456e54                      ; 00456dd2
        ;   XREF to: 00456e54 (CONDITIONAL_JUMP)  ; LAB_00456e54
    TEST byte ptr [ESI],0x2             ; 00456dd8
        ;   Label: LAB_00456dd8
    JZ 0x00456de4                       ; 00456ddb
        ;   XREF to: 00456de4 (CONDITIONAL_JUMP)  ; LAB_00456de4
    OR byte ptr [EBX + 0x100],0x2       ; 00456ddd
    TEST byte ptr [ESI],0x10            ; 00456de4
        ;   Label: LAB_00456de4
    JZ 0x00456df0                       ; 00456de7
        ;   XREF to: 00456df0 (CONDITIONAL_JUMP)  ; LAB_00456df0
    OR byte ptr [EBX + 0x100],0x4       ; 00456de9
    TEST byte ptr [ESI],0x1             ; 00456df0
        ;   Label: LAB_00456df0
    JZ 0x00456dfc                       ; 00456df3
        ;   XREF to: 00456dfc (CONDITIONAL_JUMP)  ; LAB_00456dfc
    OR byte ptr [EBX + 0x100],0x8       ; 00456df5
    CMP dword ptr [ESI + 0x1c],0x0      ; 00456dfc
        ;   Label: LAB_00456dfc
    JZ 0x00456e60                       ; 00456e00
        ;   XREF to: 00456e60 (CONDITIONAL_JUMP)  ; LAB_00456e60
    MOV EDI,0x57d321                    ; 00456e02 | = "..\\engine\\dosio.c"
        ;   Label: LAB_00456e02
    MOV EBP,0x226                       ; 00456e07
    PUSH 0x57d333                       ; 00456e0c | = "CFileFinder::convertStruct - file too..."
    MOV dword ptr [0x01cc4800],EDI      ; 00456e11 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00456e17 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00456e1d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00456e22
    MOV EAX,dword ptr [ESI + 0x20]      ; 00456e25
        ;   Label: LAB_00456e25
    MOV dword ptr [EBX + 0x104],EAX     ; 00456e28
    LEA EAX,[ESP + 0x34]                ; 00456e2e
    PUSH EAX                            ; 00456e32
    ADD ESI,0x14                        ; 00456e33
    PUSH ESI                            ; 00456e36
    MOV dword ptr [EBX + 0x108],0x0     ; 00456e37
    CALL dword ptr CS:[0x5754c0]        ; 00456e41 | PTR_FileTimeToLocalFileTime_005754c0
    TEST EAX,EAX                        ; 00456e48
    JNZ 0x00456e6b                      ; 00456e4a
        ;   XREF to: 00456e6b (CONDITIONAL_JUMP)  ; LAB_00456e6b
    ADD ESP,0x3c                        ; 00456e4c
        ;   Label: LAB_00456e4c
    POP EBP                             ; 00456e4f
    POP EDI                             ; 00456e50
    POP ESI                             ; 00456e51
    POP EBX                             ; 00456e52
    RET                                 ; 00456e53
    OR byte ptr [EBX + 0x100],0x1       ; 00456e54
        ;   Label: LAB_00456e54
    JMP 0x00456dd8                      ; 00456e5b
        ;   XREF to: 00456dd8 (UNCONDITIONAL_JUMP)  ; LAB_00456dd8
    CMP dword ptr [ESI + 0x20],0x7fffffff ; 00456e60
        ;   Label: LAB_00456e60
    JA 0x00456e02                       ; 00456e67
        ;   XREF to: 00456e02 (CONDITIONAL_JUMP)  ; LAB_00456e02
    JMP 0x00456e25                      ; 00456e69
        ;   XREF to: 00456e25 (UNCONDITIONAL_JUMP)  ; LAB_00456e25
    LEA EAX,[ESP + 0x24]                ; 00456e6b
        ;   Label: LAB_00456e6b
    PUSH EAX                            ; 00456e6f
    LEA EAX,[ESP + 0x38]                ; 00456e70
    PUSH EAX                            ; 00456e74
    CALL dword ptr CS:[0x5754c4]        ; 00456e75 | PTR_FileTimeToSystemTime_005754c4
    TEST EAX,EAX                        ; 00456e7c
    JZ 0x00456e4c                       ; 00456e7e
        ;   XREF to: 00456e4c (CONDITIONAL_JUMP)  ; LAB_00456e4c
    XOR EAX,EAX                         ; 00456e80
    MOV AX,word ptr [ESP + 0x30]        ; 00456e82
    MOV dword ptr [ESP],EAX             ; 00456e87
    XOR EAX,EAX                         ; 00456e8a
    MOV AX,word ptr [ESP + 0x2e]        ; 00456e8c
    MOV dword ptr [ESP + 0x4],EAX       ; 00456e91
    XOR EAX,EAX                         ; 00456e95
    MOV AX,word ptr [ESP + 0x2c]        ; 00456e97
    MOV dword ptr [ESP + 0x8],EAX       ; 00456e9c
    XOR EAX,EAX                         ; 00456ea0
    MOV AX,word ptr [ESP + 0x2a]        ; 00456ea2
    MOV dword ptr [ESP + 0xc],EAX       ; 00456ea7
    XOR EAX,EAX                         ; 00456eab
    MOV AX,word ptr [ESP + 0x26]        ; 00456ead
    DEC EAX                             ; 00456eb2
    MOV dword ptr [ESP + 0x10],EAX      ; 00456eb3
    XOR EAX,EAX                         ; 00456eb7
    MOV AX,word ptr [ESP + 0x24]        ; 00456eb9
    SUB EAX,0x76c                       ; 00456ebe
    MOV dword ptr [ESP + 0x14],EAX      ; 00456ec3
    XOR EAX,EAX                         ; 00456ec7
    MOV dword ptr [ESP + 0x20],EAX      ; 00456ec9
    MOV EAX,ESP                         ; 00456ecd
    PUSH EAX                            ; 00456ecf
    CALL crt_time.c__mktime_FUN_00565fb0 ; 00456ed0
        ;   XREF to: 00565fb0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00565fb0(_tm * timeptr)
    ADD ESP,0x4                         ; 00456ed5
    MOV dword ptr [EBX + 0x108],EAX     ; 00456ed8
    ADD ESP,0x3c                        ; 00456ede
    POP EBP                             ; 00456ee1
    POP EDI                             ; 00456ee2
    POP ESI                             ; 00456ee3
    POP EBX                             ; 00456ee4
    RET                                 ; 00456ee5

