; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_hero_cpp_FUN_004d0b40(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c8d0
;   undefined4 DAT_0061c8d8
;   undefined4 DAT_0061c8e0
;   undefined4 DAT_0061c8e8
;   undefined4 DAT_0061c908
;   undefined4 DAT_0061c928
;   undefined4 DAT_0061c930
;   undefined4 DAT_0061c950
;   undefined4 DAT_0061c970
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c35828
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0b40
        ;   Label: core_hero.cpp_FUN_004d0b40
    PUSH ESI                            ; 004d0b41
    PUSH EDI                            ; 004d0b42
    PUSH EBP                            ; 004d0b43
    SUB ESP,0x8                         ; 004d0b44
    XOR EBX,EBX                         ; 004d0b47
    XOR ESI,ESI                         ; 004d0b49
    XOR EAX,EAX                         ; 004d0b4b
        ;   Label: LAB_004d0b4b
    MOV EDI,dword ptr [0x01c35818]      ; 004d0b4d | DAT_01c35818
    MOV AL,byte ptr [EBX + 0x1c35838]   ; 004d0b53
    XOR EDX,EDX                         ; 004d0b59
    MOV dword ptr [ESP],EAX             ; 004d0b5b
    DIV EDI                             ; 004d0b5e
    XOR ECX,ECX                         ; 004d0b60
    MOV CL,byte ptr [EBX + 0x1c35839]   ; 004d0b62
    MOV dword ptr [ESP],EAX             ; 004d0b68
    XOR EDX,EDX                         ; 004d0b6b
    MOV EAX,ECX                         ; 004d0b6d
    DIV dword ptr [0x01c35824]          ; 004d0b6f | DAT_01c35824
    MOVZX EBP,byte ptr [EBX + 0x1c3583a] ; 004d0b75
    MOV dword ptr [ESP + 0x4],EBP       ; 004d0b7c
    MOV EDI,EAX                         ; 004d0b80
    XOR EDX,EDX                         ; 004d0b82
    MOV EAX,EBP                         ; 004d0b84
    DIV dword ptr [0x01c35830]          ; 004d0b86 | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 004d0b8c | DAT_01c35814
    MOV dword ptr [ESP + 0x4],EAX       ; 004d0b92
    MOV EAX,dword ptr [ESP]             ; 004d0b96
    SHL EAX,CL                          ; 004d0b99
    MOV CL,byte ptr [0x01c35820]        ; 004d0b9b | DAT_01c35820
    SHL EDI,CL                          ; 004d0ba1
    MOV CL,byte ptr [0x01c3582c]        ; 004d0ba3 | DAT_01c3582c
    OR EDI,EAX                          ; 004d0ba9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0bab
    SHL EAX,CL                          ; 004d0baf
    ADD ESI,0x2                         ; 004d0bb1
    OR EAX,EDI                          ; 004d0bb4
    ADD EBX,0x3                         ; 004d0bb6
    MOV word ptr [ESI + 0x1c3490e],AX   ; 004d0bb9
    CMP ESI,0x200                       ; 004d0bc0
    JNZ 0x004d0b4b                      ; 004d0bc6
        ;   XREF to: 004d0b4b (CONDITIONAL_JUMP)  ; LAB_004d0b4b
    MOV ESI,0xff                        ; 004d0bc8
    MOV CL,byte ptr [0x01c3581c]        ; 004d0bcd | DAT_01c3581c
    SHR ESI,CL                          ; 004d0bd3
    MOV ECX,dword ptr [0x01c35814]      ; 004d0bd5 | DAT_01c35814
    MOV EAX,ESI                         ; 004d0bdb
    MOV EBX,0xff                        ; 004d0bdd
    SHL EAX,CL                          ; 004d0be2
    MOV CL,byte ptr [0x01c35828]        ; 004d0be4 | DAT_01c35828
    MOV [0x0061c8d0],EAX                ; 004d0bea | DAT_0061c8d0
    SHR EBX,CL                          ; 004d0bef
    MOV ECX,dword ptr [0x01c35820]      ; 004d0bf1 | DAT_01c35820
    MOV EAX,EBX                         ; 004d0bf7
    SHL EAX,CL                          ; 004d0bf9
    MOV CL,byte ptr [0x01c35834]        ; 004d0bfb | DAT_01c35834
    MOV [0x0061c8d8],EAX                ; 004d0c01 | DAT_0061c8d8
    MOV EAX,0xff                        ; 004d0c06
    SHR EAX,CL                          ; 004d0c0b
    MOV ECX,dword ptr [0x01c3582c]      ; 004d0c0d | DAT_01c3582c
    MOV EDI,EAX                         ; 004d0c13
    SHL EDI,CL                          ; 004d0c15
    MOV CL,byte ptr [0x01c3581c]        ; 004d0c17 | DAT_01c3581c
    SHL ESI,CL                          ; 004d0c1d
    MOV CL,byte ptr [0x01c35828]        ; 004d0c1f | DAT_01c35828
    MOV EDX,dword ptr [0x01c35828]      ; 004d0c25 | DAT_01c35828
    SHL EBX,CL                          ; 004d0c2b
    MOV ECX,dword ptr [0x01c35834]      ; 004d0c2d | DAT_01c35834
    MOV dword ptr [0x0061c8e0],EDI      ; 004d0c33 | DAT_0061c8e0
    SHL EAX,CL                          ; 004d0c39
    SHL ESI,0x10                        ; 004d0c3b
    MOV [0x0061c928],EAX                ; 004d0c3e | DAT_0061c928
    MOV EAX,[0x01c3581c]                ; 004d0c43 | DAT_01c3581c
    MOV dword ptr [0x0061c8e8],ESI      ; 004d0c48 | DAT_0061c8e8
    ADD EAX,EDX                         ; 004d0c4e
    SHL EBX,0x8                         ; 004d0c50
    ADD EAX,ECX                         ; 004d0c53
    MOV dword ptr [0x0061c908],EBX      ; 004d0c55 | DAT_0061c908
    MOV [0x0061c930],EAX                ; 004d0c5b | DAT_0061c930
    LEA EAX,[EDX + ECX*0x1]             ; 004d0c60
    MOV dword ptr [0x0061c970],ECX      ; 004d0c63 | DAT_0061c970
    MOV [0x0061c950],EAX                ; 004d0c69 | DAT_0061c950
    ADD ESP,0x8                         ; 004d0c6e
    POP EBP                             ; 004d0c71
    POP EDI                             ; 004d0c72
    POP ESI                             ; 004d0c73
    POP EBX                             ; 004d0c74
    LEA EAX,[EAX]                       ; 004d0c75
    LEA EDX,[EDX]                       ; 004d0c7b
    MOV EBX,EBX                         ; 004d0c7e
    RET                                 ; 004d0c80

