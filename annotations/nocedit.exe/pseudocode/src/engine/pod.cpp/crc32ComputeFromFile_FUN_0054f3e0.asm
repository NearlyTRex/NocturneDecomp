; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(_FILE *file_stream,uint total_bytes)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_stream
; uint             Stack[0x8]:4   total_bytes
;
; Referenced Globals:
;   char[65536] g_FileIOBuffer
;   undefined4 DAT_030d5091
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f3e0
        ;   Label: engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0
    PUSH ESI                            ; 0054f3e1
    PUSH EDI                            ; 0054f3e2
    PUSH EBP                            ; 0054f3e3
    SUB ESP,0x4                         ; 0054f3e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054f3e7
    MOV EBP,0xffffffff                  ; 0054f3eb
    CMP EDI,0x10000                     ; 0054f3f0
    JL 0x0054f442                       ; 0054f3f6
        ;   XREF to: 0054f442 (CONDITIONAL_JUMP)  ; LAB_0054f442
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054f3f8
        ;   Label: LAB_0054f3f8
    PUSH EDX                            ; 0054f3fc
    PUSH 0x1                            ; 0054f3fd
    PUSH 0x10000                        ; 0054f3ff
    PUSH 0x30d5090                      ; 0054f404 | g_FileIOBuffer
    MOV ESI,0x30d5090                   ; 0054f409 | g_FileIOBuffer
    XOR EBX,EBX                         ; 0054f40e
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f410
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054f415
    MOV EAX,EBP                         ; 0054f418
    XOR EDX,EDX                         ; 0054f41a
        ;   Label: LAB_0054f41a
    MOV DL,byte ptr [ESI]               ; 0054f41c | g_FileIOBuffer | DAT_030d5091
    PUSH EDX                            ; 0054f41e
    PUSH EAX                            ; 0054f41f
    INC ESI                             ; 0054f420
    INC EBX                             ; 0054f421
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0054f422
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0054f427
    CMP EBX,0x10000                     ; 0054f42a
    JC 0x0054f41a                       ; 0054f430
        ;   XREF to: 0054f41a (CONDITIONAL_JUMP)  ; LAB_0054f41a
    SUB EDI,0x10000                     ; 0054f432
    MOV EBP,EAX                         ; 0054f438
    CMP EDI,0x10000                     ; 0054f43a
    JGE 0x0054f3f8                      ; 0054f440
        ;   XREF to: 0054f3f8 (CONDITIONAL_JUMP)  ; LAB_0054f3f8
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054f442
        ;   Label: LAB_0054f442
    PUSH ECX                            ; 0054f446
    PUSH 0x1                            ; 0054f447
    PUSH EDI                            ; 0054f449
    PUSH 0x30d5090                      ; 0054f44a | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 0054f44f | g_FileIOBuffer
    XOR ESI,ESI                         ; 0054f454
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054f456
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054f45b
    MOV EAX,EBP                         ; 0054f45e
    MOV dword ptr [ESP],EDI             ; 0054f460
    TEST EDI,EDI                        ; 0054f463
    JBE 0x0054f480                      ; 0054f465
        ;   XREF to: 0054f480 (CONDITIONAL_JUMP)  ; LAB_0054f480
    MOV EDI,dword ptr [ESP]             ; 0054f467
    XOR EDX,EDX                         ; 0054f46a
        ;   Label: LAB_0054f46a
    MOV DL,byte ptr [EBX]               ; 0054f46c | g_FileIOBuffer | DAT_030d5091
    PUSH EDX                            ; 0054f46e
    PUSH EAX                            ; 0054f46f
    INC EBX                             ; 0054f470
    INC ESI                             ; 0054f471
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0054f472
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0054f477
    CMP ESI,EDI                         ; 0054f47a
    JC 0x0054f46a                       ; 0054f47c
        ;   XREF to: 0054f46a (CONDITIONAL_JUMP)  ; LAB_0054f46a
    MOV EAX,EAX                         ; 0054f47e
    ADD ESP,0x4                         ; 0054f480
        ;   Label: LAB_0054f480
    POP EBP                             ; 0054f483
    POP EDI                             ; 0054f484
    POP ESI                             ; 0054f485
    POP EBX                             ; 0054f486
    RET                                 ; 0054f487

