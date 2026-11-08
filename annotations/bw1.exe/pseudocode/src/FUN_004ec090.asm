; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004ec090(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004eca10 at 004eca95
;
; Referenced Globals:
;   undefined4 DAT_005e492d
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec090
        ;   Label: FUN_004ec090
    PUSH ESI                            ; 004ec091
    PUSH EDI                            ; 004ec092
    PUSH EBP                            ; 004ec093
    MOV EBP,ESP                         ; 004ec094
    SUB ESP,0xc                         ; 004ec096
    AND ESP,0xfffffff8                  ; 004ec099
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ec09c
    MOV EDX,0x7149f2ca                  ; 004ec09f
    XOR ECX,ECX                         ; 004ec0a4
    MOV dword ptr [ESP],EDX             ; 004ec0a6
    MOV dword ptr [ESP + 0x8],ECX       ; 004ec0a9
    MOV dword ptr [ESP + 0x4],ECX       ; 004ec0ad
    MOV EAX,[0x00622c18]                ; 004ec0b1 | DAT_00622c18
        ;   Label: LAB_004ec0b1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ec0b6
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004ec0ba | DAT_01fcf2cc
    JGE 0x004ec197                      ; 004ec0c0
        ;   XREF to: 004ec197 (CONDITIONAL_JUMP)  ; LAB_004ec197
    ADD EAX,dword ptr [ESP + 0x4]       ; 004ec0c6
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004ec0ca | DAT_01fcf2d0
    FLD float ptr [EBX + 0x20]          ; 004ec0d0
    FSUB float ptr [ESI + 0x20]         ; 004ec0d3
    FABS                                ; 004ec0d6
    FCOMP double ptr [0x005e492d]       ; 004ec0d8 | DAT_005e492d
    FNSTSW AX                           ; 004ec0de
    SAHF                                ; 004ec0e0
    JBE 0x004ec0f9                      ; 004ec0e1
        ;   XREF to: 004ec0f9 (CONDITIONAL_JUMP)  ; LAB_004ec0f9
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ec0e3
        ;   Label: LAB_004ec0e3
    MOV EBX,dword ptr [ESP + 0x4]       ; 004ec0e7
    INC EDI                             ; 004ec0eb
    ADD EBX,0x4                         ; 004ec0ec
    MOV dword ptr [ESP + 0x8],EDI       ; 004ec0ef
    MOV dword ptr [ESP + 0x4],EBX       ; 004ec0f3
    JMP 0x004ec0b1                      ; 004ec0f7
        ;   XREF to: 004ec0b1 (UNCONDITIONAL_JUMP)  ; LAB_004ec0b1
    FLD float ptr [EBX + 0x24]          ; 004ec0f9
        ;   Label: LAB_004ec0f9
    FSUB float ptr [ESI + 0x24]         ; 004ec0fc
    FABS                                ; 004ec0ff
    FCOMP double ptr [0x005e492d]       ; 004ec101 | DAT_005e492d
    FNSTSW AX                           ; 004ec107
    SAHF                                ; 004ec109
    JA 0x004ec0e3                       ; 004ec10a
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    FLD float ptr [EBX + 0x28]          ; 004ec10c
    FSUB float ptr [ESI + 0x28]         ; 004ec10f
    FABS                                ; 004ec112
    FCOMP double ptr [0x005e492d]       ; 004ec114 | DAT_005e492d
    FNSTSW AX                           ; 004ec11a
    SAHF                                ; 004ec11c
    JA 0x004ec0e3                       ; 004ec11d
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    CMP EBX,ESI                         ; 004ec11f
    JZ 0x004ec0e3                       ; 004ec121
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    PUSH EBX                            ; 004ec123
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec124
    CALL dword ptr [EAX + 0x94]         ; 004ec12a
    ADD ESP,0x4                         ; 004ec130
    TEST EAX,EAX                        ; 004ec133
    JNZ 0x004ec0e3                      ; 004ec135
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    PUSH ESI                            ; 004ec137
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec138
    PUSH EBX                            ; 004ec13e
    CALL dword ptr [EAX + 0x84]         ; 004ec13f
    MOV EDI,EAX                         ; 004ec145
    ADD ESP,0x8                         ; 004ec147
    TEST EAX,EAX                        ; 004ec14a
    JZ 0x004ec0e3                       ; 004ec14c
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ec14e
    PUSH ECX                            ; 004ec151
    PUSH EBX                            ; 004ec152
    CALL FUN_0040c550                   ; 004ec153
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004ec158
    TEST EAX,EAX                        ; 004ec15b
    JZ 0x004ec0e3                       ; 004ec15d
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    MOV EAX,ESP                         ; 004ec15f
    PUSH EAX                            ; 004ec161
    PUSH EDI                            ; 004ec162
    PUSH EBX                            ; 004ec163
    MOV EDX,dword ptr [ESI + 0x154]     ; 004ec164
    PUSH ESI                            ; 004ec16a
    CALL dword ptr [EDX + 0x154]        ; 004ec16b
    ADD ESP,0x10                        ; 004ec171
    TEST EAX,EAX                        ; 004ec174
    JZ 0x004ec0e3                       ; 004ec176
        ;   XREF to: 004ec0e3 (CONDITIONAL_JUMP)  ; LAB_004ec0e3
    MOV dword ptr [ESI + 0x1ff60],0x4   ; 004ec17c
    MOV dword ptr [ESI + 0x1ff64],EBX   ; 004ec186
    MOV dword ptr [ESI + 0x1ff68],EBX   ; 004ec18c
    JMP 0x004ec0e3                      ; 004ec192
        ;   XREF to: 004ec0e3 (UNCONDITIONAL_JUMP)  ; LAB_004ec0e3
    CMP dword ptr [ESI + 0x1ff60],0x4   ; 004ec197
        ;   Label: LAB_004ec197
    SETZ AL                             ; 004ec19e
    AND EAX,0xff                        ; 004ec1a1
    MOV ESP,EBP                         ; 004ec1a6
    POP EBP                             ; 004ec1a8
    POP EDI                             ; 004ec1a9
    POP ESI                             ; 004ec1aa
    POP EBX                             ; 004ec1ab
    RET                                 ; 004ec1ac

