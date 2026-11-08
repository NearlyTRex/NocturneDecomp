; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00469c60(int param_1,int param_2,int param_3)
;
;
; XREF[9]:
;   FUN_0041b700 at 0041b987
;   FUN_00424c80 at 00424ea8
;   FUN_00498ed0 at 00499235
;   FUN_0049f850 at 004a0175
;   FUN_004cb3e0 at 004cb3f1
;   FUN_004dd320 at 004dd492
;   FUN_004dd4e0 at 004dd618
;   FUN_004e7ff0 at 004e8167
;   FUN_004eaf30 at 004eb09e
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469c60
        ;   Label: FUN_00469c60
    PUSH ESI                            ; 00469c61
    PUSH EDI                            ; 00469c62
    PUSH EBP                            ; 00469c63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00469c64
    MOV EDI,dword ptr [ESP + 0x18]      ; 00469c68
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00469c6c
    CMP ESI,-0x1                        ; 00469c70
    JNZ 0x00469c7a                      ; 00469c73
        ;   XREF to: 00469c7a (CONDITIONAL_JUMP)  ; LAB_00469c7a
    MOV ESI,0x2cd                       ; 00469c75
    CMP dword ptr [EBX + 0xc],0x0       ; 00469c7a
        ;   Label: LAB_00469c7a
    JNZ 0x00469cb5                      ; 00469c7e
        ;   XREF to: 00469cb5 (CONDITIONAL_JUMP)  ; LAB_00469cb5
    CMP dword ptr [EBX + 0x4],0x0       ; 00469c80
        ;   Label: LAB_00469c80
    JZ 0x00469cc7                       ; 00469c84
        ;   XREF to: 00469cc7 (CONDITIONAL_JUMP)  ; LAB_00469cc7
    XOR EBP,EBP                         ; 00469c86
    MOV ESI,0x46e936                    ; 00469c88 | LAB_0046e936
    MOV dword ptr [0x01c38b54],EBP      ; 00469c8d | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00469c93 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ESI      ; 00469c99 | DAT_01c35e6c
    LEA EAX,[EDI + 0x18]                ; 00469c9f
        ;   Label: LAB_00469c9f
    PUSH EAX                            ; 00469ca2
    MOV EDX,dword ptr [EDI + 0x4]       ; 00469ca3
    PUSH EDX                            ; 00469ca6
    PUSH EBX                            ; 00469ca7
    CALL FUN_00469590                   ; 00469ca8
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; undefined FUN_00469590()
    ADD ESP,0xc                         ; 00469cad
    POP EBP                             ; 00469cb0
        ;   Label: LAB_00469cb0
    POP EDI                             ; 00469cb1
    POP ESI                             ; 00469cb2
    POP EBX                             ; 00469cb3
    RET                                 ; 00469cb4
    LEA EAX,[EDI + 0x8]                 ; 00469cb5
        ;   Label: LAB_00469cb5
    PUSH EAX                            ; 00469cb8
    CALL FUN_00403970                   ; 00469cb9
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00469cbe
    TEST EAX,EAX                        ; 00469cc1
    JZ 0x00469cb0                       ; 00469cc3
        ;   XREF to: 00469cb0 (CONDITIONAL_JUMP)  ; LAB_00469cb0
    JMP 0x00469c80                      ; 00469cc5
        ;   XREF to: 00469c80 (UNCONDITIONAL_JUMP)  ; LAB_00469c80
    CMP dword ptr [0x006141c0],0x20     ; 00469cc7 | DAT_006141c0
        ;   Label: LAB_00469cc7
    JNZ 0x00469ced                      ; 00469cce
        ;   XREF to: 00469ced (CONDITIONAL_JUMP)  ; LAB_00469ced
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00469cd0 | DAT_01c35e6c | LAB_0055b3b1
    MOV ECX,0x6                         ; 00469cda
        ;   Label: LAB_00469cda
    MOV dword ptr [0x01c38b54],ESI      ; 00469cdf | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469ce5 | DAT_01c38b58
    JMP 0x00469c9f                      ; 00469ceb
        ;   XREF to: 00469c9f (UNCONDITIONAL_JUMP)  ; LAB_00469c9f
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00469ced | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00469ced
    JMP 0x00469cda                      ; 00469cf7
        ;   XREF to: 00469cda (UNCONDITIONAL_JUMP)  ; LAB_00469cda

