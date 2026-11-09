; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cbc54(uint param_1,byte *param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c7280 at 005c72d3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbc54
        ;   Label: unkafter_zombie.cpp_FUN_005cbc54
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cbc55
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cbc59
    MOV EAX,EBX                         ; 005cbc5d
    AND EAX,0x70                        ; 005cbc5f
    AND EBX,0x7                         ; 005cbc62
    CMP EAX,0x20                        ; 005cbc65
    JC 0x005cbc7a                       ; 005cbc68
        ;   XREF to: 005cbc7a (CONDITIONAL_JUMP)  ; LAB_005cbc7a
    JBE 0x005cbca4                      ; 005cbc6a
        ;   XREF to: 005cbca4 (CONDITIONAL_JUMP)  ; LAB_005cbca4
    CMP EAX,0x30                        ; 005cbc6c
    JC 0x005cbcb2                       ; 005cbc6f
        ;   XREF to: 005cbcb2 (CONDITIONAL_JUMP)  ; LAB_005cbcb2
    JBE 0x005cbc9c                      ; 005cbc71
        ;   XREF to: 005cbc9c (CONDITIONAL_JUMP)  ; LAB_005cbc9c
    CMP EAX,0x40                        ; 005cbc73
    JZ 0x005cbcac                       ; 005cbc76
        ;   XREF to: 005cbcac (CONDITIONAL_JUMP)  ; LAB_005cbcac
    POP EBX                             ; 005cbc78
    RET                                 ; 005cbc79
    TEST EAX,EAX                        ; 005cbc7a
        ;   Label: LAB_005cbc7a
    JBE 0x005cbc85                      ; 005cbc7c
        ;   XREF to: 005cbc85 (CONDITIONAL_JUMP)  ; LAB_005cbc85
    CMP EAX,0x10                        ; 005cbc7e
    JZ 0x005cbc94                       ; 005cbc81
        ;   XREF to: 005cbc94 (CONDITIONAL_JUMP)  ; LAB_005cbc94
    POP EBX                             ; 005cbc83
    RET                                 ; 005cbc84
    MOV dword ptr [EDX],0x1             ; 005cbc85
        ;   Label: LAB_005cbc85
    TEST EBX,EBX                        ; 005cbc8b
    JNZ 0x005cbcb2                      ; 005cbc8d
        ;   XREF to: 005cbcb2 (CONDITIONAL_JUMP)  ; LAB_005cbcb2
    OR byte ptr [EDX],0x2               ; 005cbc8f
    POP EBX                             ; 005cbc92
    RET                                 ; 005cbc93
    MOV dword ptr [EDX],0x0             ; 005cbc94
        ;   Label: LAB_005cbc94
    POP EBX                             ; 005cbc9a
    RET                                 ; 005cbc9b
    MOV dword ptr [EDX],0x2             ; 005cbc9c
        ;   Label: LAB_005cbc9c
    POP EBX                             ; 005cbca2
    RET                                 ; 005cbca3
    MOV dword ptr [EDX],0x1             ; 005cbca4
        ;   Label: LAB_005cbca4
    POP EBX                             ; 005cbcaa
    RET                                 ; 005cbcab
    MOV dword ptr [EDX],0x3             ; 005cbcac
        ;   Label: LAB_005cbcac
    POP EBX                             ; 005cbcb2
        ;   Label: LAB_005cbcb2
    RET                                 ; 005cbcb3

