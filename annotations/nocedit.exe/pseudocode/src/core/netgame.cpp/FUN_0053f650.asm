; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_0053f650()
;
;
; Referenced Globals:
;   int g_SimFrameCount
;   undefined4 g_SimFrameHistory
;   undefined4 DAT_02f9c128
;   undefined4 DAT_02f9c18c
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f650
        ;   Label: core_netgame.cpp_FUN_0053f650
    PUSH ESI                            ; 0053f651
    PUSH EDI                            ; 0053f652
    PUSH EBP                            ; 0053f653
    MOV EBP,dword ptr [0x02f9c0c0]      ; 0053f654 | g_SimFrameCount
    XOR EBX,EBX                         ; 0053f65a
    TEST EBP,EBP                        ; 0053f65c
    JLE 0x0053f681                      ; 0053f65e
        ;   XREF to: 0053f681 (CONDITIONAL_JUMP)  ; LAB_0053f681
    MOV EDI,0x2f9c0c4                   ; 0053f660 | g_SimFrameHistory
    XOR ESI,ESI                         ; 0053f665
    ADD EDI,0x64                        ; 0053f667
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053f66a
        ;   Label: LAB_0053f66a
    CMP EDX,dword ptr [ESI + 0x2f9c0c4] ; 0053f66e | g_SimFrameHistory | DAT_02f9c128
    JG 0x0053f68c                       ; 0053f674
        ;   XREF to: 0053f68c (CONDITIONAL_JUMP)  ; LAB_0053f68c
    ADD EDI,0x64                        ; 0053f676
    INC EBX                             ; 0053f679
    ADD ESI,0x64                        ; 0053f67a
    CMP EBX,EBP                         ; 0053f67d
    JL 0x0053f66a                       ; 0053f67f
        ;   XREF to: 0053f66a (CONDITIONAL_JUMP)  ; LAB_0053f66a
    MOV dword ptr [0x02f9c0c0],EBP      ; 0053f681 | g_SimFrameCount
        ;   Label: LAB_0053f681
    POP EBP                             ; 0053f687
    POP EDI                             ; 0053f688
    POP ESI                             ; 0053f689
    POP EBX                             ; 0053f68a
    RET                                 ; 0053f68b
    DEC EBP                             ; 0053f68c
        ;   Label: LAB_0053f68c
    MOV EAX,EBP                         ; 0053f68d
    SUB EAX,EBX                         ; 0053f68f
    IMUL EAX,EAX,0x64                   ; 0053f691
    PUSH EAX                            ; 0053f694
    MOV EAX,0x2f9c0c4                   ; 0053f695 | g_SimFrameHistory
    PUSH EDI                            ; 0053f69a | DAT_02f9c18c
    ADD EAX,ESI                         ; 0053f69b
    PUSH EAX                            ; 0053f69d | DAT_02f9c128
    MOV dword ptr [0x02f9c0c0],EBP      ; 0053f69e | g_SimFrameCount
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0053f6a4
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EBP,dword ptr [0x02f9c0c0]      ; 0053f6a9 | g_SimFrameCount
    ADD ESP,0xc                         ; 0053f6af
    CMP EBX,EBP                         ; 0053f6b2
    JL 0x0053f66a                       ; 0053f6b4
        ;   XREF to: 0053f66a (CONDITIONAL_JUMP)  ; LAB_0053f66a
    MOV dword ptr [0x02f9c0c0],EBP      ; 0053f6b6 | g_SimFrameCount
    POP EBP                             ; 0053f6bc
    POP EDI                             ; 0053f6bd
    POP ESI                             ; 0053f6be
    POP EBX                             ; 0053f6bf
    RET                                 ; 0053f6c0

