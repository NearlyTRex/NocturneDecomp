; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int crt_unknown_c_FUN_0060fb40(LPWSTR param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_EnvironInitialized
;
; Called Functions:
;   crt_env.c_updateEnvironTable_FUN_0060f04c
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_memcpy_FUN_0060cd60
;   crt_string.c_wcslen_FUN_0060cd30
;   crt_string.c_wcstombs_FUN_0060c0c0
;   crt_unknown.c_FUN_0060fcf4
;   crt_unknown.c_FUN_006107c0
;   crt_unknown.c_FUN_006107f0
;   crt_unknown.c_FUN_00610900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060fb40
        ;   Label: crt_unknown.c_FUN_0060fb40
    PUSH ESI                            ; 0060fb41
    PUSH EDI                            ; 0060fb42
    PUSH EBP                            ; 0060fb43
    SUB ESP,0x14                        ; 0060fb44
    MOV EDI,dword ptr [ESP + 0x28]      ; 0060fb47
    PUSH 0x3d                           ; 0060fb4b
    MOV EDX,0x2                         ; 0060fb4d
    PUSH EDI                            ; 0060fb52
    MOV dword ptr [ESP + 0x8],EDX       ; 0060fb53
    MOV dword ptr [ESP + 0xc],EDX       ; 0060fb57
    CALL crt_unknown.c_FUN_006107c0     ; 0060fb5b
        ;   XREF to: 006107c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_006107c0()
    MOV ESI,EAX                         ; 0060fb60
    ADD ESP,0x8                         ; 0060fb62
    TEST EAX,EAX                        ; 0060fb65
    JNZ 0x0060fb73                      ; 0060fb67
        ;   XREF to: 0060fb73 (CONDITIONAL_JUMP)  ; LAB_0060fb73
    MOV EAX,0xffffffff                  ; 0060fb69
    JMP 0x0060fce9                      ; 0060fb6e
        ;   XREF to: 0060fce9 (UNCONDITIONAL_JUMP)  ; LAB_0060fce9
    CMP EAX,EDI                         ; 0060fb73
        ;   Label: LAB_0060fb73
    JNZ 0x0060fb84                      ; 0060fb75
        ;   XREF to: 0060fb84 (CONDITIONAL_JUMP)  ; LAB_0060fb84
    MOV EAX,0xffffffff                  ; 0060fb77
    ADD ESP,0x14                        ; 0060fb7c
    POP EBP                             ; 0060fb7f
    POP EDI                             ; 0060fb80
    POP ESI                             ; 0060fb81
    POP EBX                             ; 0060fb82
    RET                                 ; 0060fb83
    MOV EBP,EAX                         ; 0060fb84
        ;   Label: LAB_0060fb84
    SUB EBP,EDI                         ; 0060fb86
    SAR EBP,0x1                         ; 0060fb88
    ADD EBP,EBP                         ; 0060fb8a
    LEA EAX,[EBP + 0x2]                 ; 0060fb8c
    PUSH EAX                            ; 0060fb8f
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060fb90
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060fb95
    MOV EBX,EAX                         ; 0060fb98
    MOV dword ptr [ESP + 0x8],EAX       ; 0060fb9a
    TEST EAX,EAX                        ; 0060fb9e
    JNZ 0x0060fbaf                      ; 0060fba0
        ;   XREF to: 0060fbaf (CONDITIONAL_JUMP)  ; LAB_0060fbaf
    MOV EAX,0xffffffff                  ; 0060fba2
    ADD ESP,0x14                        ; 0060fba7
    POP EBP                             ; 0060fbaa
    POP EDI                             ; 0060fbab
    POP ESI                             ; 0060fbac
    POP EBX                             ; 0060fbad
    RET                                 ; 0060fbae
    PUSH EBP                            ; 0060fbaf
        ;   Label: LAB_0060fbaf
    PUSH EDI                            ; 0060fbb0
    PUSH EAX                            ; 0060fbb1
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060fbb2
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060fbb7
    ADD ESI,0x2                         ; 0060fbba
    PUSH ESI                            ; 0060fbbd
    MOV word ptr [EBX + EBP*0x1],0x0    ; 0060fbbe
    MOV dword ptr [ESP + 0x10],ESI      ; 0060fbc4
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 0060fbc8
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)  ; ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
    ADD ESP,0x4                         ; 0060fbcd
    TEST EAX,EAX                        ; 0060fbd0
    JZ 0x0060fc1c                       ; 0060fbd2
        ;   XREF to: 0060fc1c (CONDITIONAL_JUMP)  ; LAB_0060fc1c
    ADD EAX,EAX                         ; 0060fbd4
    MOV dword ptr [ESP + 0x10],EAX      ; 0060fbd6
    ADD EAX,0x2                         ; 0060fbda
    PUSH EAX                            ; 0060fbdd
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060fbde
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV ESI,EAX                         ; 0060fbe3
    ADD ESP,0x4                         ; 0060fbe5
    MOV EBP,EAX                         ; 0060fbe8
    TEST EAX,EAX                        ; 0060fbea
    JNZ 0x0060fbfe                      ; 0060fbec
        ;   XREF to: 0060fbfe (CONDITIONAL_JUMP)  ; LAB_0060fbfe
    PUSH EBX                            ; 0060fbee
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060fbef
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0xffffffff                  ; 0060fbf4
    JMP 0x0060fce6                      ; 0060fbf9
        ;   XREF to: 0060fce6 (UNCONDITIONAL_JUMP)  ; LAB_0060fce6
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060fbfe
        ;   Label: LAB_0060fbfe
    PUSH EAX                            ; 0060fc02
    MOV EDX,dword ptr [ESP + 0x10]      ; 0060fc03
    PUSH EDX                            ; 0060fc07
    PUSH ESI                            ; 0060fc08
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060fc09
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060fc0e
    ADD ESI,dword ptr [ESP + 0x10]      ; 0060fc11
    MOV word ptr [ESI],0x0              ; 0060fc15
    JMP 0x0060fc1e                      ; 0060fc1a
        ;   XREF to: 0060fc1e (UNCONDITIONAL_JUMP)  ; LAB_0060fc1e
    XOR EBP,EBP                         ; 0060fc1c
        ;   Label: LAB_0060fc1c
    PUSH EBP                            ; 0060fc1e
        ;   Label: LAB_0060fc1e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0060fc1f
    PUSH ECX                            ; 0060fc23
    CALL crt_unknown.c_FUN_006107f0     ; 0060fc24
        ;   XREF to: 006107f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_006107f0()
    ADD ESP,0x8                         ; 0060fc29
    MOV ESI,dword ptr [ESP + 0x8]       ; 0060fc2c
    PUSH ESI                            ; 0060fc30
    MOV EBX,EAX                         ; 0060fc31
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060fc33
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060fc38
    PUSH EBP                            ; 0060fc3b
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060fc3c
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060fc41
    TEST EBX,EBX                        ; 0060fc44
    JNZ 0x0060fc55                      ; 0060fc46
        ;   XREF to: 0060fc55 (CONDITIONAL_JUMP)  ; LAB_0060fc55
    MOV EAX,0xffffffff                  ; 0060fc48
    ADD ESP,0x14                        ; 0060fc4d
    POP EBP                             ; 0060fc50
    POP EDI                             ; 0060fc51
    POP ESI                             ; 0060fc52
    POP EBX                             ; 0060fc53
    RET                                 ; 0060fc54
    CMP dword ptr [0x03f9b868],0x0      ; 0060fc55 | g_EnvironInitialized
        ;   Label: LAB_0060fc55
    JNZ 0x0060fc63                      ; 0060fc5c
        ;   XREF to: 0060fc63 (CONDITIONAL_JUMP)  ; LAB_0060fc63
    CALL crt_unknown.c_FUN_00610900     ; 0060fc5e
        ;   XREF to: 00610900 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00610900()
    PUSH EDI                            ; 0060fc63
        ;   Label: LAB_0060fc63
    CALL crt_unknown.c_FUN_0060fcf4     ; 0060fc64
        ;   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fcf4()
    ADD ESP,0x4                         ; 0060fc69
    TEST EAX,EAX                        ; 0060fc6c
    JZ 0x0060fc7d                       ; 0060fc6e
        ;   XREF to: 0060fc7d (CONDITIONAL_JUMP)  ; LAB_0060fc7d
    MOV EAX,0xffffffff                  ; 0060fc70
    ADD ESP,0x14                        ; 0060fc75
    POP EBP                             ; 0060fc78
    POP EDI                             ; 0060fc79
    POP ESI                             ; 0060fc7a
    POP EBX                             ; 0060fc7b
    RET                                 ; 0060fc7c
    PUSH EDI                            ; 0060fc7d
        ;   Label: LAB_0060fc7d
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 0060fc7e
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)  ; ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
    ADD ESP,0x4                         ; 0060fc83
    LEA ESI,[EAX + 0x1]                 ; 0060fc86
    MOV EAX,dword ptr [ESP]             ; 0060fc89
    IMUL EAX,ESI                        ; 0060fc8c
    PUSH EAX                            ; 0060fc8f
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060fc90
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0060fc95
    ADD ESP,0x4                         ; 0060fc97
    TEST EAX,EAX                        ; 0060fc9a
    JNZ 0x0060fcb5                      ; 0060fc9c
        ;   XREF to: 0060fcb5 (CONDITIONAL_JUMP)  ; LAB_0060fcb5
    PUSH 0x5                            ; 0060fc9e
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 0060fca0
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 0060fca5
    ADD ESP,0x4                         ; 0060fcaa
    ADD ESP,0x14                        ; 0060fcad
    POP EBP                             ; 0060fcb0
    POP EDI                             ; 0060fcb1
    POP ESI                             ; 0060fcb2
    POP EBX                             ; 0060fcb3
    RET                                 ; 0060fcb4
    IMUL ESI,dword ptr [ESP + 0x4]      ; 0060fcb5
        ;   Label: LAB_0060fcb5
    PUSH ESI                            ; 0060fcba
    PUSH EDI                            ; 0060fcbb
    PUSH EBX                            ; 0060fcbc
    CALL crt_string.c_wcstombs_FUN_0060c0c0 ; 0060fcbd
        ;   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 0060fcc2
    CMP EAX,-0x1                        ; 0060fcc5
    JNZ 0x0060fce0                      ; 0060fcc8
        ;   XREF to: 0060fce0 (CONDITIONAL_JUMP)  ; LAB_0060fce0
    PUSH EBX                            ; 0060fcca
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060fccb
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,0xffffffff                  ; 0060fcd0
    ADD ESP,0x4                         ; 0060fcd5
    ADD ESP,0x14                        ; 0060fcd8
    POP EBP                             ; 0060fcdb
    POP EDI                             ; 0060fcdc
    POP ESI                             ; 0060fcdd
    POP EBX                             ; 0060fcde
    RET                                 ; 0060fcdf
    PUSH EBX                            ; 0060fce0
        ;   Label: LAB_0060fce0
    CALL crt_env.c_updateEnvironTable_FUN_0060f04c ; 0060fce1
        ;   XREF to: 0060f04c (UNCONDITIONAL_CALL)  ; int crt_env.c_updateEnvironTable_FUN_0060f04c(char * envstr)
    ADD ESP,0x4                         ; 0060fce6
        ;   Label: LAB_0060fce6
    ADD ESP,0x14                        ; 0060fce9
        ;   Label: LAB_0060fce9
    POP EBP                             ; 0060fcec
    POP EDI                             ; 0060fced
    POP ESI                             ; 0060fcee
    POP EBX                             ; 0060fcef
    RET                                 ; 0060fcf0

