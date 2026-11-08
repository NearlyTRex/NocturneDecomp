; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a9e88(short param_1,int *param_2,uint param_3,uint *param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005aa044 at 005aa068
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;   undefined4 DAT_02d258e1
;
; Called Functions:
;   FUN_005a3780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9e88
        ;   Label: FUN_005a9e88
    PUSH ESI                            ; 005a9e89
    PUSH EDI                            ; 005a9e8a
    PUSH EBP                            ; 005a9e8b
    SUB ESP,0xc                         ; 005a9e8c
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a9e8f
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a9e93
    LEA EAX,[EDX + 0xb]                 ; 005a9e97
    AND AL,0xf8                         ; 005a9e9a
    CMP EAX,EDX                         ; 005a9e9c
    JNC 0x005a9ea7                      ; 005a9e9e
        ;   XREF to: 005a9ea7 (CONDITIONAL_JUMP)  ; LAB_005a9ea7
    MOV EAX,0xffffffff                  ; 005a9ea0
    JMP 0x005a9eb1                      ; 005a9ea5
        ;   XREF to: 005a9eb1 (UNCONDITIONAL_JUMP)  ; LAB_005a9eb1
    CMP EAX,0x10                        ; 005a9ea7
        ;   Label: LAB_005a9ea7
    JNC 0x005a9eb1                      ; 005a9eaa
        ;   XREF to: 005a9eb1 (CONDITIONAL_JUMP)  ; LAB_005a9eb1
    MOV EAX,0x10                        ; 005a9eac
    LEA EDX,[ESI + -0x4]                ; 005a9eb1
        ;   Label: LAB_005a9eb1
    MOV dword ptr [ESP],EDX             ; 005a9eb4
    MOV EDX,dword ptr [EDX]             ; 005a9eb7
    AND DL,0xfe                         ; 005a9eb9
    CMP EAX,EDX                         ; 005a9ebc
    JBE 0x005a9fd9                      ; 005a9ebe
        ;   XREF to: 005a9fd9 (CONDITIONAL_JUMP)  ; LAB_005a9fd9
    MOV EBP,dword ptr [ESP]             ; 005a9ec4
    SUB EAX,EDX                         ; 005a9ec7
    ADD EBP,EDX                         ; 005a9ec9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005a9ecb
    MOV dword ptr [EDX],EAX             ; 005a9ecf
    MOV EDI,dword ptr [EBP]             ; 005a9ed1
        ;   Label: LAB_005a9ed1
    CMP EDI,-0x1                        ; 005a9ed4
    JNZ 0x005a9ee3                      ; 005a9ed7
        ;   XREF to: 005a9ee3 (CONDITIONAL_JUMP)  ; LAB_005a9ee3
    MOV EAX,0x2                         ; 005a9ed9
    JMP 0x005aa03a                      ; 005a9ede
        ;   XREF to: 005aa03a (UNCONDITIONAL_JUMP)  ; LAB_005aa03a
    TEST DI,0x1                         ; 005a9ee3
        ;   Label: LAB_005a9ee3
    JNZ 0x005a9fcc                      ; 005a9ee8
        ;   XREF to: 005a9fcc (CONDITIONAL_JUMP)  ; LAB_005a9fcc
    MOV EAX,dword ptr [EBP + 0x8]       ; 005a9eee
    MOV dword ptr [ESP + 0x4],EAX       ; 005a9ef1
    MOV EAX,dword ptr [EBP + 0x4]       ; 005a9ef5
    MOV DX,DS                           ; 005a9ef8
    MOV dword ptr [ESP + 0x8],EAX       ; 005a9efa
    MOV EAX,0x6075c4                    ; 005a9efe | DAT_006075c4
    CMP DX,word ptr [ESP + 0x20]        ; 005a9f03
    JNZ 0x005a9f2b                      ; 005a9f08
        ;   XREF to: 005a9f2b (CONDITIONAL_JUMP)  ; LAB_005a9f2b
    MOV EBX,dword ptr [0x006075c4]      ; 005a9f0a | DAT_006075c4
    CMP dword ptr [EBX + 0x8],0x0       ; 005a9f10
    JZ 0x005a9f2b                       ; 005a9f14
        ;   XREF to: 005a9f2b (CONDITIONAL_JUMP)  ; LAB_005a9f2b
    CMP EBX,ESI                         ; 005a9f16
        ;   Label: LAB_005a9f16
    JA 0x005a9f22                       ; 005a9f18
        ;   XREF to: 005a9f22 (CONDITIONAL_JUMP)  ; LAB_005a9f22
    MOV EAX,dword ptr [EBX]             ; 005a9f1a
    ADD EAX,EBX                         ; 005a9f1c
    CMP EAX,ESI                         ; 005a9f1e
    JA 0x005a9f2b                       ; 005a9f20
        ;   XREF to: 005a9f2b (CONDITIONAL_JUMP)  ; LAB_005a9f2b
    MOV EBX,dword ptr [EBX + 0x8]       ; 005a9f22
        ;   Label: LAB_005a9f22
    CMP dword ptr [EBX + 0x8],0x0       ; 005a9f25
    JNZ 0x005a9f16                      ; 005a9f29
        ;   XREF to: 005a9f16 (CONDITIONAL_JUMP)  ; LAB_005a9f16
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a9f2b
        ;   Label: LAB_005a9f2b
    CMP EBP,EAX                         ; 005a9f2e
    JNZ 0x005a9f38                      ; 005a9f30
        ;   XREF to: 005a9f38 (CONDITIONAL_JUMP)  ; LAB_005a9f38
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a9f32
    MOV dword ptr [EBX + 0xc],EAX       ; 005a9f35
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005a9f38
        ;   Label: LAB_005a9f38
    CMP EDI,dword ptr [EAX]             ; 005a9f3c
    JC 0x005a9f4f                       ; 005a9f3e
        ;   XREF to: 005a9f4f (CONDITIONAL_JUMP)  ; LAB_005a9f4f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005a9f40
    MOV EAX,EDI                         ; 005a9f44
    MOV ECX,dword ptr [EDX]             ; 005a9f46
    SUB EAX,ECX                         ; 005a9f48
    CMP EAX,0x10                        ; 005a9f4a
    JNC 0x005a9f86                      ; 005a9f4d
        ;   XREF to: 005a9f86 (CONDITIONAL_JUMP)  ; LAB_005a9f86
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9f4f
        ;   Label: LAB_005a9f4f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9f53
    MOV dword ptr [EAX + 0x8],EDX       ; 005a9f57
    MOV EAX,EDX                         ; 005a9f5a
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9f5c
    MOV dword ptr [EAX + 0x4],EDX       ; 005a9f60
    MOV EAX,dword ptr [ESP]             ; 005a9f63
    ADD dword ptr [EAX],EDI             ; 005a9f66
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005a9f68
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005a9f6b
    DEC ECX                             ; 005a9f6f
    XOR DL,DL                           ; 005a9f70
    MOV dword ptr [EBX + 0x1c],ECX      ; 005a9f72
    MOV byte ptr [0x02d258e1],DL        ; 005a9f75 | DAT_02d258e1
    MOV EDX,dword ptr [EAX]             ; 005a9f7b
    CMP EDI,EDX                         ; 005a9f7d
    JC 0x005a9fbf                       ; 005a9f7f
        ;   XREF to: 005a9fbf (CONDITIONAL_JUMP)  ; LAB_005a9fbf
    JMP 0x005aa038                      ; 005a9f81
        ;   XREF to: 005aa038 (UNCONDITIONAL_JUMP)  ; LAB_005aa038
    ADD EBP,ECX                         ; 005a9f86
        ;   Label: LAB_005a9f86
    MOV dword ptr [EBP],EAX             ; 005a9f88
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9f8b
    MOV dword ptr [EBP + 0x4],EAX       ; 005a9f8f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9f92
    MOV dword ptr [EBP + 0x8],EAX       ; 005a9f96
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9f99
    MOV dword ptr [EAX + 0x8],EBP       ; 005a9f9d
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9fa0
    MOV dword ptr [EAX + 0x4],EBP       ; 005a9fa4
    MOV EAX,dword ptr [EDX]             ; 005a9fa7
    MOV EDX,dword ptr [ESP]             ; 005a9fa9
    MOV EDI,dword ptr [EDX]             ; 005a9fac
    ADD EDI,EAX                         ; 005a9fae
    XOR AH,AH                           ; 005a9fb0
    MOV dword ptr [EDX],EDI             ; 005a9fb2
    MOV byte ptr [0x02d258e1],AH        ; 005a9fb4 | DAT_02d258e1
    JMP 0x005aa038                      ; 005a9fba
        ;   XREF to: 005aa038 (UNCONDITIONAL_JUMP)  ; LAB_005aa038
    MOV ECX,EDX                         ; 005a9fbf
        ;   Label: LAB_005a9fbf
    SUB ECX,EDI                         ; 005a9fc1
    ADD EBP,EDI                         ; 005a9fc3
    MOV dword ptr [EAX],ECX             ; 005a9fc5
    JMP 0x005a9ed1                      ; 005a9fc7
        ;   XREF to: 005a9ed1 (UNCONDITIONAL_JUMP)  ; LAB_005a9ed1
    MOV EAX,0x1                         ; 005a9fcc
        ;   Label: LAB_005a9fcc
    ADD ESP,0xc                         ; 005a9fd1
    POP EBP                             ; 005a9fd4
    POP EDI                             ; 005a9fd5
    POP ESI                             ; 005a9fd6
    POP EBX                             ; 005a9fd7
    RET                                 ; 005a9fd8
    SUB EDX,EAX                         ; 005a9fd9
        ;   Label: LAB_005a9fd9
    CMP EDX,0x10                        ; 005a9fdb
    JC 0x005aa038                       ; 005a9fde
        ;   XREF to: 005aa038 (CONDITIONAL_JUMP)  ; LAB_005aa038
    MOV EBP,dword ptr [ESP]             ; 005a9fe0
    MOV EDI,EAX                         ; 005a9fe3
    OR DL,0x1                           ; 005a9fe5
    OR DI,0x1                           ; 005a9fe8
    LEA ECX,[EAX + EBP*0x1]             ; 005a9fec
    MOV dword ptr [EBP],EDI             ; 005a9fef
    MOV EAX,0x6075c4                    ; 005a9ff2 | DAT_006075c4
    MOV dword ptr [ECX],EDX             ; 005a9ff7
    MOV DX,DS                           ; 005a9ff9
    MOV dword ptr [ESP],ECX             ; 005a9ffb
    CMP DX,word ptr [ESP + 0x20]        ; 005a9ffe
    JNZ 0x005aa026                      ; 005aa003
        ;   XREF to: 005aa026 (CONDITIONAL_JUMP)  ; LAB_005aa026
    MOV EBX,dword ptr [0x006075c4]      ; 005aa005 | DAT_006075c4
    CMP dword ptr [EBX + 0x8],0x0       ; 005aa00b
    JZ 0x005aa026                       ; 005aa00f
        ;   XREF to: 005aa026 (CONDITIONAL_JUMP)  ; LAB_005aa026
    CMP EBX,ESI                         ; 005aa011
        ;   Label: LAB_005aa011
    JA 0x005aa01d                       ; 005aa013
        ;   XREF to: 005aa01d (CONDITIONAL_JUMP)  ; LAB_005aa01d
    MOV EAX,dword ptr [EBX]             ; 005aa015
    ADD EAX,EBX                         ; 005aa017
    CMP EAX,ESI                         ; 005aa019
    JA 0x005aa026                       ; 005aa01b
        ;   XREF to: 005aa026 (CONDITIONAL_JUMP)  ; LAB_005aa026
    MOV EBX,dword ptr [EBX + 0x8]       ; 005aa01d
        ;   Label: LAB_005aa01d
    CMP dword ptr [EBX + 0x8],0x0       ; 005aa020
    JNZ 0x005aa011                      ; 005aa024
        ;   XREF to: 005aa011 (CONDITIONAL_JUMP)  ; LAB_005aa011
    INC dword ptr [EBX + 0x18]          ; 005aa026
        ;   Label: LAB_005aa026
    MOV EAX,dword ptr [ESP]             ; 005aa029
    ADD EAX,0x4                         ; 005aa02c
    PUSH EAX                            ; 005aa02f
    CALL FUN_005a3780                   ; 005aa030
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3780()
    ADD ESP,0x4                         ; 005aa035
    XOR EAX,EAX                         ; 005aa038
        ;   Label: LAB_005aa038
    ADD ESP,0xc                         ; 005aa03a
        ;   Label: LAB_005aa03a
    POP EBP                             ; 005aa03d
    POP EDI                             ; 005aa03e
    POP ESI                             ; 005aa03f
    POP EBX                             ; 005aa040
    RET                                 ; 005aa041

