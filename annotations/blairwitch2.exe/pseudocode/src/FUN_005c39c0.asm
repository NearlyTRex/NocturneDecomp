; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c39c0(int param_1)
;
;
; XREF[3]:
;   FUN_005befc0 at 005bf195
;   FUN_005bf210 at 005bf21f
;   FUN_005c0820 at 005c0857
;
; Referenced Globals:
;   void* PTR_GetFileType_005c8598 = 001c8eb6
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   FUN_005bce04
;   GetFileType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c39c0
        ;   Label: FUN_005c39c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c39c1
    PUSH EBX                            ; 005c39c5
    CALL dword ptr [0x0061f2a8]         ; 005c39c6 | PTR_FUN_0061f2a8
    MOV EDX,dword ptr [0x0061f414]      ; 005c39cc | DAT_0061f414
    ADD ESP,0x4                         ; 005c39d2
    TEST EDX,EDX                        ; 005c39d5
    JZ 0x005c39f8                       ; 005c39d7
        ;   XREF to: 005c39f8 (CONDITIONAL_JUMP)  ; LAB_005c39f8
    PUSH EBX                            ; 005c39d9
    CALL dword ptr [0x0061f414]         ; 005c39da | DAT_0061f414
    ADD ESP,0x4                         ; 005c39e0
    TEST EAX,EAX                        ; 005c39e3
    JZ 0x005c39f8                       ; 005c39e5
        ;   XREF to: 005c39f8 (CONDITIONAL_JUMP)  ; LAB_005c39f8
    PUSH EBX                            ; 005c39e7
    CALL dword ptr [0x0061f2ac]         ; 005c39e8 | PTR_FUN_0061f2ac
    MOV EAX,0x1                         ; 005c39ee
    ADD ESP,0x4                         ; 005c39f3
    POP EBX                             ; 005c39f6
    RET                                 ; 005c39f7
    MOV EAX,[0x0061f4d8]                ; 005c39f8 | DAT_0061f4d8
        ;   Label: LAB_005c39f8
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005c39fd
    PUSH EAX                            ; 005c3a00
    CALL dword ptr CS:[0x5c8598]        ; 005c3a01 | PTR_GetFileType_005c8598
    CMP EAX,0x2                         ; 005c3a08
    JNZ 0x005c3a1e                      ; 005c3a0b
        ;   XREF to: 005c3a1e (CONDITIONAL_JUMP)  ; LAB_005c3a1e
    PUSH EBX                            ; 005c3a0d
    CALL dword ptr [0x0061f2ac]         ; 005c3a0e | PTR_FUN_0061f2ac
    MOV EAX,0x1                         ; 005c3a14
    ADD ESP,0x4                         ; 005c3a19
    POP EBX                             ; 005c3a1c
    RET                                 ; 005c3a1d
    PUSH EBX                            ; 005c3a1e
        ;   Label: LAB_005c3a1e
    CALL dword ptr [0x0061f2ac]         ; 005c3a1f | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005c3a25
    XOR EAX,EAX                         ; 005c3a28
    POP EBX                             ; 005c3a2a
    RET                                 ; 005c3a2b

