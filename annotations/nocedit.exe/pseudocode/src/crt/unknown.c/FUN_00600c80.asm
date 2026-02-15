; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_FUN_00600c80(int param_1,int param_2,SIZE_T param_3)
;
; Parameters:
; int              Stack[0x4]:4   param_1
; int              Stack[0x8]:4   param_2
; SIZE_T           Stack[0xc]:4   param_3
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
;
; XREF[1]:
;   crt_io.c_chsize_FUN_00600cf0 at 00600dca
;
; Called Functions:
;   crt_io.c_write_FUN_006084ec
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_lseek_FUN_00606690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600c80
        ;   Label: crt_unknown.c_FUN_00600c80
    PUSH ESI                            ; 00600c81
    PUSH EDI                            ; 00600c82
    SUB ESP,0x200                       ; 00600c83
    MOV EDI,dword ptr [ESP + 0x210]     ; 00600c89
    MOV EBX,dword ptr [ESP + 0x214]     ; 00600c90
    MOV ESI,dword ptr [ESP + 0x218]     ; 00600c97
    PUSH 0x0                            ; 00600c9e
    PUSH EBX                            ; 00600ca0
    PUSH EDI                            ; 00600ca1
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00600ca2
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00600ca7
    CMP EAX,EBX                         ; 00600caa
    JNZ 0x00600ce4                      ; 00600cac
        ;   XREF to: 00600ce4 (CONDITIONAL_JUMP)  ; LAB_00600ce4
    PUSH 0x200                          ; 00600cae
    PUSH 0x0                            ; 00600cb3
    LEA EAX,[ESP + 0x8]                 ; 00600cb5
    PUSH EAX                            ; 00600cb9
    CALL crt_memory.c_memset_FUN_005fde40 ; 00600cba
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00600cbf
    MOV EBX,0x200                       ; 00600cc2
        ;   Label: LAB_00600cc2
    CMP ESI,EBX                         ; 00600cc7
    JGE 0x00600ccd                      ; 00600cc9
        ;   XREF to: 00600ccd (CONDITIONAL_JUMP)  ; LAB_00600ccd
    MOV EBX,ESI                         ; 00600ccb
    PUSH EBX                            ; 00600ccd
        ;   Label: LAB_00600ccd
    LEA EAX,[ESP + 0x4]                 ; 00600cce
    PUSH EAX                            ; 00600cd2
    PUSH EDI                            ; 00600cd3
    CALL crt_io.c_write_FUN_006084ec    ; 00600cd4
        ;   XREF to: 006084ec (UNCONDITIONAL_CALL)  ; int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
    ADD ESP,0xc                         ; 00600cd9
    CMP EAX,EBX                         ; 00600cdc
    JNZ 0x00600ce4                      ; 00600cde
        ;   XREF to: 00600ce4 (CONDITIONAL_JUMP)  ; LAB_00600ce4
    SUB ESI,EBX                         ; 00600ce0
    JNZ 0x00600cc2                      ; 00600ce2
        ;   XREF to: 00600cc2 (CONDITIONAL_JUMP)  ; LAB_00600cc2
    ADD ESP,0x200                       ; 00600ce4
        ;   Label: LAB_00600ce4
    POP EDI                             ; 00600cea
    POP ESI                             ; 00600ceb
    POP EBX                             ; 00600cec
    RET                                 ; 00600ced

