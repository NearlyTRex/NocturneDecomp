; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__open_osfhandle_FUN_10008d20(intptr_t osfhandle,int flags)
;
; Parameters:
; intptr_t         Stack[0x4]:4   osfhandle
; int              Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_GetFileType_10242200 = 002424f8
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__dosmaperr_FUN_100089a0
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__alloc_osfhnd_FUN_10008a40
;   crt_io.c__set_osfhnd_FUN_10008b80
;   crt_io.c__unlock_fhandle_FUN_10008e50
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 10008d20
        ;   Label: crt_io.c__open_osfhandle_FUN_10008d20
    PUSH EBX                            ; 10008d24
    PUSH ESI                            ; 10008d25
    XOR BL,BL                           ; 10008d26
    PUSH EDI                            ; 10008d28
    TEST AL,0x8                         ; 10008d29
    JZ 0x10008d2f                       ; 10008d2b
        ;   XREF to: 10008d2f (CONDITIONAL_JUMP)  ; LAB_10008d2f
    MOV BL,0x20                         ; 10008d2d
    TEST AH,0x40                        ; 10008d2f
        ;   Label: LAB_10008d2f
    JZ 0x10008d37                       ; 10008d32
        ;   XREF to: 10008d37 (CONDITIONAL_JUMP)  ; LAB_10008d37
    OR BL,0x80                          ; 10008d34
    MOV EDI,dword ptr [ESP + 0x10]      ; 10008d37
        ;   Label: LAB_10008d37
    PUSH EDI                            ; 10008d3b
    CALL dword ptr [0x10242200]         ; 10008d3c | PTR_GetFileType_10242200
    TEST EAX,EAX                        ; 10008d42
    JNZ 0x10008d5e                      ; 10008d44
        ;   XREF to: 10008d5e (CONDITIONAL_JUMP)  ; LAB_10008d5e
    CALL dword ptr [0x102421c8]         ; 10008d46 | PTR_GetLastError_102421c8
    PUSH EAX                            ; 10008d4c
    CALL crt_errno.c__dosmaperr_FUN_100089a0 ; 10008d4d
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void crt_errno.c__dosmaperr_FUN_100089a0(ulong oserrno)
    ADD ESP,0x4                         ; 10008d52
    MOV EAX,0xffffffff                  ; 10008d55
    POP EDI                             ; 10008d5a
    POP ESI                             ; 10008d5b
    POP EBX                             ; 10008d5c
    RET                                 ; 10008d5d
    CMP EAX,0x2                         ; 10008d5e
        ;   Label: LAB_10008d5e
    JNZ 0x10008d68                      ; 10008d61
        ;   XREF to: 10008d68 (CONDITIONAL_JUMP)  ; LAB_10008d68
    OR BL,0x40                          ; 10008d63
    JMP 0x10008d70                      ; 10008d66
        ;   XREF to: 10008d70 (UNCONDITIONAL_JUMP)  ; LAB_10008d70
    CMP EAX,0x3                         ; 10008d68
        ;   Label: LAB_10008d68
    JNZ 0x10008d70                      ; 10008d6b
        ;   XREF to: 10008d70 (CONDITIONAL_JUMP)  ; LAB_10008d70
    OR BL,0x8                           ; 10008d6d
    CALL crt_io.c__alloc_osfhnd_FUN_10008a40 ; 10008d70
        ;   XREF to: 10008a40 (UNCONDITIONAL_CALL)  ; int crt_io.c__alloc_osfhnd_FUN_10008a40()
        ;   Label: LAB_10008d70
    CMP EAX,-0x1                        ; 10008d75
    MOV ESI,EAX                         ; 10008d78
    JNZ 0x10008d9b                      ; 10008d7a
        ;   XREF to: 10008d9b (CONDITIONAL_JUMP)  ; LAB_10008d9b
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008d7c
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
    MOV dword ptr [EAX],0x18            ; 10008d81
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10008d87
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 10008d8c
    MOV dword ptr [EAX],0x0             ; 10008d8d
    MOV EAX,0xffffffff                  ; 10008d93
    POP ESI                             ; 10008d98
    POP EBX                             ; 10008d99
    RET                                 ; 10008d9a
    PUSH EDI                            ; 10008d9b
        ;   Label: LAB_10008d9b
    OR BL,0x1                           ; 10008d9c
    PUSH ESI                            ; 10008d9f
    CALL crt_io.c__set_osfhnd_FUN_10008b80 ; 10008da0
        ;   XREF to: 10008b80 (UNCONDITIONAL_CALL)  ; int crt_io.c__set_osfhnd_FUN_10008b80(int fh, intptr_t osfhandle)
    ADD ESP,0x8                         ; 10008da5
    MOV EAX,ESI                         ; 10008da8
    AND EAX,0xffffffe7                  ; 10008daa
    MOV ECX,ESI                         ; 10008dad
    SAR EAX,0x3                         ; 10008daf
    AND ECX,0x1f                        ; 10008db2
    SHL ECX,0x2                         ; 10008db5
    PUSH ESI                            ; 10008db8
    MOV EDX,dword ptr [EAX + 0x10241870] ; 10008db9 | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 10008dbf
    MOV byte ptr [EDX + EAX*0x1 + 0x4],BL ; 10008dc2
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 10008dc6
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 10008dcb
    MOV EAX,ESI                         ; 10008dce
    POP EDI                             ; 10008dd0
    POP ESI                             ; 10008dd1
    POP EBX                             ; 10008dd2
    RET                                 ; 10008dd3

