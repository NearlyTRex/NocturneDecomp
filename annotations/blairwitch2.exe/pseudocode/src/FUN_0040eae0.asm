; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040eae0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005cb314
;   undefined4 DAT_005cb31c
;   undefined4 DAT_006141f0
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_004222d0
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eae0
        ;   Label: FUN_0040eae0
    SUB ESP,0x44                        ; 0040eae1
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0040eae4
    LEA EAX,[EBX + 0x430]               ; 0040eae8
    PUSH EAX                            ; 0040eaee
    MOV EDX,dword ptr [0x006141f0]      ; 0040eaef | DAT_006141f0
    PUSH EDX                            ; 0040eaf5
    CALL FUN_0048e340                   ; 0040eaf6
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0040eafb
    TEST EAX,EAX                        ; 0040eafe
    JNZ 0x0040eb73                      ; 0040eb00
        ;   XREF to: 0040eb73 (CONDITIONAL_JUMP)  ; LAB_0040eb73
    CMP dword ptr [EBX + 0x498],0x0     ; 0040eb02
        ;   Label: LAB_0040eb02
    JZ 0x0040eb6e                       ; 0040eb09
        ;   XREF to: 0040eb6e (CONDITIONAL_JUMP)  ; LAB_0040eb6e
    FLD float ptr [ESP + 0x50]          ; 0040eb0b
    FMUL double ptr [0x005cb314]        ; 0040eb0f | DAT_005cb314
    FSUBR float ptr [EBX + 0x49c]       ; 0040eb15
    FST float ptr [EBX + 0x49c]         ; 0040eb1b
    FADD float ptr [EBX + 0x24]         ; 0040eb21
    MOV EDX,dword ptr [0x01cedef4]      ; 0040eb24 | DAT_01cedef4
    FSTP float ptr [EBX + 0x24]         ; 0040eb2a
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 0040eb2d
    FLD float ptr [EBX + 0x24]          ; 0040eb34
    FCOMP float ptr [EDX + 0x24]        ; 0040eb37
    FNSTSW AX                           ; 0040eb3a
    SAHF                                ; 0040eb3c
    JNC 0x0040eb4f                      ; 0040eb3d
        ;   XREF to: 0040eb4f (CONDITIONAL_JUMP)  ; LAB_0040eb4f
    MOV EAX,dword ptr [EDX + 0x24]      ; 0040eb3f
    MOV dword ptr [EBX + 0x24],EAX      ; 0040eb42
    MOV dword ptr [EBX + 0x49c],0x0     ; 0040eb45
    MOV EAX,[0x01cedef4]                ; 0040eb4f | DAT_01cedef4
        ;   Label: LAB_0040eb4f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0040eb54
    FLD float ptr [EAX + 0x24]          ; 0040eb5b
    FADD double ptr [0x005cb31c]        ; 0040eb5e | DAT_005cb31c
    FLD float ptr [EBX + 0x24]          ; 0040eb64
    FCOMPP                              ; 0040eb67
    FNSTSW AX                           ; 0040eb69
    SAHF                                ; 0040eb6b
    JC 0x0040ebb4                       ; 0040eb6c
        ;   XREF to: 0040ebb4 (CONDITIONAL_JUMP)  ; LAB_0040ebb4
    ADD ESP,0x44                        ; 0040eb6e
        ;   Label: LAB_0040eb6e
    POP EBX                             ; 0040eb71
    RET                                 ; 0040eb72
    MOV EAX,[0x01cedef4]                ; 0040eb73 | DAT_01cedef4
        ;   Label: LAB_0040eb73
    MOV dword ptr [EBX + 0x498],0x1     ; 0040eb78
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0040eb82
    LEA EDX,[EBX + 0x20]                ; 0040eb89
    MOV ECX,dword ptr [EAX + 0x20]      ; 0040eb8c
    MOV dword ptr [EDX],ECX             ; 0040eb8f
    MOV ECX,dword ptr [EAX + 0x24]      ; 0040eb91
    MOV dword ptr [EDX + 0x4],ECX       ; 0040eb94
    MOV ECX,dword ptr [EAX + 0x28]      ; 0040eb97
    MOV dword ptr [EDX + 0x8],ECX       ; 0040eb9a
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0040eb9d
    MOV dword ptr [EDX + 0xc],EAX       ; 0040eba0
    FLD float ptr [EBX + 0x494]         ; 0040eba3
    FADD float ptr [EBX + 0x24]         ; 0040eba9
    FSTP float ptr [EBX + 0x24]         ; 0040ebac
    JMP 0x0040eb02                      ; 0040ebaf
        ;   XREF to: 0040eb02 (UNCONDITIONAL_JUMP)  ; LAB_0040eb02
    PUSH EDI                            ; 0040ebb4
        ;   Label: LAB_0040ebb4
    PUSH ESI                            ; 0040ebb5
    LEA EAX,[ESP + 0x8]                 ; 0040ebb6
    PUSH EAX                            ; 0040ebba
    MOV ESI,0x461c3f9a                  ; 0040ebbb
    MOV EDI,0x8                         ; 0040ebc0
    CALL FUN_004222d0                   ; 0040ebc5
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    LEA EDX,[ESP + 0xc]                 ; 0040ebca
    ADD ESP,0x4                         ; 0040ebce
    MOV EAX,[0x01cedef4]                ; 0040ebd1 | DAT_01cedef4
    MOV dword ptr [ESP + 0xc],ESI       ; 0040ebd6
    MOV dword ptr [ESP + 0x38],EDI      ; 0040ebda
    MOV dword ptr [ESP + 0x3c],EBX      ; 0040ebde
    PUSH EDX                            ; 0040ebe2
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0040ebe3
    MOV dword ptr [ESP + 0x44],EBX      ; 0040ebea
    PUSH EAX                            ; 0040ebee
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 0040ebef
    CALL dword ptr [EBX + 0x110]        ; 0040ebf5
    ADD ESP,0x8                         ; 0040ebfb
    POP ESI                             ; 0040ebfe
    POP EDI                             ; 0040ebff
    ADD ESP,0x44                        ; 0040ec00
    POP EBX                             ; 0040ec03
    RET                                 ; 0040ec04

