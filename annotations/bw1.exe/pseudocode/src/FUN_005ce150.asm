; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ce150(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005cda60 at 005cda7c
;
; Referenced Globals:
;   void* PTR_FUN_00626600 = 005c50d4
;   void* PTR_FUN_00626604 = 005c50d4
;
; Called Functions:
;   FUN_005c2f00
;   FUN_005c50d4
;   FUN_005c64a0
;   FUN_005c6d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce150
        ;   Label: FUN_005ce150
    PUSH ESI                            ; 005ce151
    PUSH EDI                            ; 005ce152
    PUSH EBP                            ; 005ce153
    SUB ESP,0x4                         ; 005ce154
    MOV EBX,dword ptr [ESP + 0x18]      ; 005ce157
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ce15b
    MOV EDX,dword ptr [ESI + 0x10]      ; 005ce15f
    PUSH EDX                            ; 005ce162
    CALL dword ptr [0x00626600]         ; 005ce163 | PTR_FUN_00626600
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ce169
    MOV ECX,dword ptr [EAX + 0x8]       ; 005ce16c
    ADD ESP,0x4                         ; 005ce16f
    TEST ECX,ECX                        ; 005ce172
    JNZ 0x005ce17f                      ; 005ce174
        ;   XREF to: 005ce17f (CONDITIONAL_JUMP)  ; LAB_005ce17f
    PUSH ESI                            ; 005ce176
    CALL FUN_005c64a0                   ; 005ce177
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c64a0()
    ADD ESP,0x4                         ; 005ce17c
    MOV AH,byte ptr [ESI + 0xd]         ; 005ce17f
        ;   Label: LAB_005ce17f
    XOR EBP,EBP                         ; 005ce182
    TEST AH,0x4                         ; 005ce184
    JZ 0x005ce19e                       ; 005ce187
        ;   XREF to: 005ce19e (CONDITIONAL_JUMP)  ; LAB_005ce19e
    MOV DL,AH                           ; 005ce189
    AND DL,0xf9                         ; 005ce18b
    MOV byte ptr [ESI + 0xd],DL         ; 005ce18e
    MOV DH,DL                           ; 005ce191
    OR DH,0x2                           ; 005ce193
    MOV EBP,0x1                         ; 005ce196
    MOV byte ptr [ESI + 0xd],DH         ; 005ce19b
    MOV dword ptr [ESP],EBX             ; 005ce19e
        ;   Label: LAB_005ce19e
    XOR EDI,EDI                         ; 005ce1a1
    XOR EAX,EAX                         ; 005ce1a3
        ;   Label: LAB_005ce1a3
    MOV AL,byte ptr [EBX]               ; 005ce1a5
    TEST EAX,EAX                        ; 005ce1a7
    JZ 0x005ce1bd                       ; 005ce1a9
        ;   XREF to: 005ce1bd (CONDITIONAL_JUMP)  ; LAB_005ce1bd
    PUSH ESI                            ; 005ce1ab
    PUSH EAX                            ; 005ce1ac
    INC EBX                             ; 005ce1ad
    CALL FUN_005c2f00                   ; 005ce1ae
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2f00()
    ADD ESP,0x8                         ; 005ce1b3
    CMP EAX,-0x1                        ; 005ce1b6
    JNZ 0x005ce1a3                      ; 005ce1b9
        ;   XREF to: 005ce1a3 (CONDITIONAL_JUMP)  ; LAB_005ce1a3
    MOV EDI,EAX                         ; 005ce1bb
    TEST EBP,EBP                        ; 005ce1bd
        ;   Label: LAB_005ce1bd
    JZ 0x005ce1e1                       ; 005ce1bf
        ;   XREF to: 005ce1e1 (CONDITIONAL_JUMP)  ; LAB_005ce1e1
    MOV CL,byte ptr [ESI + 0xd]         ; 005ce1c1
    AND CL,0xf9                         ; 005ce1c4
    MOV byte ptr [ESI + 0xd],CL         ; 005ce1c7
    MOV CH,CL                           ; 005ce1ca
    OR CH,0x4                           ; 005ce1cc
    MOV byte ptr [ESI + 0xd],CH         ; 005ce1cf
    TEST EDI,EDI                        ; 005ce1d2
    JNZ 0x005ce1e1                      ; 005ce1d4
        ;   XREF to: 005ce1e1 (CONDITIONAL_JUMP)  ; LAB_005ce1e1
    PUSH ESI                            ; 005ce1d6
    CALL FUN_005c6d50                   ; 005ce1d7
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6d50()
    ADD ESP,0x4                         ; 005ce1dc
    MOV EDI,EAX                         ; 005ce1df
    TEST EDI,EDI                        ; 005ce1e1
        ;   Label: LAB_005ce1e1
    JNZ 0x005ce1ec                      ; 005ce1e3
        ;   XREF to: 005ce1ec (CONDITIONAL_JUMP)  ; LAB_005ce1ec
    MOV EDI,dword ptr [ESP]             ; 005ce1e5
    SUB EBX,EDI                         ; 005ce1e8
    MOV EDI,EBX                         ; 005ce1ea
    MOV EBP,dword ptr [ESI + 0x10]      ; 005ce1ec
        ;   Label: LAB_005ce1ec
    PUSH EBP                            ; 005ce1ef
    CALL dword ptr [0x00626604]         ; 005ce1f0 | PTR_FUN_00626604
    ADD ESP,0x4                         ; 005ce1f6
    MOV EAX,EDI                         ; 005ce1f9
    ADD ESP,0x4                         ; 005ce1fb
    POP EBP                             ; 005ce1fe
    POP EDI                             ; 005ce1ff
    POP ESI                             ; 005ce200
    POP EBX                             ; 005ce201
    RET                                 ; 005ce202

