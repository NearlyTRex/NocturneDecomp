; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c098c(HANDLE param_1,uint param_2)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c59e0 at 005c5aed
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2dc = 005bce04
;   undefined4 DAT_0061f4d8
;   undefined4 DAT_0061f4dc
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c098c
        ;   Label: crt_unknown.c_FUN_005c098c
    PUSH ESI                            ; 005c098d
    PUSH EDI                            ; 005c098e
    PUSH EBP                            ; 005c098f
    MOV ESI,dword ptr [0x0061f4d8]      ; 005c0990 | DAT_0061f4d8
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c0996
    TEST EDI,EDI                        ; 005c099a
    JL 0x005c0a56                       ; 005c099c
        ;   XREF to: 005c0a56 (CONDITIONAL_JUMP)  ; LAB_005c0a56
    CALL dword ptr [0x0061f2d8]         ; 005c09a2 | PTR_crt_unknown.c_FUN_005bce04_0061f2d8
    CMP EDI,0x1                         ; 005c09a8
    JC 0x005c09b6                       ; 005c09ab
        ;   XREF to: 005c09b6 (CONDITIONAL_JUMP)  ; LAB_005c09b6
    JBE 0x005c09c3                      ; 005c09ad
        ;   XREF to: 005c09c3 (CONDITIONAL_JUMP)  ; LAB_005c09c3
    CMP EDI,0x2                         ; 005c09af
    JZ 0x005c09cc                       ; 005c09b2
        ;   XREF to: 005c09cc (CONDITIONAL_JUMP)  ; LAB_005c09cc
    JMP 0x005c09da                      ; 005c09b4
        ;   XREF to: 005c09da (UNCONDITIONAL_JUMP)  ; LAB_005c09da
    TEST EDI,EDI                        ; 005c09b6
        ;   Label: LAB_005c09b6
    JNZ 0x005c09da                      ; 005c09b8
        ;   XREF to: 005c09da (CONDITIONAL_JUMP)  ; LAB_005c09da
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c09ba
    PUSH ECX                            ; 005c09be
    PUSH -0xa                           ; 005c09bf
    JMP 0x005c09d3                      ; 005c09c1
        ;   XREF to: 005c09d3 (UNCONDITIONAL_JUMP)  ; LAB_005c09d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c09c3
        ;   Label: LAB_005c09c3
    PUSH EBX                            ; 005c09c7
    PUSH -0xb                           ; 005c09c8
    JMP 0x005c09d3                      ; 005c09ca
        ;   XREF to: 005c09d3 (UNCONDITIONAL_JUMP)  ; LAB_005c09d3
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c09cc
        ;   Label: LAB_005c09cc
    PUSH EDX                            ; 005c09d0
    PUSH -0xc                           ; 005c09d1
    CALL dword ptr CS:[0x5c8638]        ; 005c09d3
        ;   Label: LAB_005c09d3
    MOV EBP,dword ptr [0x0061f4dc]      ; 005c09da | DAT_0061f4dc
        ;   Label: LAB_005c09da
    LEA EBX,[EDI*0x4 + 0x0]             ; 005c09e0
    MOV ESI,dword ptr [0x0061f4d8]      ; 005c09e7 | DAT_0061f4d8
    CMP EDI,EBP                         ; 005c09ed
    JGE 0x005c09fb                      ; 005c09ef
        ;   XREF to: 005c09fb (CONDITIONAL_JUMP)  ; LAB_005c09fb
    ADD EBX,ESI                         ; 005c09f1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c09f3
    MOV dword ptr [EBX],EAX             ; 005c09f7
    JMP 0x005c0a4a                      ; 005c09f9
        ;   XREF to: 005c0a4a (UNCONDITIONAL_JUMP)  ; LAB_005c0a4a
    LEA EAX,[EBX + 0x4]                 ; 005c09fb
        ;   Label: LAB_005c09fb
    PUSH EAX                            ; 005c09fe
    PUSH ESI                            ; 005c09ff
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c0a00
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV EDX,dword ptr [0x0061f4dc]      ; 005c0a05 | DAT_0061f4dc
    ADD ESP,0x8                         ; 005c0a0b
    MOV ESI,EAX                         ; 005c0a0e
    CMP EDX,EDI                         ; 005c0a10
    JGE 0x005c0a2e                      ; 005c0a12
        ;   XREF to: 005c0a2e (CONDITIONAL_JUMP)  ; LAB_005c0a2e
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c0a14
    MOV ECX,EBX                         ; 005c0a1b
    MOV EBX,ESI                         ; 005c0a1d
    MOV dword ptr [EBX + EAX*0x1],0x0   ; 005c0a1f
        ;   Label: LAB_005c0a1f
    ADD EAX,0x4                         ; 005c0a26
    INC EDX                             ; 005c0a29
    CMP EAX,ECX                         ; 005c0a2a
    JL 0x005c0a1f                       ; 005c0a2c
        ;   XREF to: 005c0a1f (CONDITIONAL_JUMP)  ; LAB_005c0a1f
    LEA EAX,[EDI*0x4 + 0x0]             ; 005c0a2e
        ;   Label: LAB_005c0a2e
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c0a35
    INC EDI                             ; 005c0a39
    ADD EAX,ESI                         ; 005c0a3a
    MOV dword ptr [0x0061f4d8],ESI      ; 005c0a3c | DAT_0061f4d8
    MOV dword ptr [0x0061f4dc],EDI      ; 005c0a42 | DAT_0061f4dc
    MOV dword ptr [EAX],EDX             ; 005c0a48
    CALL dword ptr [0x0061f2dc]         ; 005c0a4a | PTR_crt_unknown.c_FUN_005bce04_0061f2dc
        ;   Label: LAB_005c0a4a
    MOV ESI,dword ptr [0x0061f4d8]      ; 005c0a50 | DAT_0061f4d8
    MOV ESI,dword ptr [0x0061f4d8]      ; 005c0a56 | DAT_0061f4d8
        ;   Label: LAB_005c0a56
    POP EBP                             ; 005c0a5c
    POP EDI                             ; 005c0a5d
    POP ESI                             ; 005c0a5e
    POP EBX                             ; 005c0a5f
    RET                                 ; 005c0a60

