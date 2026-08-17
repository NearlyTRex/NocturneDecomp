; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c__fullpath_FUN_00565d00(char *buffer,char *path,SIZE_T buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   path
; SIZE_T           Stack[0xc]:4   buffer_size
;
; XREF[5]:
;   crt_io.c_getFileStat_FUN_0056c864 at 0056c8cd
;   crt_io.c_getTempDirectory_FUN_005687bc at 00568807
;   engine_dosio.cpp_findFileNormally_FUN_00456800 at 00456832
;   engine_pod.cpp_CPodFile_FUN_004f7ae0 at 004f7b12
;   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_00474ae0 at 00474c2c
;
; Referenced Globals:
;   void* PTR_GetFullPathNameA_00575518 = 00175d5c
;   TerminatedCString s_con_005989e4
;   undefined4 DAT_006e6f63
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_0056c73c
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_memory.c_free_FUN_005638d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_string.c__stricmp_FUN_00564520
;   crt_watcom.c_getcwd_FUN_0056c5f0
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565d00
        ;   Label: crt_stdlib.c__fullpath_FUN_00565d00
    PUSH ESI                            ; 00565d01
    PUSH EDI                            ; 00565d02
    PUSH EBP                            ; 00565d03
    SUB ESP,0x4                         ; 00565d04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00565d07
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00565d0b
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565d0f
    TEST EBX,EBX                        ; 00565d13
    JNZ 0x00565d3e                      ; 00565d15
        ;   XREF to: 00565d3e (CONDITIONAL_JUMP)  ; LAB_00565d3e
    MOV EDI,0x104                       ; 00565d17
    PUSH EDI                            ; 00565d1c
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00565d1d
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00565d22
    MOV EBP,EAX                         ; 00565d25
    TEST EAX,EAX                        ; 00565d27
    JNZ 0x00565d3c                      ; 00565d29
        ;   XREF to: 00565d3c (CONDITIONAL_JUMP)  ; LAB_00565d3c
    PUSH 0x5                            ; 00565d2b
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00565d2d
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00565d32
    XOR EAX,EAX                         ; 00565d35
    JMP 0x00565db8                      ; 00565d37
        ;   XREF to: 00565db8 (UNCONDITIONAL_JUMP)  ; LAB_00565db8
    MOV EBX,EAX                         ; 00565d3c
        ;   Label: LAB_00565d3c
    TEST ESI,ESI                        ; 00565d3e
        ;   Label: LAB_00565d3e
    JZ 0x00565d47                       ; 00565d40
        ;   XREF to: 00565d47 (CONDITIONAL_JUMP)  ; LAB_00565d47
    CMP byte ptr [ESI],0x0              ; 00565d42
    JNZ 0x00565d59                      ; 00565d45
        ;   XREF to: 00565d59 (CONDITIONAL_JUMP)  ; LAB_00565d59
    PUSH EDI                            ; 00565d47
        ;   Label: LAB_00565d47
    PUSH EBX                            ; 00565d48
    CALL crt_watcom.c_getcwd_FUN_0056c5f0 ; 00565d49
        ;   XREF to: 0056c5f0 (UNCONDITIONAL_CALL)  ; char * crt_watcom.c_getcwd_FUN_0056c5f0(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 00565d4e
    ADD ESP,0x4                         ; 00565d51
    POP EBP                             ; 00565d54
    POP EDI                             ; 00565d55
    POP ESI                             ; 00565d56
    POP EBX                             ; 00565d57
    RET                                 ; 00565d58
    PUSH 0x5989e4                       ; 00565d59 | = "con"
        ;   Label: LAB_00565d59
    PUSH ESI                            ; 00565d5e
    CALL crt_string.c__stricmp_FUN_00564520 ; 00565d5f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00565d64
    TEST EAX,EAX                        ; 00565d67
    JNZ 0x00565d96                      ; 00565d69
        ;   XREF to: 00565d96 (CONDITIONAL_JUMP)  ; LAB_00565d96
    CMP EDI,0x4                         ; 00565d6b
    JNC 0x00565d8d                      ; 00565d6e
        ;   XREF to: 00565d8d (CONDITIONAL_JUMP)  ; LAB_00565d8d
    PUSH EBP                            ; 00565d70
    CALL crt_memory.c_free_FUN_005638d0 ; 00565d71
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00565d76
    PUSH 0xe                            ; 00565d79
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00565d7b
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00565d80
    XOR EAX,EAX                         ; 00565d83
    ADD ESP,0x4                         ; 00565d85
    POP EBP                             ; 00565d88
    POP EDI                             ; 00565d89
    POP ESI                             ; 00565d8a
    POP EBX                             ; 00565d8b
    RET                                 ; 00565d8c
    MOV EAX,[0x005989e4]                ; 00565d8d | = "con"
        ;   Label: LAB_00565d8d
    MOV dword ptr [EBX],EAX             ; 00565d92 | DAT_006e6f63
    JMP 0x00565db6                      ; 00565d94
        ;   XREF to: 00565db6 (UNCONDITIONAL_JUMP)  ; LAB_00565db6
    MOV EAX,ESP                         ; 00565d96
        ;   Label: LAB_00565d96
    PUSH EAX                            ; 00565d98
    PUSH EBX                            ; 00565d99
    PUSH EDI                            ; 00565d9a
    PUSH ESI                            ; 00565d9b
    CALL dword ptr CS:[0x575518]        ; 00565d9c | PTR_GetFullPathNameA_00575518
    TEST EAX,EAX                        ; 00565da3
    JNZ 0x00565db6                      ; 00565da5
        ;   XREF to: 00565db6 (CONDITIONAL_JUMP)  ; LAB_00565db6
    CALL crt_errno.c___set_errno_FUN_0056c73c ; 00565da7
        ;   XREF to: 0056c73c (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_0056c73c()
    XOR EAX,EAX                         ; 00565dac
    ADD ESP,0x4                         ; 00565dae
    POP EBP                             ; 00565db1
    POP EDI                             ; 00565db2
    POP ESI                             ; 00565db3
    POP EBX                             ; 00565db4
    RET                                 ; 00565db5
    MOV EAX,EBX                         ; 00565db6
        ;   Label: LAB_00565db6
    ADD ESP,0x4                         ; 00565db8
        ;   Label: LAB_00565db8
    POP EBP                             ; 00565dbb
    POP EDI                             ; 00565dbc
    POP ESI                             ; 00565dbd
    POP EBX                             ; 00565dbe
    RET                                 ; 00565dbf

