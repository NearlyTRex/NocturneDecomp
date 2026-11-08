; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041caf0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041caf0
        ;   Label: FUN_0041caf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041caf1
    CMP dword ptr [EBX + 0x754],0x0     ; 0041caf5
    JZ 0x0041cb07                       ; 0041cafc
        ;   XREF to: 0041cb07 (CONDITIONAL_JUMP)  ; LAB_0041cb07
    CMP dword ptr [EBX + 0x474],0x0     ; 0041cafe
    JZ 0x0041cb0b                       ; 0041cb05
        ;   XREF to: 0041cb0b (CONDITIONAL_JUMP)  ; LAB_0041cb0b
    XOR EAX,EAX                         ; 0041cb07
        ;   Label: LAB_0041cb07
    POP EBX                             ; 0041cb09
    RET                                 ; 0041cb0a
    PUSH ESI                            ; 0041cb0b
        ;   Label: LAB_0041cb0b
    LEA EAX,[EBX + 0x2b4]               ; 0041cb0c
    PUSH EAX                            ; 0041cb12
    CALL FUN_0044fd20                   ; 0041cb13
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ESI,dword ptr [EAX + 0x358]     ; 0041cb18
    ADD ESP,0x4                         ; 0041cb1e
    TEST ESI,ESI                        ; 0041cb21
    JZ 0x0041cb32                       ; 0041cb23
        ;   XREF to: 0041cb32 (CONDITIONAL_JUMP)  ; LAB_0041cb32
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041cb25
    ADD EBX,0x2b4                       ; 0041cb29
    MOV dword ptr [EAX + 0x24],EBX      ; 0041cb2f
    MOV EAX,0x1                         ; 0041cb32
        ;   Label: LAB_0041cb32
    POP ESI                             ; 0041cb37
    POP EBX                             ; 0041cb38
    RET                                 ; 0041cb39

