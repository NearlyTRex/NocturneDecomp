; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aeac4(uint param_1,byte *param_2)
;
;
; XREF[1]:
;   FUN_005aa0f0 at 005aa143
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aeac4
        ;   Label: FUN_005aeac4
    MOV EBX,dword ptr [ESP + 0x8]       ; 005aeac5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005aeac9
    MOV EAX,EBX                         ; 005aeacd
    AND EAX,0x70                        ; 005aeacf
    AND EBX,0x7                         ; 005aead2
    CMP EAX,0x20                        ; 005aead5
    JC 0x005aeaea                       ; 005aead8
        ;   XREF to: 005aeaea (CONDITIONAL_JUMP)  ; LAB_005aeaea
    JBE 0x005aeb14                      ; 005aeada
        ;   XREF to: 005aeb14 (CONDITIONAL_JUMP)  ; LAB_005aeb14
    CMP EAX,0x30                        ; 005aeadc
    JC 0x005aeb22                       ; 005aeadf
        ;   XREF to: 005aeb22 (CONDITIONAL_JUMP)  ; LAB_005aeb22
    JBE 0x005aeb0c                      ; 005aeae1
        ;   XREF to: 005aeb0c (CONDITIONAL_JUMP)  ; LAB_005aeb0c
    CMP EAX,0x40                        ; 005aeae3
    JZ 0x005aeb1c                       ; 005aeae6
        ;   XREF to: 005aeb1c (CONDITIONAL_JUMP)  ; LAB_005aeb1c
    POP EBX                             ; 005aeae8
    RET                                 ; 005aeae9
    TEST EAX,EAX                        ; 005aeaea
        ;   Label: LAB_005aeaea
    JBE 0x005aeaf5                      ; 005aeaec
        ;   XREF to: 005aeaf5 (CONDITIONAL_JUMP)  ; LAB_005aeaf5
    CMP EAX,0x10                        ; 005aeaee
    JZ 0x005aeb04                       ; 005aeaf1
        ;   XREF to: 005aeb04 (CONDITIONAL_JUMP)  ; LAB_005aeb04
    POP EBX                             ; 005aeaf3
    RET                                 ; 005aeaf4
    MOV dword ptr [EDX],0x1             ; 005aeaf5
        ;   Label: LAB_005aeaf5
    TEST EBX,EBX                        ; 005aeafb
    JNZ 0x005aeb22                      ; 005aeafd
        ;   XREF to: 005aeb22 (CONDITIONAL_JUMP)  ; LAB_005aeb22
    OR byte ptr [EDX],0x2               ; 005aeaff
    POP EBX                             ; 005aeb02
    RET                                 ; 005aeb03
    MOV dword ptr [EDX],0x0             ; 005aeb04
        ;   Label: LAB_005aeb04
    POP EBX                             ; 005aeb0a
    RET                                 ; 005aeb0b
    MOV dword ptr [EDX],0x2             ; 005aeb0c
        ;   Label: LAB_005aeb0c
    POP EBX                             ; 005aeb12
    RET                                 ; 005aeb13
    MOV dword ptr [EDX],0x1             ; 005aeb14
        ;   Label: LAB_005aeb14
    POP EBX                             ; 005aeb1a
    RET                                 ; 005aeb1b
    MOV dword ptr [EDX],0x3             ; 005aeb1c
        ;   Label: LAB_005aeb1c
    POP EBX                             ; 005aeb22
        ;   Label: LAB_005aeb22
    RET                                 ; 005aeb23

