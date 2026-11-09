; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005c6e80(uint param_1,int param_2,DWORD param_3)
;
;
; XREF[4]:
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0e98
;   crt_stdio.c_fseek_FUN_005c170c at 005c1797
;   crt_unknown.c_FUN_005c6d50 at 005c6e19
;   crt_unknown.c_FUN_005c8640 at 005c8655
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005d0640 = 001d11be
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c862c
;   crt_unknown.c_FUN_005c8ae0
;   crt_unknown.c_FUN_005c8b38
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6e80
        ;   Label: crt_unknown.c_FUN_005c6e80
    PUSH ESI                            ; 005c6e81
    PUSH EDI                            ; 005c6e82
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c6e83
    TEST EBX,EBX                        ; 005c6e87
    JL 0x005c6e93                       ; 005c6e89
        ;   XREF to: 005c6e93 (CONDITIONAL_JUMP)  ; LAB_005c6e93
    CMP EBX,dword ptr [0x006267e0]      ; 005c6e8b | DAT_006267e0
    JBE 0x005c6ea6                      ; 005c6e91
        ;   XREF to: 005c6ea6 (CONDITIONAL_JUMP)  ; LAB_005c6ea6
    PUSH 0x4                            ; 005c6e93
        ;   Label: LAB_005c6e93
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c6e95
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005c6e9a
    ADD ESP,0x4                         ; 005c6e9f
    POP EDI                             ; 005c6ea2
    POP ESI                             ; 005c6ea3
    POP EBX                             ; 005c6ea4
    RET                                 ; 005c6ea5
    PUSH EBX                            ; 005c6ea6
        ;   Label: LAB_005c6ea6
    CALL dword ptr [0x00626600]         ; 005c6ea7 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    ADD ESP,0x4                         ; 005c6ead
    PUSH EBX                            ; 005c6eb0
    CALL crt_unknown.c_FUN_005c8ae0     ; 005c6eb1
        ;   XREF to: 005c8ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8ae0()
    ADD ESP,0x4                         ; 005c6eb6
    CMP dword ptr [ESP + 0x14],0x0      ; 005c6eb9
    JLE 0x005c6ed1                      ; 005c6ebe
        ;   XREF to: 005c6ed1 (CONDITIONAL_JUMP)  ; LAB_005c6ed1
    TEST AL,0x80                        ; 005c6ec0
    JNZ 0x005c6ed1                      ; 005c6ec2
        ;   XREF to: 005c6ed1 (CONDITIONAL_JUMP)  ; LAB_005c6ed1
    OR AH,0x80                          ; 005c6ec4
    PUSH EAX                            ; 005c6ec7
    PUSH EBX                            ; 005c6ec8
    CALL crt_unknown.c_FUN_005c8b38     ; 005c6ec9
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8b38()
    ADD ESP,0x8                         ; 005c6ece
    MOV ESI,dword ptr [0x00626838]      ; 005c6ed1 | DAT_00626838
        ;   Label: LAB_005c6ed1
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005c6ed7
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c6eda
    PUSH ESI                            ; 005c6ede
    PUSH 0x0                            ; 005c6edf
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c6ee1
    PUSH EDI                            ; 005c6ee5
    PUSH EAX                            ; 005c6ee6
    CALL dword ptr CS:[0x5d0640]        ; 005c6ee7 | PTR_SetFilePointer_005d0640
    PUSH EBX                            ; 005c6eee
    MOV ESI,EAX                         ; 005c6eef
    CALL dword ptr [0x00626604]         ; 005c6ef1 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c6ef7
    CMP ESI,-0x1                        ; 005c6efa
    JNZ 0x005c6f04                      ; 005c6efd
        ;   XREF to: 005c6f04 (CONDITIONAL_JUMP)  ; LAB_005c6f04
    CALL crt_unknown.c_FUN_005c862c     ; 005c6eff
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV EAX,ESI                         ; 005c6f04
        ;   Label: LAB_005c6f04
    POP EDI                             ; 005c6f06
    POP ESI                             ; 005c6f07
    POP EBX                             ; 005c6f08
    RET                                 ; 005c6f09

