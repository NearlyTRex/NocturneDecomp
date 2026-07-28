; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d09c00
;   undefined4 DAT_01d09c68
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e97e0
        ;   Label: core_netgame.cpp_purgeOldSimFrames_FUN_004e97e0
    PUSH ESI                            ; 004e97e1
    PUSH EDI                            ; 004e97e2
    PUSH EBP                            ; 004e97e3
    MOV EBP,dword ptr [0x01d09c00]      ; 004e97e4 | DAT_01d09c00
    XOR EBX,EBX                         ; 004e97ea
    TEST EBP,EBP                        ; 004e97ec
    JLE 0x004e9811                      ; 004e97ee
        ;   XREF to: 004e9811 (CONDITIONAL_JUMP)  ; LAB_004e9811
    MOV EDI,0x1d09c04                   ; 004e97f0
    XOR ESI,ESI                         ; 004e97f5
    ADD EDI,0x64                        ; 004e97f7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e97fa
        ;   Label: LAB_004e97fa
    CMP EDX,dword ptr [ESI + 0x1d09c04] ; 004e97fe | DAT_01d09c68
    JG 0x004e981c                       ; 004e9804
        ;   XREF to: 004e981c (CONDITIONAL_JUMP)  ; LAB_004e981c
    ADD EDI,0x64                        ; 004e9806
    INC EBX                             ; 004e9809
    ADD ESI,0x64                        ; 004e980a
    CMP EBX,EBP                         ; 004e980d
    JL 0x004e97fa                       ; 004e980f
        ;   XREF to: 004e97fa (CONDITIONAL_JUMP)  ; LAB_004e97fa
    MOV dword ptr [0x01d09c00],EBP      ; 004e9811 | DAT_01d09c00
        ;   Label: LAB_004e9811
    POP EBP                             ; 004e9817
    POP EDI                             ; 004e9818
    POP ESI                             ; 004e9819
    POP EBX                             ; 004e981a
    RET                                 ; 004e981b
    DEC EBP                             ; 004e981c
        ;   Label: LAB_004e981c
    MOV EAX,EBP                         ; 004e981d
    SUB EAX,EBX                         ; 004e981f
    IMUL EAX,EAX,0x64                   ; 004e9821
    PUSH EAX                            ; 004e9824
    MOV EAX,0x1d09c04                   ; 004e9825
    PUSH EDI                            ; 004e982a
    ADD EAX,ESI                         ; 004e982b
    PUSH EAX                            ; 004e982d | DAT_01d09c68
    MOV dword ptr [0x01d09c00],EBP      ; 004e982e | DAT_01d09c00
    CALL crt_string.c_memmove_FUN_00566170 ; 004e9834
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EBP,dword ptr [0x01d09c00]      ; 004e9839 | DAT_01d09c00
    ADD ESP,0xc                         ; 004e983f
    CMP EBX,EBP                         ; 004e9842
    JL 0x004e97fa                       ; 004e9844
        ;   XREF to: 004e97fa (CONDITIONAL_JUMP)  ; LAB_004e97fa
    MOV dword ptr [0x01d09c00],EBP      ; 004e9846 | DAT_01d09c00
    POP EBP                             ; 004e984c
    POP EDI                             ; 004e984d
    POP ESI                             ; 004e984e
    POP EBX                             ; 004e984f
    RET                                 ; 004e9850

