; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f70a0(int *param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   FUN_004bf4b0 at 004bf8d1
;
; Referenced Globals:
;   undefined4 DAT_006039e0
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d88308
;   undefined4 DAT_01ed73f0
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_0040d300
;   FUN_0040d400
;   FUN_0040d460
;   FUN_0040dbe0
;   FUN_004f6ca0
;   FUN_004f6de0
;   FUN_004f6f80
;   FUN_00534420
;   FUN_00537520
;   FUN_00565820
;   FUN_00565870
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f70a0
        ;   Label: FUN_004f70a0
    PUSH ESI                            ; 004f70a1
    PUSH EDI                            ; 004f70a2
    PUSH EBP                            ; 004f70a3
    SUB ESP,0x14                        ; 004f70a4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f70a7
    MOV EDX,dword ptr [EDI + 0x1018]    ; 004f70ab
    TEST EDX,EDX                        ; 004f70b1
    JZ 0x004f70fa                       ; 004f70b3
        ;   XREF to: 004f70fa (CONDITIONAL_JUMP)  ; LAB_004f70fa
    XOR ESI,ESI                         ; 004f70b5
    TEST EDX,EDX                        ; 004f70b7
    JLE 0x004f70f0                      ; 004f70b9
        ;   XREF to: 004f70f0 (CONDITIONAL_JUMP)  ; LAB_004f70f0
    MOV EBX,EDI                         ; 004f70bb
    MOV EBP,dword ptr [EBX + 0x11ac]    ; 004f70bd
        ;   Label: LAB_004f70bd
    PUSH EBP                            ; 004f70c3
    MOV EAX,dword ptr [EBX + 0x101c]    ; 004f70c4
    PUSH EAX                            ; 004f70ca
    PUSH EDI                            ; 004f70cb
    ADD EBX,0x4                         ; 004f70cc
    INC ESI                             ; 004f70cf
    CALL FUN_004f6ca0                   ; 004f70d0
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6ca0()
    MOV EDX,dword ptr [EDI + 0x1018]    ; 004f70d5
    ADD ESP,0xc                         ; 004f70db
    CMP ESI,EDX                         ; 004f70de
    JL 0x004f70bd                       ; 004f70e0
        ;   XREF to: 004f70bd (CONDITIONAL_JUMP)  ; LAB_004f70bd
    LEA EAX,[EAX]                       ; 004f70e2
    LEA EDX,[EDX]                       ; 004f70e8
    MOV EAX,EAX                         ; 004f70ee
    MOV dword ptr [EDI + 0x1018],0x0    ; 004f70f0
        ;   Label: LAB_004f70f0
    PUSH EDI                            ; 004f70fa
        ;   Label: LAB_004f70fa
    CALL FUN_004f6f80                   ; 004f70fb
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6f80()
    MOV ECX,dword ptr [EDI + 0x1450]    ; 004f7100
    ADD ESP,0x4                         ; 004f7106
    TEST ECX,ECX                        ; 004f7109
    JL 0x004f7177                       ; 004f710b
        ;   XREF to: 004f7177 (CONDITIONAL_JUMP)  ; LAB_004f7177
    MOV EBX,dword ptr [0x01d5ba14]      ; 004f710d | DAT_01d5ba14
    LEA ESI,[EDI + 0x1444]              ; 004f7113
    MOV EBX,dword ptr [EBX*0x4 + 0x1d5ba04] ; 004f7119
    MOV EAX,dword ptr [ESI]             ; 004f7120
    MOV dword ptr [EBX + 0x20],EAX      ; 004f7122
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f7125
    MOV dword ptr [EBX + 0x24],EAX      ; 004f7128
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f712b
    MOV dword ptr [EBX + 0x28],EAX      ; 004f712e
    MOV ESI,dword ptr [ESI + 0xc]       ; 004f7131
    MOV dword ptr [EBX + 0x2c],ESI      ; 004f7134
    MOV EBX,dword ptr [EDI + 0x1450]    ; 004f7137
    CMP EBX,dword ptr [EDI]             ; 004f713d
    JNZ 0x004f717f                      ; 004f713f
        ;   XREF to: 004f717f (CONDITIONAL_JUMP)  ; LAB_004f717f
    MOV dword ptr [EDI + 0x1014],0x0    ; 004f7141
        ;   Label: LAB_004f7141
    MOV dword ptr [EDI + 0x1450],0xffffffff ; 004f714b
    MOV dword ptr [EDI + 0x144c],0x0    ; 004f7155
    MOV EAX,dword ptr [EDI + 0x144c]    ; 004f715f
    MOV dword ptr [EDI + 0x1448],EAX    ; 004f7165
    MOV EAX,dword ptr [EDI + 0x1448]    ; 004f716b
    MOV dword ptr [EDI + 0x1444],EAX    ; 004f7171
    ADD ESP,0x14                        ; 004f7177
        ;   Label: LAB_004f7177
    POP EBP                             ; 004f717a
    POP EDI                             ; 004f717b
    POP ESI                             ; 004f717c
    POP EBX                             ; 004f717d
    RET                                 ; 004f717e
    MOV EBX,ESP                         ; 004f717f
        ;   Label: LAB_004f717f
    PUSH EBX                            ; 004f7181
    CALL FUN_0040d2e0                   ; 004f7182
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 004f7187
    MOV EBX,ESP                         ; 004f718a
    PUSH EBX                            ; 004f718c
    CALL FUN_0040d400                   ; 004f718d
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004f7192
    PUSH 0x1e0                          ; 004f7195
    PUSH 0x280                          ; 004f719a
    PUSH 0x1d88308                      ; 004f719f | DAT_01d88308
    LEA EBX,[ESP + 0xc]                 ; 004f71a4
    PUSH EBX                            ; 004f71a8
    CALL FUN_0040d460                   ; 004f71a9
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004f71ae
    XOR EBX,EBX                         ; 004f71b1
    MOV ESI,ESP                         ; 004f71b3
        ;   Label: LAB_004f71b3
    CALL FUN_00565820                   ; 004f71b5
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined FUN_00565820()
    PUSH ESI                            ; 004f71ba
    CALL FUN_0040dbe0                   ; 004f71bb
        ;   XREF to: 0040dbe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dbe0()
    ADD ESP,0x4                         ; 004f71c0
    PUSH 0x0                            ; 004f71c3
    CALL FUN_00565870                   ; 004f71c5
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; undefined FUN_00565870()
    ADD ESP,0x4                         ; 004f71ca
    INC EBX                             ; 004f71cd
    CALL FUN_0057a8a0                   ; 004f71ce
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    CMP EBX,0x3                         ; 004f71d3
    JL 0x004f71b3                       ; 004f71d6
        ;   XREF to: 004f71b3 (CONDITIONAL_JUMP)  ; LAB_004f71b3
    MOV EBP,dword ptr [EDI + 0x1450]    ; 004f71d8
    PUSH EBP                            ; 004f71de
    PUSH EDI                            ; 004f71df
    CALL FUN_004f6de0                   ; 004f71e0
        ;   XREF to: 004f6de0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6de0()
    ADD ESP,0x8                         ; 004f71e5
    MOV EAX,[0x00603b28]                ; 004f71e8 | DAT_00603b28
    PUSH EAX                            ; 004f71ed | DAT_01ed78c8
    CALL FUN_00537520                   ; 004f71ee
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; undefined FUN_00537520()
    ADD ESP,0x4                         ; 004f71f3
    MOV EDX,dword ptr [0x00603b28]      ; 004f71f6 | DAT_00603b28
    PUSH EDX                            ; 004f71fc | DAT_01ed78c8
    CALL FUN_00534420                   ; 004f71fd
        ;   XREF to: 00534420 (UNCONDITIONAL_CALL)  ; undefined FUN_00534420()
    ADD ESP,0x4                         ; 004f7202
    MOV EBX,dword ptr [0x006039e0]      ; 004f7205 | DAT_006039e0
    PUSH 0x0                            ; 004f720b
    MOV dword ptr [EBX + 0x10],0x2      ; 004f720d | DAT_01ed73f0
    LEA EBX,[ESP + 0x4]                 ; 004f7214
    PUSH EBX                            ; 004f7218
    CALL FUN_0040d300                   ; 004f7219
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d300()
    ADD ESP,0x8                         ; 004f721e
    JMP 0x004f7141                      ; 004f7221
        ;   XREF to: 004f7141 (UNCONDITIONAL_JUMP)  ; LAB_004f7141

