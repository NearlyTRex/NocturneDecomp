; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c1d0c(int param_1)
;
;
; XREF[1]:
;   FUN_005c1cf0 at 005c1cf2
;
; Referenced Globals:
;   undefined4 DAT_02680160
;
; Called Functions:
;   FUN_005b8a04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1d0c
        ;   Label: FUN_005c1d0c
    PUSH ESI                            ; 005c1d0d
    PUSH EDI                            ; 005c1d0e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c1d0f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c1d13
    SUB EAX,EDX                         ; 005c1d1a
    SHL EAX,0x2                         ; 005c1d1c
    ADD EAX,EDX                         ; 005c1d1f
    MOV EDI,0x61ef54                    ; 005c1d21
    ADD EAX,EAX                         ; 005c1d26
    ADD EDI,EAX                         ; 005c1d28
    MOV EAX,[0x02680160]                ; 005c1d2a | DAT_02680160
    XOR EBX,EBX                         ; 005c1d2f
    TEST EAX,EAX                        ; 005c1d31
    JZ 0x005c1d6a                       ; 005c1d33
        ;   XREF to: 005c1d6a (CONDITIONAL_JUMP)  ; LAB_005c1d6a
    MOV ESI,dword ptr [EAX]             ; 005c1d35
        ;   Label: LAB_005c1d35
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c1d37
    MOV CL,byte ptr [EAX + 0xd]         ; 005c1d3a
    MOV EDX,0x1                         ; 005c1d3d
    TEST CL,0x40                        ; 005c1d42
    JNZ 0x005c1d59                      ; 005c1d45
        ;   XREF to: 005c1d59 (CONDITIONAL_JUMP)  ; LAB_005c1d59
    TEST CL,0x8                         ; 005c1d47
    JNZ 0x005c1d59                      ; 005c1d4a
        ;   XREF to: 005c1d59 (CONDITIONAL_JUMP)  ; LAB_005c1d59
    CMP EAX,EDI                         ; 005c1d4c
    JC 0x005c1d64                       ; 005c1d4e
        ;   XREF to: 005c1d64 (CONDITIONAL_JUMP)  ; LAB_005c1d64
    CMP EAX,0x61efa2                    ; 005c1d50
    JNC 0x005c1d59                      ; 005c1d55
        ;   XREF to: 005c1d59 (CONDITIONAL_JUMP)  ; LAB_005c1d59
    XOR EDX,EDX                         ; 005c1d57
    PUSH EDX                            ; 005c1d59
        ;   Label: LAB_005c1d59
    PUSH EAX                            ; 005c1d5a
    INC EBX                             ; 005c1d5b
    CALL FUN_005b8a04                   ; 005c1d5c
        ;   XREF to: 005b8a04 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8a04()
    ADD ESP,0x8                         ; 005c1d61
    MOV EAX,ESI                         ; 005c1d64
        ;   Label: LAB_005c1d64
    TEST ESI,ESI                        ; 005c1d66
    JNZ 0x005c1d35                      ; 005c1d68
        ;   XREF to: 005c1d35 (CONDITIONAL_JUMP)  ; LAB_005c1d35
    MOV EAX,EBX                         ; 005c1d6a
        ;   Label: LAB_005c1d6a
    POP EDI                             ; 005c1d6c
    POP ESI                             ; 005c1d6d
    POP EBX                             ; 005c1d6e
    RET                                 ; 005c1d6f

