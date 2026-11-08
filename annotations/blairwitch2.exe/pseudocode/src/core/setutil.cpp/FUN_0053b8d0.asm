; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b8d0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00533010 at 005330af
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e6341
;   TerminatedCString s_C3DSLight_process_NULL_C_005e6355
;   undefined4 DAT_00616494
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01cb6b84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01fc106c
;
; Called Functions:
;   FUN_0044b600
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b8d0
        ;   Label: FUN_0053b8d0
    PUSH ESI                            ; 0053b8d1
    PUSH EDI                            ; 0053b8d2
    PUSH EBP                            ; 0053b8d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053b8d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053b8d8
    TEST ESI,ESI                        ; 0053b8dc
    JZ 0x0053ba50                       ; 0053b8de
        ;   XREF to: 0053ba50 (CONDITIONAL_JUMP)  ; LAB_0053ba50
    CMP dword ptr [EBX + 0x11ec],0x0    ; 0053b8e4
        ;   Label: LAB_0053b8e4
    JZ 0x0053b9d9                       ; 0053b8eb
        ;   XREF to: 0053b9d9 (CONDITIONAL_JUMP)  ; LAB_0053b9d9
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0053b8f1
    FLD float ptr [EBX + EAX*0x4 + 0x16f4] ; 0053b8f7
    FLDZ                                ; 0053b8fe
    FCOMPP                              ; 0053b900
    FNSTSW AX                           ; 0053b902
    SAHF                                ; 0053b904
    JNC 0x0053b96c                      ; 0053b905
        ;   XREF to: 0053b96c (CONDITIONAL_JUMP)  ; LAB_0053b96c
    MOV EDX,dword ptr [0x00616494]      ; 0053b907 | DAT_00616494
    LEA EAX,[EBX + 0x1894]              ; 0053b90d
    FLD float ptr [EDX + 0x284]         ; 0053b913 | DAT_01cb6b84
    FADD float ptr [EAX]                ; 0053b919
    FSTP float ptr [EAX]                ; 0053b91b
    MOV EDX,dword ptr [EBX + 0x1890]    ; 0053b91d
    SHL EDX,0x2                         ; 0053b923
    ADD EDX,EBX                         ; 0053b926
    FLD float ptr [EBX + 0x1894]        ; 0053b928
    FCOMP float ptr [EDX + 0x16f4]      ; 0053b92e
    FNSTSW AX                           ; 0053b934
    SAHF                                ; 0053b936
    JBE 0x0053b96c                      ; 0053b937
        ;   XREF to: 0053b96c (CONDITIONAL_JUMP)  ; LAB_0053b96c
    FLD float ptr [EDX + 0x16f4]        ; 0053b939
    MOV EBP,dword ptr [EBX + 0x1890]    ; 0053b93f
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0053b945
    FSUBR float ptr [EBX + 0x1894]      ; 0053b94b
    INC EBP                             ; 0053b951
    FSTP float ptr [EBX + 0x1894]       ; 0053b952
    MOV dword ptr [EBX + 0x1890],EBP    ; 0053b958
    CMP EBP,EDX                         ; 0053b95e
    JL 0x0053b96c                       ; 0053b960
        ;   XREF to: 0053b96c (CONDITIONAL_JUMP)  ; LAB_0053b96c
    MOV dword ptr [EBX + 0x1890],0x0    ; 0053b962
    MOV EAX,[0x01c2a370]                ; 0053b96c | DAT_01c2a370
        ;   Label: LAB_0053b96c
    MOV EDX,dword ptr [EBX + 0x17f8]    ; 0053b971
    IMUL EDX                            ; 0053b977
    SHRD EAX,EDX,0x10                   ; 0053b979
    MOV ECX,dword ptr [EBX + 0x1800]    ; 0053b97d
    MOV EDX,dword ptr [EBX + 0x17fc]    ; 0053b983
    ADD ECX,EAX                         ; 0053b989
    MOV EAX,[0x01c2a370]                ; 0053b98b | DAT_01c2a370
    MOV dword ptr [EBX + 0x1800],ECX    ; 0053b990
    IMUL EDX                            ; 0053b996
    SHRD EAX,EDX,0x10                   ; 0053b998
    MOV EDI,dword ptr [EBX + 0x1804]    ; 0053b99c
    ADD EDI,EAX                         ; 0053b9a2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0053b9a4
    MOV dword ptr [EBX + 0x1804],EDI    ; 0053b9a8
    TEST EBP,EBP                        ; 0053b9ae
    JZ 0x0053b9d9                       ; 0053b9b0
        ;   XREF to: 0053b9d9 (CONDITIONAL_JUMP)  ; LAB_0053b9d9
    PUSH EDI                            ; 0053b9b2
    MOV EDX,dword ptr [EBX + 0x1800]    ; 0053b9b3
    MOV EAX,dword ptr [EBX + 0x1890]    ; 0053b9b9
    PUSH EDX                            ; 0053b9bf
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 0053b9c0
    PUSH ECX                            ; 0053b9c7
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 0053b9c8
    PUSH EDI                            ; 0053b9cf
    PUSH ESI                            ; 0053b9d0
    CALL FUN_0044b600                   ; 0053b9d1
        ;   XREF to: 0044b600 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b600()
    ADD ESP,0x14                        ; 0053b9d6
    FLD float ptr [EBX + 0x11e0]        ; 0053b9d9
        ;   Label: LAB_0053b9d9
    FLD1                                ; 0053b9df
    FCOMPP                              ; 0053b9e1
    FNSTSW AX                           ; 0053b9e3
    SAHF                                ; 0053b9e5
    JBE 0x0053ba3c                      ; 0053b9e6
        ;   XREF to: 0053ba3c (CONDITIONAL_JUMP)  ; LAB_0053ba3c
    MOV EDX,dword ptr [0x00616494]      ; 0053b9e8 | DAT_00616494
    LEA EAX,[EBX + 0x11e8]              ; 0053b9ee
    FLD float ptr [EDX + 0x284]         ; 0053b9f4 | DAT_01cb6b84
    FADD float ptr [EAX]                ; 0053b9fa
    FSTP float ptr [EAX]                ; 0053b9fc
    FLD float ptr [EBX + 0x11e8]        ; 0053b9fe
    FCOMP float ptr [EBX + 0x11e4]      ; 0053ba04
    FNSTSW AX                           ; 0053ba0a
    SAHF                                ; 0053ba0c
    JBE 0x0053ba21                      ; 0053ba0d
        ;   XREF to: 0053ba21 (CONDITIONAL_JUMP)  ; LAB_0053ba21
    FLD float ptr [EBX + 0x11e4]        ; 0053ba0f
    FSUBR float ptr [EBX + 0x11e8]      ; 0053ba15
    FSTP float ptr [EBX + 0x11e8]       ; 0053ba1b
    FLD float ptr [EBX + 0x11e8]        ; 0053ba21
        ;   Label: LAB_0053ba21
    FCOMP float ptr [EBX + 0x11e0]      ; 0053ba27
    FNSTSW AX                           ; 0053ba2d
    SAHF                                ; 0053ba2f
    JBE 0x0053ba78                      ; 0053ba30
        ;   XREF to: 0053ba78 (CONDITIONAL_JUMP)  ; LAB_0053ba78
    MOV dword ptr [ESI + 0x1cb4],0x0    ; 0053ba32
    MOV EAX,[0x0061b5a8]                ; 0053ba3c | DAT_0061b5a8
        ;   Label: LAB_0053ba3c
    MOV EAX,dword ptr [EAX + 0x15aeb4]  ; 0053ba41 | DAT_01fc106c
    TEST EAX,EAX                        ; 0053ba47
    JZ 0x0053ba84                       ; 0053ba49
        ;   XREF to: 0053ba84 (CONDITIONAL_JUMP)  ; LAB_0053ba84
    POP EBP                             ; 0053ba4b
    POP EDI                             ; 0053ba4c
    POP ESI                             ; 0053ba4d
    POP EBX                             ; 0053ba4e
    RET                                 ; 0053ba4f
    MOV EDX,0x5e6341                    ; 0053ba50 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0053ba50
    MOV ECX,0x351                       ; 0053ba55
    PUSH 0x5e6355                       ; 0053ba5a | = "C3DSLight::process - NULL CDemonLight..."
    MOV dword ptr [0x01d046a0],EDX      ; 0053ba5f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0053ba65 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0053ba6b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0053ba70
    JMP 0x0053b8e4                      ; 0053ba73
        ;   XREF to: 0053b8e4 (UNCONDITIONAL_JUMP)  ; LAB_0053b8e4
    MOV dword ptr [ESI + 0x1cb4],0x1    ; 0053ba78
        ;   Label: LAB_0053ba78
    JMP 0x0053ba3c                      ; 0053ba82
        ;   XREF to: 0053ba3c (UNCONDITIONAL_JUMP)  ; LAB_0053ba3c
    MOV dword ptr [ESI + 0x1cb4],EAX    ; 0053ba84
        ;   Label: LAB_0053ba84
    POP EBP                             ; 0053ba8a
    POP EDI                             ; 0053ba8b
    POP ESI                             ; 0053ba8c
    POP EBX                             ; 0053ba8d
    RET                                 ; 0053ba8e

