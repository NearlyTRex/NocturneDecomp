; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e0bb0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e0ed0 at 004e0ee0
;
; Referenced Globals:
;   undefined4 DAT_006002c4
;   undefined4 DAT_006002c8
;   undefined4 DAT_006002cc
;   undefined4 DAT_006002d0
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2f0
;   undefined4 DAT_01c6e2f4
;   undefined4 DAT_01c6e2f8
;   undefined4 DAT_01d70c44
;   undefined4 DAT_01d70c48
;   undefined4 DAT_01d70c4c
;   undefined4 DAT_01d70c50
;   undefined4 DAT_01d70c54
;   ... and 1 more
;
; Called Functions:
;   FUN_004e61c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0bb0
        ;   Label: FUN_004e0bb0
    PUSH ESI                            ; 004e0bb1
    PUSH EDI                            ; 004e0bb2
    PUSH EBP                            ; 004e0bb3
    SUB ESP,0x14                        ; 004e0bb4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004e0bb7
    MOV EDI,dword ptr [ESP + 0x30]      ; 004e0bbb
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e0bbf | DAT_01c6e2f0
    MOV EAX,ESI                         ; 004e0bc5
    IMUL EDX                            ; 004e0bc7
    SHRD EAX,EDX,0x10                   ; 004e0bc9
    MOV EDX,dword ptr [0x01c6e2f4]      ; 004e0bcd | DAT_01c6e2f4
    MOV ECX,EAX                         ; 004e0bd3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e0bd5
    IMUL EDX                            ; 004e0bd9
    SHRD EAX,EDX,0x10                   ; 004e0bdb
    MOV EDX,dword ptr [0x01c6e2f8]      ; 004e0bdf | DAT_01c6e2f8
    ADD ECX,EAX                         ; 004e0be5
    MOV EAX,EDI                         ; 004e0be7
    IMUL EDX                            ; 004e0be9
    SHRD EAX,EDX,0x10                   ; 004e0beb
    LEA EBX,[ECX + EAX*0x1]             ; 004e0bef
    MOV ECX,EBX                         ; 004e0bf2
    NEG EBX                             ; 004e0bf4
    TEST EBX,EBX                        ; 004e0bf6
    JL 0x004e0d92                       ; 004e0bf8
        ;   XREF to: 004e0d92 (CONDITIONAL_JUMP)  ; LAB_004e0d92
    CMP EBX,0xffff                      ; 004e0bfe
    JLE 0x004e0c0b                      ; 004e0c04
        ;   XREF to: 004e0c0b (CONDITIONAL_JUMP)  ; LAB_004e0c0b
    MOV EBX,0xffff                      ; 004e0c06
    MOV EDX,0xffff                      ; 004e0c0b
        ;   Label: LAB_004e0c0b
    MOV EBP,dword ptr [0x006002c4]      ; 004e0c10 | DAT_006002c4
    MOV EAX,EBX                         ; 004e0c16
    SUB EDX,EBP                         ; 004e0c18
    IMUL EDX                            ; 004e0c1a
    SHRD EAX,EDX,0x10                   ; 004e0c1c
    MOV EBX,dword ptr [0x006002c4]      ; 004e0c20 | DAT_006002c4
    ADD EBX,EAX                         ; 004e0c26
    TEST EBX,EBX                        ; 004e0c28
    JL 0x004e0d99                       ; 004e0c2a
        ;   XREF to: 004e0d99 (CONDITIONAL_JUMP)  ; LAB_004e0d99
    CMP EBX,0xffff                      ; 004e0c30
    JLE 0x004e0c3d                      ; 004e0c36
        ;   XREF to: 004e0c3d (CONDITIONAL_JUMP)  ; LAB_004e0c3d
    MOV EBX,0xffff                      ; 004e0c38
    CMP dword ptr [0x006002c8],0x0      ; 004e0c3d | DAT_006002c8
        ;   Label: LAB_004e0c3d
    JZ 0x004e0da0                       ; 004e0c44
        ;   XREF to: 004e0da0 (CONDITIONAL_JUMP)  ; LAB_004e0da0
    MOV EAX,ESI                         ; 004e0c4a
    MOV EDX,ECX                         ; 004e0c4c
    IMUL EDX                            ; 004e0c4e
    SHRD EAX,EDX,0x10                   ; 004e0c50
    LEA EBP,[EAX + EAX*0x1]             ; 004e0c54
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e0c57 | DAT_01c6e2f0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e0c5d
    SUB EBP,EDX                         ; 004e0c61
    MOV EDX,ECX                         ; 004e0c63
    IMUL EDX                            ; 004e0c65
    SHRD EAX,EDX,0x10                   ; 004e0c67
    MOV ESI,dword ptr [0x01c6e2f4]      ; 004e0c6b | DAT_01c6e2f4
    ADD EAX,EAX                         ; 004e0c71
    SUB EAX,ESI                         ; 004e0c73
    MOV EDX,ECX                         ; 004e0c75
    MOV dword ptr [ESP + 0xc],EAX       ; 004e0c77
    MOV EAX,EDI                         ; 004e0c7b
    IMUL EDX                            ; 004e0c7d
    SHRD EAX,EDX,0x10                   ; 004e0c7f
    MOV EDI,dword ptr [0x01c6e2f8]      ; 004e0c83 | DAT_01c6e2f8
    ADD EAX,EAX                         ; 004e0c89
    SUB EAX,EDI                         ; 004e0c8b
    MOV EDX,dword ptr [0x01d70c44]      ; 004e0c8d | DAT_01d70c44
    MOV dword ptr [ESP + 0x10],EAX      ; 004e0c93
    CMP EDX,dword ptr [0x01c6e2cc]      ; 004e0c97 | DAT_01c6e2cc
    JZ 0x004e0db1                       ; 004e0c9d
        ;   XREF to: 004e0db1 (CONDITIONAL_JUMP)  ; LAB_004e0db1
    MOV EAX,[0x01c6e2cc]                ; 004e0ca3 | DAT_01c6e2cc
        ;   Label: LAB_004e0ca3
    PUSH 0x1d70c44                      ; 004e0ca8 | DAT_01d70c44
    MOV [0x01d70c44],EAX                ; 004e0cad | DAT_01d70c44
    MOV EAX,[0x01c6e2d0]                ; 004e0cb2 | DAT_01c6e2d0
    LEA ESI,[ESP + 0x4]                 ; 004e0cb7
    MOV [0x01d70c48],EAX                ; 004e0cbb | DAT_01d70c48
    MOV EAX,[0x01c6e2d4]                ; 004e0cc0 | DAT_01c6e2d4
    MOV EDI,0x1d70c50                   ; 004e0cc5
    MOV [0x01d70c4c],EAX                ; 004e0cca | DAT_01d70c4c
    CALL FUN_004e61c0                   ; 004e0ccf
        ;   XREF to: 004e61c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e61c0()
    LEA ESI,[ESP + 0x4]                 ; 004e0cd4
    ADD ESP,0x4                         ; 004e0cd8
    MOVSD ES:EDI,ESI                    ; 004e0cdb | DAT_01d70c50
    MOVSD ES:EDI,ESI                    ; 004e0cdc | DAT_01d70c54
    MOVSD ES:EDI,ESI                    ; 004e0cdd | DAT_01d70c58
    MOV EDX,dword ptr [0x01d70c50]      ; 004e0cde | DAT_01d70c50
        ;   Label: LAB_004e0cde
    MOV EAX,EBP                         ; 004e0ce4
    IMUL EDX                            ; 004e0ce6
    SHRD EAX,EDX,0x10                   ; 004e0ce8
    MOV EDX,dword ptr [0x01d70c54]      ; 004e0cec | DAT_01d70c54
    MOV ECX,EAX                         ; 004e0cf2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e0cf4
    IMUL EDX                            ; 004e0cf8
    SHRD EAX,EDX,0x10                   ; 004e0cfa
    MOV EDX,dword ptr [0x01d70c58]      ; 004e0cfe | DAT_01d70c58
    ADD ECX,EAX                         ; 004e0d04
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e0d06
    IMUL EDX                            ; 004e0d0a
    SHRD EAX,EDX,0x10                   ; 004e0d0c
    ADD ECX,EAX                         ; 004e0d10
    NEG ECX                             ; 004e0d12
    TEST ECX,ECX                        ; 004e0d14
    JL 0x004e0dda                       ; 004e0d16
        ;   XREF to: 004e0dda (CONDITIONAL_JUMP)  ; LAB_004e0dda
    CMP ECX,0xffff                      ; 004e0d1c
    JLE 0x004e0dde                      ; 004e0d22
        ;   XREF to: 004e0dde (CONDITIONAL_JUMP)  ; LAB_004e0dde
    MOV ECX,0xffff                      ; 004e0d28
    MOV EAX,ECX                         ; 004e0d2d
        ;   Label: LAB_004e0d2d
    MOV EDX,ECX                         ; 004e0d2f
    IMUL EDX                            ; 004e0d31
    SHRD EAX,EDX,0x10                   ; 004e0d33
    MOV EDX,EAX                         ; 004e0d37
    IMUL EDX                            ; 004e0d39
    SHRD EAX,EDX,0x10                   ; 004e0d3b
    MOV EDX,EAX                         ; 004e0d3f
    IMUL EDX                            ; 004e0d41
    SHRD EAX,EDX,0x10                   ; 004e0d43
    MOV EDX,EAX                         ; 004e0d47
    IMUL EDX                            ; 004e0d49
    SHRD EAX,EDX,0x10                   ; 004e0d4b
    MOV EDX,EAX                         ; 004e0d4f
    IMUL EDX                            ; 004e0d51
    SHRD EAX,EDX,0x10                   ; 004e0d53
    MOV ECX,EAX                         ; 004e0d57
    MOV EAX,[0x006002cc]                ; 004e0d59 | DAT_006002cc
        ;   Label: LAB_004e0d59
    MOV EDX,EBX                         ; 004e0d5e
    IMUL EDX                            ; 004e0d60
    SHRD EAX,EDX,0x10                   ; 004e0d62
    MOV EBX,EAX                         ; 004e0d66
    MOV EDX,ECX                         ; 004e0d68
    MOV EAX,[0x006002d0]                ; 004e0d6a | DAT_006002d0
    IMUL EDX                            ; 004e0d6f
    SHRD EAX,EDX,0x10                   ; 004e0d71
    LEA EDX,[EBX + EAX*0x1]             ; 004e0d75
    MOV EAX,EDX                         ; 004e0d78
        ;   Label: LAB_004e0d78
    SAR EDX,0x1f                        ; 004e0d7a
    SHL EDX,0x4                         ; 004e0d7d
    SBB EAX,EDX                         ; 004e0d80
    SAR EAX,0x4                         ; 004e0d82
    ADD EAX,0x100                       ; 004e0d85
    ADD ESP,0x14                        ; 004e0d8a
    POP EBP                             ; 004e0d8d
    POP EDI                             ; 004e0d8e
    POP ESI                             ; 004e0d8f
    POP EBX                             ; 004e0d90
    RET                                 ; 004e0d91
    XOR EBX,EBX                         ; 004e0d92
        ;   Label: LAB_004e0d92
    JMP 0x004e0c0b                      ; 004e0d94
        ;   XREF to: 004e0c0b (UNCONDITIONAL_JUMP)  ; LAB_004e0c0b
    XOR EBX,EBX                         ; 004e0d99
        ;   Label: LAB_004e0d99
    JMP 0x004e0c3d                      ; 004e0d9b
        ;   XREF to: 004e0c3d (UNCONDITIONAL_JUMP)  ; LAB_004e0c3d
    MOV EAX,[0x006002cc]                ; 004e0da0 | DAT_006002cc
        ;   Label: LAB_004e0da0
    MOV EDX,EBX                         ; 004e0da5
    IMUL EDX                            ; 004e0da7
    SHRD EAX,EDX,0x10                   ; 004e0da9
    MOV EDX,EAX                         ; 004e0dad
    JMP 0x004e0d78                      ; 004e0daf
        ;   XREF to: 004e0d78 (UNCONDITIONAL_JUMP)  ; LAB_004e0d78
    MOV ECX,dword ptr [0x01d70c48]      ; 004e0db1 | DAT_01d70c48
        ;   Label: LAB_004e0db1
    CMP ECX,dword ptr [0x01c6e2d0]      ; 004e0db7 | DAT_01c6e2d0
    JNZ 0x004e0ca3                      ; 004e0dbd
        ;   XREF to: 004e0ca3 (CONDITIONAL_JUMP)  ; LAB_004e0ca3
    MOV ESI,dword ptr [0x01d70c4c]      ; 004e0dc3 | DAT_01d70c4c
    CMP ESI,dword ptr [0x01c6e2d4]      ; 004e0dc9 | DAT_01c6e2d4
    JNZ 0x004e0ca3                      ; 004e0dcf
        ;   XREF to: 004e0ca3 (CONDITIONAL_JUMP)  ; LAB_004e0ca3
    JMP 0x004e0cde                      ; 004e0dd5
        ;   XREF to: 004e0cde (UNCONDITIONAL_JUMP)  ; LAB_004e0cde
    MOV EDX,EBX                         ; 004e0dda
        ;   Label: LAB_004e0dda
    JMP 0x004e0d78                      ; 004e0ddc
        ;   XREF to: 004e0d78 (UNCONDITIONAL_JUMP)  ; LAB_004e0d78
    CMP ECX,0xbb80                      ; 004e0dde
        ;   Label: LAB_004e0dde
    JG 0x004e0d2d                       ; 004e0de4
        ;   XREF to: 004e0d2d (CONDITIONAL_JUMP)  ; LAB_004e0d2d
    XOR ECX,ECX                         ; 004e0dea
    JMP 0x004e0d59                      ; 004e0dec
        ;   XREF to: 004e0d59 (UNCONDITIONAL_JUMP)  ; LAB_004e0d59

