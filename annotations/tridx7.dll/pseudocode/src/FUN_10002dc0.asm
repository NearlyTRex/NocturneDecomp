; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10002dc0(void)
;
;
; XREF[1]:
;   APIDLLlockFrame at 10002d9e
;
; Referenced Globals:
;   undefined4 DAT_10014178
;   undefined4 DAT_10014180
;   undefined4 DAT_100141f4
;   undefined4 DAT_10138fb4
;   undefined4 DAT_10226e88
;   undefined4 DAT_10226e98
;   undefined4 DAT_10226eac
;
; Called Functions:
;   FUN_10002e20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f4],0x0      ; 10002dc0 | DAT_100141f4
        ;   Label: FUN_10002dc0
    JZ 0x10002dcf                       ; 10002dc7
        ;   XREF to: 10002dcf (CONDITIONAL_JUMP)  ; LAB_10002dcf
    MOV EAX,0x1                         ; 10002dc9
    RET                                 ; 10002dce
    PUSH 0x10226e88                     ; 10002dcf | DAT_10226e88
        ;   Label: LAB_10002dcf
    MOV EAX,[0x10014180]                ; 10002dd4 | DAT_10014180
    PUSH EAX                            ; 10002dd9
    CALL FUN_10002e20                   ; 10002dda
        ;   XREF to: 10002e20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002e20()
    ADD ESP,0x8                         ; 10002ddf
    TEST EAX,EAX                        ; 10002de2
    JNZ 0x10002de9                      ; 10002de4
        ;   XREF to: 10002de9 (CONDITIONAL_JUMP)  ; LAB_10002de9
    XOR EAX,EAX                         ; 10002de6
    RET                                 ; 10002de8
    MOV ECX,dword ptr [0x10226eac]      ; 10002de9 | DAT_10226eac
        ;   Label: LAB_10002de9
    MOV EAX,[0x10014178]                ; 10002def | DAT_10014178
    TEST EAX,EAX                        ; 10002df4
    JLE 0x10002e0c                      ; 10002df6
        ;   XREF to: 10002e0c (CONDITIONAL_JUMP)  ; LAB_10002e0c
    MOV EDX,dword ptr [0x10138fb4]      ; 10002df8 | DAT_10138fb4
    MOV dword ptr [EDX],ECX             ; 10002dfe
        ;   Label: LAB_10002dfe
    ADD EDX,0x4                         ; 10002e00
    ADD ECX,dword ptr [0x10226e98]      ; 10002e03 | DAT_10226e98
    DEC EAX                             ; 10002e09
    JNZ 0x10002dfe                      ; 10002e0a
        ;   XREF to: 10002dfe (CONDITIONAL_JUMP)  ; LAB_10002dfe
    MOV dword ptr [0x100141f4],0x1      ; 10002e0c | DAT_100141f4
        ;   Label: LAB_10002e0c
    MOV EAX,0x1                         ; 10002e16
    RET                                 ; 10002e1b

