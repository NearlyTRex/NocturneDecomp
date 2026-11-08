; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00525020(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[17]:
;   FUN_00423b70 at 004240b9
;   FUN_00428ae0 at 0042a44a
;   FUN_00459100 at 0045a588
;   FUN_00460230 at 0046057e
;   FUN_004613b0 at 004614c1
;   FUN_00469550 at 00469faf
;   FUN_0046ea80 at 0046ec55
;   FUN_00476260 at 004762d8
;   FUN_004c65f0 at 004c6cd3
;   FUN_004de330 at 004dfb99
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525020
        ;   Label: FUN_00525020
    PUSH ESI                            ; 00525021
    PUSH EDI                            ; 00525022
    PUSH EBP                            ; 00525023
    SUB ESP,0xc                         ; 00525024
    MOV ESI,dword ptr [ESP + 0x20]      ; 00525027
    MOV ECX,dword ptr [ESI + 0x4]       ; 0052502b
    FLD float ptr [ESI + 0x8]           ; 0052502e
    LEA EBX,[ECX*0x8 + 0x0]             ; 00525031
    MOV EDX,dword ptr [ESI]             ; 00525038
    ADD EBX,ECX                         ; 0052503a
    ADD EDX,0x1c28                      ; 0052503c
    SHL EBX,0x5                         ; 00525042
    FLDZ                                ; 00525045
    ADD EBX,EDX                         ; 00525047
    FCOMPP                              ; 00525049
    FNSTSW AX                           ; 0052504b
    SAHF                                ; 0052504d
    JNC 0x005250bd                      ; 0052504e
        ;   XREF to: 005250bd (CONDITIONAL_JUMP)  ; LAB_005250bd
    FILD dword ptr [EBX + 0x64]         ; 00525050
    FCOMP float ptr [ESI + 0x8]         ; 00525053
    FNSTSW AX                           ; 00525056
    SAHF                                ; 00525058
    JBE 0x005250c4                      ; 00525059
        ;   XREF to: 005250c4 (CONDITIONAL_JUMP)  ; LAB_005250c4
    MOV EDX,dword ptr [EBX + 0xf4]      ; 0052505b
    XOR ECX,ECX                         ; 00525061
    XOR EDI,EDI                         ; 00525063
    TEST EDX,EDX                        ; 00525065
    JLE 0x0052508d                      ; 00525067
        ;   XREF to: 0052508d (CONDITIONAL_JUMP)  ; LAB_0052508d
    MOV EDX,EBX                         ; 00525069
    FILD dword ptr [EDX + 0xf8]         ; 0052506b
        ;   Label: LAB_0052506b
    FCOMP float ptr [ESI + 0x8]         ; 00525071
    FNSTSW AX                           ; 00525074
    SAHF                                ; 00525076
    JA 0x005250d5                       ; 00525077
        ;   XREF to: 005250d5 (CONDITIONAL_JUMP)  ; LAB_005250d5
    ADD EDX,0x4                         ; 00525079
    INC ECX                             ; 0052507c
    MOV EBP,dword ptr [EBX + 0xf4]      ; 0052507d
    MOV EDI,dword ptr [EDX + 0xf4]      ; 00525083
    CMP ECX,EBP                         ; 00525089
    JL 0x0052506b                       ; 0052508b
        ;   XREF to: 0052506b (CONDITIONAL_JUMP)  ; LAB_0052506b
    MOV dword ptr [ESP + 0x4],EDI       ; 0052508d
        ;   Label: LAB_0052508d
    MOV EDX,dword ptr [EBX + 0x64]      ; 00525091
    FILD dword ptr [ESP + 0x4]          ; 00525094
    SUB EDX,EDI                         ; 00525098
    FSUBR float ptr [ESI + 0x8]         ; 0052509a
    MOV dword ptr [ESP + 0x4],EDX       ; 0052509d
    FILD dword ptr [ESP + 0x4]          ; 005250a1
    FDIVP                               ; 005250a5
    FILD dword ptr [EBX + 0xf4]         ; 005250a7
    FADDP                               ; 005250ad
    FSTP float ptr [ESP]                ; 005250af
        ;   Label: LAB_005250af
    MOV EAX,dword ptr [ESP]             ; 005250b2
        ;   Label: LAB_005250b2
    ADD ESP,0xc                         ; 005250b5
    POP EBP                             ; 005250b8
    POP EDI                             ; 005250b9
    POP ESI                             ; 005250ba
    POP EBX                             ; 005250bb
    RET                                 ; 005250bc
    XOR ECX,ECX                         ; 005250bd
        ;   Label: LAB_005250bd
    MOV dword ptr [ESP],ECX             ; 005250bf
    JMP 0x005250b2                      ; 005250c2
        ;   XREF to: 005250b2 (UNCONDITIONAL_JUMP)  ; LAB_005250b2
    MOV EDX,dword ptr [EBX + 0xf4]      ; 005250c4
        ;   Label: LAB_005250c4
    INC EDX                             ; 005250ca
    MOV dword ptr [ESP + 0x4],EDX       ; 005250cb
    FILD dword ptr [ESP + 0x4]          ; 005250cf
    JMP 0x005250af                      ; 005250d3
        ;   XREF to: 005250af (UNCONDITIONAL_JUMP)  ; LAB_005250af
    MOV EDX,dword ptr [EDX + 0xf8]      ; 005250d5
        ;   Label: LAB_005250d5
    SUB EDX,EDI                         ; 005250db
    MOV dword ptr [ESP + 0x4],EDX       ; 005250dd
    MOV dword ptr [ESP + 0x8],EDI       ; 005250e1
    FILD dword ptr [ESP + 0x4]          ; 005250e5
    FILD dword ptr [ESP + 0x8]          ; 005250e9
    FSUBR float ptr [ESI + 0x8]         ; 005250ed
    FDIVRP                              ; 005250f0
    MOV dword ptr [ESP + 0x8],ECX       ; 005250f2
    FILD dword ptr [ESP + 0x8]          ; 005250f6
    FADDP                               ; 005250fa
    FSTP float ptr [ESP]                ; 005250fc
    MOV EAX,dword ptr [ESP]             ; 005250ff
    ADD ESP,0xc                         ; 00525102
    POP EBP                             ; 00525105
    POP EDI                             ; 00525106
    POP ESI                             ; 00525107
    POP EBX                             ; 00525108
    RET                                 ; 00525109

