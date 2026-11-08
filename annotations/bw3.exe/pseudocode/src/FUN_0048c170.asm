; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048c170(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x208]:1  local_208
;
; XREF[2]:
;   FUN_0048c150 at 0048c163
;   FUN_00491b40 at 00491b61
;
; Referenced Globals:
;   undefined4 DAT_005bdf82
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_006074b8
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01c734ac
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   FUN_00441ff0
;   FUN_0048c2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c170
        ;   Label: FUN_0048c170
    PUSH ESI                            ; 0048c171
    SUB ESP,0x200                       ; 0048c172
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0048c178
    MOV EBX,dword ptr [ESP + 0x210]     ; 0048c17f
    MOV EDX,EBX                         ; 0048c186
        ;   Label: LAB_0048c186
    MOV AL,byte ptr [EDX]               ; 0048c188
        ;   Label: LAB_0048c188
    INC AL                              ; 0048c18a
    AND EAX,0xff                        ; 0048c18c
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 0048c191 | DAT_006074b8
    JZ 0x0048c19d                       ; 0048c198
        ;   XREF to: 0048c19d (CONDITIONAL_JUMP)  ; LAB_0048c19d
    INC EDX                             ; 0048c19a
    JMP 0x0048c188                      ; 0048c19b
        ;   XREF to: 0048c188 (UNCONDITIONAL_JUMP)  ; LAB_0048c188
    MOV CL,byte ptr [EDX]               ; 0048c19d
        ;   Label: LAB_0048c19d
    MOV EBX,EDX                         ; 0048c19f
    TEST CL,CL                          ; 0048c1a1
    JZ 0x0048c229                       ; 0048c1a3
        ;   XREF to: 0048c229 (CONDITIONAL_JUMP)  ; LAB_0048c229
    MOV EAX,ESP                         ; 0048c1a9
    CMP CL,0x3b                         ; 0048c1ab
    JZ 0x0048c1da                       ; 0048c1ae
        ;   XREF to: 0048c1da (CONDITIONAL_JUMP)  ; LAB_0048c1da
        ;   Label: LAB_0048c1ae
    MOV DL,byte ptr [EBX]               ; 0048c1b0
    MOV byte ptr [EAX],DL               ; 0048c1b2
    INC EAX                             ; 0048c1b4
    MOV DH,byte ptr [EBX + 0x1]         ; 0048c1b5
    INC EBX                             ; 0048c1b8
    TEST DH,DH                          ; 0048c1b9
    JNZ 0x0048c1dd                      ; 0048c1bb
        ;   XREF to: 0048c1dd (CONDITIONAL_JUMP)  ; LAB_0048c1dd
    MOV EDX,ESP                         ; 0048c1bd
        ;   Label: LAB_0048c1bd
    CMP EAX,EDX                         ; 0048c1bf
    JBE 0x0048c1e2                      ; 0048c1c1
        ;   XREF to: 0048c1e2 (CONDITIONAL_JUMP)  ; LAB_0048c1e2
    MOV DL,byte ptr [EAX + -0x1]        ; 0048c1c3
    INC DL                              ; 0048c1c6
    AND EDX,0xff                        ; 0048c1c8
    TEST byte ptr [EDX + 0x6074b8],0x2  ; 0048c1ce | DAT_006074b8
    JZ 0x0048c1e2                       ; 0048c1d5
        ;   XREF to: 0048c1e2 (CONDITIONAL_JUMP)  ; LAB_0048c1e2
    DEC EAX                             ; 0048c1d7
    JMP 0x0048c1bd                      ; 0048c1d8
        ;   XREF to: 0048c1bd (UNCONDITIONAL_JUMP)  ; LAB_0048c1bd
    INC EBX                             ; 0048c1da
        ;   Label: LAB_0048c1da
    JMP 0x0048c1bd                      ; 0048c1db
        ;   XREF to: 0048c1bd (UNCONDITIONAL_JUMP)  ; LAB_0048c1bd
    CMP byte ptr [EBX],0x3b             ; 0048c1dd
        ;   Label: LAB_0048c1dd
    JMP 0x0048c1ae                      ; 0048c1e0
        ;   XREF to: 0048c1ae (UNCONDITIONAL_JUMP)  ; LAB_0048c1ae
    MOV EDX,ESP                         ; 0048c1e2
        ;   Label: LAB_0048c1e2
    CMP EAX,EDX                         ; 0048c1e4
    JBE 0x0048c186                      ; 0048c1e6
        ;   XREF to: 0048c186 (CONDITIONAL_JUMP)  ; LAB_0048c186
    PUSH EDX                            ; 0048c1e8
    PUSH ESI                            ; 0048c1e9
    MOV byte ptr [EAX],0x0              ; 0048c1ea
    CALL FUN_0048c2e0                   ; 0048c1ed
        ;   XREF to: 0048c2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c2e0()
    ADD ESP,0x8                         ; 0048c1f2
    TEST EAX,EAX                        ; 0048c1f5
    JNZ 0x0048c186                      ; 0048c1f7
        ;   XREF to: 0048c186 (CONDITIONAL_JUMP)  ; LAB_0048c186
    CMP dword ptr [0x01c734ac],0x0      ; 0048c1f9 | DAT_01c734ac
    JZ 0x0048c20b                       ; 0048c200
        ;   XREF to: 0048c20b (CONDITIONAL_JUMP)  ; LAB_0048c20b
    ADD ESP,0x200                       ; 0048c202
    POP ESI                             ; 0048c208
    POP EBX                             ; 0048c209
    RET                                 ; 0048c20a
    PUSH 0x1c734b0                      ; 0048c20b | DAT_01c734b0
        ;   Label: LAB_0048c20b
    PUSH 0x5bdf82                       ; 0048c210 | DAT_005bdf82
    MOV ECX,dword ptr [0x005f1690]      ; 0048c215 | PTR_DAT_005f1690
    PUSH ECX                            ; 0048c21b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0048c21c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 0048c221
    JMP 0x0048c186                      ; 0048c224
        ;   XREF to: 0048c186 (UNCONDITIONAL_JUMP)  ; LAB_0048c186
    MOV EAX,0x1                         ; 0048c229
        ;   Label: LAB_0048c229
    ADD ESP,0x200                       ; 0048c22e
    POP ESI                             ; 0048c234
    POP EBX                             ; 0048c235
    RET                                 ; 0048c236

