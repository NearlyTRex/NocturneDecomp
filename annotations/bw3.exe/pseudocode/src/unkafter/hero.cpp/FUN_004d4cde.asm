; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_hero_cpp_FUN_004d4cde(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00604e60
;   undefined4 DAT_00604e68
;   undefined4 DAT_00604e70
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af88
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004d4cde
        ;   Label: unkafter_hero.cpp_FUN_004d4cde
    PUSH EBX                            ; 004d4ce0
    PUSH ESI                            ; 004d4ce1
    PUSH EDI                            ; 004d4ce2
    PUSH EBP                            ; 004d4ce3
    SUB ESP,0x8                         ; 004d4ce4
    XOR EBX,EBX                         ; 004d4ce7
    XOR ESI,ESI                         ; 004d4ce9
    XOR EAX,EAX                         ; 004d4ceb
        ;   Label: LAB_004d4ceb
    MOV EDI,dword ptr [0x01c6af78]      ; 004d4ced | DAT_01c6af78
    MOV AL,byte ptr [EBX + 0x1c6af98]   ; 004d4cf3
    XOR EDX,EDX                         ; 004d4cf9
    MOV dword ptr [ESP],EAX             ; 004d4cfb
    DIV EDI                             ; 004d4cfe
    XOR ECX,ECX                         ; 004d4d00
    MOV CL,byte ptr [EBX + 0x1c6af99]   ; 004d4d02
    MOV dword ptr [ESP],EAX             ; 004d4d08
    XOR EDX,EDX                         ; 004d4d0b
    MOV EAX,ECX                         ; 004d4d0d
    DIV dword ptr [0x01c6af84]          ; 004d4d0f | DAT_01c6af84
    MOVZX EBP,byte ptr [EBX + 0x1c6af9a] ; 004d4d15
    MOV dword ptr [ESP + 0x4],EBP       ; 004d4d1c
    MOV EDI,EAX                         ; 004d4d20
    XOR EDX,EDX                         ; 004d4d22
    MOV EAX,EBP                         ; 004d4d24
    DIV dword ptr [0x01c6af90]          ; 004d4d26 | DAT_01c6af90
    MOV CL,byte ptr [0x01c6af74]        ; 004d4d2c | DAT_01c6af74
    MOV dword ptr [ESP + 0x4],EAX       ; 004d4d32
    MOV EAX,dword ptr [ESP]             ; 004d4d36
    SHL EAX,CL                          ; 004d4d39
    MOV CL,byte ptr [0x01c6af80]        ; 004d4d3b | DAT_01c6af80
    SHL EDI,CL                          ; 004d4d41
    MOV CL,byte ptr [0x01c6af8c]        ; 004d4d43 | DAT_01c6af8c
    OR EDI,EAX                          ; 004d4d49
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d4d4b
    SHL EAX,CL                          ; 004d4d4f
    ADD ESI,0x2                         ; 004d4d51
    OR EAX,EDI                          ; 004d4d54
    ADD EBX,0x3                         ; 004d4d56
    MOV word ptr [ESI + 0x1c6a06e],AX   ; 004d4d59
    CMP ESI,0x200                       ; 004d4d60
    JNZ 0x004d4ceb                      ; 004d4d66
        ;   XREF to: 004d4ceb (CONDITIONAL_JUMP)  ; LAB_004d4ceb
    MOV ESI,0xff                        ; 004d4d68
    MOV CL,byte ptr [0x01c6af7c]        ; 004d4d6d | DAT_01c6af7c
    SHR ESI,CL                          ; 004d4d73
    MOV ECX,dword ptr [0x01c6af74]      ; 004d4d75 | DAT_01c6af74
    MOV EAX,ESI                         ; 004d4d7b
    MOV EBX,0xff                        ; 004d4d7d
    SHL EAX,CL                          ; 004d4d82
    MOV CL,byte ptr [0x01c6af88]        ; 004d4d84 | DAT_01c6af88
    MOV [0x00604e60],EAX                ; 004d4d8a | DAT_00604e60
    SHR EBX,CL                          ; 004d4d8f
    MOV ECX,dword ptr [0x01c6af80]      ; 004d4d91 | DAT_01c6af80
    MOV EAX,EBX                         ; 004d4d97
    SHL EAX,CL                          ; 004d4d99
    MOV CL,byte ptr [0x01c6af94]        ; 004d4d9b | DAT_01c6af94
    MOV [0x00604e68],EAX                ; 004d4da1 | DAT_00604e68
    MOV EAX,0xff                        ; 004d4da6
    SHR EAX,CL                          ; 004d4dab
    MOV ECX,dword ptr [0x01c6af8c]      ; 004d4dad | DAT_01c6af8c
    MOV EDI,EAX                         ; 004d4db3
    SHL EDI,CL                          ; 004d4db5
    MOV CL,byte ptr [0x01c6af7c]        ; 004d4db7 | DAT_01c6af7c
    SHL ESI,CL                          ; 004d4dbd
    MOV CL,byte ptr [0x01c6af88]        ; 004d4dbf | DAT_01c6af88
    MOV EDX,dword ptr [0x01c6af88]      ; 004d4dc5 | DAT_01c6af88
    SHL EBX,CL                          ; 004d4dcb
    MOV ECX,dword ptr [0x01c6af94]      ; 004d4dcd | DAT_01c6af94
    MOV dword ptr [0x00604e70],EDI      ; 004d4dd3 | DAT_00604e70
    SHL EAX,CL                          ; 004d4dd9
    SHL ESI,0x10                        ; 004d4ddb
    MOV [0x00604eb8],EAX                ; 004d4dde | DAT_00604eb8
    MOV EAX,[0x01c6af7c]                ; 004d4de3 | DAT_01c6af7c
    MOV dword ptr [0x00604e78],ESI      ; 004d4de8 | DAT_00604e78
    ADD EAX,EDX                         ; 004d4dee
    SHL EBX,0x8                         ; 004d4df0
    ADD EAX,ECX                         ; 004d4df3
    MOV dword ptr [0x00604e98],EBX      ; 004d4df5 | DAT_00604e98
    MOV [0x00604ec0],EAX                ; 004d4dfb | DAT_00604ec0
    LEA EAX,[EDX + ECX*0x1]             ; 004d4e00
    MOV dword ptr [0x00604f00],ECX      ; 004d4e03 | DAT_00604f00
    MOV [0x00604ee0],EAX                ; 004d4e09 | DAT_00604ee0
    ADD ESP,0x8                         ; 004d4e0e
    POP EBP                             ; 004d4e11
    POP EDI                             ; 004d4e12
    POP ESI                             ; 004d4e13
    POP EBX                             ; 004d4e14
    LEA EAX,[EAX]                       ; 004d4e15
    LEA EDX,[EDX]                       ; 004d4e1b
    MOV EBX,EBX                         ; 004d4e1e
    RET                                 ; 004d4e20

