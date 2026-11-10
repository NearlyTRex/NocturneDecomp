; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c0c9f(int *param_1,int param_2)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005c5f03 at 005c5f0c
;   crt_unknown.c_FUN_005c5f69 at 005c5f77
;   crt_unknown.c_istream_seekg_FUN_005b9c98 at 005b9ca0
;
; Called Functions:
;   crt_unknown.c_FUN_005c41d2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0c9f
        ;   Label: crt_unknown.c_FUN_005c0c9f
    CMP dword ptr [ESP + 0x8],0x0       ; 005c0ca3
    JZ 0x005c0cc9                       ; 005c0ca8
        ;   XREF to: 005c0cc9 (CONDITIONAL_JUMP)  ; LAB_005c0cc9
    MOV EDX,dword ptr [EAX]             ; 005c0caa
        ;   Label: LAB_005c0caa
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c0cac
    CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0 ; 005c0caf
    JNZ 0x005c0cd7                      ; 005c0cb4
        ;   XREF to: 005c0cd7 (CONDITIONAL_JUMP)  ; LAB_005c0cd7
    MOV EDX,dword ptr [EAX]             ; 005c0cb6
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c0cb8
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005c0cbb
    TEST EDX,EDX                        ; 005c0cbf
    JNZ 0x005c0cd7                      ; 005c0cc1
        ;   XREF to: 005c0cd7 (CONDITIONAL_JUMP)  ; LAB_005c0cd7
    MOV EAX,0x1                         ; 005c0cc3
    RET                                 ; 005c0cc8
    MOV EDX,dword ptr [EAX]             ; 005c0cc9
        ;   Label: LAB_005c0cc9
    MOV EDX,dword ptr [EDX + 0x4]       ; 005c0ccb
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc] ; 005c0cce
    TEST DL,0x1                         ; 005c0cd2
    JZ 0x005c0caa                       ; 005c0cd5
        ;   XREF to: 005c0caa (CONDITIONAL_JUMP)  ; LAB_005c0caa
    PUSH EBX                            ; 005c0cd7
        ;   Label: LAB_005c0cd7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0cd8
    PUSH EBX                            ; 005c0cdc
    PUSH EAX                            ; 005c0cdd
    CALL crt_unknown.c_FUN_005c41d2     ; 005c0cde
        ;   XREF to: 005c41d2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c41d2()
    ADD ESP,0x8                         ; 005c0ce3
    POP EBX                             ; 005c0ce6
    RET                                 ; 005c0ce7

