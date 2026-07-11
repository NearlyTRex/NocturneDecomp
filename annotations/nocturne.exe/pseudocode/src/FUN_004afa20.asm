; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004afa20(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004afe80 at 004aff4e
;
; Referenced Globals:
;   undefined4 DAT_0059e4d4
;   undefined4 DAT_005ae704
;   undefined4 DAT_005ba84c
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5044
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   ... and 20 more
;
; Called Functions:
;   FUN_004602a0
;   FUN_00461010
;   FUN_00461eb0
;   FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afa20
        ;   Label: FUN_004afa20
    PUSH ESI                            ; 004afa21
    PUSH EDI                            ; 004afa22
    PUSH EBP                            ; 004afa23
    SUB ESP,0xc                         ; 004afa24
    MOV EDX,0x4                         ; 004afa27
    MOV EBX,0x1                         ; 004afa2c
    MOV ESI,0x2                         ; 004afa31
    MOV EDI,0x3                         ; 004afa36
    MOV EBP,0x80000                     ; 004afa3b
    XOR ECX,ECX                         ; 004afa40
    MOV dword ptr [0x01c78cc4],EDX      ; 004afa42 | DAT_01c78cc4
    MOV dword ptr [0x01c78cd8],ECX      ; 004afa48 | DAT_01c78cd8
    MOV dword ptr [0x01c78cdc],EBX      ; 004afa4e | DAT_01c78cdc
    MOV dword ptr [0x01c78ce0],ESI      ; 004afa54 | DAT_01c78ce0
    MOV dword ptr [0x01c78ce4],EDI      ; 004afa5a | DAT_01c78ce4
    MOV dword ptr [0x005c502c],EBP      ; 004afa60 | DAT_005c502c
    MOV dword ptr [0x005c5030],EBP      ; 004afa66 | DAT_005c5030
    MOV EDX,0xf80000                    ; 004afa6c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afa71
    MOV dword ptr [0x005c505c],EDX      ; 004afa75 | DAT_005c505c
    MOV dword ptr [0x005c508c],EDX      ; 004afa7b | DAT_005c508c
    MOV dword ptr [0x005c5090],EDX      ; 004afa81 | DAT_005c5090
    MOV EAX,dword ptr [EBX + 0x38]      ; 004afa87
    MOV dword ptr [0x005c50c0],EDX      ; 004afa8a | DAT_005c50c0
    PUSH EAX                            ; 004afa90
    MOV EDX,dword ptr [0x005ae704]      ; 004afa91 | DAT_005ae704
    MOV dword ptr [0x005c5060],EBP      ; 004afa97 | DAT_005c5060
    PUSH EDX                            ; 004afa9d | DAT_01b4d738
    MOV dword ptr [0x005c50bc],EBP      ; 004afa9e | DAT_005c50bc
    MOV EDI,0x5c5014                    ; 004afaa4 | DAT_005c5014
    CALL FUN_00461010                   ; 004afaa9
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined FUN_00461010()
    ADD ESP,0x8                         ; 004afaae
    MOV EBP,dword ptr [0x005ae704]      ; 004afab1 | DAT_005ae704
    XOR ECX,ECX                         ; 004afab7
    PUSH 0x5ba84c                       ; 004afab9 | DAT_005ba84c
    MOV dword ptr [0x01c78cc8],ECX      ; 004afabe | DAT_01c78cc8
    MOV dword ptr [0x01c78ccc],ECX      ; 004afac4 | DAT_01c78ccc
    PUSH EBP                            ; 004afaca | DAT_01b4d738
    MOV dword ptr [0x01c78cd0],ECX      ; 004afacb | DAT_01c78cd0
    MOV dword ptr [0x01c78cd4],ECX      ; 004afad1 | DAT_01c78cd4
    CALL FUN_00461eb0                   ; 004afad7
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    LEA EBP,[EBX + 0x8]                 ; 004afadc
    ADD ESP,0x8                         ; 004afadf
    MOV ESI,EBP                         ; 004afae2
    ADD EBP,0x30                        ; 004afae4
    MOV EBX,ESP                         ; 004afae7
        ;   Label: LAB_004afae7
    MOV EAX,ESI                         ; 004afae9
    FLD float ptr [EAX]                 ; 004afaeb
    FMUL float ptr [0x0059e4d4]         ; 004afaed | DAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004afaf3
    FLD float ptr [EAX + 0x4]           ; 004afaf5
    FMUL float ptr [0x0059e4d4]         ; 004afaf8 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004afafe
    FLD float ptr [EAX + 0x8]           ; 004afb01
    FMUL float ptr [0x0059e4d4]         ; 004afb04 | DAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004afb0a
    MOV EBX,ESP                         ; 004afb0d
    PUSH EBX                            ; 004afb0f
    PUSH EDI                            ; 004afb10 | DAT_005c5014 | DAT_005c5044
    ADD ESI,0xc                         ; 004afb11
    CALL FUN_00530a25                   ; 004afb14
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined FUN_00530a25()
    ADD ESP,0x8                         ; 004afb19
    ADD EDI,0x30                        ; 004afb1c
    CMP ESI,EBP                         ; 004afb1f
    JNZ 0x004afae7                      ; 004afb21
        ;   XREF to: 004afae7 (CONDITIONAL_JUMP)  ; LAB_004afae7
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb23
    CMP dword ptr [EBX + 0x3c],0x0      ; 004afb27
    JZ 0x004afc37                       ; 004afb2b
        ;   XREF to: 004afc37 (CONDITIONAL_JUMP)  ; LAB_004afc37
    MOV EDI,0x5c5034                    ; 004afb31 | DAT_005c5034
    MOV EBP,0x5c5038                    ; 004afb36 | DAT_005c5038
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afb3b
    MOV ESI,0x5c503c                    ; 004afb3e | DAT_005c503c
    CMP EBX,0x1                         ; 004afb43
    JC 0x004afca4                       ; 004afb46
        ;   XREF to: 004afca4 (CONDITIONAL_JUMP)  ; LAB_004afca4
    JA 0x004afc9f                       ; 004afb4c
        ;   XREF to: 004afc9f (CONDITIONAL_JUMP)  ; LAB_004afc9f
    MOV EDI,0x7f80                      ; 004afb52
    XOR ESI,ESI                         ; 004afb57
    MOV dword ptr [0x005c5038],EDI      ; 004afb59 | DAT_005c5038
    MOV dword ptr [0x005c503c],ESI      ; 004afb5f | DAT_005c503c
    MOV dword ptr [0x005c5034],ESI      ; 004afb65 | DAT_005c5034
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb6b
        ;   Label: LAB_004afb6b
    MOV EBP,0x5c5064                    ; 004afb6f | DAT_005c5064
    MOV ESI,0x5c5068                    ; 004afb74 | DAT_005c5068
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afb79
    MOV EDI,0x5c506c                    ; 004afb7c | DAT_005c506c
    CMP EBX,0x1                         ; 004afb81
    JNC 0x004afcf0                      ; 004afb84
        ;   XREF to: 004afcf0 (CONDITIONAL_JUMP)  ; LAB_004afcf0
    MOV dword ptr [EBP],0x2000          ; 004afb8a | DAT_005c5064
        ;   Label: LAB_004afb8a
    MOV dword ptr [ESI],0x0             ; 004afb91 | DAT_005c5068
    MOV dword ptr [EDI],0x0             ; 004afb97 | DAT_005c506c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb9d
        ;   Label: LAB_004afb9d
    MOV EBP,0x5c5094                    ; 004afba1 | DAT_005c5094
    MOV ESI,0x5c5098                    ; 004afba6 | DAT_005c5098
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afbab
    MOV EDI,0x5c509c                    ; 004afbae | DAT_005c509c
    CMP EBX,0x1                         ; 004afbb3
    JNC 0x004afd33                      ; 004afbb6
        ;   XREF to: 004afd33 (CONDITIONAL_JUMP)  ; LAB_004afd33
    MOV dword ptr [EBP],0x2000          ; 004afbbc | DAT_005c5094
        ;   Label: LAB_004afbbc
    MOV dword ptr [ESI],0x0             ; 004afbc3 | DAT_005c5098
    MOV dword ptr [EDI],0x0             ; 004afbc9 | DAT_005c509c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afbcf
        ;   Label: LAB_004afbcf
    MOV EBP,0x5c50c4                    ; 004afbd3 | DAT_005c50c4
    MOV EDI,0x5c50c8                    ; 004afbd8 | DAT_005c50c8
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afbdd
    MOV ESI,0x5c50cc                    ; 004afbe0 | DAT_005c50cc
    CMP EBX,0x1                         ; 004afbe5
    JC 0x004afd3f                       ; 004afbe8
        ;   XREF to: 004afd3f (CONDITIONAL_JUMP)  ; LAB_004afd3f
    JBE 0x004afd57                      ; 004afbee
        ;   XREF to: 004afd57 (CONDITIONAL_JUMP)  ; LAB_004afd57
    CMP EBX,0x2                         ; 004afbf4
    JNZ 0x004afd3f                      ; 004afbf7
        ;   XREF to: 004afd3f (CONDITIONAL_JUMP)  ; LAB_004afd3f
    XOR EDI,EDI                         ; 004afbfd
    MOV dword ptr [0x005c50c8],EDI      ; 004afbff | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EDI      ; 004afc05 | DAT_005c50cc
    MOV dword ptr [0x005c50c4],EDI      ; 004afc0b | DAT_005c50c4
    PUSH 0x1c78cc0                      ; 004afc11
        ;   Label: LAB_004afc11
    MOV ECX,dword ptr [0x005ae704]      ; 004afc16 | DAT_005ae704
    PUSH ECX                            ; 004afc1c | DAT_01b4d738
    CALL FUN_004602a0                   ; 004afc1d
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004602a0()
    ADD ESP,0x8                         ; 004afc22
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afc25
    MOV dword ptr [EBX],0x1             ; 004afc29
    ADD ESP,0xc                         ; 004afc2f
    POP EBP                             ; 004afc32
    POP EDI                             ; 004afc33
    POP ESI                             ; 004afc34
    POP EBX                             ; 004afc35
    RET                                 ; 004afc36
    MOV ESI,0x7ff                       ; 004afc37
        ;   Label: LAB_004afc37
    MOV dword ptr [0x005c5038],ESI      ; 004afc3c | DAT_005c5038
    MOV dword ptr [0x005c503c],ESI      ; 004afc42 | DAT_005c503c
    MOV dword ptr [0x005c5064],ESI      ; 004afc48 | DAT_005c5064
    MOV dword ptr [0x005c5068],ESI      ; 004afc4e | DAT_005c5068
    MOV dword ptr [0x005c506c],ESI      ; 004afc54 | DAT_005c506c
    MOV dword ptr [0x005c5094],ESI      ; 004afc5a | DAT_005c5094
    MOV dword ptr [0x005c5098],ESI      ; 004afc60 | DAT_005c5098
    MOV dword ptr [0x005c509c],ESI      ; 004afc66 | DAT_005c509c
    MOV dword ptr [0x005c50c4],ESI      ; 004afc6c | DAT_005c50c4
    MOV dword ptr [0x005c50c8],ESI      ; 004afc72 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],ESI      ; 004afc78 | DAT_005c50cc
    MOV dword ptr [0x005c5034],ESI      ; 004afc7e | DAT_005c5034
    JMP 0x004afc11                      ; 004afc84
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11
    XOR EDX,EDX                         ; 004afc86
        ;   Label: LAB_004afc86
    MOV dword ptr [0x005c5038],EDX      ; 004afc88 | DAT_005c5038
    MOV dword ptr [0x005c503c],EDX      ; 004afc8e | DAT_005c503c
    MOV dword ptr [0x005c5034],EDX      ; 004afc94 | DAT_005c5034
    JMP 0x004afb6b                      ; 004afc9a
        ;   XREF to: 004afb6b (UNCONDITIONAL_JUMP)  ; LAB_004afb6b
    CMP EBX,0x2                         ; 004afc9f
        ;   Label: LAB_004afc9f
    JZ 0x004afc86                       ; 004afca2
        ;   XREF to: 004afc86 (CONDITIONAL_JUMP)  ; LAB_004afc86
    MOV dword ptr [EDI],0x2000          ; 004afca4 | DAT_005c5034
        ;   Label: LAB_004afca4
    MOV dword ptr [EBP],0x0             ; 004afcaa | DAT_005c5038
    MOV dword ptr [ESI],0x0             ; 004afcb1 | DAT_005c503c
    JMP 0x004afb6b                      ; 004afcb7
        ;   XREF to: 004afb6b (UNCONDITIONAL_JUMP)  ; LAB_004afb6b
    MOV ESI,0x7f80                      ; 004afcbc
        ;   Label: LAB_004afcbc
    XOR EBX,EBX                         ; 004afcc1
    MOV dword ptr [0x005c5068],ESI      ; 004afcc3 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 004afcc9 | DAT_005c506c
    MOV dword ptr [0x005c5064],EBX      ; 004afccf | DAT_005c5064
    JMP 0x004afb9d                      ; 004afcd5
        ;   XREF to: 004afb9d (UNCONDITIONAL_JUMP)  ; LAB_004afb9d
    XOR EAX,EAX                         ; 004afcda
        ;   Label: LAB_004afcda
    MOV [0x005c5068],EAX                ; 004afcdc | DAT_005c5068
    MOV [0x005c506c],EAX                ; 004afce1 | DAT_005c506c
    MOV [0x005c5064],EAX                ; 004afce6 | DAT_005c5064
    JMP 0x004afb9d                      ; 004afceb
        ;   XREF to: 004afb9d (UNCONDITIONAL_JUMP)  ; LAB_004afb9d
    JBE 0x004afcbc                      ; 004afcf0
        ;   XREF to: 004afcbc (CONDITIONAL_JUMP)  ; LAB_004afcbc
        ;   Label: LAB_004afcf0
    CMP EBX,0x2                         ; 004afcf2
    JZ 0x004afcda                       ; 004afcf5
        ;   XREF to: 004afcda (CONDITIONAL_JUMP)  ; LAB_004afcda
    JMP 0x004afb8a                      ; 004afcf7
        ;   XREF to: 004afb8a (UNCONDITIONAL_JUMP)  ; LAB_004afb8a
    MOV EBX,0x7f80                      ; 004afcfc
        ;   Label: LAB_004afcfc
    XOR ECX,ECX                         ; 004afd01
    MOV dword ptr [0x005c5098],EBX      ; 004afd03 | DAT_005c5098
    MOV dword ptr [0x005c509c],ECX      ; 004afd09 | DAT_005c509c
    MOV dword ptr [0x005c5094],ECX      ; 004afd0f | DAT_005c5094
    JMP 0x004afbcf                      ; 004afd15
        ;   XREF to: 004afbcf (UNCONDITIONAL_JUMP)  ; LAB_004afbcf
    XOR EBP,EBP                         ; 004afd1a
        ;   Label: LAB_004afd1a
    MOV dword ptr [0x005c5098],EBP      ; 004afd1c | DAT_005c5098
    MOV dword ptr [0x005c509c],EBP      ; 004afd22 | DAT_005c509c
    MOV dword ptr [0x005c5094],EBP      ; 004afd28 | DAT_005c5094
    JMP 0x004afbcf                      ; 004afd2e
        ;   XREF to: 004afbcf (UNCONDITIONAL_JUMP)  ; LAB_004afbcf
    JBE 0x004afcfc                      ; 004afd33
        ;   XREF to: 004afcfc (CONDITIONAL_JUMP)  ; LAB_004afcfc
        ;   Label: LAB_004afd33
    CMP EBX,0x2                         ; 004afd35
    JZ 0x004afd1a                       ; 004afd38
        ;   XREF to: 004afd1a (CONDITIONAL_JUMP)  ; LAB_004afd1a
    JMP 0x004afbbc                      ; 004afd3a
        ;   XREF to: 004afbbc (UNCONDITIONAL_JUMP)  ; LAB_004afbbc
    MOV dword ptr [EBP],0x2000          ; 004afd3f | DAT_005c50c4
        ;   Label: LAB_004afd3f
    MOV dword ptr [EDI],0x0             ; 004afd46 | DAT_005c50c8
    MOV dword ptr [ESI],0x0             ; 004afd4c | DAT_005c50cc
    JMP 0x004afc11                      ; 004afd52
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11
    MOV ECX,0x7f80                      ; 004afd57
        ;   Label: LAB_004afd57
    XOR EDX,EDX                         ; 004afd5c
    MOV dword ptr [0x005c50c8],ECX      ; 004afd5e | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EDX      ; 004afd64 | DAT_005c50cc
    MOV dword ptr [0x005c50c4],EDX      ; 004afd6a | DAT_005c50c4
    JMP 0x004afc11                      ; 004afd70
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11

