; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b0d00(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   FUN_005af6a0 at 005af70e
;   FUN_005b08a0 at 005b08d9
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0d00
        ;   Label: FUN_005b0d00
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b0d01
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b0d05
    MOV BL,byte ptr [EAX]               ; 005b0d09
    CMP BL,byte ptr [EDX]               ; 005b0d0b
    JNZ 0x005b0d4e                      ; 005b0d0d
        ;   XREF to: 005b0d4e (CONDITIONAL_JUMP)  ; LAB_005b0d4e
    CMP dword ptr [0x02d25930],0x0      ; 005b0d0f | DAT_02d25930
    JZ 0x005b0d37                       ; 005b0d16
        ;   XREF to: 005b0d37 (CONDITIONAL_JUMP)  ; LAB_005b0d37
    XOR EBX,EBX                         ; 005b0d18
    MOV BL,byte ptr [EAX]               ; 005b0d1a
    MOV BL,byte ptr [EBX + 0x2d25941]   ; 005b0d1c
    AND BL,0x1                          ; 005b0d22
    AND EBX,0xff                        ; 005b0d25
    JZ 0x005b0d37                       ; 005b0d2b
        ;   XREF to: 005b0d37 (CONDITIONAL_JUMP)  ; LAB_005b0d37
    MOV BL,byte ptr [EAX + 0x1]         ; 005b0d2d
    MOV CL,byte ptr [EDX + 0x1]         ; 005b0d30
    CMP BL,CL                           ; 005b0d33
    JNZ 0x005b0d3b                      ; 005b0d35
        ;   XREF to: 005b0d3b (CONDITIONAL_JUMP)  ; LAB_005b0d3b
    XOR EAX,EAX                         ; 005b0d37
        ;   Label: LAB_005b0d37
    POP EBX                             ; 005b0d39
    RET                                 ; 005b0d3a
    MOV AL,BL                           ; 005b0d3b
        ;   Label: LAB_005b0d3b
    AND EAX,0xff                        ; 005b0d3d
    MOV DL,CL                           ; 005b0d42
    AND EDX,0xff                        ; 005b0d44
    SUB EAX,EDX                         ; 005b0d4a
    POP EBX                             ; 005b0d4c
    RET                                 ; 005b0d4d
    XOR EBX,EBX                         ; 005b0d4e
        ;   Label: LAB_005b0d4e
    MOV BL,byte ptr [EAX]               ; 005b0d50
    XOR EAX,EAX                         ; 005b0d52
    MOV AL,byte ptr [EDX]               ; 005b0d54
    SUB EBX,EAX                         ; 005b0d56
    MOV EAX,EBX                         ; 005b0d58
    POP EBX                             ; 005b0d5a
    RET                                 ; 005b0d5b

