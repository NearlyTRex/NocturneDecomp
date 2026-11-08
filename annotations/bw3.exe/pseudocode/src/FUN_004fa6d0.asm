; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa6d0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fa450 at 004fa480
;
; Referenced Globals:
;   undefined4 DAT_005c96eb
;   undefined4 DAT_005c96f3
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;
; Called Functions:
;   FUN_0046b8f0
;   FUN_0046d460
;   FUN_0046d4c0
;   FUN_0046d500
;   FUN_0046e120
;   FUN_0046e4e0
;   FUN_0046e5e0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa6d0
        ;   Label: FUN_004fa6d0
    PUSH ESI                            ; 004fa6d1
    PUSH EDI                            ; 004fa6d2
    PUSH EBP                            ; 004fa6d3
    SUB ESP,0xc                         ; 004fa6d4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004fa6d7
    PUSH 0x0                            ; 004fa6db
    MOV EDX,dword ptr [0x005f2afc]      ; 004fa6dd | DAT_005f2afc
    PUSH EDX                            ; 004fa6e3 | DAT_01bdd7e4
    CALL FUN_0046e120                   ; 004fa6e4
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e120()
    ADD ESP,0x8                         ; 004fa6e9
    PUSH 0x1                            ; 004fa6ec
    MOV ECX,dword ptr [0x005f2afc]      ; 004fa6ee | DAT_005f2afc
    PUSH ECX                            ; 004fa6f4 | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004fa6f5
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004fa6fa
    FLD float ptr [ESP + 0x24]          ; 004fa6fd
    FLD ST0                             ; 004fa701
    FMUL double ptr [0x005c96eb]        ; 004fa703 | DAT_005c96eb
    MOV EAX,0xffff                      ; 004fa709
    FLD float ptr [0x005c96f3]          ; 004fa70e | DAT_005c96f3
    FSUBRP ST2,ST0                      ; 004fa714
    MOV EBX,dword ptr [0x01c6e24c]      ; 004fa716 | DAT_01c6e24c
    FMULP                               ; 004fa71c
    SUB EAX,EBX                         ; 004fa71e
    CALL FUN_005a3120                   ; 004fa720
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004fa725
    MOV EDX,dword ptr [ESP]             ; 004fa728
    IMUL EDX                            ; 004fa72b
    SHRD EAX,EDX,0x10                   ; 004fa72d
    PUSH EAX                            ; 004fa731
    MOV ESI,dword ptr [0x005f2afc]      ; 004fa732 | DAT_005f2afc
    PUSH ESI                            ; 004fa738 | DAT_01bdd7e4
    MOV EBP,0xffffffff                  ; 004fa739
    CALL FUN_0046d4c0                   ; 004fa73e
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 004fa743
    MOV EAX,dword ptr [EDI + 0x5c]      ; 004fa746
    MOV dword ptr [ESP + 0x8],EBP       ; 004fa749
    XOR EBP,EBP                         ; 004fa74d
    TEST EAX,EAX                        ; 004fa74f
    JLE 0x004fa7a8                      ; 004fa751
        ;   XREF to: 004fa7a8 (CONDITIONAL_JUMP)  ; LAB_004fa7a8
    LEA EAX,[EDI + 0x68]                ; 004fa753
    XOR EBX,EBX                         ; 004fa756
    MOV dword ptr [ESP + 0x4],EAX       ; 004fa758
    MOV EAX,dword ptr [EDI + 0x60]      ; 004fa75c
        ;   Label: LAB_004fa75c
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 004fa75f
    CMP ESI,dword ptr [ESP + 0x8]       ; 004fa762
    JZ 0x004fa783                       ; 004fa766
        ;   XREF to: 004fa783 (CONDITIONAL_JUMP)  ; LAB_004fa783
    IMUL EAX,ESI,0x48                   ; 004fa768
    ADD EAX,dword ptr [ESP + 0x4]       ; 004fa76b
    PUSH EAX                            ; 004fa76f
    MOV ECX,dword ptr [0x005f2afc]      ; 004fa770 | DAT_005f2afc
    PUSH ECX                            ; 004fa776 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 004fa777
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 004fa77c
    MOV dword ptr [ESP + 0x8],ESI       ; 004fa77f
    MOV ESI,dword ptr [EDI + 0x60]      ; 004fa783
        ;   Label: LAB_004fa783
    PUSH 0x267                          ; 004fa786
    ADD ESI,EBX                         ; 004fa78b
    PUSH ESI                            ; 004fa78d
    MOV EDX,dword ptr [0x005f2afc]      ; 004fa78e | DAT_005f2afc
    PUSH EDX                            ; 004fa794 | DAT_01bdd7e4
    INC EBP                             ; 004fa795
    ADD EBX,0x3c                        ; 004fa796
    CALL FUN_0046b8f0                   ; 004fa799
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8f0()
    MOV ECX,dword ptr [EDI + 0x5c]      ; 004fa79e
    ADD ESP,0xc                         ; 004fa7a1
    CMP EBP,ECX                         ; 004fa7a4
    JL 0x004fa75c                       ; 004fa7a6
        ;   XREF to: 004fa75c (CONDITIONAL_JUMP)  ; LAB_004fa75c
    MOV EBX,dword ptr [0x005f2afc]      ; 004fa7a8 | DAT_005f2afc
        ;   Label: LAB_004fa7a8
    PUSH EBX                            ; 004fa7ae | DAT_01bdd7e4
    CALL FUN_0046e4e0                   ; 004fa7af
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e4e0()
    ADD ESP,0x4                         ; 004fa7b4
    PUSH 0x0                            ; 004fa7b7
    MOV ESI,dword ptr [0x005f2afc]      ; 004fa7b9 | DAT_005f2afc
    PUSH ESI                            ; 004fa7bf | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004fa7c0
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004fa7c5
    PUSH 0x1                            ; 004fa7c8
    MOV EDI,dword ptr [0x005f2afc]      ; 004fa7ca | DAT_005f2afc
    PUSH EDI                            ; 004fa7d0 | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 004fa7d1
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 004fa7d6
    ADD ESP,0xc                         ; 004fa7d9
    POP EBP                             ; 004fa7dc
    POP EDI                             ; 004fa7dd
    POP ESI                             ; 004fa7de
    POP EBX                             ; 004fa7df
    RET                                 ; 004fa7e0

