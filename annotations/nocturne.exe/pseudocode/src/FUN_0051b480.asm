; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b480(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00519ae0 at 00519af9
;
; Called Functions:
;   FUN_00518130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b480
        ;   Label: FUN_0051b480
    PUSH ESI                            ; 0051b481
    PUSH EDI                            ; 0051b482
    PUSH EBP                            ; 0051b483
    SUB ESP,0x10                        ; 0051b484
    MOV EBX,dword ptr [ESP + 0x24]      ; 0051b487
    PUSH EBX                            ; 0051b48b
    CALL FUN_00518130                   ; 0051b48c
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; undefined FUN_00518130()
    XOR ESI,ESI                         ; 0051b491
    ADD ESP,0x4                         ; 0051b493
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051b496
    MOV EDI,EAX                         ; 0051b49c
    TEST EDX,EDX                        ; 0051b49e
    JLE 0x0051b507                      ; 0051b4a0
        ;   XREF to: 0051b507 (CONDITIONAL_JUMP)  ; LAB_0051b507
    LEA EAX,[EBX + 0x1750]              ; 0051b4a2
    MOV dword ptr [ESP],EAX             ; 0051b4a8
    MOV dword ptr [ESP + 0x4],EBX       ; 0051b4ab
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b4af
        ;   Label: LAB_0051b4af
    XOR EBP,EBP                         ; 0051b4b3
    MOV dword ptr [EAX + 0x288c],0xffffffff ; 0051b4b5
    XOR ECX,ECX                         ; 0051b4bf
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0051b4c1
    MOV dword ptr [ESP + 0x8],EBP       ; 0051b4c7
    TEST EAX,EAX                        ; 0051b4cb
    JLE 0x0051b4f1                      ; 0051b4cd
        ;   XREF to: 0051b4f1 (CONDITIONAL_JUMP)  ; LAB_0051b4f1
    MOV EDX,dword ptr [ESP]             ; 0051b4cf
    MOV EBP,dword ptr [ESP + 0x4]       ; 0051b4d2
    MOV EBX,EDI                         ; 0051b4d6
    CMP ESI,dword ptr [EBX + 0x2857c]   ; 0051b4d8
        ;   Label: LAB_0051b4d8
    JZ 0x0051b50f                       ; 0051b4de
        ;   XREF to: 0051b50f (CONDITIONAL_JUMP)  ; LAB_0051b50f
    ADD EBX,0x24                        ; 0051b4e0
        ;   Label: LAB_0051b4e0
    INC ECX                             ; 0051b4e3
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0051b4e4
    ADD EDX,0xc                         ; 0051b4ea
    CMP ECX,EAX                         ; 0051b4ed
    JL 0x0051b4d8                       ; 0051b4ef
        ;   XREF to: 0051b4d8 (CONDITIONAL_JUMP)  ; LAB_0051b4d8
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051b4f1
        ;   Label: LAB_0051b4f1
    INC ESI                             ; 0051b4f5
    ADD ECX,0x4                         ; 0051b4f6
    MOV EBX,dword ptr [EDI + 0x28558]   ; 0051b4f9
    MOV dword ptr [ESP + 0x4],ECX       ; 0051b4ff
    CMP ESI,EBX                         ; 0051b503
    JL 0x0051b4af                       ; 0051b505
        ;   XREF to: 0051b4af (CONDITIONAL_JUMP)  ; LAB_0051b4af
    ADD ESP,0x10                        ; 0051b507
        ;   Label: LAB_0051b507
    POP EBP                             ; 0051b50a
    POP EDI                             ; 0051b50b
    POP ESI                             ; 0051b50c
    POP EBX                             ; 0051b50d
    RET                                 ; 0051b50e
    FLD float ptr [EDX + 0x4]           ; 0051b50f
        ;   Label: LAB_0051b50f
    FMUL ST0                            ; 0051b512
    FLD float ptr [EDX]                 ; 0051b514
    FMUL ST0                            ; 0051b516
    FADDP                               ; 0051b518
    FLD float ptr [EDX + 0x8]           ; 0051b51a
    FMUL ST0                            ; 0051b51d
    FADDP                               ; 0051b51f
    FSQRT                               ; 0051b521
    FST float ptr [ESP + 0xc]           ; 0051b523
    FCOMP float ptr [ESP + 0x8]         ; 0051b527
    FNSTSW AX                           ; 0051b52b
    SAHF                                ; 0051b52d
    JBE 0x0051b4e0                      ; 0051b52e
        ;   XREF to: 0051b4e0 (CONDITIONAL_JUMP)  ; LAB_0051b4e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b530
    MOV dword ptr [EBP + 0x288c],ECX    ; 0051b534
    MOV dword ptr [ESP + 0x8],EAX       ; 0051b53a
    JMP 0x0051b4e0                      ; 0051b53e
        ;   XREF to: 0051b4e0 (UNCONDITIONAL_JUMP)  ; LAB_0051b4e0

