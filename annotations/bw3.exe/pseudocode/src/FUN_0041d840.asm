; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041d840(float *param_1,float *param_2)
;
;
; XREF[9]:
;   FUN_00408f00 at 00409027
;   FUN_004091b0 at 004092a7
;   FUN_00423bc0 at 00423c14
;   FUN_004616e0 at 004617b1
;   FUN_004fac10 at 004facd5
;   FUN_0053d270 at 0053d3fe
;   FUN_0054bb60 at 0054bc60
;   FUN_0054fa00 at 0054fb07
;   FUN_00566fd0 at 00567128
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041d840
        ;   Label: FUN_0041d840
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d844
    FLD float ptr [ECX]                 ; 0041d848
    FCOMP float ptr [EDX]               ; 0041d84a
    FNSTSW AX                           ; 0041d84c
    SAHF                                ; 0041d84e
    JC 0x0041d89f                       ; 0041d84f
        ;   XREF to: 0041d89f (CONDITIONAL_JUMP)  ; LAB_0041d89f
    FLD float ptr [ECX]                 ; 0041d851
        ;   Label: LAB_0041d851
    FCOMP float ptr [EDX + 0xc]         ; 0041d853
    FNSTSW AX                           ; 0041d856
    SAHF                                ; 0041d858
    JBE 0x0041d860                      ; 0041d859
        ;   XREF to: 0041d860 (CONDITIONAL_JUMP)  ; LAB_0041d860
    MOV EAX,dword ptr [ECX]             ; 0041d85b
    MOV dword ptr [EDX + 0xc],EAX       ; 0041d85d
    FLD float ptr [ECX + 0x4]           ; 0041d860
        ;   Label: LAB_0041d860
    FCOMP float ptr [EDX + 0x4]         ; 0041d863
    FNSTSW AX                           ; 0041d866
    SAHF                                ; 0041d868
    JNC 0x0041d871                      ; 0041d869
        ;   XREF to: 0041d871 (CONDITIONAL_JUMP)  ; LAB_0041d871
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041d86b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d86e
    FLD float ptr [ECX + 0x4]           ; 0041d871
        ;   Label: LAB_0041d871
    FCOMP float ptr [EDX + 0x10]        ; 0041d874
    FNSTSW AX                           ; 0041d877
    SAHF                                ; 0041d879
    JBE 0x0041d882                      ; 0041d87a
        ;   XREF to: 0041d882 (CONDITIONAL_JUMP)  ; LAB_0041d882
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041d87c
    MOV dword ptr [EDX + 0x10],EAX      ; 0041d87f
    FLD float ptr [ECX + 0x8]           ; 0041d882
        ;   Label: LAB_0041d882
    FCOMP float ptr [EDX + 0x8]         ; 0041d885
    FNSTSW AX                           ; 0041d888
    SAHF                                ; 0041d88a
    JNC 0x0041d893                      ; 0041d88b
        ;   XREF to: 0041d893 (CONDITIONAL_JUMP)  ; LAB_0041d893
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041d88d
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d890
    FLD float ptr [ECX + 0x8]           ; 0041d893
        ;   Label: LAB_0041d893
    FCOMP float ptr [EDX + 0x14]        ; 0041d896
    FNSTSW AX                           ; 0041d899
    SAHF                                ; 0041d89b
    JA 0x0041d8a5                       ; 0041d89c
        ;   XREF to: 0041d8a5 (CONDITIONAL_JUMP)  ; LAB_0041d8a5
    RET                                 ; 0041d89e
    MOV EAX,dword ptr [ECX]             ; 0041d89f
        ;   Label: LAB_0041d89f
    MOV dword ptr [EDX],EAX             ; 0041d8a1
    JMP 0x0041d851                      ; 0041d8a3
        ;   XREF to: 0041d851 (UNCONDITIONAL_JUMP)  ; LAB_0041d851
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041d8a5
        ;   Label: LAB_0041d8a5
    MOV dword ptr [EDX + 0x14],EAX      ; 0041d8a8
    RET                                 ; 0041d8ab

