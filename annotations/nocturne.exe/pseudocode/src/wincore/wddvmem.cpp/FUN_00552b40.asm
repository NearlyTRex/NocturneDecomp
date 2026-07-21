; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00552b40(void)
;
;
; XREF[1]:
;   FUN_00401010 at 00401027
;
; Referenced Globals:
;   string s_..\\wincore\\wddvmem.cpp_005977c5
;   string s_WDDVMEM:_Fatal_-_out_of_frame_bu_005977dc
;   string s_..\\wincore\\wddvmem.cpp_00597808
;   string s_WDDVMEM:_Fatal_-_out_of_Z_buffer_0059781f
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02ddf550
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf55c
;   ... and 2 more
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   DirectDrawCreate
;   FUN_004c8440
;   wincore_windll.cpp_loadExternalRenderer_FUN_00531780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552b40
        ;   Label: FUN_00552b40
    PUSH ESI                            ; 00552b41
    PUSH EDI                            ; 00552b42
    PUSH EBP                            ; 00552b43
    MOV ECX,dword ptr [0x005b761c]      ; 00552b44 | DAT_005b761c
    IMUL ECX,dword ptr [0x005b7620]     ; 00552b4a | DAT_005b7620
    MOV EAX,[0x005b7624]                ; 00552b51 | DAT_005b7624
    MOV EDX,EAX                         ; 00552b56
    SAR EDX,0x1f                        ; 00552b58
    SHL EDX,0x3                         ; 00552b5b
    SBB EAX,EDX                         ; 00552b5e
    SAR EAX,0x3                         ; 00552b60
    IMUL EAX,ECX                        ; 00552b63
    PUSH EAX                            ; 00552b66
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552b67
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00552b6c
    MOV [0x005c5010],EAX                ; 00552b6f | DAT_005c5010
    TEST EAX,EAX                        ; 00552b74
    JZ 0x00552c67                       ; 00552b76
        ;   XREF to: 00552c67 (CONDITIONAL_JUMP)  ; LAB_00552c67
    MOV EAX,[0x005b761c]                ; 00552b7c | DAT_005b761c
        ;   Label: LAB_00552b7c
    IMUL EAX,dword ptr [0x005b7620]     ; 00552b81 | DAT_005b7620
    SHL EAX,0x2                         ; 00552b88
    ADD EAX,0x40                        ; 00552b8b
    PUSH EAX                            ; 00552b8e
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00552b8f
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00552b94
    MOV [0x02ddf560],EAX                ; 00552b97 | DAT_02ddf560
    TEST EAX,EAX                        ; 00552b9c
    JNZ 0x00552bc3                      ; 00552b9e
        ;   XREF to: 00552bc3 (CONDITIONAL_JUMP)  ; LAB_00552bc3
    MOV EDI,0x597808                    ; 00552ba0 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0xef                        ; 00552ba5
    PUSH 0x59781f                       ; 00552baa | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01cc4800],EDI      ; 00552baf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00552bb5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00552bbb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00552bc0
    MOV EAX,[0x02ddf560]                ; 00552bc3 | DAT_02ddf560
        ;   Label: LAB_00552bc3
    ADD EAX,0x10                        ; 00552bc8
    AND AL,0xf0                         ; 00552bcb
    MOV [0x006af62c],EAX                ; 00552bcd | DAT_006af62c
    MOV EAX,[0x02ddf55c]                ; 00552bd2 | DAT_02ddf55c
    TEST EAX,EAX                        ; 00552bd7
    JZ 0x00552be9                       ; 00552bd9
        ;   XREF to: 00552be9 (CONDITIONAL_JUMP)  ; LAB_00552be9
    PUSH EAX                            ; 00552bdb
    MOV EDX,dword ptr [EAX]             ; 00552bdc
    CALL dword ptr [EDX + 0x8]          ; 00552bde
    XOR EDX,EDX                         ; 00552be1
    MOV dword ptr [0x02ddf55c],EDX      ; 00552be3 | DAT_02ddf55c
    MOV ECX,dword ptr [0x02ddf558]      ; 00552be9 | DAT_02ddf558
        ;   Label: LAB_00552be9
    TEST ECX,ECX                        ; 00552bef
    JZ 0x00552c01                       ; 00552bf1
        ;   XREF to: 00552c01 (CONDITIONAL_JUMP)  ; LAB_00552c01
    PUSH ECX                            ; 00552bf3
    MOV EDX,dword ptr [ECX]             ; 00552bf4
    XOR EBX,EBX                         ; 00552bf6
    CALL dword ptr [EDX + 0x8]          ; 00552bf8
    MOV dword ptr [0x02ddf558],EBX      ; 00552bfb | DAT_02ddf558
    MOV ESI,dword ptr [0x02ddf554]      ; 00552c01 | DAT_02ddf554
        ;   Label: LAB_00552c01
    TEST ESI,ESI                        ; 00552c07
    JZ 0x00552c19                       ; 00552c09
        ;   XREF to: 00552c19 (CONDITIONAL_JUMP)  ; LAB_00552c19
    PUSH ESI                            ; 00552c0b
    MOV EDX,dword ptr [ESI]             ; 00552c0c
    XOR EDI,EDI                         ; 00552c0e
    CALL dword ptr [EDX + 0x8]          ; 00552c10
    MOV dword ptr [0x02ddf554],EDI      ; 00552c13 | DAT_02ddf554
    MOV EBP,dword ptr [0x02ddf550]      ; 00552c19 | DAT_02ddf550
        ;   Label: LAB_00552c19
    TEST EBP,EBP                        ; 00552c1f
    JZ 0x00552c3c                       ; 00552c21
        ;   XREF to: 00552c3c (CONDITIONAL_JUMP)  ; LAB_00552c3c
    PUSH EBP                            ; 00552c23
    MOV EDX,dword ptr [EBP]             ; 00552c24
    CALL dword ptr [EDX + 0x4c]         ; 00552c27
    MOV EAX,[0x02ddf550]                ; 00552c2a | DAT_02ddf550
    PUSH EAX                            ; 00552c2f
    MOV EDX,dword ptr [EAX]             ; 00552c30
    CALL dword ptr [EDX + 0x8]          ; 00552c32
    XOR EAX,EAX                         ; 00552c35
    MOV [0x02ddf550],EAX                ; 00552c37 | DAT_02ddf550
    PUSH 0x0                            ; 00552c3c
        ;   Label: LAB_00552c3c
    PUSH 0x2ddf550                      ; 00552c3e | DAT_02ddf550
    PUSH 0x0                            ; 00552c43
    CALL DirectDrawCreate               ; 00552c45
        ;   XREF to: 00574ba8 (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 00552c4a
    JZ 0x00552c8f                       ; 00552c4c
        ;   XREF to: 00552c8f (CONDITIONAL_JUMP)  ; LAB_00552c8f
    MOV EBX,dword ptr [0x02de2098]      ; 00552c4e | DAT_02de2098
        ;   Label: LAB_00552c4e
    PUSH EBX                            ; 00552c54
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_00531780 ; 00552c55
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_loadExternalRenderer_FUN_00531780()
    MOV EAX,0x1                         ; 00552c5a
    ADD ESP,0x4                         ; 00552c5f
    POP EBP                             ; 00552c62
    POP EDI                             ; 00552c63
    POP ESI                             ; 00552c64
    POP EBX                             ; 00552c65
    RET                                 ; 00552c66
    MOV ECX,0x5977c5                    ; 00552c67 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00552c67
    MOV EBX,0xea                        ; 00552c6c
    PUSH 0x5977dc                       ; 00552c71 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00552c76 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00552c7c | DAT_01cc4804
    CALL FUN_004c8440                   ; 00552c82
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00552c87
    JMP 0x00552b7c                      ; 00552c8a
        ;   XREF to: 00552b7c (UNCONDITIONAL_JUMP)  ; LAB_00552b7c
    PUSH 0x11                           ; 00552c8f
        ;   Label: LAB_00552c8f
    MOV ECX,dword ptr [0x02de2098]      ; 00552c91 | DAT_02de2098
    MOV EAX,[0x02ddf550]                ; 00552c97 | DAT_02ddf550
    PUSH ECX                            ; 00552c9c
    MOV EDX,dword ptr [EAX]             ; 00552c9d
    PUSH EAX                            ; 00552c9f
    CALL dword ptr [EDX + 0x50]         ; 00552ca0
    JMP 0x00552c4e                      ; 00552ca3
        ;   XREF to: 00552c4e (UNCONDITIONAL_JUMP)  ; LAB_00552c4e

