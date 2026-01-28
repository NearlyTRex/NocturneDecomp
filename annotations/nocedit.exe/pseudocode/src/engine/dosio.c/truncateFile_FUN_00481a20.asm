; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_dosio_c_truncateFile_FUN_00481a20(FILE *file_handle,long new_size_bytes)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; long             Stack[0x8]:4   new_size_bytes
;
; Called Functions:
;   crt_io.c_ftruncate_FUN_00600cf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00481a20
        ;   Label: engine_dosio.c_truncateFile_FUN_00481a20
    MOV EAX,dword ptr [EAX + 0x10]      ; 00481a24
    CMP EAX,-0x1                        ; 00481a27
    JNZ 0x00481a2f                      ; 00481a2a
        ;   XREF to: 00481a2f (CONDITIONAL_JUMP)  ; LAB_00481a2f
    XOR EAX,EAX                         ; 00481a2c
        ;   Label: LAB_00481a2c
    RET                                 ; 00481a2e
    MOV EDX,dword ptr [ESP + 0x8]       ; 00481a2f
        ;   Label: LAB_00481a2f
    PUSH EDX                            ; 00481a33
    PUSH EAX                            ; 00481a34
    CALL crt_io.c_ftruncate_FUN_00600cf0 ; 00481a35
        ;   XREF to: 00600cf0 (UNCONDITIONAL_CALL)  ; int crt_io.c_ftruncate_FUN_00600cf0(int file_handle, long new_size)
    ADD ESP,0x8                         ; 00481a3a
    TEST EAX,EAX                        ; 00481a3d
    JNZ 0x00481a2c                      ; 00481a3f
        ;   XREF to: 00481a2c (CONDITIONAL_JUMP)  ; LAB_00481a2c
    MOV EAX,0x1                         ; 00481a41
    RET                                 ; 00481a46

