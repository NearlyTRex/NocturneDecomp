; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCube_save_FUN_00457430(CDemonCube * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 at 00494ffc
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457430
        ;   Label: core_dcube.cpp_CDemonCube_save_FUN_00457430
    PUSH ESI                            ; 00457431
    PUSH EDI                            ; 00457432
    PUSH EBP                            ; 00457433
    MOV EBX,dword ptr [ESP + 0x14]      ; 00457434
    MOV EBP,dword ptr [ESP + 0x18]      ; 00457438
    PUSH EBP                            ; 0045743c
    PUSH 0xc                            ; 0045743d
    PUSH 0x1                            ; 0045743f
    LEA EAX,[EBX + 0x8]                 ; 00457441
    PUSH EAX                            ; 00457444
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00457445
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045744a
    PUSH EBP                            ; 0045744d
    PUSH 0xc                            ; 0045744e
    PUSH 0x1                            ; 00457450
    LEA EAX,[EBX + 0x14]                ; 00457452
    PUSH EAX                            ; 00457455
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00457456
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045745b
    PUSH EBP                            ; 0045745e
    PUSH 0x4                            ; 0045745f
    PUSH 0x1                            ; 00457461
    LEA EAX,[EBX + 0x20]                ; 00457463
    PUSH EAX                            ; 00457466
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00457467
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045746c
    PUSH EBP                            ; 0045746f
    PUSH 0x4                            ; 00457470
    PUSH 0x1                            ; 00457472
    LEA EAX,[EBX + 0x28]                ; 00457474
    PUSH EAX                            ; 00457477
    XOR ESI,ESI                         ; 00457478
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045747a
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    MOV EDX,dword ptr [EBX + 0x20]      ; 0045747f
    ADD ESP,0x10                        ; 00457482
    TEST EDX,EDX                        ; 00457485
    JLE 0x004574b0                      ; 00457487
        ;   XREF to: 004574b0 (CONDITIONAL_JUMP)  ; LAB_004574b0
    XOR EDI,EDI                         ; 00457489
    PUSH EBP                            ; 0045748b
        ;   Label: LAB_0045748b
    PUSH 0xc                            ; 0045748c
    MOV EAX,dword ptr [EBX + 0x24]      ; 0045748e
    PUSH 0x1                            ; 00457491
    ADD EAX,EDI                         ; 00457493
    PUSH EAX                            ; 00457495
    INC ESI                             ; 00457496
    ADD EDI,0xc                         ; 00457497
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0045749a
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    MOV ECX,dword ptr [EBX + 0x20]      ; 0045749f
    ADD ESP,0x10                        ; 004574a2
    CMP ESI,ECX                         ; 004574a5
    JL 0x0045748b                       ; 004574a7
        ;   XREF to: 0045748b (CONDITIONAL_JUMP)  ; LAB_0045748b
    LEA EAX,[EAX]                       ; 004574a9
    NOP                                 ; 004574af
    MOV EDI,dword ptr [EBX + 0x28]      ; 004574b0
        ;   Label: LAB_004574b0
    XOR ESI,ESI                         ; 004574b3
    TEST EDI,EDI                        ; 004574b5
    JLE 0x004574e0                      ; 004574b7
        ;   XREF to: 004574e0 (CONDITIONAL_JUMP)  ; LAB_004574e0
    XOR EDI,EDI                         ; 004574b9
    MOV EAX,dword ptr [EBX + 0x24]      ; 004574bb
        ;   Label: LAB_004574bb
    PUSH EAX                            ; 004574be
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004574bf
    PUSH EBP                            ; 004574c2
    ADD EAX,EDI                         ; 004574c3
    PUSH EAX                            ; 004574c5
    INC ESI                             ; 004574c6
    CALL core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250 ; 004574c7
        ;   XREF to: 00455250 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle * this_ptr, FILE * file_handle, CVector3f * vertex_buffer_base)
    ADD EDI,0x20                        ; 004574cc
    MOV EDX,dword ptr [EBX + 0x28]      ; 004574cf
    ADD ESP,0xc                         ; 004574d2
    CMP ESI,EDX                         ; 004574d5
    JL 0x004574bb                       ; 004574d7
        ;   XREF to: 004574bb (CONDITIONAL_JUMP)  ; LAB_004574bb
    LEA EAX,[EAX]                       ; 004574d9
    NOP                                 ; 004574df
    MOV ECX,dword ptr [EBX + 0x28]      ; 004574e0
        ;   Label: LAB_004574e0
    TEST ECX,ECX                        ; 004574e3
    JNZ 0x004574f2                      ; 004574e5
        ;   XREF to: 004574f2 (CONDITIONAL_JUMP)  ; LAB_004574f2
    CMP dword ptr [EBX + 0x28],0x0      ; 004574e7
    JNZ 0x0045750d                      ; 004574eb
        ;   XREF to: 0045750d (CONDITIONAL_JUMP)  ; LAB_0045750d
    POP EBP                             ; 004574ed
    POP EDI                             ; 004574ee
    POP ESI                             ; 004574ef
    POP EBX                             ; 004574f0
    RET                                 ; 004574f1
    PUSH EBP                            ; 004574f2
        ;   Label: LAB_004574f2
    PUSH ECX                            ; 004574f3
    PUSH 0x1                            ; 004574f4
    MOV EDI,dword ptr [EBX + 0x30]      ; 004574f6
    PUSH EDI                            ; 004574f9
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004574fa
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004574ff
    CMP dword ptr [EBX + 0x28],0x0      ; 00457502
    JNZ 0x0045750d                      ; 00457506
        ;   XREF to: 0045750d (CONDITIONAL_JUMP)  ; LAB_0045750d
    POP EBP                             ; 00457508
    POP EDI                             ; 00457509
    POP ESI                             ; 0045750a
    POP EBX                             ; 0045750b
    RET                                 ; 0045750c
    PUSH EBP                            ; 0045750d
        ;   Label: LAB_0045750d
    PUSH 0x40                           ; 0045750e
    PUSH 0x1                            ; 00457510
    MOV EDX,dword ptr [EBX]             ; 00457512
    PUSH EDX                            ; 00457514
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00457515
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0045751a
    POP EBP                             ; 0045751d
    POP EDI                             ; 0045751e
    POP ESI                             ; 0045751f
    POP EBX                             ; 00457520
    RET                                 ; 00457521

