; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00576130(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fed24
;
; Called Functions:
;   FUN_00489b80
;   FUN_004ce9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576130
        ;   Label: FUN_00576130
    MOV EBX,dword ptr [ESP + 0x8]       ; 00576131
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 00576135
    TEST EDX,EDX                        ; 0057613b
    JNZ 0x00576192                      ; 0057613d
        ;   XREF to: 00576192 (CONDITIONAL_JUMP)  ; LAB_00576192
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057613f
    FLD float ptr [EAX + 0x4]           ; 00576143
    FSUBR float ptr [EBX + 0x2538]      ; 00576146
    FST float ptr [EBX + 0x2538]        ; 0057614c
    FLDZ                                ; 00576152
    FCOMPP                              ; 00576154
    FNSTSW AX                           ; 00576156
    SAHF                                ; 00576158
    JC 0x00576182                       ; 00576159
        ;   XREF to: 00576182 (CONDITIONAL_JUMP)  ; LAB_00576182
    PUSH EDX                            ; 0057615b
    PUSH 0xa                            ; 0057615c
    PUSH EDX                            ; 0057615e
    LEA EAX,[EBX + 0x20]                ; 0057615f
    PUSH EAX                            ; 00576162
    MOV ECX,dword ptr [0x005fed24]      ; 00576163 | DAT_005fed24
    PUSH ECX                            ; 00576169
    MOV dword ptr [EBX + 0x2538],EDX    ; 0057616a
    CALL FUN_004ce9c0                   ; 00576170
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce9c0()
    ADD ESP,0x14                        ; 00576175
    MOV dword ptr [EBX + 0xd210],0x1    ; 00576178
    PUSH ESI                            ; 00576182
        ;   Label: LAB_00576182
    MOV ESI,dword ptr [ESP + 0x10]      ; 00576183
    PUSH ESI                            ; 00576187
    PUSH EBX                            ; 00576188
    CALL FUN_00489b80                   ; 00576189
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 0057618e
    POP ESI                             ; 00576191
    POP EBX                             ; 00576192
        ;   Label: LAB_00576192
    RET                                 ; 00576193

