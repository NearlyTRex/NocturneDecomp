; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567180(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00565730 at 00565749
;
; Called Functions:
;   FUN_00563c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567180
        ;   Label: FUN_00567180
    PUSH ESI                            ; 00567181
    PUSH EDI                            ; 00567182
    PUSH EBP                            ; 00567183
    MOV EBP,ESP                         ; 00567184
    SUB ESP,0x14                        ; 00567186
    AND ESP,0xfffffff8                  ; 00567189
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056718c
    PUSH EBX                            ; 0056718f
    CALL FUN_00563c40                   ; 00567190
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c40()
    XOR ESI,ESI                         ; 00567195
    ADD ESP,0x4                         ; 00567197
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056719a
    MOV EDI,EAX                         ; 005671a0
    TEST EDX,EDX                        ; 005671a2
    JLE 0x0056720f                      ; 005671a4
        ;   XREF to: 0056720f (CONDITIONAL_JUMP)  ; LAB_0056720f
    LEA EAX,[EBX + 0x2290]              ; 005671a6
    MOV dword ptr [ESP],EAX             ; 005671ac
    MOV dword ptr [ESP + 0x4],EBX       ; 005671af
    MOV EAX,dword ptr [ESP + 0x4]       ; 005671b3
        ;   Label: LAB_005671b3
    XOR ECX,ECX                         ; 005671b7
    MOV dword ptr [EAX + 0x33cc],0xffffffff ; 005671b9
    XOR EAX,EAX                         ; 005671c3
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 005671c5
    MOV dword ptr [ESP + 0xc],EAX       ; 005671cb
    TEST EDX,EDX                        ; 005671cf
    JLE 0x005671f9                      ; 005671d1
        ;   XREF to: 005671f9 (CONDITIONAL_JUMP)  ; LAB_005671f9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005671d3
    MOV EDX,dword ptr [ESP]             ; 005671d7
    MOV EBX,EDI                         ; 005671da
    MOV dword ptr [ESP + 0x8],EAX       ; 005671dc
    CMP ESI,dword ptr [EBX + 0x1de9c]   ; 005671e0
        ;   Label: LAB_005671e0
    JZ 0x00567216                       ; 005671e6
        ;   XREF to: 00567216 (CONDITIONAL_JUMP)  ; LAB_00567216
    ADD EBX,0x24                        ; 005671e8
        ;   Label: LAB_005671e8
    INC ECX                             ; 005671eb
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 005671ec
    ADD EDX,0xc                         ; 005671f2
    CMP ECX,EAX                         ; 005671f5
    JL 0x005671e0                       ; 005671f7
        ;   XREF to: 005671e0 (CONDITIONAL_JUMP)  ; LAB_005671e0
    MOV ECX,dword ptr [ESP + 0x4]       ; 005671f9
        ;   Label: LAB_005671f9
    INC ESI                             ; 005671fd
    ADD ECX,0x4                         ; 005671fe
    MOV EBX,dword ptr [EDI + 0x1de78]   ; 00567201
    MOV dword ptr [ESP + 0x4],ECX       ; 00567207
    CMP ESI,EBX                         ; 0056720b
    JL 0x005671b3                       ; 0056720d
        ;   XREF to: 005671b3 (CONDITIONAL_JUMP)  ; LAB_005671b3
    MOV ESP,EBP                         ; 0056720f
        ;   Label: LAB_0056720f
    POP EBP                             ; 00567211
    POP EDI                             ; 00567212
    POP ESI                             ; 00567213
    POP EBX                             ; 00567214
    RET                                 ; 00567215
    FLD float ptr [EDX + 0x4]           ; 00567216
        ;   Label: LAB_00567216
    FMUL ST0                            ; 00567219
    FLD float ptr [EDX]                 ; 0056721b
    FMUL ST0                            ; 0056721d
    FADDP                               ; 0056721f
    FLD float ptr [EDX + 0x8]           ; 00567221
    FMUL ST0                            ; 00567224
    FADDP                               ; 00567226
    FSQRT                               ; 00567228
    FST float ptr [ESP + 0x10]          ; 0056722a
    FCOMP float ptr [ESP + 0xc]         ; 0056722e
    FNSTSW AX                           ; 00567232
    SAHF                                ; 00567234
    JBE 0x005671e8                      ; 00567235
        ;   XREF to: 005671e8 (CONDITIONAL_JUMP)  ; LAB_005671e8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00567237
    MOV dword ptr [EAX + 0x33cc],ECX    ; 0056723b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00567241
    MOV dword ptr [ESP + 0xc],EAX       ; 00567245
    JMP 0x005671e8                      ; 00567249
        ;   XREF to: 005671e8 (UNCONDITIONAL_JUMP)  ; LAB_005671e8

