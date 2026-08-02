; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c_extend_file_for_append_FUN_00572f40(int fd)
;
; Parameters:
; int              Stack[0x4]:4   fd
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
;
; XREF[1]:
;   crt_io.c_write_FUN_0057301c at 005730d3
;
; Called Functions:
;   crt_io.c_write_FUN_0057301c
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_lseek_FUN_005689c0
;   crt_unknown.c_FUN_0056f220
;   crt_unknown.c_FUN_0056f278
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572f40
        ;   Label: crt_io.c_extend_file_for_append_FUN_00572f40
    PUSH ESI                            ; 00572f41
    PUSH EDI                            ; 00572f42
    SUB ESP,0x200                       ; 00572f43
    MOV EDI,dword ptr [ESP + 0x210]     ; 00572f49
    PUSH 0x1                            ; 00572f50
    PUSH 0x0                            ; 00572f52
    PUSH EDI                            ; 00572f54
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00572f55
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    MOV EBX,EAX                         ; 00572f5a
    ADD ESP,0xc                         ; 00572f5c
    CMP EAX,-0x1                        ; 00572f5f
    JZ 0x0057300f                       ; 00572f62
        ;   XREF to: 0057300f (CONDITIONAL_JUMP)  ; LAB_0057300f
    PUSH 0x2                            ; 00572f68
    PUSH 0x0                            ; 00572f6a
    PUSH EDI                            ; 00572f6c
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00572f6d
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00572f72
    CMP EAX,-0x1                        ; 00572f75
    JZ 0x0057300f                       ; 00572f78
        ;   XREF to: 0057300f (CONDITIONAL_JUMP)  ; LAB_0057300f
    CMP EBX,EAX                         ; 00572f7e
    JLE 0x00572fe0                      ; 00572f80
        ;   XREF to: 00572fe0 (CONDITIONAL_JUMP)  ; LAB_00572fe0
    PUSH EDI                            ; 00572f82
    SUB EBX,EAX                         ; 00572f83
    CALL crt_unknown.c_FUN_0056f220     ; 00572f85
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f220()
    ADD ESP,0x4                         ; 00572f8a
    AND AH,0x7f                         ; 00572f8d
    PUSH EAX                            ; 00572f90
    PUSH EDI                            ; 00572f91
    CALL crt_unknown.c_FUN_0056f278     ; 00572f92
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f278()
    ADD ESP,0x8                         ; 00572f97
    TEST EBX,EBX                        ; 00572f9a
    JLE 0x0057300d                      ; 00572f9c
        ;   XREF to: 0057300d (CONDITIONAL_JUMP)  ; LAB_0057300d
    PUSH 0x200                          ; 00572fa2
    PUSH 0x0                            ; 00572fa7
    LEA EAX,[ESP + 0x8]                 ; 00572fa9
    PUSH EAX                            ; 00572fad
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00572fae
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00572fb3
    CMP EBX,0x200                       ; 00572fb6
        ;   Label: LAB_00572fb6
    JLE 0x00572fc5                      ; 00572fbc
        ;   XREF to: 00572fc5 (CONDITIONAL_JUMP)  ; LAB_00572fc5
    MOV ESI,0x200                       ; 00572fbe
    JMP 0x00572fc7                      ; 00572fc3
        ;   XREF to: 00572fc7 (UNCONDITIONAL_JUMP)  ; LAB_00572fc7
    MOV ESI,EBX                         ; 00572fc5
        ;   Label: LAB_00572fc5
    PUSH ESI                            ; 00572fc7
        ;   Label: LAB_00572fc7
    LEA EAX,[ESP + 0x4]                 ; 00572fc8
    PUSH EAX                            ; 00572fcc
    PUSH EDI                            ; 00572fcd
    CALL crt_io.c_write_FUN_0057301c    ; 00572fce
        ;   XREF to: 0057301c (UNCONDITIONAL_CALL)  ; int crt_io.c_write_FUN_0057301c(int fd, void * buffer, SIZE_T count)
    ADD ESP,0xc                         ; 00572fd3
    TEST EAX,EAX                        ; 00572fd6
    JL 0x0057300f                       ; 00572fd8
        ;   XREF to: 0057300f (CONDITIONAL_JUMP)  ; LAB_0057300f
    SUB EBX,ESI                         ; 00572fda
    JNZ 0x00572fb6                      ; 00572fdc
        ;   XREF to: 00572fb6 (CONDITIONAL_JUMP)  ; LAB_00572fb6
    JMP 0x0057300d                      ; 00572fde
        ;   XREF to: 0057300d (UNCONDITIONAL_JUMP)  ; LAB_0057300d
    PUSH 0x0                            ; 00572fe0
        ;   Label: LAB_00572fe0
    PUSH EBX                            ; 00572fe2
    PUSH EDI                            ; 00572fe3
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00572fe4
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 00572fe9
    PUSH EDI                            ; 00572fec
    MOV EBX,EAX                         ; 00572fed
    CALL crt_unknown.c_FUN_0056f220     ; 00572fef
        ;   XREF to: 0056f220 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f220()
    ADD ESP,0x4                         ; 00572ff4
    AND AH,0x7f                         ; 00572ff7
    PUSH EAX                            ; 00572ffa
    PUSH EDI                            ; 00572ffb
    CALL crt_unknown.c_FUN_0056f278     ; 00572ffc
        ;   XREF to: 0056f278 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f278()
    ADD ESP,0x8                         ; 00573001
    CMP EBX,-0x1                        ; 00573004
    JNZ 0x0057300d                      ; 00573007
        ;   XREF to: 0057300d (CONDITIONAL_JUMP)  ; LAB_0057300d
    MOV EAX,EBX                         ; 00573009
    JMP 0x0057300f                      ; 0057300b
        ;   XREF to: 0057300f (UNCONDITIONAL_JUMP)  ; LAB_0057300f
    XOR EAX,EAX                         ; 0057300d
        ;   Label: LAB_0057300d
    ADD ESP,0x200                       ; 0057300f
        ;   Label: LAB_0057300f
    POP EDI                             ; 00573015
    POP ESI                             ; 00573016
    POP EBX                             ; 00573017
    RET                                 ; 00573018

