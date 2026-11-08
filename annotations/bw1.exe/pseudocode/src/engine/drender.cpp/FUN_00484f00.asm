; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484f00(int param_1,int param_2)
;
;
; XREF[69]:
;   FUN_00418e50 at 00418eeb
;   FUN_00419350 at 0041937c
;   FUN_0042ea10 at 0042ea78
;   FUN_0042fe00 at 0042fe2b
;   FUN_00436600 at 0043669e
;   FUN_0044a380 at 0044a3a9
;   FUN_0044bf20 at 0044bfc7
;   FUN_0044fff0 at 00450678
;   FUN_00463820 at 00463d29
;   FUN_00464150 at 00464163
;   ... and 59 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db526
;   TerminatedCString s_CDR_texture_Too_many_cap_005db53c
;   undefined4 DAT_01bc1284
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00484f00
        ;   Label: FUN_00484f00
    PUSH EBP                            ; 00484f01
    MOV ESI,dword ptr [ESP + 0x10]      ; 00484f02
    PUSH ESI                            ; 00484f06
    CALL FUN_00597a20                   ; 00484f07
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00597a20()
    ADD ESP,0x4                         ; 00484f0c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00484f0f
    CMP dword ptr [EAX + 0x1c],0x0      ; 00484f13
    JZ 0x00484f90                       ; 00484f17
        ;   XREF to: 00484f90 (CONDITIONAL_JUMP)  ; LAB_00484f90
    PUSH EDI                            ; 00484f19
    MOV ECX,dword ptr [0x01bc1284]      ; 00484f1a | DAT_01bc1284
    INC ECX                             ; 00484f20
    MOV dword ptr [0x01bc1284],ECX      ; 00484f21 | DAT_01bc1284
    CMP ECX,0x64                        ; 00484f27
    JLE 0x00484f4f                      ; 00484f2a
        ;   XREF to: 00484f4f (CONDITIONAL_JUMP)  ; LAB_00484f4f
    MOV EDI,0x5db526                    ; 00484f2c | = "..\\engine\\drender.cpp"
    MOV EBP,0xbf3                       ; 00484f31
    PUSH 0x5db53c                       ; 00484f36 | = "CDR::texture - Too many captured text..."
    MOV dword ptr [0x01d1d400],EDI      ; 00484f3b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00484f41 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00484f47
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00484f4c
    MOV EDX,dword ptr [0x01bc1284]      ; 00484f4f | DAT_01bc1284
        ;   Label: LAB_00484f4f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00484f55
    ADD EAX,EDX                         ; 00484f5c
    SHL EAX,0x3                         ; 00484f5e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00484f61
    MOV dword ptr [EAX + 0x1bed1ac],EDX ; 00484f64
    ADD EAX,0x1bed1a8                   ; 00484f6a
    ADD ESI,0x8                         ; 00484f6f
    LEA EDI,[EAX + 0x8]                 ; 00484f72
    PUSH EDI                            ; 00484f75
    MOV AL,byte ptr [ESI]               ; 00484f76
        ;   Label: LAB_00484f76
    MOV byte ptr [EDI],AL               ; 00484f78
    CMP AL,0x0                          ; 00484f7a
    JZ 0x00484f8e                       ; 00484f7c
        ;   XREF to: 00484f8e (CONDITIONAL_JUMP)  ; LAB_00484f8e
    MOV AL,byte ptr [ESI + 0x1]         ; 00484f7e
    ADD ESI,0x2                         ; 00484f81
    MOV byte ptr [EDI + 0x1],AL         ; 00484f84
    ADD EDI,0x2                         ; 00484f87
    CMP AL,0x0                          ; 00484f8a
    JNZ 0x00484f76                      ; 00484f8c
        ;   XREF to: 00484f76 (CONDITIONAL_JUMP)  ; LAB_00484f76
    POP EDI                             ; 00484f8e
        ;   Label: LAB_00484f8e
    POP EDI                             ; 00484f8f
    POP EBP                             ; 00484f90
        ;   Label: LAB_00484f90
    POP ESI                             ; 00484f91
    RET                                 ; 00484f92

