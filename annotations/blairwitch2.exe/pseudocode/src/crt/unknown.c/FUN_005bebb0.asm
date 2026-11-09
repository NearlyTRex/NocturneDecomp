; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005bebb0(uint param_1,int param_2,DWORD param_3)
;
;
; XREF[4]:
;   crt_stdio.c_fclose_FUN_005b8af0 at 005b8b48
;   crt_stdio.c_fseek_FUN_005b929c at 005b9327
;   crt_unknown.c_FUN_005bea80 at 005beb49
;   crt_unknown.c_FUN_005c0380 at 005c0395
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005c862c = 001c9182
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c036c
;   crt_unknown.c_FUN_005c0820
;   crt_unknown.c_FUN_005c0878
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bebb0
        ;   Label: crt_unknown.c_FUN_005bebb0
    PUSH ESI                            ; 005bebb1
    PUSH EDI                            ; 005bebb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005bebb3
    TEST EBX,EBX                        ; 005bebb7
    JL 0x005bebc3                       ; 005bebb9
        ;   XREF to: 005bebc3 (CONDITIONAL_JUMP)  ; LAB_005bebc3
    CMP EBX,dword ptr [0x0061f480]      ; 005bebbb | DAT_0061f480
    JBE 0x005bebd6                      ; 005bebc1
        ;   XREF to: 005bebd6 (CONDITIONAL_JUMP)  ; LAB_005bebd6
    PUSH 0x4                            ; 005bebc3
        ;   Label: LAB_005bebc3
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bebc5
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005bebca
    ADD ESP,0x4                         ; 005bebcf
    POP EDI                             ; 005bebd2
    POP ESI                             ; 005bebd3
    POP EBX                             ; 005bebd4
    RET                                 ; 005bebd5
    PUSH EBX                            ; 005bebd6
        ;   Label: LAB_005bebd6
    CALL dword ptr [0x0061f2a8]         ; 005bebd7 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    ADD ESP,0x4                         ; 005bebdd
    PUSH EBX                            ; 005bebe0
    CALL crt_unknown.c_FUN_005c0820     ; 005bebe1
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0820()
    ADD ESP,0x4                         ; 005bebe6
    CMP dword ptr [ESP + 0x14],0x0      ; 005bebe9
    JLE 0x005bec01                      ; 005bebee
        ;   XREF to: 005bec01 (CONDITIONAL_JUMP)  ; LAB_005bec01
    TEST AL,0x80                        ; 005bebf0
    JNZ 0x005bec01                      ; 005bebf2
        ;   XREF to: 005bec01 (CONDITIONAL_JUMP)  ; LAB_005bec01
    OR AH,0x80                          ; 005bebf4
    PUSH EAX                            ; 005bebf7
    PUSH EBX                            ; 005bebf8
    CALL crt_unknown.c_FUN_005c0878     ; 005bebf9
        ;   XREF to: 005c0878 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0878()
    ADD ESP,0x8                         ; 005bebfe
    MOV ESI,dword ptr [0x0061f4d8]      ; 005bec01 | DAT_0061f4d8
        ;   Label: LAB_005bec01
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005bec07
    MOV ESI,dword ptr [ESP + 0x18]      ; 005bec0a
    PUSH ESI                            ; 005bec0e
    PUSH 0x0                            ; 005bec0f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005bec11
    PUSH EDI                            ; 005bec15
    PUSH EAX                            ; 005bec16
    CALL dword ptr CS:[0x5c862c]        ; 005bec17 | PTR_SetFilePointer_005c862c
    PUSH EBX                            ; 005bec1e
    MOV ESI,EAX                         ; 005bec1f
    CALL dword ptr [0x0061f2ac]         ; 005bec21 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bec27
    CMP ESI,-0x1                        ; 005bec2a
    JNZ 0x005bec34                      ; 005bec2d
        ;   XREF to: 005bec34 (CONDITIONAL_JUMP)  ; LAB_005bec34
    CALL crt_unknown.c_FUN_005c036c     ; 005bec2f
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV EAX,ESI                         ; 005bec34
        ;   Label: LAB_005bec34
    POP EDI                             ; 005bec36
    POP ESI                             ; 005bec37
    POP EBX                             ; 005bec38
    RET                                 ; 005bec39

