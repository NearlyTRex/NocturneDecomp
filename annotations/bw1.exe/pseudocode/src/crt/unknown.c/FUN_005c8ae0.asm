; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c8ae0(uint param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005c6e80 at 005c6eb1
;   crt_unknown.c_FUN_005c7dc0 at 005c7e03
;   crt_unknown.c_FUN_005c8640 at 005c8685
;   crt_unknown.c_FUN_005c871c at 005c8752
;
; Referenced Globals:
;   undefined4 DAT_006267e0
;   undefined4 DAT_006267e4
;   undefined4 DAT_006267e5
;   void* PTR_DAT_00626834 = 006267e4
;
; Called Functions:
;   crt_unknown.c_FUN_005cbcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8ae0
        ;   Label: crt_unknown.c_FUN_005c8ae0
    PUSH ESI                            ; 005c8ae1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c8ae2
    CMP EBX,dword ptr [0x006267e0]      ; 005c8ae6 | DAT_006267e0
    JC 0x005c8af3                       ; 005c8aec
        ;   XREF to: 005c8af3 (CONDITIONAL_JUMP)  ; LAB_005c8af3
    XOR EAX,EAX                         ; 005c8aee
    POP ESI                             ; 005c8af0
    POP EBX                             ; 005c8af1
    RET                                 ; 005c8af2
    CMP EBX,0x3                         ; 005c8af3
        ;   Label: LAB_005c8af3
    JGE 0x005c8b2d                      ; 005c8af6
        ;   XREF to: 005c8b2d (CONDITIONAL_JUMP)  ; LAB_005c8b2d
    MOV EAX,[0x00626834]                ; 005c8af8 | PTR_DAT_00626834
    LEA ESI,[EBX*0x4 + 0x0]             ; 005c8afd
    ADD EAX,ESI                         ; 005c8b04
    MOV DL,byte ptr [EAX + 0x1]         ; 005c8b06 | DAT_006267e5
    TEST DL,0x40                        ; 005c8b09
    JNZ 0x005c8b2d                      ; 005c8b0c
        ;   XREF to: 005c8b2d (CONDITIONAL_JUMP)  ; LAB_005c8b2d
    MOV DH,DL                           ; 005c8b0e
    OR DH,0x40                          ; 005c8b10
    PUSH EBX                            ; 005c8b13
    MOV byte ptr [EAX + 0x1],DH         ; 005c8b14 | DAT_006267e5
    CALL crt_unknown.c_FUN_005cbcc0     ; 005c8b17
        ;   XREF to: 005cbcc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cbcc0()
    ADD ESP,0x4                         ; 005c8b1c
    TEST EAX,EAX                        ; 005c8b1f
    JZ 0x005c8b2d                       ; 005c8b21
        ;   XREF to: 005c8b2d (CONDITIONAL_JUMP)  ; LAB_005c8b2d
    MOV EAX,[0x00626834]                ; 005c8b23 | PTR_DAT_00626834
    OR byte ptr [ESI + EAX*0x1 + 0x1],0x20 ; 005c8b28 | DAT_006267e5
    MOV EAX,[0x00626834]                ; 005c8b2d | PTR_DAT_00626834
        ;   Label: LAB_005c8b2d
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005c8b32 | DAT_006267e4
    POP ESI                             ; 005c8b35
    POP EBX                             ; 005c8b36
    RET                                 ; 005c8b37

