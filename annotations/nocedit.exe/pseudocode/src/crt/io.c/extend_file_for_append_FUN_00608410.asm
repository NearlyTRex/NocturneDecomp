; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_extend_file_for_append_FUN_00608410(int fd)
;
; Parameters:
; int              Stack[0x4]:4   fd
; Local Variables:
; undefined1       Stack[-0x20c]:1  local_20c
;
; XREF[1]:
;   crt_io.c_write_FUN_006084ec at 006085a3
;
; Called Functions:
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_io.c_setFileDescriptorFlags_FUN_00608908
;   crt_io.c_write_FUN_006084ec
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_lseek_FUN_00606690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608410
        ;   Label: crt_io.c_extend_file_for_append_FUN_00608410
    PUSH ESI                            ; 00608411
    PUSH EDI                            ; 00608412
    SUB ESP,0x200                       ; 00608413
    MOV EDI,dword ptr [ESP + 0x210]     ; 00608419
    PUSH 0x1                            ; 00608420
    PUSH 0x0                            ; 00608422
    PUSH EDI                            ; 00608424
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00608425 | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 0060842a
    ADD ESP,0xc                         ; 0060842c
    CMP EAX,-0x1                        ; 0060842f
    JZ 0x006084df                       ; 00608432 | LAB_006084df
        ;   XREF to: 006084df (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 00608438
    PUSH 0x0                            ; 0060843a
    PUSH EDI                            ; 0060843c
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060843d | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00608442
    CMP EAX,-0x1                        ; 00608445
    JZ 0x006084df                       ; 00608448 | LAB_006084df
        ;   XREF to: 006084df (CONDITIONAL_JUMP)
    CMP EBX,EAX                         ; 0060844e
    JLE 0x006084b0                      ; 00608450 | LAB_006084b0
        ;   XREF to: 006084b0 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00608452
    SUB EBX,EAX                         ; 00608453
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 00608455 | uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060845a
    AND AH,0x7f                         ; 0060845d
    PUSH EAX                            ; 00608460
    PUSH EDI                            ; 00608461
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 00608462 | void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00608467
    TEST EBX,EBX                        ; 0060846a
    JLE 0x006084dd                      ; 0060846c | LAB_006084dd
        ;   XREF to: 006084dd (CONDITIONAL_JUMP)
    PUSH 0x200                          ; 00608472
    PUSH 0x0                            ; 00608477
    LEA EAX,[ESP + 0x8]                 ; 00608479
    PUSH EAX                            ; 0060847d
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060847e | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00608483
    CMP EBX,0x200                       ; 00608486
        ;   Label: LAB_00608486
    JLE 0x00608495                      ; 0060848c | LAB_00608495
        ;   XREF to: 00608495 (CONDITIONAL_JUMP)
    MOV ESI,0x200                       ; 0060848e
    JMP 0x00608497                      ; 00608493 | LAB_00608497
        ;   XREF to: 00608497 (UNCONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 00608495
        ;   Label: LAB_00608495
    PUSH ESI                            ; 00608497
        ;   Label: LAB_00608497
    LEA EAX,[ESP + 0x4]                 ; 00608498
    PUSH EAX                            ; 0060849c
    PUSH EDI                            ; 0060849d
    CALL crt_io.c_write_FUN_006084ec    ; 0060849e | int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)
        ;   XREF to: 006084ec (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 006084a3
    TEST EAX,EAX                        ; 006084a6
    JL 0x006084df                       ; 006084a8 | LAB_006084df
        ;   XREF to: 006084df (CONDITIONAL_JUMP)
    SUB EBX,ESI                         ; 006084aa
    JNZ 0x00608486                      ; 006084ac | LAB_00608486
        ;   XREF to: 00608486 (CONDITIONAL_JUMP)
    JMP 0x006084dd                      ; 006084ae | LAB_006084dd
        ;   XREF to: 006084dd (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 006084b0
        ;   Label: LAB_006084b0
    PUSH EBX                            ; 006084b2
    PUSH EDI                            ; 006084b3
    CALL crt_stdio.c_lseek_FUN_00606690 ; 006084b4 | int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 006084b9
    PUSH EDI                            ; 006084bc
    MOV EBX,EAX                         ; 006084bd
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 006084bf | uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006084c4
    AND AH,0x7f                         ; 006084c7
    PUSH EAX                            ; 006084ca
    PUSH EDI                            ; 006084cb
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 006084cc | void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 006084d1
    CMP EBX,-0x1                        ; 006084d4
    JNZ 0x006084dd                      ; 006084d7 | LAB_006084dd
        ;   XREF to: 006084dd (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 006084d9
    JMP 0x006084df                      ; 006084db | LAB_006084df
        ;   XREF to: 006084df (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 006084dd
        ;   Label: LAB_006084dd
    ADD ESP,0x200                       ; 006084df
        ;   Label: LAB_006084df
    POP EDI                             ; 006084e5
    POP ESI                             ; 006084e6
    POP EBX                             ; 006084e7
    RET                                 ; 006084e8

