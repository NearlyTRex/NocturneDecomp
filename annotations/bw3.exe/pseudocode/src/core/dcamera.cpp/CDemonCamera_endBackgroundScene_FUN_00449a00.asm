; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(CDemonCamera *this_ptr,int restore_zbuffer)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_zbuffer
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534fb7
;   core_set.cpp_FUN_00535da0 at 00536287
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0149ef08
;   undefined4 DAT_0149ef0c
;   undefined4 DAT_0149ef10
;   undefined4 DAT_0149ef14
;   undefined4 DAT_0149ef18
;   undefined4 DAT_014a01d4
;   undefined4 DAT_014a01d8
;   undefined4 DAT_014a01dc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c60dac
;   ... and 8 more
;
; Called Functions:
;   core_dstrendr.cpp_memcpyMMX_FUN_00471271
;   engine_matrix.c_popViewport_FUN_0046d320
;   engine_special.cpp_masterZBuffer_FUN_00566350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449a00
        ;   Label: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00449a00
    PUSH ESI                            ; 00449a01
    PUSH EDI                            ; 00449a02
    PUSH EBP                            ; 00449a03
    MOV EBP,dword ptr [ESP + 0x14]      ; 00449a04
    MOV EDX,dword ptr [0x0149ef08]      ; 00449a08 | DAT_0149ef08
    DEC EDX                             ; 00449a0e
    MOV dword ptr [0x0149ef08],EDX      ; 00449a0f | DAT_0149ef08
    JZ 0x00449a1c                       ; 00449a15
        ;   XREF to: 00449a1c (CONDITIONAL_JUMP)  ; LAB_00449a1c
    POP EBP                             ; 00449a17
        ;   Label: LAB_00449a17
    POP EDI                             ; 00449a18
    POP ESI                             ; 00449a19
    POP EBX                             ; 00449a1a
    RET                                 ; 00449a1b
    MOV EBX,dword ptr [0x005f2afc]      ; 00449a1c | DAT_005f2afc
        ;   Label: LAB_00449a1c
    PUSH EBX                            ; 00449a22 | DAT_01bdd7e4
    CALL engine_matrix.c_popViewport_FUN_0046d320 ; 00449a23
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0046d320()
    MOV EAX,[0x01c6b598]                ; 00449a28 | DAT_01c6b598
    MOV dword ptr [EBP + 0x1c0],EAX     ; 00449a2d
    MOV EAX,[0x01c6b59c]                ; 00449a33 | DAT_01c6b59c
    MOV ESI,0x149ef14                   ; 00449a38
    MOV dword ptr [EBP + 0x1c4],EAX     ; 00449a3d
    MOV EAX,[0x01c6b5a0]                ; 00449a43 | DAT_01c6b5a0
    MOV EDI,0x1c5faec                   ; 00449a48
    MOV dword ptr [EBP + 0x1c8],EAX     ; 00449a4d
    MOV EAX,[0x01c6b5a4]                ; 00449a53 | DAT_01c6b5a4
    MOV ECX,dword ptr [0x005fba1c]      ; 00449a58 | DAT_005fba1c
    MOV dword ptr [EBP + 0x1cc],EAX     ; 00449a5e
    MOV EAX,[0x0149ef0c]                ; 00449a64 | DAT_0149ef0c
    ADD ESP,0x4                         ; 00449a69
    MOV [0x005fba20],EAX                ; 00449a6c | DAT_005fba20
    MOV EAX,[0x0149ef10]                ; 00449a71 | DAT_0149ef10
    SHL ECX,0x2                         ; 00449a76
    MOV [0x01c6cee8],EAX                ; 00449a79 | DAT_01c6cee8
    PUSH EDI                            ; 00449a7e | DAT_01c5faec
    MOV EAX,ECX                         ; 00449a7f
    SHR ECX,0x2                         ; 00449a81
    MOVSD.REP ES:EDI,ESI                ; 00449a84 | DAT_0149ef14 | DAT_01c5faec | DAT_0149ef18
    MOV CL,AL                           ; 00449a86
    AND CL,0x3                          ; 00449a88
    MOVSB.REP ES:EDI,ESI                ; 00449a8b | DAT_0149ef18 | DAT_01c5faf0
    POP EDI                             ; 00449a8d
    MOV EAX,[0x014a01d4]                ; 00449a8e | DAT_014a01d4
    MOV [0x01c6af74],EAX                ; 00449a93 | DAT_01c6af74
    MOV EAX,[0x014a01d8]                ; 00449a98 | DAT_014a01d8
    MOV [0x01c6af80],EAX                ; 00449a9d | DAT_01c6af80
    MOV EAX,[0x014a01dc]                ; 00449aa2 | DAT_014a01dc
    MOV ESI,dword ptr [ESP + 0x18]      ; 00449aa7
    MOV [0x01c6af8c],EAX                ; 00449aab | DAT_01c6af8c
    TEST ESI,ESI                        ; 00449ab0
    JZ 0x00449a17                       ; 00449ab2
        ;   XREF to: 00449a17 (CONDITIONAL_JUMP)  ; LAB_00449a17
    MOV EDI,dword ptr [EBP + 0x148]     ; 00449ab8
    XOR ESI,ESI                         ; 00449abe
    TEST EDI,EDI                        ; 00449ac0
    JLE 0x00449b10                      ; 00449ac2
        ;   XREF to: 00449b10 (CONDITIONAL_JUMP)  ; LAB_00449b10
    XOR EDI,EDI                         ; 00449ac4
    MOV EDX,dword ptr [EBP + 0x144]     ; 00449ac6
        ;   Label: LAB_00449ac6
    IMUL EDX,ESI                        ; 00449acc
    MOV EAX,dword ptr [EBP + 0x144]     ; 00449acf
    MOV ECX,dword ptr [EDI + 0x1c60dac] ; 00449ad5 | DAT_01c60dac
    SHL EAX,0x2                         ; 00449adb
    MOV EBX,dword ptr [EBP + 0x15c]     ; 00449ade
    PUSH EAX                            ; 00449ae4
    ADD ECX,EAX                         ; 00449ae5
    SHL EDX,0x2                         ; 00449ae7
    PUSH ECX                            ; 00449aea
    ADD EDX,EBX                         ; 00449aeb
    ADD EDI,0x4                         ; 00449aed
    PUSH EDX                            ; 00449af0
    INC ESI                             ; 00449af1
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00471271 ; 00449af2
        ;   XREF to: 00471271 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00471271(void * dest, void * src, int byte_count)
    MOV EAX,dword ptr [EBP + 0x148]     ; 00449af7
    ADD ESP,0xc                         ; 00449afd
    CMP ESI,EAX                         ; 00449b00
    JL 0x00449ac6                       ; 00449b02
        ;   XREF to: 00449ac6 (CONDITIONAL_JUMP)  ; LAB_00449ac6
    LEA EAX,[EAX]                       ; 00449b04
    LEA EDX,[EDX]                       ; 00449b0a
    CMP dword ptr [0x01c6cee8],0x0      ; 00449b10 | DAT_01c6cee8
        ;   Label: LAB_00449b10
    JZ 0x00449a17                       ; 00449b17
        ;   XREF to: 00449a17 (CONDITIONAL_JUMP)  ; LAB_00449a17
    PUSH 0x0                            ; 00449b1d
    CALL engine_special.cpp_masterZBuffer_FUN_00566350 ; 00449b1f
        ;   XREF to: 00566350 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_masterZBuffer_FUN_00566350(int slot)
    ADD ESP,0x4                         ; 00449b24
    POP EBP                             ; 00449b27
    POP EDI                             ; 00449b28
    POP ESI                             ; 00449b29
    POP EBX                             ; 00449b2a
    RET                                 ; 00449b2b

