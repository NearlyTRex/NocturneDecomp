; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__cropzeros_FUN_10006f60(char *buf)
;
; Parameters:
; char *           Stack[0x4]:4   buf
;
; XREF[1]:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0 at 100055b0
;
; Referenced Globals:
;   undefined1 DAT_10017694
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10006f60
        ;   Label: crt_stdio.c__cropzeros_FUN_10006f60
    CMP byte ptr [EDX],0x0              ; 10006f64
    JZ 0x10006f78                       ; 10006f67
        ;   XREF to: 10006f78 (CONDITIONAL_JUMP)  ; LAB_10006f78
    MOV AL,[0x10017694]                 ; 10006f69 | DAT_10017694
        ;   Label: LAB_10006f69
    CMP byte ptr [EDX],AL               ; 10006f6e
    JZ 0x10006f78                       ; 10006f70
        ;   XREF to: 10006f78 (CONDITIONAL_JUMP)  ; LAB_10006f78
    INC EDX                             ; 10006f72
    CMP byte ptr [EDX],0x0              ; 10006f73
    JNZ 0x10006f69                      ; 10006f76
        ;   XREF to: 10006f69 (CONDITIONAL_JUMP)  ; LAB_10006f69
    MOV EAX,EDX                         ; 10006f78
        ;   Label: LAB_10006f78
    INC EDX                             ; 10006f7a
    CMP byte ptr [EAX],0x0              ; 10006f7b
    JZ 0x10006fb8                       ; 10006f7e
        ;   XREF to: 10006fb8 (CONDITIONAL_JUMP)  ; LAB_10006fb8
    CMP byte ptr [EDX],0x0              ; 10006f80
    JZ 0x10006f95                       ; 10006f83
        ;   XREF to: 10006f95 (CONDITIONAL_JUMP)  ; LAB_10006f95
    MOV AL,byte ptr [EDX]               ; 10006f85
        ;   Label: LAB_10006f85
    CMP AL,0x65                         ; 10006f87
    JZ 0x10006f95                       ; 10006f89
        ;   XREF to: 10006f95 (CONDITIONAL_JUMP)  ; LAB_10006f95
    CMP AL,0x45                         ; 10006f8b
    JZ 0x10006f95                       ; 10006f8d
        ;   XREF to: 10006f95 (CONDITIONAL_JUMP)  ; LAB_10006f95
    INC EDX                             ; 10006f8f
    CMP byte ptr [EDX],0x0              ; 10006f90
    JNZ 0x10006f85                      ; 10006f93
        ;   XREF to: 10006f85 (CONDITIONAL_JUMP)  ; LAB_10006f85
    MOV EAX,EDX                         ; 10006f95
        ;   Label: LAB_10006f95
    DEC EDX                             ; 10006f97
    CMP byte ptr [EDX],0x30             ; 10006f98
    JNZ 0x10006fa3                      ; 10006f9b
        ;   XREF to: 10006fa3 (CONDITIONAL_JUMP)  ; LAB_10006fa3
    DEC EDX                             ; 10006f9d
        ;   Label: LAB_10006f9d
    CMP byte ptr [EDX],0x30             ; 10006f9e
    JZ 0x10006f9d                       ; 10006fa1
        ;   XREF to: 10006f9d (CONDITIONAL_JUMP)  ; LAB_10006f9d
    MOV CL,byte ptr [0x10017694]        ; 10006fa3 | DAT_10017694
        ;   Label: LAB_10006fa3
    CMP byte ptr [EDX],CL               ; 10006fa9
    JNZ 0x10006fae                      ; 10006fab
        ;   XREF to: 10006fae (CONDITIONAL_JUMP)  ; LAB_10006fae
    DEC EDX                             ; 10006fad
    MOV CL,byte ptr [EAX]               ; 10006fae
        ;   Label: LAB_10006fae
    INC EDX                             ; 10006fb0
    INC EAX                             ; 10006fb1
    MOV byte ptr [EDX],CL               ; 10006fb2
    TEST CL,CL                          ; 10006fb4
    JNZ 0x10006fae                      ; 10006fb6
        ;   XREF to: 10006fae (CONDITIONAL_JUMP)  ; LAB_10006fae
    RET                                 ; 10006fb8
        ;   Label: LAB_10006fb8

