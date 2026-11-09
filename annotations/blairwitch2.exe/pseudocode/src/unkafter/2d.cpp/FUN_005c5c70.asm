; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c5c70(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005c5810 at 005c5849
;   unkafter_morph.cpp_FUN_005c46f0 at 005c475e
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5c70
        ;   Label: unkafter_2d.cpp_FUN_005c5c70
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c5c71
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c5c75
    MOV BL,byte ptr [EAX]               ; 005c5c79
    CMP BL,byte ptr [EDX]               ; 005c5c7b
    JNZ 0x005c5cbe                      ; 005c5c7d
        ;   XREF to: 005c5cbe (CONDITIONAL_JUMP)  ; LAB_005c5cbe
    CMP dword ptr [0x026807f0],0x0      ; 005c5c7f | DAT_026807f0
    JZ 0x005c5ca7                       ; 005c5c86
        ;   XREF to: 005c5ca7 (CONDITIONAL_JUMP)  ; LAB_005c5ca7
    XOR EBX,EBX                         ; 005c5c88
    MOV BL,byte ptr [EAX]               ; 005c5c8a
    MOV BL,byte ptr [EBX + 0x2680801]   ; 005c5c8c
    AND BL,0x1                          ; 005c5c92
    AND EBX,0xff                        ; 005c5c95
    JZ 0x005c5ca7                       ; 005c5c9b
        ;   XREF to: 005c5ca7 (CONDITIONAL_JUMP)  ; LAB_005c5ca7
    MOV BL,byte ptr [EAX + 0x1]         ; 005c5c9d
    MOV CL,byte ptr [EDX + 0x1]         ; 005c5ca0
    CMP BL,CL                           ; 005c5ca3
    JNZ 0x005c5cab                      ; 005c5ca5
        ;   XREF to: 005c5cab (CONDITIONAL_JUMP)  ; LAB_005c5cab
    XOR EAX,EAX                         ; 005c5ca7
        ;   Label: LAB_005c5ca7
    POP EBX                             ; 005c5ca9
    RET                                 ; 005c5caa
    MOV AL,BL                           ; 005c5cab
        ;   Label: LAB_005c5cab
    AND EAX,0xff                        ; 005c5cad
    MOV DL,CL                           ; 005c5cb2
    AND EDX,0xff                        ; 005c5cb4
    SUB EAX,EDX                         ; 005c5cba
    POP EBX                             ; 005c5cbc
    RET                                 ; 005c5cbd
    XOR EBX,EBX                         ; 005c5cbe
        ;   Label: LAB_005c5cbe
    MOV BL,byte ptr [EAX]               ; 005c5cc0
    XOR EAX,EAX                         ; 005c5cc2
    MOV AL,byte ptr [EDX]               ; 005c5cc4
    SUB EBX,EAX                         ; 005c5cc6
    MOV EAX,EBX                         ; 005c5cc8
    POP EBX                             ; 005c5cca
    RET                                 ; 005c5ccb

