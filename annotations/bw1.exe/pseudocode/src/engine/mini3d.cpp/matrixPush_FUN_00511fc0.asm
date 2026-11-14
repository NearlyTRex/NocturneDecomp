; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_matrixPush_FUN_00511fc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2257c
;   undefined4 DAT_01d22580
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00511fc0
        ;   Label: engine_mini3d.cpp_matrixPush_FUN_00511fc0
    PUSH EDI                            ; 00511fc1
    MOV EDX,dword ptr [0x01d22580]      ; 00511fc2 | DAT_01d22580
    INC EDX                             ; 00511fc8
    MOV dword ptr [0x01d22580],EDX      ; 00511fc9 | DAT_01d22580
    CMP EDX,0x9                         ; 00511fcf
    JG 0x00511fff                       ; 00511fd2
        ;   XREF to: 00511fff (CONDITIONAL_JUMP)  ; LAB_00511fff
    MOV EAX,[0x01d22580]                ; 00511fd4 | DAT_01d22580
        ;   Label: LAB_00511fd4
    SHL EAX,0x2                         ; 00511fd9
    MOV EDX,EAX                         ; 00511fdc
    SHL EAX,0x4                         ; 00511fde
    SUB EAX,EDX                         ; 00511fe1
    MOV ECX,0xf                         ; 00511fe3
    ADD EAX,0x1d22584                   ; 00511fe8
    MOV ESI,dword ptr [0x01d2257c]      ; 00511fed | DAT_01d2257c
    MOV EDI,EAX                         ; 00511ff3
    MOV [0x01d2257c],EAX                ; 00511ff5 | DAT_01d2257c
    MOVSD.REP ES:EDI,ESI                ; 00511ffa
    POP EDI                             ; 00511ffc
    POP ESI                             ; 00511ffd
    RET                                 ; 00511ffe
    PUSH EBX                            ; 00511fff
        ;   Label: LAB_00511fff
    MOV EBX,0x5e8be9                    ; 00512000
    MOV ESI,0x4b7                       ; 00512005
    PUSH 0x5e8bfe                       ; 0051200a
    MOV dword ptr [0x01d1d400],EBX      ; 0051200f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00512015 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051201b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00512020
    POP EBX                             ; 00512023
    JMP 0x00511fd4                      ; 00512024
        ;   XREF to: 00511fd4 (UNCONDITIONAL_JUMP)  ; LAB_00511fd4

