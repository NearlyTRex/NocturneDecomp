; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054bb60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054a2c0 at 0054a2d0
;
; Called Functions:
;   FUN_0041d840
;   FUN_0041e8b0
;   FUN_005487e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bb60
        ;   Label: FUN_0054bb60
    PUSH ESI                            ; 0054bb61
    PUSH EDI                            ; 0054bb62
    PUSH EBP                            ; 0054bb63
    SUB ESP,0x1c                        ; 0054bb64
    MOV EBP,dword ptr [ESP + 0x30]      ; 0054bb67
    PUSH EBP                            ; 0054bb6b
    CALL FUN_005487e0                   ; 0054bb6c
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005487e0()
    ADD ESP,0x4                         ; 0054bb71
    MOV dword ptr [ESP + 0x10],EAX      ; 0054bb74
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0054bb78
    XOR EBX,EBX                         ; 0054bb7e
    MOV dword ptr [ESP + 0x18],EAX      ; 0054bb80
    TEST EAX,EAX                        ; 0054bb84
    JLE 0x0054bbc0                      ; 0054bb86
        ;   XREF to: 0054bbc0 (CONDITIONAL_JUMP)  ; LAB_0054bbc0
    LEA EDI,[EBP + 0x274c]              ; 0054bb88
    MOV ESI,EBP                         ; 0054bb8e
    PUSH EDI                            ; 0054bb90
        ;   Label: LAB_0054bb90
    CALL FUN_0041e8b0                   ; 0054bb91
        ;   XREF to: 0041e8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e8b0()
    ADD ESI,0x4                         ; 0054bb96
    INC EBX                             ; 0054bb99
    ADD ESP,0x4                         ; 0054bb9a
    ADD EDI,0x18                        ; 0054bb9d
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054bba0
    MOV dword ptr [ESI + 0x30a8],0x0    ; 0054bba4
    CMP EBX,ECX                         ; 0054bbae
    JL 0x0054bb90                       ; 0054bbb0
        ;   XREF to: 0054bb90 (CONDITIONAL_JUMP)  ; LAB_0054bb90
    LEA EAX,[EAX]                       ; 0054bbb2
    LEA EDX,[EDX]                       ; 0054bbb8
    MOV EAX,EAX                         ; 0054bbbe
    XOR EBX,EBX                         ; 0054bbc0
        ;   Label: LAB_0054bbc0
    MOV ESI,dword ptr [EBP + 0x2c]      ; 0054bbc2
    MOV dword ptr [ESP + 0x8],EBX       ; 0054bbc5
    TEST ESI,ESI                        ; 0054bbc9
    JLE 0x0054bc16                      ; 0054bbcb
        ;   XREF to: 0054bc16 (CONDITIONAL_JUMP)  ; LAB_0054bc16
    LEA EAX,[EBP + 0x274c]              ; 0054bbcd
    MOV dword ptr [ESP + 0x4],EBX       ; 0054bbd3
    MOV dword ptr [ESP + 0xc],EAX       ; 0054bbd7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054bbdb
        ;   Label: LAB_0054bbdb
    MOV EAX,dword ptr [EBP + 0x40]      ; 0054bbdf
    ADD EDX,EAX                         ; 0054bbe2
    MOV dword ptr [ESP + 0x14],EDX      ; 0054bbe4
    LEA EDI,[EDX + 0x10]                ; 0054bbe8
    XOR ESI,ESI                         ; 0054bbeb
    MOV EBX,EDX                         ; 0054bbed
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054bbef
        ;   Label: LAB_0054bbef
    XOR EAX,EAX                         ; 0054bbf3
    MOV AL,byte ptr [EDX]               ; 0054bbf5
    CMP ESI,EAX                         ; 0054bbf7
    JL 0x0054bc4f                       ; 0054bbf9
        ;   XREF to: 0054bc4f (CONDITIONAL_JUMP)  ; LAB_0054bc4f
    MOV EDI,dword ptr [ESP + 0x4]       ; 0054bbfb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054bbff
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0054bc03
    ADD EDI,0x34                        ; 0054bc06
    INC EAX                             ; 0054bc09
    MOV dword ptr [ESP + 0x4],EDI       ; 0054bc0a
    MOV dword ptr [ESP + 0x8],EAX       ; 0054bc0e
    CMP EAX,EDX                         ; 0054bc12
    JL 0x0054bbdb                       ; 0054bc14
        ;   XREF to: 0054bbdb (CONDITIONAL_JUMP)  ; LAB_0054bbdb
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054bc16
        ;   Label: LAB_0054bc16
    XOR EDI,EDI                         ; 0054bc1a
    TEST ECX,ECX                        ; 0054bc1c
    JLE 0x0054bc47                      ; 0054bc1e
        ;   XREF to: 0054bc47 (CONDITIONAL_JUMP)  ; LAB_0054bc47
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054bc20
    MOV EDX,EBP                         ; 0054bc24
    MOV dword ptr [ESP],EAX             ; 0054bc26
    CMP dword ptr [EDX + 0x30ac],0x1    ; 0054bc29
        ;   Label: LAB_0054bc29
    JZ 0x0054bc80                       ; 0054bc30
        ;   XREF to: 0054bc80 (CONDITIONAL_JUMP)  ; LAB_0054bc80
    MOV ECX,dword ptr [ESP]             ; 0054bc32
        ;   Label: LAB_0054bc32
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054bc35
    ADD EDX,0x4                         ; 0054bc39
    ADD ECX,0x24                        ; 0054bc3c
    INC EDI                             ; 0054bc3f
    MOV dword ptr [ESP],ECX             ; 0054bc40
    CMP EDI,EBX                         ; 0054bc43
    JL 0x0054bc29                       ; 0054bc45
        ;   XREF to: 0054bc29 (CONDITIONAL_JUMP)  ; LAB_0054bc29
    ADD ESP,0x1c                        ; 0054bc47
        ;   Label: LAB_0054bc47
    POP EBP                             ; 0054bc4a
    POP EDI                             ; 0054bc4b
    POP ESI                             ; 0054bc4c
    POP EBX                             ; 0054bc4d
    RET                                 ; 0054bc4e
    XOR EAX,EAX                         ; 0054bc4f
        ;   Label: LAB_0054bc4f
    MOV AL,byte ptr [EBX + 0x1]         ; 0054bc51
    IMUL EAX,EAX,0x18                   ; 0054bc54
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054bc57
    PUSH EDI                            ; 0054bc5b
    ADD EAX,EDX                         ; 0054bc5c
    PUSH EAX                            ; 0054bc5e
    INC EBX                             ; 0054bc5f
    CALL FUN_0041d840                   ; 0054bc60
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d840()
    XOR EAX,EAX                         ; 0054bc65
    INC ESI                             ; 0054bc67
    MOV AL,byte ptr [EBX]               ; 0054bc68
    ADD EDI,0xc                         ; 0054bc6a
    ADD ESP,0x8                         ; 0054bc6d
    MOV dword ptr [EBP + EAX*0x4 + 0x30ac],0x1 ; 0054bc70
    JMP 0x0054bbef                      ; 0054bc7b
        ;   XREF to: 0054bbef (UNCONDITIONAL_JUMP)  ; LAB_0054bbef
    MOV EAX,dword ptr [ESP]             ; 0054bc80
        ;   Label: LAB_0054bc80
    CMP dword ptr [EAX + 0x1de9c],0x0   ; 0054bc83
    JL 0x0054bcdd                       ; 0054bc8a
        ;   XREF to: 0054bcdd (CONDITIONAL_JUMP)  ; LAB_0054bcdd
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054bc8c
    XOR EAX,EAX                         ; 0054bc90
    TEST EBX,EBX                        ; 0054bc92
    JLE 0x0054bcad                      ; 0054bc94
        ;   XREF to: 0054bcad (CONDITIONAL_JUMP)  ; LAB_0054bcad
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054bc96
    MOV ESI,EBP                         ; 0054bc9a
    CMP EDI,dword ptr [EBX + 0x1de9c]   ; 0054bc9c
        ;   Label: LAB_0054bc9c
    JNZ 0x0054bcec                      ; 0054bca2
        ;   XREF to: 0054bcec (CONDITIONAL_JUMP)  ; LAB_0054bcec
    CMP dword ptr [ESI + 0x30ac],0x0    ; 0054bca4
    JZ 0x0054bcec                       ; 0054bcab
        ;   XREF to: 0054bcec (CONDITIONAL_JUMP)  ; LAB_0054bcec
    CMP EAX,dword ptr [ESP + 0x18]      ; 0054bcad
        ;   Label: LAB_0054bcad
    JGE 0x0054bcdd                      ; 0054bcb1
        ;   XREF to: 0054bcdd (CONDITIONAL_JUMP)  ; LAB_0054bcdd
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054bcb3
    MOV EAX,EDI                         ; 0054bcb7
    XOR EBX,EBX                         ; 0054bcb9
    IMUL EAX,EAX,0x24                   ; 0054bcbb
        ;   Label: LAB_0054bcbb
    ADD EAX,ESI                         ; 0054bcbe
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054bcc0
    TEST EAX,EAX                        ; 0054bcc6
    JL 0x0054bcd4                       ; 0054bcc8
        ;   XREF to: 0054bcd4 (CONDITIONAL_JUMP)  ; LAB_0054bcd4
    CMP dword ptr [EBP + EAX*0x4 + 0x30ac],0x2 ; 0054bcca
    JNZ 0x0054bcfd                      ; 0054bcd2
        ;   XREF to: 0054bcfd (CONDITIONAL_JUMP)  ; LAB_0054bcfd
    CMP EBX,0x2                         ; 0054bcd4
        ;   Label: LAB_0054bcd4
    JL 0x0054bc32                       ; 0054bcd7
        ;   XREF to: 0054bc32 (CONDITIONAL_JUMP)  ; LAB_0054bc32
    MOV dword ptr [EDX + 0x30ac],0x2    ; 0054bcdd
        ;   Label: LAB_0054bcdd
    JMP 0x0054bc32                      ; 0054bce7
        ;   XREF to: 0054bc32 (UNCONDITIONAL_JUMP)  ; LAB_0054bc32
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054bcec
        ;   Label: LAB_0054bcec
    ADD EBX,0x24                        ; 0054bcf0
    INC EAX                             ; 0054bcf3
    ADD ESI,0x4                         ; 0054bcf4
    CMP EAX,ECX                         ; 0054bcf7
    JL 0x0054bc9c                       ; 0054bcf9
        ;   XREF to: 0054bc9c (CONDITIONAL_JUMP)  ; LAB_0054bc9c
    JMP 0x0054bcad                      ; 0054bcfb
        ;   XREF to: 0054bcad (UNCONDITIONAL_JUMP)  ; LAB_0054bcad
    INC EBX                             ; 0054bcfd
        ;   Label: LAB_0054bcfd
    CMP EBX,0x2                         ; 0054bcfe
    JL 0x0054bcbb                       ; 0054bd01
        ;   XREF to: 0054bcbb (CONDITIONAL_JUMP)  ; LAB_0054bcbb
    JMP 0x0054bcd4                      ; 0054bd03
        ;   XREF to: 0054bcd4 (UNCONDITIONAL_JUMP)  ; LAB_0054bcd4

