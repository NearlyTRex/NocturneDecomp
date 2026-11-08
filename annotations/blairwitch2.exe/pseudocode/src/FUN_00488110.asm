; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00488110(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)
;
;
; XREF[22]:
;   FUN_00411a10 at 00411de8
;   FUN_00412f40 at 004137e2
;   FUN_004186c0 at 00418e6f
;   FUN_0041dbe0 at 0041e17f
;   FUN_00436e80 at 004376b4
;   FUN_004392b0 at 004395f7
;   FUN_0045e360 at 0045e704
;   FUN_00462ff0 at 00463aff
;   FUN_0046d870 at 0046dc55
;   FUN_004c0050 at 004c048b
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_005d2da9
;   undefined4 DAT_005d2db1
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_004c9850
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488110
        ;   Label: FUN_00488110
    PUSH ESI                            ; 00488111
    PUSH EDI                            ; 00488112
    PUSH EBP                            ; 00488113
    MOV EBP,ESP                         ; 00488114
    SUB ESP,0x18                        ; 00488116
    AND ESP,0xfffffff8                  ; 00488119
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048811c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0048811f
    MOV EDX,dword ptr [EAX + 0x10a78]   ; 00488122
    TEST EDX,EDX                        ; 00488128
    JNZ 0x00488135                      ; 0048812a
        ;   XREF to: 00488135 (CONDITIONAL_JUMP)  ; LAB_00488135
    XOR EAX,EAX                         ; 0048812c
        ;   Label: LAB_0048812c
    MOV ESP,EBP                         ; 0048812e
    POP EBP                             ; 00488130
    POP EDI                             ; 00488131
    POP ESI                             ; 00488132
    POP EBX                             ; 00488133
    RET                                 ; 00488134
    MOV ECX,dword ptr [EBP + 0x20]      ; 00488135
        ;   Label: LAB_00488135
    PUSH ECX                            ; 00488138
    PUSH dword ptr [EBP + 0x1c]         ; 00488139
    PUSH ESI                            ; 0048813c
    MOV EAX,EDX                         ; 0048813d
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0048813f
    PUSH EAX                            ; 00488145
    CALL dword ptr [EDX + 0x108]        ; 00488146
    ADD ESP,0x10                        ; 0048814c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048814f
    FLDZ                                ; 00488152
    FLD float ptr [EAX + 0x4]           ; 00488154
    FSTP double ptr [ESP]               ; 00488157
    FCOMP double ptr [ESP]              ; 0048815a
    FNSTSW AX                           ; 0048815d
    SAHF                                ; 0048815f
    JNC 0x0048812c                      ; 00488160
        ;   XREF to: 0048812c (CONDITIONAL_JUMP)  ; LAB_0048812c
    FLD double ptr [ESP]                ; 00488162
    FMUL double ptr [0x005d2da9]        ; 00488165 | DAT_005d2da9
    FMUL double ptr [0x005d2db1]        ; 0048816b | DAT_005d2db1
    PUSH 0x0                            ; 00488171
    CALL FUN_005b7ff0                   ; 00488173
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 00488178
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048817c
    PUSH EBX                            ; 00488180
    LEA EDI,[ESP + 0x10]                ; 00488181
    LEA EAX,[ESP + 0x10]                ; 00488185
    PUSH 0x0                            ; 00488189
    MOVSD ES:EDI,ESI                    ; 0048818b
    MOVSD ES:EDI,ESI                    ; 0048818c
    MOVSD ES:EDI,ESI                    ; 0048818d
    PUSH EAX                            ; 0048818e
    MOV ESI,dword ptr [0x006167e0]      ; 0048818f | DAT_006167e0
    PUSH ESI                            ; 00488195
    CALL FUN_004c9850                   ; 00488196
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    MOV EAX,0x1                         ; 0048819b
    ADD ESP,0x14                        ; 004881a0
    MOV ESP,EBP                         ; 004881a3
    POP EBP                             ; 004881a5
    POP EDI                             ; 004881a6
    POP ESI                             ; 004881a7
    POP EBX                             ; 004881a8
    RET                                 ; 004881a9

