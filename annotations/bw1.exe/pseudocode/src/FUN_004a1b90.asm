; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a1b90(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x208]:1  local_208
;
; XREF[2]:
;   FUN_004a1b70 at 004a1b83
;   FUN_004a6cd0 at 004a6cf1
;
; Referenced Globals:
;   undefined4 DAT_005dcd8e
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_00626114
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01c56ecc
;   undefined4 DAT_01c56ed0
;
; Called Functions:
;   FUN_00445430
;   FUN_004a1d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1b90
        ;   Label: FUN_004a1b90
    PUSH ESI                            ; 004a1b91
    SUB ESP,0x200                       ; 004a1b92
    MOV ESI,dword ptr [ESP + 0x20c]     ; 004a1b98
    MOV EBX,dword ptr [ESP + 0x210]     ; 004a1b9f
    MOV EDX,EBX                         ; 004a1ba6
        ;   Label: LAB_004a1ba6
    MOV AL,byte ptr [EDX]               ; 004a1ba8
        ;   Label: LAB_004a1ba8
    INC AL                              ; 004a1baa
    AND EAX,0xff                        ; 004a1bac
    TEST byte ptr [EAX + 0x626114],0x2  ; 004a1bb1 | DAT_00626114
    JZ 0x004a1bbd                       ; 004a1bb8
        ;   XREF to: 004a1bbd (CONDITIONAL_JUMP)  ; LAB_004a1bbd
    INC EDX                             ; 004a1bba
    JMP 0x004a1ba8                      ; 004a1bbb
        ;   XREF to: 004a1ba8 (UNCONDITIONAL_JUMP)  ; LAB_004a1ba8
    MOV CL,byte ptr [EDX]               ; 004a1bbd
        ;   Label: LAB_004a1bbd
    MOV EBX,EDX                         ; 004a1bbf
    TEST CL,CL                          ; 004a1bc1
    JZ 0x004a1c49                       ; 004a1bc3
        ;   XREF to: 004a1c49 (CONDITIONAL_JUMP)  ; LAB_004a1c49
    MOV EAX,ESP                         ; 004a1bc9
    CMP CL,0x3b                         ; 004a1bcb
    JZ 0x004a1bfa                       ; 004a1bce
        ;   XREF to: 004a1bfa (CONDITIONAL_JUMP)  ; LAB_004a1bfa
        ;   Label: LAB_004a1bce
    MOV DL,byte ptr [EBX]               ; 004a1bd0
    MOV byte ptr [EAX],DL               ; 004a1bd2
    INC EAX                             ; 004a1bd4
    MOV DH,byte ptr [EBX + 0x1]         ; 004a1bd5
    INC EBX                             ; 004a1bd8
    TEST DH,DH                          ; 004a1bd9
    JNZ 0x004a1bfd                      ; 004a1bdb
        ;   XREF to: 004a1bfd (CONDITIONAL_JUMP)  ; LAB_004a1bfd
    MOV EDX,ESP                         ; 004a1bdd
        ;   Label: LAB_004a1bdd
    CMP EAX,EDX                         ; 004a1bdf
    JBE 0x004a1c02                      ; 004a1be1
        ;   XREF to: 004a1c02 (CONDITIONAL_JUMP)  ; LAB_004a1c02
    MOV DL,byte ptr [EAX + -0x1]        ; 004a1be3
    INC DL                              ; 004a1be6
    AND EDX,0xff                        ; 004a1be8
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a1bee | DAT_00626114
    JZ 0x004a1c02                       ; 004a1bf5
        ;   XREF to: 004a1c02 (CONDITIONAL_JUMP)  ; LAB_004a1c02
    DEC EAX                             ; 004a1bf7
    JMP 0x004a1bdd                      ; 004a1bf8
        ;   XREF to: 004a1bdd (UNCONDITIONAL_JUMP)  ; LAB_004a1bdd
    INC EBX                             ; 004a1bfa
        ;   Label: LAB_004a1bfa
    JMP 0x004a1bdd                      ; 004a1bfb
        ;   XREF to: 004a1bdd (UNCONDITIONAL_JUMP)  ; LAB_004a1bdd
    CMP byte ptr [EBX],0x3b             ; 004a1bfd
        ;   Label: LAB_004a1bfd
    JMP 0x004a1bce                      ; 004a1c00
        ;   XREF to: 004a1bce (UNCONDITIONAL_JUMP)  ; LAB_004a1bce
    MOV EDX,ESP                         ; 004a1c02
        ;   Label: LAB_004a1c02
    CMP EAX,EDX                         ; 004a1c04
    JBE 0x004a1ba6                      ; 004a1c06
        ;   XREF to: 004a1ba6 (CONDITIONAL_JUMP)  ; LAB_004a1ba6
    PUSH EDX                            ; 004a1c08
    PUSH ESI                            ; 004a1c09
    MOV byte ptr [EAX],0x0              ; 004a1c0a
    CALL FUN_004a1d00                   ; 004a1c0d
        ;   XREF to: 004a1d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1d00()
    ADD ESP,0x8                         ; 004a1c12
    TEST EAX,EAX                        ; 004a1c15
    JNZ 0x004a1ba6                      ; 004a1c17
        ;   XREF to: 004a1ba6 (CONDITIONAL_JUMP)  ; LAB_004a1ba6
    CMP dword ptr [0x01c56ecc],0x0      ; 004a1c19 | DAT_01c56ecc
    JZ 0x004a1c2b                       ; 004a1c20
        ;   XREF to: 004a1c2b (CONDITIONAL_JUMP)  ; LAB_004a1c2b
    ADD ESP,0x200                       ; 004a1c22
    POP ESI                             ; 004a1c28
    POP EBX                             ; 004a1c29
    RET                                 ; 004a1c2a
    PUSH 0x1c56ed0                      ; 004a1c2b | DAT_01c56ed0
        ;   Label: LAB_004a1c2b
    PUSH 0x5dcd8e                       ; 004a1c30 | DAT_005dcd8e
    MOV ECX,dword ptr [0x00611100]      ; 004a1c35 | PTR_DAT_00611100
    PUSH ECX                            ; 004a1c3b | DAT_007db5f0
    CALL FUN_00445430                   ; 004a1c3c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 004a1c41
    JMP 0x004a1ba6                      ; 004a1c44
        ;   XREF to: 004a1ba6 (UNCONDITIONAL_JUMP)  ; LAB_004a1ba6
    MOV EAX,0x1                         ; 004a1c49
        ;   Label: LAB_004a1c49
    ADD ESP,0x200                       ; 004a1c4e
    POP ESI                             ; 004a1c54
    POP EBX                             ; 004a1c55
    RET                                 ; 004a1c56

