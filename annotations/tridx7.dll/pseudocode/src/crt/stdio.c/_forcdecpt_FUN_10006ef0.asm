; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c__forcdecpt_FUN_10006ef0(char *buf)
;
; Parameters:
; char *           Stack[0x4]:4   buf
;
; XREF[1]:
;   crt_fpu.c__install_fp_handlers_FUN_100055b0 at 100055c4
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_10017690
;   undefined1 DAT_10017694
;
; Called Functions:
;   crt_ctype.c__isctype_FUN_10009ac0
;   crt_ctype.c__tolower_FUN_10009b70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10006ef0
        ;   Label: crt_stdio.c__forcdecpt_FUN_10006ef0
    PUSH EDI                            ; 10006ef1
    MOV ESI,dword ptr [ESP + 0xc]       ; 10006ef2
    MOVSX EAX,byte ptr [ESI]            ; 10006ef6
    PUSH EAX                            ; 10006ef9
    CALL crt_ctype.c__tolower_FUN_10009b70 ; 10006efa
        ;   XREF to: 10009b70 (UNCONDITIONAL_CALL)  ; int crt_ctype.c__tolower_FUN_10009b70(int c)
    ADD ESP,0x4                         ; 10006eff
    CMP EAX,0x65                        ; 10006f02
    JZ 0x10006f3b                       ; 10006f05
        ;   XREF to: 10006f3b (CONDITIONAL_JUMP)  ; LAB_10006f3b
    MOV EDI,0x1                         ; 10006f07
    INC ESI                             ; 10006f0c
        ;   Label: LAB_10006f0c
    CMP dword ptr [0x10017690],EDI      ; 10006f0d | DAT_10017690
    JLE 0x10006f25                      ; 10006f13
        ;   XREF to: 10006f25 (CONDITIONAL_JUMP)  ; LAB_10006f25
    MOVSX EAX,byte ptr [ESI]            ; 10006f15
    PUSH 0x4                            ; 10006f18
    PUSH EAX                            ; 10006f1a
    CALL crt_ctype.c__isctype_FUN_10009ac0 ; 10006f1b
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c__isctype_FUN_10009ac0(int c, int type)
    ADD ESP,0x8                         ; 10006f20
    JMP 0x10006f37                      ; 10006f23
        ;   XREF to: 10006f37 (UNCONDITIONAL_JUMP)  ; LAB_10006f37
    MOVSX ECX,byte ptr [ESI]            ; 10006f25
        ;   Label: LAB_10006f25
    MOV EDX,dword ptr [0x10017480]      ; 10006f28 | PTR_DAT_10017480
    XOR EAX,EAX                         ; 10006f2e
    MOV AX,word ptr [EDX + ECX*0x2]     ; 10006f30 | DAT_1001748a
    AND EAX,0x4                         ; 10006f34
    TEST EAX,EAX                        ; 10006f37
        ;   Label: LAB_10006f37
    JNZ 0x10006f0c                      ; 10006f39
        ;   XREF to: 10006f0c (CONDITIONAL_JUMP)  ; LAB_10006f0c
    MOV CL,byte ptr [ESI]               ; 10006f3b
        ;   Label: LAB_10006f3b
    MOV AL,[0x10017694]                 ; 10006f3d | DAT_10017694
    MOV byte ptr [ESI],AL               ; 10006f42
    INC ESI                             ; 10006f44
    MOV DL,byte ptr [ESI]               ; 10006f45
        ;   Label: LAB_10006f45
    MOV AL,CL                           ; 10006f47
    MOV byte ptr [ESI],AL               ; 10006f49
    MOV CL,DL                           ; 10006f4b
    INC ESI                             ; 10006f4d
    TEST AL,AL                          ; 10006f4e
    JNZ 0x10006f45                      ; 10006f50
        ;   XREF to: 10006f45 (CONDITIONAL_JUMP)  ; LAB_10006f45
    POP EDI                             ; 10006f52
    POP ESI                             ; 10006f53
    RET                                 ; 10006f54

