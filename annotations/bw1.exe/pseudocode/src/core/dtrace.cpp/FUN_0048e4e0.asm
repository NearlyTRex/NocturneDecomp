; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048e4e0(int param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0054e3c0 at 0054e599
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005db9d4
;   TerminatedCString s_CDemonRaytrace_setPVS_To_005db9e7
;   undefined4 DAT_01bef218
;   undefined4 DAT_01bef21c
;   undefined4 DAT_01bef224
;   undefined4 DAT_01c02aa0
;   undefined4 DAT_01c02aa4
;   undefined4 DAT_01c02aa8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e4e0
        ;   Label: FUN_0048e4e0
    PUSH EBP                            ; 0048e4e1
    SUB ESP,0x18                        ; 0048e4e2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048e4e5
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048e4e9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0048e4ed
    XOR EDX,EDX                         ; 0048e4f1
    MOV dword ptr [0x01bef21c],EDX      ; 0048e4f3 | DAT_01bef21c
    CMP EAX,0x1                         ; 0048e4f9
    JL 0x0048e603                       ; 0048e4fc
        ;   XREF to: 0048e603 (CONDITIONAL_JUMP)  ; LAB_0048e603
    TEST EBP,EBP                        ; 0048e502
    JZ 0x0048e603                       ; 0048e504
        ;   XREF to: 0048e603 (CONDITIONAL_JUMP)  ; LAB_0048e603
    PUSH EDI                            ; 0048e50a
    PUSH ESI                            ; 0048e50b
    MOV [0x01bef218],EAX                ; 0048e50c | DAT_01bef218
    CMP EAX,0x4e20                      ; 0048e511
    JG 0x0048e609                       ; 0048e516
        ;   XREF to: 0048e609 (CONDITIONAL_JUMP)  ; LAB_0048e609
    MOV EAX,[0x01bef218]                ; 0048e51c | DAT_01bef218
        ;   Label: LAB_0048e51c
    XOR EDI,EDI                         ; 0048e521
    TEST EAX,EAX                        ; 0048e523
    JLE 0x0048e5f7                      ; 0048e525
        ;   XREF to: 0048e5f7 (CONDITIONAL_JUMP)  ; LAB_0048e5f7
    MOV ESI,0x1c02aa0                   ; 0048e52b
    LEA EAX,[EDI*0x4 + 0x0]             ; 0048e530
        ;   Label: LAB_0048e530
    MOV ECX,dword ptr [EBP]             ; 0048e537
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e53a
    IMUL EAX,ECX,0x34                   ; 0048e53e
    MOV EDX,dword ptr [EBX + 0x50]      ; 0048e541
    ADD EAX,EDX                         ; 0048e544
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048e546
    MOV dword ptr [EDX + 0x1bef220],EAX ; 0048e54a | DAT_01bef224
    MOV EDX,ECX                         ; 0048e550
    MOV EAX,ECX                         ; 0048e552
    SAR EDX,0x1f                        ; 0048e554
    IDIV dword ptr [EBX + 0x48]         ; 0048e557
    MOV dword ptr [ESP + 0x14],EDX      ; 0048e55a
    MOV EDX,ECX                         ; 0048e55e
    MOV EAX,ECX                         ; 0048e560
    SAR EDX,0x1f                        ; 0048e562
    MOV ECX,dword ptr [EBX + 0x48]      ; 0048e565
    IDIV ECX                            ; 0048e568
    MOV EDX,EAX                         ; 0048e56a
    SAR EDX,0x1f                        ; 0048e56c
    MOV ECX,EAX                         ; 0048e56f
    IDIV dword ptr [EBX + 0x44]         ; 0048e571
    MOV dword ptr [ESP + 0x18],EDX      ; 0048e574
    MOV EDX,ECX                         ; 0048e578
    MOV EAX,ECX                         ; 0048e57a
    SAR EDX,0x1f                        ; 0048e57c
    MOV ECX,dword ptr [EBX + 0x44]      ; 0048e57f
    IDIV ECX                            ; 0048e582
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e584
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048e588
    FILD dword ptr [ESP + 0x1c]         ; 0048e58c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e590
    FMUL float ptr [EBX + 0x28]         ; 0048e594
    FILD dword ptr [ESP + 0x1c]         ; 0048e597
    FXCH                                ; 0048e59b
    FADD float ptr [EBX + 0x10]         ; 0048e59d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048e5a0
    FSTP float ptr [ESP + 0x8]          ; 0048e5a4
    FMUL float ptr [EBX + 0x2c]         ; 0048e5a8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048e5ab
    FADD float ptr [EBX + 0x14]         ; 0048e5af
    FILD dword ptr [ESP + 0x1c]         ; 0048e5b2
    FXCH                                ; 0048e5b6
    FSTP float ptr [ESP + 0xc]          ; 0048e5b8
    FMUL float ptr [EBX + 0x30]         ; 0048e5bc
    FADD float ptr [EBX + 0x18]         ; 0048e5bf
    LEA EAX,[ESP + 0x8]                 ; 0048e5c2
    FSTP float ptr [ESP + 0x10]         ; 0048e5c6
    CMP ESI,EAX                         ; 0048e5ca
    JZ 0x0048e5e2                       ; 0048e5cc
        ;   XREF to: 0048e5e2 (CONDITIONAL_JUMP)  ; LAB_0048e5e2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e5ce
    MOV dword ptr [ESI],EAX             ; 0048e5d2 | DAT_01c02aa0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048e5d4
    MOV dword ptr [ESI + 0x4],EAX       ; 0048e5d8 | DAT_01c02aa4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048e5db
    MOV dword ptr [ESI + 0x8],EAX       ; 0048e5df | DAT_01c02aa8
    MOV EDX,dword ptr [0x01bef218]      ; 0048e5e2 | DAT_01bef218
        ;   Label: LAB_0048e5e2
    ADD ESI,0xc                         ; 0048e5e8
    INC EDI                             ; 0048e5eb
    ADD EBP,0x4                         ; 0048e5ec
    CMP EDI,EDX                         ; 0048e5ef
    JL 0x0048e530                       ; 0048e5f1
        ;   XREF to: 0048e530 (CONDITIONAL_JUMP)  ; LAB_0048e530
    MOV dword ptr [0x01bef21c],0x1      ; 0048e5f7 | DAT_01bef21c
        ;   Label: LAB_0048e5f7
    POP ESI                             ; 0048e601
    POP EDI                             ; 0048e602
    ADD ESP,0x18                        ; 0048e603
        ;   Label: LAB_0048e603
    POP EBP                             ; 0048e606
    POP EBX                             ; 0048e607
    RET                                 ; 0048e608
    MOV ECX,0x5db9d4                    ; 0048e609 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0048e609
    MOV ESI,0x8c9                       ; 0048e60e
    PUSH 0x5db9e7                       ; 0048e613 | = "CDemonRaytrace::setPVS - Too many dra..."
    MOV dword ptr [0x01d1d400],ECX      ; 0048e618 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0048e61e | DAT_01d1d404
    CALL FUN_005030e0                   ; 0048e624
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0048e629
    JMP 0x0048e51c                      ; 0048e62c
        ;   XREF to: 0048e51c (UNCONDITIONAL_JUMP)  ; LAB_0048e51c

