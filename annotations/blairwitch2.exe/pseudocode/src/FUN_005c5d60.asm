; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c5d60(uint param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_005c4ff8 at 005c504d
;
; Referenced Globals:
;   undefined4 DAT_0061ee9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5d60
        ;   Label: FUN_005c5d60
    PUSH EDI                            ; 005c5d61
    SUB ESP,0x4                         ; 005c5d62
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c5d65
    XOR EDX,EDX                         ; 005c5d69
    MOV AH,byte ptr [0x0061ee9c]        ; 005c5d6b | DAT_0061ee9c
    MOV dword ptr [ESP],EDX             ; 005c5d71
    TEST AH,AH                          ; 005c5d74
    JZ 0x005c5da2                       ; 005c5d76
        ;   XREF to: 005c5da2 (CONDITIONAL_JUMP)  ; LAB_005c5da2
    MOV EDI,ESP                         ; 005c5d78
    FNSTCW word ptr SS:[EDI]            ; 005c5d7a
    WAIT                                ; 005c5d7d
    TEST EBX,EBX                        ; 005c5d7e
    JZ 0x005c5da2                       ; 005c5d80
        ;   XREF to: 005c5da2 (CONDITIONAL_JUMP)  ; LAB_005c5da2
    MOV ECX,dword ptr [ESP]             ; 005c5d82
    MOV EAX,EBX                         ; 005c5d85
    MOV EDI,dword ptr [ESP + 0x10]      ; 005c5d87
    NOT EAX                             ; 005c5d8b
    AND EDI,EBX                         ; 005c5d8d
    AND EAX,ECX                         ; 005c5d8f
    OR EAX,EDI                          ; 005c5d91
    MOV EDI,ESP                         ; 005c5d93
    MOV dword ptr [ESP],EAX             ; 005c5d95
    FLDCW word ptr SS:[EDI]             ; 005c5d98
    WAIT                                ; 005c5d9b
    MOV EDI,ESP                         ; 005c5d9c
    FNSTCW word ptr SS:[EDI]            ; 005c5d9e
    WAIT                                ; 005c5da1
    XOR EAX,EAX                         ; 005c5da2
        ;   Label: LAB_005c5da2
    MOV AX,word ptr [ESP]               ; 005c5da4
    ADD ESP,0x4                         ; 005c5da8
    POP EDI                             ; 005c5dab
    POP EBX                             ; 005c5dac
    RET                                 ; 005c5dad

