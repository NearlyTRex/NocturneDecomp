; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0043520e(byte *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6a970
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   undefined4 DAT_01c6af8c
;   undefined4 DAT_01c6af90
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0043520e
        ;   Label: cockpit_ckptutil.c_FUN_0043520e
    PUSH EBX                            ; 00435210
    PUSH ESI                            ; 00435211
    PUSH EDI                            ; 00435212
    PUSH EBP                            ; 00435213
    SUB ESP,0x8                         ; 00435214
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00435217
    MOV EDX,dword ptr [0x005fba20]      ; 0043521b | DAT_005fba20
    MOV dword ptr [0x01c6a970],EBX      ; 00435221 | DAT_01c6a970
    CMP EDX,0x20                        ; 00435227
    JNZ 0x0043528b                      ; 0043522a
        ;   XREF to: 0043528b (CONDITIONAL_JUMP)  ; LAB_0043528b
    MOV EDX,dword ptr [0x005fba20]      ; 0043522c | DAT_005fba20
    XOR EAX,EAX                         ; 00435232
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 00435234
        ;   Label: LAB_00435234
    MOVZX EDI,byte ptr [EBX]            ; 00435238
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 0043523b
    CMP EDX,0x20                        ; 0043523f
    JNZ 0x0043527d                      ; 00435242
        ;   XREF to: 0043527d (CONDITIONAL_JUMP)  ; LAB_0043527d
    MOV CL,byte ptr [0x01c6af74]        ; 00435244 | DAT_01c6af74
    SHL EDI,CL                          ; 0043524a
    MOV CL,byte ptr [0x01c6af80]        ; 0043524c | DAT_01c6af80
    SHL EBP,CL                          ; 00435252
    MOV CL,byte ptr [0x01c6af8c]        ; 00435254 | DAT_01c6af8c
    SHL ESI,CL                          ; 0043525a
    OR EDI,EBP                          ; 0043525c
    MOV ECX,ESI                         ; 0043525e
    OR ECX,EDI                          ; 00435260
    ADD EAX,0x4                         ; 00435262
        ;   Label: LAB_00435262
    ADD EBX,0x3                         ; 00435265
    MOV dword ptr [EAX + 0x1c6a970],ECX ; 00435268
    CMP EAX,0x400                       ; 0043526e
    JNZ 0x00435234                      ; 00435273
        ;   XREF to: 00435234 (CONDITIONAL_JUMP)  ; LAB_00435234
    ADD ESP,0x8                         ; 00435275
    POP EBP                             ; 00435278
    POP EDI                             ; 00435279
    POP ESI                             ; 0043527a
    POP EBX                             ; 0043527b
    RET                                 ; 0043527c
    MOV ECX,EBP                         ; 0043527d
        ;   Label: LAB_0043527d
    SHL EDI,0x10                        ; 0043527f
    SHL ECX,0x8                         ; 00435282
    OR ECX,EDI                          ; 00435285
    OR ECX,ESI                          ; 00435287
    JMP 0x00435262                      ; 00435289
        ;   XREF to: 00435262 (UNCONDITIONAL_JUMP)  ; LAB_00435262
    XOR ESI,ESI                         ; 0043528b
        ;   Label: LAB_0043528b
    XOR EAX,EAX                         ; 0043528d
        ;   Label: LAB_0043528d
    MOV EDI,dword ptr [0x01c6af78]      ; 0043528f | DAT_01c6af78
    MOV AL,byte ptr [EBX]               ; 00435295
    XOR EDX,EDX                         ; 00435297
    MOV dword ptr [ESP],EAX             ; 00435299
    DIV EDI                             ; 0043529c
    XOR ECX,ECX                         ; 0043529e
    MOV CL,byte ptr [EBX + 0x1]         ; 004352a0
    MOV dword ptr [ESP + 0x4],ECX       ; 004352a3
    MOV dword ptr [ESP],EAX             ; 004352a7
    XOR EDX,EDX                         ; 004352aa
    MOV EAX,ECX                         ; 004352ac
    DIV dword ptr [0x01c6af84]          ; 004352ae | DAT_01c6af84
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 004352b4
    MOV EDI,dword ptr [0x01c6af90]      ; 004352b8 | DAT_01c6af90
    MOV dword ptr [ESP + 0x4],EAX       ; 004352be
    XOR EDX,EDX                         ; 004352c2
    MOV EAX,EBP                         ; 004352c4
    DIV EDI                             ; 004352c6
    MOV CL,byte ptr [0x01c6af74]        ; 004352c8 | DAT_01c6af74
    MOV EDX,dword ptr [ESP]             ; 004352ce
    MOV EDI,EAX                         ; 004352d1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004352d3
    SHL EDX,CL                          ; 004352d7
    MOV CL,byte ptr [0x01c6af80]        ; 004352d9 | DAT_01c6af80
    SHL EAX,CL                          ; 004352df
    MOV CL,byte ptr [0x01c6af8c]        ; 004352e1 | DAT_01c6af8c
    OR EAX,EDX                          ; 004352e7
    SHL EDI,CL                          ; 004352e9
    ADD ESI,0x2                         ; 004352eb
    OR EAX,EDI                          ; 004352ee
    ADD EBX,0x3                         ; 004352f0
    MOV word ptr [ESI + 0x1c6ad72],AX   ; 004352f3
    CMP ESI,0x200                       ; 004352fa
    JNZ 0x0043528d                      ; 00435300
        ;   XREF to: 0043528d (CONDITIONAL_JUMP)  ; LAB_0043528d
    ADD ESP,0x8                         ; 00435302
    POP EBP                             ; 00435305
    POP EDI                             ; 00435306
    POP ESI                             ; 00435307
    POP EBX                             ; 00435308
    RET                                 ; 00435309

