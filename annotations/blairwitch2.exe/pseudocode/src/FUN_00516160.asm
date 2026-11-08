; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00516160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_005161d0
;   FUN_005168e0
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516160
        ;   Label: FUN_00516160
    PUSH ESI                            ; 00516161
    PUSH EDI                            ; 00516162
    PUSH EBP                            ; 00516163
    MOV EBX,dword ptr [ESP + 0x14]      ; 00516164
    PUSH EBX                            ; 00516168
    CALL FUN_005161d0                   ; 00516169
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005161d0()
    ADD ESP,0x4                         ; 0051616e
    PUSH 0x14                           ; 00516171
    PUSH 0x0                            ; 00516173
    PUSH EBX                            ; 00516175
    CALL FUN_005b77c0                   ; 00516176
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0051617b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051617e
    PUSH EDX                            ; 00516182
    MOV ECX,dword ptr [ESP + 0x28]      ; 00516183
    PUSH ECX                            ; 00516187
    MOV ESI,dword ptr [ESP + 0x28]      ; 00516188
    PUSH ESI                            ; 0051618c
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051618d
    PUSH EDI                            ; 00516191
    MOV EBP,dword ptr [ESP + 0x28]      ; 00516192
    PUSH EBP                            ; 00516196
    PUSH EBX                            ; 00516197
    CALL FUN_005168e0                   ; 00516198
        ;   XREF to: 005168e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005168e0()
    ADD ESP,0x18                        ; 0051619d
    MOV EAX,EBX                         ; 005161a0
    POP EBP                             ; 005161a2
    POP EDI                             ; 005161a3
    POP ESI                             ; 005161a4
    POP EBX                             ; 005161a5
    RET                                 ; 005161a6

