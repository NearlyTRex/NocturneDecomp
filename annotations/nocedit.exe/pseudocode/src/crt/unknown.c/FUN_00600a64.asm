; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00600a64()
;
;
; XREF[1]:
;   crt_watcom.c_heapchk_FUN_00600ad0 at 00600b36
;
; Referenced Globals:
;   undefined4 DAT_03f9b1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600a64
        ;   Label: crt_unknown.c_FUN_00600a64
    PUSH EDI                            ; 00600a65
    PUSH EBP                            ; 00600a66
    MOV EBX,dword ptr [ESP + 0x10]      ; 00600a67
    MOV AH,byte ptr [EBX]               ; 00600a6b
    MOV dword ptr [0x03f9b1f0],EBX      ; 00600a6d | DAT_03f9b1f0
    TEST AH,0x1                         ; 00600a73
    JZ 0x00600a81                       ; 00600a76 | LAB_00600a81
        ;   XREF to: 00600a81 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 00600a78
    POP EBP                             ; 00600a7d
    POP EDI                             ; 00600a7e
    POP EBX                             ; 00600a7f
    RET                                 ; 00600a80
    MOV EDX,dword ptr [EBX + 0x8]       ; 00600a81
        ;   Label: LAB_00600a81
    MOV ECX,dword ptr [EDX + 0x4]       ; 00600a84
    MOV EAX,dword ptr [EBX + 0x4]       ; 00600a87
    CMP EBX,ECX                         ; 00600a8a
    JNZ 0x00600a93                      ; 00600a8c | LAB_00600a93
        ;   XREF to: 00600a93 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EAX + 0x8]       ; 00600a8e
    JZ 0x00600a9c                       ; 00600a91 | LAB_00600a9c
        ;   XREF to: 00600a9c (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 00600a93
        ;   Label: LAB_00600a93
    POP EBP                             ; 00600a98
    POP EDI                             ; 00600a99
    POP EBX                             ; 00600a9a
    RET                                 ; 00600a9b
    MOV ECX,dword ptr [EDX + 0x8]       ; 00600a9c
        ;   Label: LAB_00600a9c
    MOV EDI,dword ptr [ECX + 0x4]       ; 00600a9f
    MOV EBX,dword ptr [EAX + 0x4]       ; 00600aa2
    CMP EDX,EDI                         ; 00600aa5
    JNZ 0x00600ab0                      ; 00600aa7 | LAB_00600ab0
        ;   XREF to: 00600ab0 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EBX + 0x8]       ; 00600aa9
    CMP EAX,EBP                         ; 00600aac
    JZ 0x00600ab9                       ; 00600aae | LAB_00600ab9
        ;   XREF to: 00600ab9 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 00600ab0
        ;   Label: LAB_00600ab0
    POP EBP                             ; 00600ab5
    POP EDI                             ; 00600ab6
    POP EBX                             ; 00600ab7
    RET                                 ; 00600ab8
    CMP EDI,EDI                         ; 00600ab9
        ;   Label: LAB_00600ab9
    JNZ 0x00600ac1                      ; 00600abb | LAB_00600ac1
        ;   XREF to: 00600ac1 (CONDITIONAL_JUMP)
    CMP EBP,EBP                         ; 00600abd
    JZ 0x00600aca                       ; 00600abf | LAB_00600aca
        ;   XREF to: 00600aca (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 00600ac1
        ;   Label: LAB_00600ac1
    POP EBP                             ; 00600ac6
    POP EDI                             ; 00600ac7
    POP EBX                             ; 00600ac8
    RET                                 ; 00600ac9
    XOR EAX,EBP                         ; 00600aca
        ;   Label: LAB_00600aca
    POP EBP                             ; 00600acc
    POP EDI                             ; 00600acd
    POP EBX                             ; 00600ace
    RET                                 ; 00600acf

