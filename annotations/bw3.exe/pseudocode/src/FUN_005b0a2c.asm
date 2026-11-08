; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_005b0a2c(int *param_1)
;
;
; XREF[1]:
;   FUN_005af142 at 005af1c5
;
; Called Functions:
;   FUN_005abc85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0a2c
        ;   Label: FUN_005b0a2c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b0a2d
    MOV EAX,dword ptr [EBX]             ; 005b0a31
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b0a33
    CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 005b0a36
    JZ 0x005b0a41                       ; 005b0a3b
        ;   XREF to: 005b0a41 (CONDITIONAL_JUMP)  ; LAB_005b0a41
    MOV EAX,EBX                         ; 005b0a3d
        ;   Label: LAB_005b0a3d
    POP EBX                             ; 005b0a3f
    RET                                 ; 005b0a40
    MOV EAX,dword ptr [EBX]             ; 005b0a41
        ;   Label: LAB_005b0a41
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b0a43
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005b0a46
    PUSH EAX                            ; 005b0a4a
    MOV EDX,dword ptr [EAX + 0x28]      ; 005b0a4b
    CALL dword ptr [EDX + 0x20]         ; 005b0a4e
    ADD ESP,0x4                         ; 005b0a51
    CMP EAX,-0x1                        ; 005b0a54
    JNZ 0x005b0a3d                      ; 005b0a57
        ;   XREF to: 005b0a3d (CONDITIONAL_JUMP)  ; LAB_005b0a3d
    MOV EAX,dword ptr [EBX]             ; 005b0a59
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b0a5b
    PUSH 0x2                            ; 005b0a5e
    ADD EAX,EBX                         ; 005b0a60
    PUSH EAX                            ; 005b0a62
    CALL FUN_005abc85                   ; 005b0a63
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined FUN_005abc85()
    ADD ESP,0x8                         ; 005b0a68
    MOV EAX,EBX                         ; 005b0a6b
    POP EBX                             ; 005b0a6d
    RET                                 ; 005b0a6e

