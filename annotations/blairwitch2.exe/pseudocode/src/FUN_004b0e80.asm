; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b0e80(int param_1)
;
;
; XREF[1]:
;   FUN_004ad640 at 004ade8b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0e80
        ;   Label: FUN_004b0e80
    TEST byte ptr [EDX + 0x25640],0x2   ; 004b0e84
    JZ 0x004b0eba                       ; 004b0e8b
        ;   XREF to: 004b0eba (CONDITIONAL_JUMP)  ; LAB_004b0eba
    FLD float ptr [EDX + 0x25648]       ; 004b0e8d
    FLD1                                ; 004b0e93
    FCOMPP                              ; 004b0e95
    FNSTSW AX                           ; 004b0e97
    SAHF                                ; 004b0e99
    JA 0x004b0eba                       ; 004b0e9a
        ;   XREF to: 004b0eba (CONDITIONAL_JUMP)  ; LAB_004b0eba
    FLD float ptr [EDX + 0x2567c]       ; 004b0e9c
    FLD1                                ; 004b0ea2
    FCOMPP                              ; 004b0ea4
    FNSTSW AX                           ; 004b0ea6
    SAHF                                ; 004b0ea8
    JA 0x004b0eba                       ; 004b0ea9
        ;   XREF to: 004b0eba (CONDITIONAL_JUMP)  ; LAB_004b0eba
    FLD float ptr [EDX + 0x25678]       ; 004b0eab
    FLDZ                                ; 004b0eb1
    FCOMPP                              ; 004b0eb3
    FNSTSW AX                           ; 004b0eb5
    SAHF                                ; 004b0eb7
    JNC 0x004b0ebd                      ; 004b0eb8
        ;   XREF to: 004b0ebd (CONDITIONAL_JUMP)  ; LAB_004b0ebd
    XOR EAX,EAX                         ; 004b0eba
        ;   Label: LAB_004b0eba
    RET                                 ; 004b0ebc
        ;   Label: LAB_004b0ebc
    MOV EAX,dword ptr [EDX + 0x247e4]   ; 004b0ebd
        ;   Label: LAB_004b0ebd
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x2498c] ; 004b0ec3
    PUSH EAX                            ; 004b0eca
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b0ecb
    CALL dword ptr [EDX + 0xf0]         ; 004b0ed1
    ADD ESP,0x4                         ; 004b0ed7
    TEST EAX,EAX                        ; 004b0eda
    JZ 0x004b0ebc                       ; 004b0edc
        ;   XREF to: 004b0ebc (CONDITIONAL_JUMP)  ; LAB_004b0ebc
    MOV EAX,0x1                         ; 004b0ede
    RET                                 ; 004b0ee3

