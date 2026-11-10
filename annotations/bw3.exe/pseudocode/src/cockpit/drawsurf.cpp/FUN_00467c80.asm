; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00467c80(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046a7fa
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c0
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467c80
        ;   Label: cockpit_drawsurf.cpp_FUN_00467c80
    PUSH ESI                            ; 00467c81
    PUSH EDI                            ; 00467c82
    PUSH EBP                            ; 00467c83
    SUB ESP,0x8                         ; 00467c84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00467c87
    MOV ESI,dword ptr [ESP + 0x20]      ; 00467c8b
    MOV EBX,dword ptr [ESP + 0x24]      ; 00467c8f
    AND EAX,0xff                        ; 00467c93
    AND ESI,0xff                        ; 00467c98
    MOV EDI,EAX                         ; 00467c9e
    MOV ECX,ESI                         ; 00467ca0
    SAR EDI,0x3                         ; 00467ca2
    SAR ECX,0x3                         ; 00467ca5
    SHL EDI,0xa                         ; 00467ca8
    SHL ECX,0x5                         ; 00467cab
    AND EBX,0xff                        ; 00467cae
    ADD ECX,EDI                         ; 00467cb4
    MOV EDI,EBX                         ; 00467cb6
    SAR EDI,0x3                         ; 00467cb8
    ADD EDI,ECX                         ; 00467cbb
    XOR ECX,ECX                         ; 00467cbd
    MOV CL,byte ptr [EDI + 0x1c62070]   ; 00467cbf
    XOR EDX,EDX                         ; 00467cc5
    MOV dword ptr [0x01bdd7c0],ECX      ; 00467cc7 | DAT_01bdd7c0
    MOV ECX,dword ptr [0x005fba20]      ; 00467ccd | DAT_005fba20
    MOV dword ptr [0x01bdd7c8],EDX      ; 00467cd3 | DAT_01bdd7c8
    CMP ECX,0x10                        ; 00467cd9
    JNC 0x00467dab                      ; 00467cdc
        ;   XREF to: 00467dab (CONDITIONAL_JUMP)  ; LAB_00467dab
    CMP ECX,0x8                         ; 00467ce2
    JNZ 0x00467db6                      ; 00467ce5
        ;   XREF to: 00467db6 (CONDITIONAL_JUMP)  ; LAB_00467db6
    XOR EAX,EAX                         ; 00467ceb
    MOV AL,byte ptr [EDI + 0x1c62070]   ; 00467ced
    MOV [0x01bdd7bc],EAX                ; 00467cf3 | DAT_01bdd7bc
    ADD ESP,0x8                         ; 00467cf8
    POP EBP                             ; 00467cfb
    POP EDI                             ; 00467cfc
    POP ESI                             ; 00467cfd
    POP EBX                             ; 00467cfe
    RET                                 ; 00467cff
    DIV dword ptr [0x01c6af78]          ; 00467d00 | DAT_01c6af78
        ;   Label: LAB_00467d00
    MOV dword ptr [ESP],ESI             ; 00467d06
    MOV EDI,EAX                         ; 00467d09
    XOR EDX,EDX                         ; 00467d0b
    MOV EAX,ESI                         ; 00467d0d
    DIV dword ptr [0x01c6af84]          ; 00467d0f | DAT_01c6af84
    MOV EBP,dword ptr [0x01c6af90]      ; 00467d15 | DAT_01c6af90
    MOV dword ptr [ESP],EAX             ; 00467d1b
    XOR EDX,EDX                         ; 00467d1e
    MOV EAX,EBX                         ; 00467d20
    DIV EBP                             ; 00467d22
    MOV CL,byte ptr [0x01c6af74]        ; 00467d24 | DAT_01c6af74
    MOV dword ptr [ESP + 0x4],EBX       ; 00467d2a
    SHL EDI,CL                          ; 00467d2e
    MOV CL,byte ptr [0x01c6af80]        ; 00467d30 | DAT_01c6af80
    MOV dword ptr [ESP + 0x4],EAX       ; 00467d36
    MOV EAX,dword ptr [ESP]             ; 00467d3a
    SHL EAX,CL                          ; 00467d3d
    MOV CL,byte ptr [0x01c6af8c]        ; 00467d3f | DAT_01c6af8c
    OR EDI,EAX                          ; 00467d45
    MOV EAX,dword ptr [ESP + 0x4]       ; 00467d47
    SHL EAX,CL                          ; 00467d4b
    OR EAX,EDI                          ; 00467d4d
    AND EAX,0xffff                      ; 00467d4f
    MOV [0x01bdd7bc],EAX                ; 00467d54 | DAT_01bdd7bc
    ADD ESP,0x8                         ; 00467d59
    POP EBP                             ; 00467d5c
    POP EDI                             ; 00467d5d
    POP ESI                             ; 00467d5e
    POP EBX                             ; 00467d5f
    RET                                 ; 00467d60
    CMP ECX,ECX                         ; 00467d61
        ;   Label: LAB_00467d61
    JNZ 0x00467d91                      ; 00467d63
        ;   XREF to: 00467d91 (CONDITIONAL_JUMP)  ; LAB_00467d91
    MOV CL,byte ptr [0x01c6af74]        ; 00467d65 | DAT_01c6af74
    SHL EAX,CL                          ; 00467d6b
    MOV CL,byte ptr [0x01c6af80]        ; 00467d6d | DAT_01c6af80
    SHL ESI,CL                          ; 00467d73
    MOV CL,byte ptr [0x01c6af8c]        ; 00467d75 | DAT_01c6af8c
    SHL EBX,CL                          ; 00467d7b
    OR EAX,ESI                          ; 00467d7d
    MOV ECX,EBX                         ; 00467d7f
    OR ECX,EAX                          ; 00467d81
    MOV dword ptr [0x01bdd7bc],ECX      ; 00467d83 | DAT_01bdd7bc
    ADD ESP,0x8                         ; 00467d89
    POP EBP                             ; 00467d8c
    POP EDI                             ; 00467d8d
    POP ESI                             ; 00467d8e
    POP EBX                             ; 00467d8f
    RET                                 ; 00467d90
    MOV ECX,EAX                         ; 00467d91
        ;   Label: LAB_00467d91
    SHL ESI,0x8                         ; 00467d93
    SHL ECX,0x10                        ; 00467d96
    OR ECX,ESI                          ; 00467d99
    OR ECX,EBX                          ; 00467d9b
    MOV dword ptr [0x01bdd7bc],ECX      ; 00467d9d | DAT_01bdd7bc
    ADD ESP,0x8                         ; 00467da3
    POP EBP                             ; 00467da6
    POP EDI                             ; 00467da7
    POP ESI                             ; 00467da8
    POP EBX                             ; 00467da9
    RET                                 ; 00467daa
    JBE 0x00467d00                      ; 00467dab
        ;   XREF to: 00467d00 (CONDITIONAL_JUMP)  ; LAB_00467d00
        ;   Label: LAB_00467dab
    CMP ECX,0x20                        ; 00467db1
    JZ 0x00467d61                       ; 00467db4
        ;   XREF to: 00467d61 (CONDITIONAL_JUMP)  ; LAB_00467d61
    MOV EAX,0x5bc1cb                    ; 00467db6
        ;   Label: LAB_00467db6
    MOV EDX,0x11e                       ; 00467dbb
    PUSH 0x5bc1e3                       ; 00467dc0
    MOV [0x01d71de0],EAX                ; 00467dc5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00467dca | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00467dd0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00467dd5
    ADD ESP,0x8                         ; 00467dd8
    POP EBP                             ; 00467ddb
    POP EDI                             ; 00467ddc
    POP ESI                             ; 00467ddd
    POP EBX                             ; 00467dde
    RET                                 ; 00467ddf

