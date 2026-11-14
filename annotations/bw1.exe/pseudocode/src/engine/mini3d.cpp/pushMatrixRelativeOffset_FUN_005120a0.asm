; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_pushMatrixRelativeOffset_FUN_005120a0(CVector3f *offset)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   offset
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

    PUSH EBX                            ; 005120a0
        ;   Label: engine_mini3d.cpp_pushMatrixRelativeOffset_FUN_005120a0
    PUSH ESI                            ; 005120a1
    PUSH EDI                            ; 005120a2
    PUSH EBP                            ; 005120a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005120a4
    MOV EDX,dword ptr [0x01d22580]      ; 005120a8 | DAT_01d22580
    INC EDX                             ; 005120ae
    MOV dword ptr [0x01d22580],EDX      ; 005120af | DAT_01d22580
    CMP EDX,0x9                         ; 005120b5
    JG 0x0051210e                       ; 005120b8
        ;   XREF to: 0051210e (CONDITIONAL_JUMP)  ; LAB_0051210e
    MOV EAX,[0x01d22580]                ; 005120ba | DAT_01d22580
        ;   Label: LAB_005120ba
    SHL EAX,0x2                         ; 005120bf
    MOV EDX,EAX                         ; 005120c2
    SHL EAX,0x4                         ; 005120c4
    SUB EAX,EDX                         ; 005120c7
    MOV ECX,0xf                         ; 005120c9
    ADD EAX,0x1d22584                   ; 005120ce
    MOV EDX,dword ptr [0x01d2257c]      ; 005120d3 | DAT_01d2257c
    MOV EDI,EAX                         ; 005120d9
    MOV ESI,EDX                         ; 005120db
    MOVSD.REP ES:EDI,ESI                ; 005120dd
    FLD float ptr [EDX + 0x24]          ; 005120df
    FSUB float ptr [EBX]                ; 005120e2
    MOV EBP,0x1                         ; 005120e4
    FSTP float ptr [EAX + 0x24]         ; 005120e9
    FLD float ptr [EDX + 0x28]          ; 005120ec
    FSUB float ptr [EBX + 0x4]          ; 005120ef
    MOV dword ptr [0x01d24ffc],EBP      ; 005120f2 | DAT_01d24ffc
    FSTP float ptr [EAX + 0x28]         ; 005120f8
    FLD float ptr [EDX + 0x2c]          ; 005120fb
    FSUB float ptr [EBX + 0x8]          ; 005120fe
    MOV [0x01d2257c],EAX                ; 00512101 | DAT_01d2257c
    FSTP float ptr [EAX + 0x2c]         ; 00512106
    POP EBP                             ; 00512109
    POP EDI                             ; 0051210a
    POP ESI                             ; 0051210b
    POP EBX                             ; 0051210c
    RET                                 ; 0051210d
    MOV ESI,0x5e8c36                    ; 0051210e
        ;   Label: LAB_0051210e
    MOV EDI,0x4e3                       ; 00512113
    PUSH 0x5e8c4b                       ; 00512118
    MOV dword ptr [0x01d1d400],ESI      ; 0051211d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00512123 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512129
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051212e
    JMP 0x005120ba                      ; 00512131
        ;   XREF to: 005120ba (UNCONDITIONAL_JUMP)  ; LAB_005120ba

