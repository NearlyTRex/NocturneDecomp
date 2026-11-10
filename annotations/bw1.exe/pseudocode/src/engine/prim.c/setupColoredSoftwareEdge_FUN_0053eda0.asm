; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_0053eda0(SRenderVertex *vertex0,SRenderVertex *vertex1)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex0
; SRenderVertex *  Stack[0x8]:4   vertex1
;
; Referenced Globals:
;   undefined4 DAT_01c51d10
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7dacc
;   undefined4 DAT_01e7dfd0
;   undefined4 DAT_01e7dfd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053eda0
        ;   Label: engine_prim.c_setupColoredSoftwareEdge_FUN_0053eda0
    PUSH ESI                            ; 0053eda1
    PUSH EDI                            ; 0053eda2
    PUSH EBP                            ; 0053eda3
    SUB ESP,0x8                         ; 0053eda4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0053eda7
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053edab
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053edaf
    MOV EBX,dword ptr [ESI + 0x14]      ; 0053edb2
    SAR EDI,0x10                        ; 0053edb5
    SAR EBX,0x10                        ; 0053edb8
    CMP EBX,EDI                         ; 0053edbb
    JZ 0x0053efc3                       ; 0053edbd
        ;   XREF to: 0053efc3 (CONDITIONAL_JUMP)  ; LAB_0053efc3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053edc3
    CMP EDX,dword ptr [ESI + 0x14]      ; 0053edc6
    JGE 0x0053edd7                      ; 0053edc9
        ;   XREF to: 0053edd7 (CONDITIONAL_JUMP)  ; LAB_0053edd7
    MOV EAX,ESI                         ; 0053edcb
    MOV ESI,EBP                         ; 0053edcd
    MOV EBP,EAX                         ; 0053edcf
    MOV EAX,EBX                         ; 0053edd1
    MOV EBX,EDI                         ; 0053edd3
    MOV EDI,EAX                         ; 0053edd5
    MOV EAX,[0x01e7dacc]                ; 0053edd7 | DAT_01e7dacc
        ;   Label: LAB_0053edd7
    LEA ECX,[EAX*0x4 + 0x0]             ; 0053eddc
    ADD ECX,EAX                         ; 0053ede3
    SHL ECX,0x4                         ; 0053ede5
    ADD ECX,0x1e7dad0                   ; 0053ede8
    MOV dword ptr [ECX],EBX             ; 0053edee
    MOV EAX,[0x01e7dfd0]                ; 0053edf0 | DAT_01e7dfd0
    MOV dword ptr [ECX + 0x4],EDI       ; 0053edf5
    CMP EBX,EAX                         ; 0053edf8
    JGE 0x0053ee02                      ; 0053edfa
        ;   XREF to: 0053ee02 (CONDITIONAL_JUMP)  ; LAB_0053ee02
    MOV dword ptr [0x01e7dfd0],EBX      ; 0053edfc | DAT_01e7dfd0
    CMP EDI,dword ptr [0x01e7dfd4]      ; 0053ee02 | DAT_01e7dfd4
        ;   Label: LAB_0053ee02
    JLE 0x0053ee10                      ; 0053ee08
        ;   XREF to: 0053ee10 (CONDITIONAL_JUMP)  ; LAB_0053ee10
    MOV dword ptr [0x01e7dfd4],EDI      ; 0053ee0a | DAT_01e7dfd4
    MOV EDI,dword ptr [ESI + 0x14]      ; 0053ee10
        ;   Label: LAB_0053ee10
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053ee13
    SUB EBX,EDI                         ; 0053ee16
    CMP EBX,0x10000                     ; 0053ee18
    JNC 0x0053efcb                      ; 0053ee1e
        ;   XREF to: 0053efcb (CONDITIONAL_JUMP)  ; LAB_0053efcb
    XOR EBX,EBX                         ; 0053ee24
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053ee26
        ;   Label: LAB_0053ee26
    MOV EDX,dword ptr [ESI + 0x10]      ; 0053ee29
    MOV EDI,dword ptr [ESI + 0x14]      ; 0053ee2c
    SUB EAX,EDX                         ; 0053ee2f
    AND EDI,0xffff                      ; 0053ee31
    MOV EDX,EAX                         ; 0053ee37
    MOV EAX,EBX                         ; 0053ee39
    XOR DI,0xffff                       ; 0053ee3b
    IMUL EDX                            ; 0053ee3f
    SHRD EAX,EDX,0x10                   ; 0053ee41
    MOV EDX,EAX                         ; 0053ee45
    MOV dword ptr [ECX + 0xc],EAX       ; 0053ee47
    MOV EAX,EDI                         ; 0053ee4a
    IMUL EDX                            ; 0053ee4c
    SHRD EAX,EDX,0x10                   ; 0053ee4e
    MOV dword ptr [ESP],EAX             ; 0053ee52
    MOV EDX,dword ptr [ESP]             ; 0053ee55
    MOV EAX,dword ptr [ESI + 0x10]      ; 0053ee58
    ADD EAX,EDX                         ; 0053ee5b
    MOV dword ptr [ECX + 0x8],EAX       ; 0053ee5d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053ee60
    MOV EDX,dword ptr [ESI + 0x18]      ; 0053ee63
    SUB EAX,EDX                         ; 0053ee66
    MOV EDX,EAX                         ; 0053ee68
    MOV EAX,EBX                         ; 0053ee6a
    IMUL EDX                            ; 0053ee6c
    SHRD EAX,EDX,0x10                   ; 0053ee6e
    MOV EDX,EAX                         ; 0053ee72
    MOV dword ptr [ECX + 0x1c],EAX      ; 0053ee74
    MOV EAX,EDI                         ; 0053ee77
    IMUL EDX                            ; 0053ee79
    SHRD EAX,EDX,0x10                   ; 0053ee7b
    MOV dword ptr [ESP],EAX             ; 0053ee7f
    MOV EDX,dword ptr [ESP]             ; 0053ee82
    MOV EAX,dword ptr [ESI + 0x18]      ; 0053ee85
    ADD EAX,EDX                         ; 0053ee88
    MOV dword ptr [ECX + 0x18],EAX      ; 0053ee8a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053ee8d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0053ee90
    SUB EAX,EDX                         ; 0053ee93
    MOV EDX,EAX                         ; 0053ee95
    MOV EAX,EBX                         ; 0053ee97
    IMUL EDX                            ; 0053ee99
    SHRD EAX,EDX,0x10                   ; 0053ee9b
    MOV EDX,EAX                         ; 0053ee9f
    MOV dword ptr [ECX + 0x24],EAX      ; 0053eea1
    MOV EAX,EDI                         ; 0053eea4
    IMUL EDX                            ; 0053eea6
    SHRD EAX,EDX,0x10                   ; 0053eea8
    MOV dword ptr [ESP],EAX             ; 0053eeac
    MOV EDX,dword ptr [ESP]             ; 0053eeaf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0053eeb2
    ADD EAX,EDX                         ; 0053eeb5
    MOV dword ptr [ECX + 0x20],EAX      ; 0053eeb7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053eeba
    MOV EDX,dword ptr [ESI + 0x20]      ; 0053eebd
    SUB EAX,EDX                         ; 0053eec0
    MOV EDX,EAX                         ; 0053eec2
    MOV EAX,EBX                         ; 0053eec4
    IMUL EDX                            ; 0053eec6
    SHRD EAX,EDX,0x10                   ; 0053eec8
    MOV EDX,EAX                         ; 0053eecc
    MOV dword ptr [ECX + 0x14],EAX      ; 0053eece
    MOV EAX,EDI                         ; 0053eed1
    IMUL EDX                            ; 0053eed3
    SHRD EAX,EDX,0x10                   ; 0053eed5
    MOV dword ptr [ESP],EAX             ; 0053eed9
    MOV EDX,dword ptr [ESP]             ; 0053eedc
    MOV EAX,dword ptr [ESI + 0x20]      ; 0053eedf
    ADD EAX,EDX                         ; 0053eee2
    MOV dword ptr [ECX + 0x10],EAX      ; 0053eee4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053eee7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0053eeea
    SUB EAX,EDX                         ; 0053eeed
    MOV EDX,EAX                         ; 0053eeef
    MOV EAX,EBX                         ; 0053eef1
    IMUL EDX                            ; 0053eef3
    SHRD EAX,EDX,0x10                   ; 0053eef5
    MOV EDX,EAX                         ; 0053eef9
    MOV dword ptr [ECX + 0x34],EAX      ; 0053eefb
    MOV EAX,EDI                         ; 0053eefe
    IMUL EDX                            ; 0053ef00
    SHRD EAX,EDX,0x10                   ; 0053ef02
    MOV dword ptr [ESP],EAX             ; 0053ef06
    MOV EDX,dword ptr [ESP]             ; 0053ef09
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0053ef0c
    ADD EAX,EDX                         ; 0053ef0f
    MOV dword ptr [ECX + 0x30],EAX      ; 0053ef11
    CMP dword ptr [0x01c51d18],0x1      ; 0053ef14 | DAT_01c51d18
    JNZ 0x0053efea                      ; 0053ef1b
        ;   XREF to: 0053efea (CONDITIONAL_JUMP)  ; LAB_0053efea
    CMP dword ptr [0x01c51d10],0x0      ; 0053ef21 | DAT_01c51d10
    JZ 0x0053efdb                       ; 0053ef28
        ;   XREF to: 0053efdb (CONDITIONAL_JUMP)  ; LAB_0053efdb
    MOV EAX,0x7fffffff                  ; 0053ef2e
    SUB EAX,dword ptr [ESI + 0x8]       ; 0053ef33
    MOV EDX,0x7fffffff                  ; 0053ef36
    MOV dword ptr [ESP + 0x4],EAX       ; 0053ef3b
    SUB EDX,dword ptr [EBP + 0x8]       ; 0053ef3f
    SUB EDX,dword ptr [ESP + 0x4]       ; 0053ef42
        ;   Label: LAB_0053ef42
    MOV EAX,EBX                         ; 0053ef46
    IMUL EDX                            ; 0053ef48
    SHRD EAX,EDX,0x10                   ; 0053ef4a
    MOV EDX,EAX                         ; 0053ef4e
    MOV dword ptr [ECX + 0x2c],EAX      ; 0053ef50
    MOV EAX,EDI                         ; 0053ef53
    IMUL EDX                            ; 0053ef55
    SHRD EAX,EDX,0x10                   ; 0053ef57
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053ef5b
    ADD EDX,EAX                         ; 0053ef5f
    MOV dword ptr [ECX + 0x28],EDX      ; 0053ef61
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053ef64
        ;   Label: LAB_0053ef64
    MOV EDX,dword ptr [ESI + 0x24]      ; 0053ef67
    SUB EAX,EDX                         ; 0053ef6a
    MOV EDX,EAX                         ; 0053ef6c
    MOV EAX,EBX                         ; 0053ef6e
    IMUL EDX                            ; 0053ef70
    SHRD EAX,EDX,0x10                   ; 0053ef72
    MOV EDX,EAX                         ; 0053ef76
    MOV dword ptr [ECX + 0x3c],EAX      ; 0053ef78
    MOV EAX,EDI                         ; 0053ef7b
    IMUL EDX                            ; 0053ef7d
    SHRD EAX,EDX,0x10                   ; 0053ef7f
    MOV dword ptr [ESP],EAX             ; 0053ef83
    MOV EDX,dword ptr [ESP]             ; 0053ef86
    MOV EAX,dword ptr [ESI + 0x24]      ; 0053ef89
    ADD EAX,EDX                         ; 0053ef8c
    MOV dword ptr [ECX + 0x38],EAX      ; 0053ef8e
    MOV EDX,dword ptr [EBP + 0x28]      ; 0053ef91
    SUB EDX,dword ptr [ESI + 0x28]      ; 0053ef94
    MOV EAX,EBX                         ; 0053ef97
    IMUL EDX                            ; 0053ef99
    SHRD EAX,EDX,0x10                   ; 0053ef9b
    MOV EDX,EAX                         ; 0053ef9f
    MOV dword ptr [ECX + 0x44],EAX      ; 0053efa1
    MOV EAX,EDI                         ; 0053efa4
    IMUL EDX                            ; 0053efa6
    SHRD EAX,EDX,0x10                   ; 0053efa8
    MOV EDX,EAX                         ; 0053efac
    MOV EAX,dword ptr [ESI + 0x28]      ; 0053efae
    ADD EAX,EDX                         ; 0053efb1
    MOV EDX,dword ptr [0x01e7dacc]      ; 0053efb3 | DAT_01e7dacc
    INC EDX                             ; 0053efb9
    MOV dword ptr [ECX + 0x40],EAX      ; 0053efba
    MOV dword ptr [0x01e7dacc],EDX      ; 0053efbd | DAT_01e7dacc
    ADD ESP,0x8                         ; 0053efc3
        ;   Label: LAB_0053efc3
    POP EBP                             ; 0053efc6
    POP EDI                             ; 0053efc7
    POP ESI                             ; 0053efc8
    POP EBX                             ; 0053efc9
    RET                                 ; 0053efca
    MOV EAX,0xffffffff                  ; 0053efcb
        ;   Label: LAB_0053efcb
    XOR EDX,EDX                         ; 0053efd0
    DIV EBX                             ; 0053efd2
    MOV EBX,EAX                         ; 0053efd4
    JMP 0x0053ee26                      ; 0053efd6
        ;   XREF to: 0053ee26 (UNCONDITIONAL_JUMP)  ; LAB_0053ee26
    MOV EAX,dword ptr [ESI + 0xc]       ; 0053efdb
        ;   Label: LAB_0053efdb
    MOV EDX,dword ptr [EBP + 0xc]       ; 0053efde
    MOV dword ptr [ESP + 0x4],EAX       ; 0053efe1
    JMP 0x0053ef42                      ; 0053efe5
        ;   XREF to: 0053ef42 (UNCONDITIONAL_JUMP)  ; LAB_0053ef42
    MOV EAX,dword ptr [EBP + 0x8]       ; 0053efea
        ;   Label: LAB_0053efea
    MOV EDX,dword ptr [ESI + 0x8]       ; 0053efed
    SUB EAX,EDX                         ; 0053eff0
    MOV EDX,EAX                         ; 0053eff2
    MOV EAX,EBX                         ; 0053eff4
    IMUL EDX                            ; 0053eff6
    SHRD EAX,EDX,0x10                   ; 0053eff8
    MOV EDX,EAX                         ; 0053effc
    MOV dword ptr [ECX + 0x2c],EAX      ; 0053effe
    MOV EAX,EDI                         ; 0053f001
    IMUL EDX                            ; 0053f003
    SHRD EAX,EDX,0x10                   ; 0053f005
    MOV dword ptr [ESP],EAX             ; 0053f009
    MOV EDX,dword ptr [ESP]             ; 0053f00c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053f00f
    ADD EAX,EDX                         ; 0053f012
    MOV dword ptr [ECX + 0x28],EAX      ; 0053f014
    JMP 0x0053ef64                      ; 0053f017
        ;   XREF to: 0053ef64 (UNCONDITIONAL_JUMP)  ; LAB_0053ef64

