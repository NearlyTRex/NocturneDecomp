; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c__fullpath_FUN_00601140(char *buffer,char *path,SIZE_T buffer_size)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   path
; SIZE_T           Stack[0xc]:4   buffer_size
;
; XREF[3]:
;   crt_io.c_getFileStat_FUN_00607e64 at 00607ecd
;   crt_io.c_getTempDirectory_FUN_00609afc at 00609b47
;   engine_dosio.c_getFullPath_FUN_004820c0 at 004820d1
;
; Referenced Globals:
;   GET_FULL_PATH_NAME_A_FUNC* g_GetFullPathNameAFunc = 00211f0e
;   TerminatedCString s_con_00658c2c
;   int INT_006e6f63
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_watcom.c_getcwd_FUN_00608d20
;   GetFullPathNameA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601140
        ;   Label: crt_stdlib.c__fullpath_FUN_00601140
    PUSH ESI                            ; 00601141
    PUSH EDI                            ; 00601142
    PUSH EBP                            ; 00601143
    SUB ESP,0x4                         ; 00601144
    MOV EBX,dword ptr [ESP + 0x18]      ; 00601147
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0060114b
    MOV EDI,dword ptr [ESP + 0x20]      ; 0060114f
    TEST EBX,EBX                        ; 00601153
    JNZ 0x0060117e                      ; 00601155
        ;   XREF to: 0060117e (CONDITIONAL_JUMP)  ; LAB_0060117e
    MOV EDI,0x104                       ; 00601157
    PUSH EDI                            ; 0060115c
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060115d
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 00601162
    MOV EBP,EAX                         ; 00601165
    TEST EAX,EAX                        ; 00601167
    JNZ 0x0060117c                      ; 00601169
        ;   XREF to: 0060117c (CONDITIONAL_JUMP)  ; LAB_0060117c
    PUSH 0x5                            ; 0060116b
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060116d
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 00601172
    XOR EAX,EAX                         ; 00601175
    JMP 0x006011f8                      ; 00601177
        ;   XREF to: 006011f8 (UNCONDITIONAL_JUMP)  ; LAB_006011f8
    MOV EBX,EAX                         ; 0060117c
        ;   Label: LAB_0060117c
    TEST ESI,ESI                        ; 0060117e
        ;   Label: LAB_0060117e
    JZ 0x00601187                       ; 00601180
        ;   XREF to: 00601187 (CONDITIONAL_JUMP)  ; LAB_00601187
    CMP byte ptr [ESI],0x0              ; 00601182
    JNZ 0x00601199                      ; 00601185
        ;   XREF to: 00601199 (CONDITIONAL_JUMP)  ; LAB_00601199
    PUSH EDI                            ; 00601187
        ;   Label: LAB_00601187
    PUSH EBX                            ; 00601188
    CALL crt_watcom.c_getcwd_FUN_00608d20 ; 00601189
        ;   XREF to: 00608d20 (UNCONDITIONAL_CALL)  ; char * crt_watcom.c_getcwd_FUN_00608d20(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 0060118e
    ADD ESP,0x4                         ; 00601191
    POP EBP                             ; 00601194
    POP EDI                             ; 00601195
    POP ESI                             ; 00601196
    POP EBX                             ; 00601197
    RET                                 ; 00601198
    PUSH 0x658c2c                       ; 00601199 | = "con"
        ;   Label: LAB_00601199
    PUSH ESI                            ; 0060119e
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0060119f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 006011a4
    TEST EAX,EAX                        ; 006011a7
    JNZ 0x006011d6                      ; 006011a9
        ;   XREF to: 006011d6 (CONDITIONAL_JUMP)  ; LAB_006011d6
    CMP EDI,0x4                         ; 006011ab
    JNC 0x006011cd                      ; 006011ae
        ;   XREF to: 006011cd (CONDITIONAL_JUMP)  ; LAB_006011cd
    PUSH EBP                            ; 006011b0
    CALL crt_memory.c_free_FUN_00601cd0 ; 006011b1
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 006011b6
    PUSH 0xe                            ; 006011b9
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006011bb
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    ADD ESP,0x4                         ; 006011c0
    XOR EAX,EAX                         ; 006011c3
    ADD ESP,0x4                         ; 006011c5
    POP EBP                             ; 006011c8
    POP EDI                             ; 006011c9
    POP ESI                             ; 006011ca
    POP EBX                             ; 006011cb
    RET                                 ; 006011cc
    MOV EAX,[0x00658c2c]                ; 006011cd | = "con"
        ;   Label: LAB_006011cd
    MOV dword ptr [EBX],EAX             ; 006011d2 | INT_006e6f63
    JMP 0x006011f6                      ; 006011d4
        ;   XREF to: 006011f6 (UNCONDITIONAL_JUMP)  ; LAB_006011f6
    MOV EAX,ESP                         ; 006011d6
        ;   Label: LAB_006011d6
    PUSH EAX                            ; 006011d8
    PUSH EBX                            ; 006011d9
    PUSH EDI                            ; 006011da
    PUSH ESI                            ; 006011db
    CALL dword ptr CS:[0x6115a0]        ; 006011dc | g_GetFullPathNameAFunc
    TEST EAX,EAX                        ; 006011e3
    JNZ 0x006011f6                      ; 006011e5
        ;   XREF to: 006011f6 (CONDITIONAL_JUMP)  ; LAB_006011f6
    CALL crt_errno.c___set_errno_FUN_006083fc ; 006011e7
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    XOR EAX,EAX                         ; 006011ec
    ADD ESP,0x4                         ; 006011ee
    POP EBP                             ; 006011f1
    POP EDI                             ; 006011f2
    POP ESI                             ; 006011f3
    POP EBX                             ; 006011f4
    RET                                 ; 006011f5
    MOV EAX,EBX                         ; 006011f6
        ;   Label: LAB_006011f6
    ADD ESP,0x4                         ; 006011f8
        ;   Label: LAB_006011f8
    POP EBP                             ; 006011fb
    POP EDI                             ; 006011fc
    POP ESI                             ; 006011fd
    POP EBX                             ; 006011fe
    RET                                 ; 006011ff

