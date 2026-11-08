; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a8250(int param_1)
;
;
; XREF[1]:
;   FUN_005a86a0 at 005a89c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8250
        ;   Label: FUN_005a8250
    FLD float ptr [EDX + 0x30]          ; 005a8254
    FLDZ                                ; 005a8257
    FCOMPP                              ; 005a8259
    FNSTSW AX                           ; 005a825b
    SAHF                                ; 005a825d
    JNC 0x005a827e                      ; 005a825e
        ;   XREF to: 005a827e (CONDITIONAL_JUMP)  ; LAB_005a827e
    FLD float ptr [EDX + 0x30]          ; 005a8260
    FDIV float ptr [EDX + 0x2c]         ; 005a8263
    FLD1                                ; 005a8266
    FSUBRP                              ; 005a8268
    FLD float ptr [EDX + 0x28]          ; 005a826a
    FSUB float ptr [EDX + 0x24]         ; 005a826d
    FMULP                               ; 005a8270
    FADD float ptr [EDX + 0x24]         ; 005a8272
    FSTP float ptr [EDX + 0xc]          ; 005a8275
    MOV EDX,dword ptr [EDX + 0xc]       ; 005a8278
    MOV EAX,EDX                         ; 005a827b
    RET                                 ; 005a827d
    MOV EAX,dword ptr [EDX + 0x28]      ; 005a827e
        ;   Label: LAB_005a827e
    MOV dword ptr [EDX + 0xc],EAX       ; 005a8281
    MOV EDX,dword ptr [EDX + 0xc]       ; 005a8284
    MOV EAX,EDX                         ; 005a8287
    RET                                 ; 005a8289

