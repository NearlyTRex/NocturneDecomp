; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005c63dc(char *param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c6210 at 005c6346
;
; Referenced Globals:
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e4
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_unknown.c_FUN_005b8580
;   unkafter_2d.cpp_FUN_005c6580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c63dc
        ;   Label: unkafter_2d.cpp_FUN_005c63dc
    PUSH ESI                            ; 005c63dd
    PUSH EDI                            ; 005c63de
    PUSH EBP                            ; 005c63df
    SUB ESP,0x8                         ; 005c63e0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c63e3
    TEST EDX,EDX                        ; 005c63e7
    JNZ 0x005c63f5                      ; 005c63e9
        ;   XREF to: 005c63f5 (CONDITIONAL_JUMP)  ; LAB_005c63f5
    MOV EAX,0xffffffff                  ; 005c63eb
    JMP 0x005c6577                      ; 005c63f0
        ;   XREF to: 005c6577 (UNCONDITIONAL_JUMP)  ; LAB_005c6577
    CMP byte ptr [EDX],0x0              ; 005c63f5
        ;   Label: LAB_005c63f5
    JZ 0x005c640f                       ; 005c63f8
        ;   XREF to: 005c640f (CONDITIONAL_JUMP)  ; LAB_005c640f
    LEA EAX,[EDX + 0x1]                 ; 005c63fa
    CMP byte ptr [EAX],0x0              ; 005c63fd
    JZ 0x005c640f                       ; 005c6400
        ;   XREF to: 005c640f (CONDITIONAL_JUMP)  ; LAB_005c640f
    CMP byte ptr [EAX],0x3d             ; 005c6402
        ;   Label: LAB_005c6402
    JZ 0x005c640f                       ; 005c6405
        ;   XREF to: 005c640f (CONDITIONAL_JUMP)  ; LAB_005c640f
    MOV CL,byte ptr [EAX + 0x1]         ; 005c6407
    INC EAX                             ; 005c640a
    TEST CL,CL                          ; 005c640b
    JNZ 0x005c6402                      ; 005c640d
        ;   XREF to: 005c6402 (CONDITIONAL_JUMP)  ; LAB_005c6402
    CMP byte ptr [EAX],0x0              ; 005c640f
        ;   Label: LAB_005c640f
    JNZ 0x005c6421                      ; 005c6412
        ;   XREF to: 005c6421 (CONDITIONAL_JUMP)  ; LAB_005c6421
    MOV EAX,0xffffffff                  ; 005c6414
    ADD ESP,0x8                         ; 005c6419
    POP EBP                             ; 005c641c
    POP EDI                             ; 005c641d
    POP ESI                             ; 005c641e
    POP EBX                             ; 005c641f
    RET                                 ; 005c6420
    CMP byte ptr [EAX + 0x1],0x0        ; 005c6421
        ;   Label: LAB_005c6421
    SETZ AL                             ; 005c6425
    MOV EBX,dword ptr [0x026807e4]      ; 005c6428 | DAT_026807e4
    MOVZX EBP,AL                        ; 005c642e
    TEST EBX,EBX                        ; 005c6431
    JNZ 0x005c6472                      ; 005c6433
        ;   XREF to: 005c6472 (CONDITIONAL_JUMP)  ; LAB_005c6472
    TEST EBP,EBP                        ; 005c6435
    JNZ 0x005c6575                      ; 005c6437
        ;   XREF to: 005c6575 (CONDITIONAL_JUMP)  ; LAB_005c6575
    PUSH 0x9                            ; 005c643d
    CALL crt_unknown.c_FUN_005b8580     ; 005c643f
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005c6444
    MOV EBX,EAX                         ; 005c6447
    TEST EAX,EAX                        ; 005c6449
    JNZ 0x005c645a                      ; 005c644b
        ;   XREF to: 005c645a (CONDITIONAL_JUMP)  ; LAB_005c645a
    MOV EAX,0xffffffff                  ; 005c644d
    ADD ESP,0x8                         ; 005c6452
    POP EBP                             ; 005c6455
    POP EDI                             ; 005c6456
    POP ESI                             ; 005c6457
    POP EBX                             ; 005c6458
    RET                                 ; 005c6459
    MOV [0x026807e4],EAX                ; 005c645a | DAT_026807e4
        ;   Label: LAB_005c645a
    ADD EAX,0x8                         ; 005c645f
    MOV dword ptr [EAX + -0x8],EBP      ; 005c6462
    MOV dword ptr [EAX + -0x4],EBP      ; 005c6465
    MOV [0x026807e0],EAX                ; 005c6468 | DAT_026807e0
    JMP 0x005c655d                      ; 005c646d
        ;   XREF to: 005c655d (UNCONDITIONAL_JUMP)  ; LAB_005c655d
    PUSH EBP                            ; 005c6472
        ;   Label: LAB_005c6472
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c6473
    PUSH ECX                            ; 005c6477
    CALL unkafter_2d.cpp_FUN_005c6580   ; 005c6478
        ;   XREF to: 005c6580 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c6580()
    ADD ESP,0x8                         ; 005c647d
    TEST EBP,EBP                        ; 005c6480
    JNZ 0x005c6575                      ; 005c6482
        ;   XREF to: 005c6575 (CONDITIONAL_JUMP)  ; LAB_005c6575
    TEST EAX,EAX                        ; 005c6488
    JG 0x005c655a                       ; 005c648a
        ;   XREF to: 005c655a (CONDITIONAL_JUMP)  ; LAB_005c655a
    NEG EAX                             ; 005c6490
    MOV EDX,dword ptr [0x026807e0]      ; 005c6492 | DAT_026807e0
    MOV EBP,EAX                         ; 005c6498
    INC EAX                             ; 005c649a
    LEA ESI,[EBP*0x4 + 0x0]             ; 005c649b
    MOV dword ptr [ESP],EAX             ; 005c64a2
    LEA EAX,[ESI + 0x8]                 ; 005c64a5
    MOV EDI,dword ptr [ESP]             ; 005c64a8
    MOV dword ptr [ESP + 0x4],EAX       ; 005c64ab
    ADD EAX,EDI                         ; 005c64af
    TEST EDX,EDX                        ; 005c64b1
    JNZ 0x005c6510                      ; 005c64b3
        ;   XREF to: 005c6510 (CONDITIONAL_JUMP)  ; LAB_005c6510
    PUSH EAX                            ; 005c64b5
    CALL crt_unknown.c_FUN_005b8580     ; 005c64b6
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    MOV EDX,EAX                         ; 005c64bb
    ADD ESP,0x4                         ; 005c64bd
    MOV EBX,EAX                         ; 005c64c0
    TEST EAX,EAX                        ; 005c64c2
    JNZ 0x005c64d3                      ; 005c64c4
        ;   XREF to: 005c64d3 (CONDITIONAL_JUMP)  ; LAB_005c64d3
    MOV EAX,0xffffffff                  ; 005c64c6
    ADD ESP,0x8                         ; 005c64cb
    POP EBP                             ; 005c64ce
    POP EDI                             ; 005c64cf
    POP ESI                             ; 005c64d0
    POP EBX                             ; 005c64d1
    RET                                 ; 005c64d2
    MOV EAX,[0x026807e4]                ; 005c64d3 | DAT_026807e4
        ;   Label: LAB_005c64d3
    MOV ECX,ESI                         ; 005c64d8
    MOV EDI,EDX                         ; 005c64da
    MOV ESI,EAX                         ; 005c64dc
    PUSH ES                             ; 005c64de
    MOV AX,DS                           ; 005c64df
    MOV ES,AX                           ; 005c64e1
    PUSH EDI                            ; 005c64e3
    MOV EAX,ECX                         ; 005c64e4
    SHR ECX,0x2                         ; 005c64e6
    MOVSD.REP ES:EDI,ESI                ; 005c64e9
    MOV CL,AL                           ; 005c64eb
    AND CL,0x3                          ; 005c64ed
    MOVSB.REP ES:EDI,ESI                ; 005c64f0
    POP EDI                             ; 005c64f2
    POP ES                              ; 005c64f3
    MOV ESI,dword ptr [ESP]             ; 005c64f4
    PUSH ESI                            ; 005c64f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c64f8
    PUSH 0x0                            ; 005c64fc
    ADD EAX,EDX                         ; 005c64fe
    PUSH EAX                            ; 005c6500
    MOV [0x026807e0],EAX                ; 005c6501 | DAT_026807e0
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c6506
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005c650b
    JMP 0x005c654a                      ; 005c650e
        ;   XREF to: 005c654a (UNCONDITIONAL_JUMP)  ; LAB_005c654a
    PUSH EAX                            ; 005c6510
        ;   Label: LAB_005c6510
    PUSH EBX                            ; 005c6511
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c6512
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005c6517
    MOV EBX,EAX                         ; 005c651a
    TEST EAX,EAX                        ; 005c651c
    JNZ 0x005c652d                      ; 005c651e
        ;   XREF to: 005c652d (CONDITIONAL_JUMP)  ; LAB_005c652d
    MOV EAX,0xffffffff                  ; 005c6520
    ADD ESP,0x8                         ; 005c6525
    POP EBP                             ; 005c6528
    POP EDI                             ; 005c6529
    POP ESI                             ; 005c652a
    POP EBX                             ; 005c652b
    RET                                 ; 005c652c
    PUSH EBP                            ; 005c652d
        ;   Label: LAB_005c652d
    MOV ECX,dword ptr [0x026807e0]      ; 005c652e | DAT_026807e0
    MOV ESI,dword ptr [ESP + 0x8]       ; 005c6534
    PUSH ECX                            ; 005c6538
    ADD ESI,EAX                         ; 005c6539
    PUSH ESI                            ; 005c653b
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 005c653c
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005c6541
    MOV dword ptr [0x026807e0],ESI      ; 005c6544 | DAT_026807e0
    MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0 ; 005c654a
        ;   Label: LAB_005c654a
    MOV dword ptr [0x026807e4],EBX      ; 005c6552 | DAT_026807e4
    JMP 0x005c655d                      ; 005c6558
        ;   XREF to: 005c655d (UNCONDITIONAL_JUMP)  ; LAB_005c655d
    LEA EBP,[EAX + -0x1]                ; 005c655a
        ;   Label: LAB_005c655a
    LEA EAX,[EBP*0x4 + 0x0]             ; 005c655d
        ;   Label: LAB_005c655d
    ADD EBX,EAX                         ; 005c6564
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c6566
    MOV dword ptr [EBX],EAX             ; 005c656a
    MOV EAX,[0x026807e0]                ; 005c656c | DAT_026807e0
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 005c6571
    XOR EAX,EAX                         ; 005c6575
        ;   Label: LAB_005c6575
    ADD ESP,0x8                         ; 005c6577
        ;   Label: LAB_005c6577
    POP EBP                             ; 005c657a
    POP EDI                             ; 005c657b
    POP ESI                             ; 005c657c
    POP EBX                             ; 005c657d
    RET                                 ; 005c657e

