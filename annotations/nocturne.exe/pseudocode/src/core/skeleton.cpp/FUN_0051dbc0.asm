; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051dbc0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004270e0 at 00427225
;   FUN_0051d9d0 at 0051da0b
;
; Referenced Globals:
;   undefined4 s_..\\core\\skeleton.cpp_00591bd2+1
;   string s_CDeformableModelInstance::render_00591be8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00518510
;   FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051dbc0
        ;   Label: FUN_0051dbc0
    PUSH EDI                            ; 0051dbc1
    PUSH EBP                            ; 0051dbc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051dbc3
    CMP dword ptr [EBX + 0x2230],0x0    ; 0051dbc7
    JL 0x0051dc05                       ; 0051dbce
        ;   XREF to: 0051dc05 (CONDITIONAL_JUMP)  ; LAB_0051dc05
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051dbd0
        ;   Label: LAB_0051dbd0
    PUSH EDI                            ; 0051dbd4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051dbd5
    PUSH EBP                            ; 0051dbd9
    LEA EAX,[EBX + 0x21b8]              ; 0051dbda
    PUSH EAX                            ; 0051dbe0
    LEA EAX,[EBX + 0x2140]              ; 0051dbe1
    PUSH EAX                            ; 0051dbe7
    MOV EAX,dword ptr [EBX + 0x2230]    ; 0051dbe8
    PUSH EAX                            ; 0051dbee
    PUSH EBX                            ; 0051dbef
    CALL FUN_0051e020                   ; 0051dbf0
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0051dbf5
    PUSH EAX                            ; 0051dbf8
    CALL FUN_00518510                   ; 0051dbf9
        ;   XREF to: 00518510 (UNCONDITIONAL_CALL)  ; undefined FUN_00518510()
    ADD ESP,0x18                        ; 0051dbfe
    POP EBP                             ; 0051dc01
    POP EDI                             ; 0051dc02
    POP EBX                             ; 0051dc03
    RET                                 ; 0051dc04
    PUSH ESI                            ; 0051dc05
        ;   Label: LAB_0051dc05
    MOV ECX,0x591bd3                    ; 0051dc06 | s_..\core\skeleton.cpp_00591bd2+1
    MOV ESI,0xd23                       ; 0051dc0b
    PUSH 0x591be8                       ; 0051dc10 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x01cc4800],ECX      ; 0051dc15 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0051dc1b | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051dc21
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0051dc26
    POP ESI                             ; 0051dc29
    JMP 0x0051dbd0                      ; 0051dc2a
        ;   XREF to: 0051dbd0 (UNCONDITIONAL_JUMP)  ; LAB_0051dbd0

