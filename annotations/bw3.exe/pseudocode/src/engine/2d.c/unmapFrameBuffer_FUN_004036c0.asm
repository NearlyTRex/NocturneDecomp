; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)
;
;
; Referenced Globals:
;   int g_INT_005fba18 = 0x140
;   int g_INT_005fba1c = 0xc8
;   int g_INT_005fba20 = 0x8
;   int g_INT_007303b8
;   int g_INT_007303bc
;   int g_INT_007303c0
;   int g_INT_007303c4
;   int g_INT_007303c8
;   int g_INT_007303cc
;   int g_INT_007303d0
;   void* g_PTR_007303d4
;   int g_INT_007303d8
;   int g_INT_01c6b5a8
;   int g_INT_01c6b5ac
;   int g_INT_01c6b5b0
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004036c0
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_004036c0
    PUSH EDI                            ; 004036c1
    PUSH EBP                            ; 004036c2
    MOV EBX,dword ptr [0x007303d8]      ; 004036c3 | g_INT_007303d8
    CMP dword ptr [0x007303b8],0x0      ; 004036c9 | g_INT_007303b8
    JZ 0x00403762                       ; 004036d0
        ;   XREF to: 00403762 (CONDITIONAL_JUMP)  ; LAB_00403762
    MOV EAX,[0x007303b8]                ; 004036d6 | g_INT_007303b8
        ;   Label: LAB_004036d6
    MOV [0x005fba18],EAX                ; 004036db | g_INT_005fba18
    MOV EAX,[0x007303bc]                ; 004036e0 | g_INT_007303bc
    MOV [0x005fba1c],EAX                ; 004036e5 | g_INT_005fba1c
    MOV EAX,[0x007303c0]                ; 004036ea | g_INT_007303c0
    MOV [0x01c6b5a8],EAX                ; 004036ef | g_INT_01c6b5a8
    MOV EAX,[0x007303c4]                ; 004036f4 | g_INT_007303c4
    MOV [0x01c6b5ac],EAX                ; 004036f9 | g_INT_01c6b5ac
    MOV EAX,[0x007303c8]                ; 004036fe | g_INT_007303c8
    MOV EDX,dword ptr [0x007303d4]      ; 00403703 | g_PTR_007303d4
    MOV [0x01c6b5b0],EAX                ; 00403709 | g_INT_01c6b5b0
    MOV EAX,[0x007303cc]                ; 0040370e | g_INT_007303cc
    MOV EBX,dword ptr [0x007303d8]      ; 00403713 | g_INT_007303d8
    MOV [0x01c6b5b4],EAX                ; 00403719 | g_INT_01c6b5b4
    MOV EAX,[0x007303d0]                ; 0040371e | g_INT_007303d0
    MOV EDI,dword ptr [0x005fba1c]      ; 00403723 | g_INT_005fba1c
    MOV [0x005fba20],EAX                ; 00403729 | g_INT_005fba20
    TEST EDI,EDI                        ; 0040372e
    JLE 0x00403750                      ; 00403730
        ;   XREF to: 00403750 (CONDITIONAL_JUMP)  ; LAB_00403750
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403732
    XOR EAX,EAX                         ; 00403739
    MOV dword ptr [EAX + 0x1c5faec],EDX ; 0040373b
        ;   Label: LAB_0040373b
    ADD EAX,0x4                         ; 00403741
    ADD EDX,EBX                         ; 00403744
    CMP EAX,ECX                         ; 00403746
    JL 0x0040373b                       ; 00403748
        ;   XREF to: 0040373b (CONDITIONAL_JUMP)  ; LAB_0040373b
    LEA EAX,[EAX]                       ; 0040374a
    XOR EBP,EBP                         ; 00403750
        ;   Label: LAB_00403750
    MOV dword ptr [0x007303b8],EBP      ; 00403752 | g_INT_007303b8
    MOV dword ptr [0x007303d8],EBX      ; 00403758 | g_INT_007303d8
    POP EBP                             ; 0040375e
    POP EDI                             ; 0040375f
    POP EBX                             ; 00403760
    RET                                 ; 00403761
    PUSH ESI                            ; 00403762
        ;   Label: LAB_00403762
    MOV ECX,0x5b530e                    ; 00403763
    MOV ESI,0x9e5                       ; 00403768
    PUSH 0x5b531d                       ; 0040376d
    MOV dword ptr [0x01d71de0],ECX      ; 00403772 | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00403778 | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0040377e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 00403783
    POP ESI                             ; 00403786
    JMP 0x004036d6                      ; 00403787
        ;   XREF to: 004036d6 (UNCONDITIONAL_JUMP)  ; LAB_004036d6

