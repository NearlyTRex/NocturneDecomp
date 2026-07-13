; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __stbuf(FILE *_File)
;
; Parameters:
; FILE *           Stack[0x4]:4   _File
;
; XREF[1]:
;   FID_conflict:_fwprintf at 100054e1
;
; Referenced Globals:
;   undefined4 DAT_10016d38
;   undefined4 DAT_100170a8
;   undefined4 DAT_100170c8
;   undefined4 DAT_10017308
;
; Called Functions:
;   FUN_10008830
;   FUN_100091b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005e60
        ;   Label: __stbuf
    PUSH EDI                            ; 10005e61
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005e62
    MOV EAX,dword ptr [ESI + 0x10]      ; 10005e66
    PUSH EAX                            ; 10005e69
    CALL FUN_100091b0                   ; 10005e6a
        ;   XREF to: 100091b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100091b0()
    ADD ESP,0x4                         ; 10005e6f
    TEST EAX,EAX                        ; 10005e72
    JNZ 0x10005e7b                      ; 10005e74
        ;   XREF to: 10005e7b (CONDITIONAL_JUMP)  ; LAB_10005e7b
    XOR EAX,EAX                         ; 10005e76
    POP EDI                             ; 10005e78
    POP ESI                             ; 10005e79
    RET                                 ; 10005e7a
    CMP ESI,0x100170a8                  ; 10005e7b | DAT_100170a8
        ;   Label: LAB_10005e7b
    JNZ 0x10005e87                      ; 10005e81
        ;   XREF to: 10005e87 (CONDITIONAL_JUMP)  ; LAB_10005e87
    XOR EAX,EAX                         ; 10005e83
    JMP 0x10005e94                      ; 10005e85
        ;   XREF to: 10005e94 (UNCONDITIONAL_JUMP)  ; LAB_10005e94
    CMP ESI,0x100170c8                  ; 10005e87 | DAT_100170c8
        ;   Label: LAB_10005e87
    JNZ 0x10005eed                      ; 10005e8d
        ;   XREF to: 10005eed (CONDITIONAL_JUMP)  ; LAB_10005eed
    MOV EAX,0x1                         ; 10005e8f
    INC dword ptr [0x10017308]          ; 10005e94 | DAT_10017308
        ;   Label: LAB_10005e94
    TEST dword ptr [ESI + 0xc],0x10c    ; 10005e9a
    JZ 0x10005ea8                       ; 10005ea1
        ;   XREF to: 10005ea8 (CONDITIONAL_JUMP)  ; LAB_10005ea8
    XOR EAX,EAX                         ; 10005ea3
    POP EDI                             ; 10005ea5
    POP ESI                             ; 10005ea6
    RET                                 ; 10005ea7
    LEA EDI,[EAX*0x4 + 0x10016d38]      ; 10005ea8 | DAT_10016d38
        ;   Label: LAB_10005ea8
    CMP dword ptr [EDI],0x0             ; 10005eaf | DAT_10016d38
    JNZ 0x10005ecc                      ; 10005eb2
        ;   XREF to: 10005ecc (CONDITIONAL_JUMP)  ; LAB_10005ecc
    PUSH 0x1000                         ; 10005eb4
    CALL FUN_10008830                   ; 10005eb9
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10005ebe
    MOV dword ptr [EDI],EAX             ; 10005ec1 | DAT_10016d38
    TEST EAX,EAX                        ; 10005ec3
    JNZ 0x10005ecc                      ; 10005ec5
        ;   XREF to: 10005ecc (CONDITIONAL_JUMP)  ; LAB_10005ecc
    XOR EAX,EAX                         ; 10005ec7
    POP EDI                             ; 10005ec9
    POP ESI                             ; 10005eca
    RET                                 ; 10005ecb
    MOV EAX,dword ptr [EDI]             ; 10005ecc | DAT_10016d38
        ;   Label: LAB_10005ecc
    MOV dword ptr [ESI + 0x8],EAX       ; 10005ece
    POP EDI                             ; 10005ed1
    MOV dword ptr [ESI],EAX             ; 10005ed2
    MOV EAX,0x1000                      ; 10005ed4
    MOV dword ptr [ESI + 0x18],EAX      ; 10005ed9
    MOV dword ptr [ESI + 0x4],EAX       ; 10005edc
    MOV EAX,0x1                         ; 10005edf
    OR dword ptr [ESI + 0xc],0x1102     ; 10005ee4
    POP ESI                             ; 10005eeb
    RET                                 ; 10005eec
    XOR EAX,EAX                         ; 10005eed
        ;   Label: LAB_10005eed
    POP EDI                             ; 10005eef
    POP ESI                             ; 10005ef0
    RET                                 ; 10005ef1

