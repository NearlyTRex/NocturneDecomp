; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10002c50(void)
;
;
; XREF[2]:
;   APIDLLrestoreVideoMode at 10002bea
;   APIDLLunlockFrame at 10002e76
;
; Referenced Globals:
;   undefined4 DAT_10014178
;   undefined4 DAT_10014180
;   undefined4 DAT_100141f4
;   undefined4 DAT_10138fb4
;   undefined4 DAT_10225848
;   undefined4 DAT_1022584c
;
; Called Functions:
;   FUN_10002cb0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f4],0x0      ; 10002c50 | DAT_100141f4
        ;   Label: FUN_10002c50
    PUSH ESI                            ; 10002c57
    PUSH EDI                            ; 10002c58
    JNZ 0x10002c63                      ; 10002c59
        ;   XREF to: 10002c63 (CONDITIONAL_JUMP)  ; LAB_10002c63
    MOV EAX,0x1                         ; 10002c5b
    POP EDI                             ; 10002c60
    POP ESI                             ; 10002c61
    RET                                 ; 10002c62
    MOV ECX,dword ptr [0x10014178]      ; 10002c63 | DAT_10014178
        ;   Label: LAB_10002c63
    TEST ECX,ECX                        ; 10002c69
    JLE 0x10002c7a                      ; 10002c6b
        ;   XREF to: 10002c7a (CONDITIONAL_JUMP)  ; LAB_10002c7a
    MOV ESI,0x10225848                  ; 10002c6d | DAT_10225848
    MOV EDI,dword ptr [0x10138fb4]      ; 10002c72 | DAT_10138fb4
    MOVSD.REP ES:EDI,ESI                ; 10002c78 | DAT_10225848 | DAT_1022584c
    MOV EAX,[0x10014180]                ; 10002c7a | DAT_10014180
        ;   Label: LAB_10002c7a
    PUSH EAX                            ; 10002c7f
    CALL FUN_10002cb0                   ; 10002c80
        ;   XREF to: 10002cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_10002cb0()
    ADD ESP,0x4                         ; 10002c85
    TEST EAX,EAX                        ; 10002c88
    JNZ 0x10002c91                      ; 10002c8a
        ;   XREF to: 10002c91 (CONDITIONAL_JUMP)  ; LAB_10002c91
    XOR EAX,EAX                         ; 10002c8c
    POP EDI                             ; 10002c8e
    POP ESI                             ; 10002c8f
    RET                                 ; 10002c90
    MOV EAX,0x1                         ; 10002c91
        ;   Label: LAB_10002c91
    POP EDI                             ; 10002c96
    MOV dword ptr [0x100141f4],0x0      ; 10002c97 | DAT_100141f4
    POP ESI                             ; 10002ca1
    RET                                 ; 10002ca2

