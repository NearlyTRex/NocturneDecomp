; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_00511f50(float *frame)
;
; Parameters:
; float *          Stack[0x4]:4   frame
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;   undefined4 DAT_01d24ffc
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00511f50
        ;   Label: engine_mini3d.cpp_matrixPushLoad_FUN_00511f50
    PUSH EDI                            ; 00511f51
    MOV EDX,dword ptr [0x01d22580]      ; 00511f52 | DAT_01d22580
    INC EDX                             ; 00511f58
    MOV dword ptr [0x01d22580],EDX      ; 00511f59 | DAT_01d22580
    CMP EDX,0x9                         ; 00511f5f
    JG 0x00511f98                       ; 00511f62
        ;   XREF to: 00511f98 (CONDITIONAL_JUMP)  ; LAB_00511f98
    MOV EAX,[0x01d22580]                ; 00511f64 | DAT_01d22580
        ;   Label: LAB_00511f64
    SHL EAX,0x2                         ; 00511f69
    MOV EDX,EAX                         ; 00511f6c
    SHL EAX,0x4                         ; 00511f6e
    SUB EAX,EDX                         ; 00511f71
    MOV ECX,0xf                         ; 00511f73
    ADD EAX,0x1d22584                   ; 00511f78
    MOV ESI,dword ptr [ESP + 0xc]       ; 00511f7d
    MOV EDI,EAX                         ; 00511f81
    MOVSD.REP ES:EDI,ESI                ; 00511f83
    MOV EDI,0x1                         ; 00511f85
    MOV [0x01d2257c],EAX                ; 00511f8a | DAT_01d2257c
    MOV dword ptr [0x01d24ffc],EDI      ; 00511f8f | DAT_01d24ffc
    POP EDI                             ; 00511f95
    POP ESI                             ; 00511f96
    RET                                 ; 00511f97
    PUSH EBX                            ; 00511f98
        ;   Label: LAB_00511f98
    MOV EBX,0x5e8bc3                    ; 00511f99
    MOV ESI,0x498                       ; 00511f9e
    PUSH 0x5e8bd8                       ; 00511fa3
    MOV dword ptr [0x01d1d400],EBX      ; 00511fa8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00511fae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00511fb4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00511fb9
    POP EBX                             ; 00511fbc
    JMP 0x00511f64                      ; 00511fbd
        ;   XREF to: 00511f64 (UNCONDITIONAL_JUMP)  ; LAB_00511f64

