; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573010(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005726c0 at 005727a3
;
; Referenced Globals:
;   undefined4 DAT_005ec53a
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01fb5260
;   undefined4 DAT_01fb5264
;
; Called Functions:
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573010
        ;   Label: FUN_00573010
    PUSH ESI                            ; 00573011
    PUSH EDI                            ; 00573012
    PUSH EBP                            ; 00573013
    MOV EBP,ESP                         ; 00573014
    SUB ESP,0x2c                        ; 00573016
    AND ESP,0xfffffff8                  ; 00573019
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057301c
    XOR EDX,EDX                         ; 0057301f
    ADD EAX,0x20                        ; 00573021
    MOV dword ptr [ESP + 0x28],EDX      ; 00573024
    MOV dword ptr [ESP + 0x24],EDX      ; 00573028
    MOV dword ptr [ESP + 0x20],EAX      ; 0057302c
    MOV EAX,[0x0061b5a8]                ; 00573030 | DAT_0061b5a8
        ;   Label: LAB_00573030
    MOV EBX,dword ptr [ESP + 0x24]      ; 00573035
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00573039 | DAT_01fb5260
    JGE 0x005730ff                      ; 0057303f
        ;   XREF to: 005730ff (CONDITIONAL_JUMP)  ; LAB_005730ff
    ADD EAX,dword ptr [ESP + 0x28]      ; 00573045
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00573049 | DAT_01fb5264
    CMP EBX,dword ptr [EBP + 0x14]      ; 0057304f
    JNZ 0x0057306a                      ; 00573052
        ;   XREF to: 0057306a (CONDITIONAL_JUMP)  ; LAB_0057306a
    MOV EBX,dword ptr [ESP + 0x24]      ; 00573054
        ;   Label: LAB_00573054
    MOV ECX,dword ptr [ESP + 0x28]      ; 00573058
    INC EBX                             ; 0057305c
    ADD ECX,0x4                         ; 0057305d
    MOV dword ptr [ESP + 0x24],EBX      ; 00573060
    MOV dword ptr [ESP + 0x28],ECX      ; 00573064
    JMP 0x00573030                      ; 00573068
        ;   XREF to: 00573030 (UNCONDITIONAL_JUMP)  ; LAB_00573030
    MOV EDX,dword ptr [EBP + 0x18]      ; 0057306a
        ;   Label: LAB_0057306a
    PUSH EDX                            ; 0057306d
    PUSH EBX                            ; 0057306e
    CALL FUN_0040c840                   ; 0057306f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00573074
    TEST EAX,EAX                        ; 00573077
    JZ 0x00573054                       ; 00573079
        ;   XREF to: 00573054 (CONDITIONAL_JUMP)  ; LAB_00573054
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057307b
    LEA EAX,[EBX + 0x20]                ; 0057307f
    MOV EDI,ESP                         ; 00573082
    LEA ESI,[ESP + 0xc]                 ; 00573084
    FLD float ptr [EAX]                 ; 00573088
    FLD float ptr [EAX + 0x4]           ; 0057308a
    FLD float ptr [EAX + 0x8]           ; 0057308d
    FXCH ST2                            ; 00573090
    FSUB float ptr [EDX]                ; 00573092
    FXCH                                ; 00573094
    FSUB float ptr [EDX + 0x4]          ; 00573096
    FXCH ST2                            ; 00573099
    FSUB float ptr [EDX + 0x8]          ; 0057309b
    FXCH                                ; 0057309e
    FSTP float ptr [ESP + 0xc]          ; 005730a0
    FXCH                                ; 005730a4
    FSTP float ptr [ESP + 0x10]         ; 005730a6
    FSTP float ptr [ESP + 0x14]         ; 005730aa
    MOVSD ES:EDI,ESI                    ; 005730ae
    MOVSD ES:EDI,ESI                    ; 005730af
    MOVSD ES:EDI,ESI                    ; 005730b0
    FLD float ptr [ESP + 0x4]           ; 005730b1
    FLD ST0                             ; 005730b5
    FMUL double ptr [0x005ec53a]        ; 005730b7 | DAT_005ec53a
    FSTP ST1                            ; 005730bd
    FST float ptr [ESP + 0x4]           ; 005730bf
    FMUL float ptr [ESP + 0x4]          ; 005730c3
    FLD float ptr [ESP]                 ; 005730c7
    FMUL ST0                            ; 005730ca
    FADDP                               ; 005730cc
    FLD float ptr [ESP + 0x8]           ; 005730ce
    FMUL ST0                            ; 005730d2
    FADDP                               ; 005730d4
    FSQRT                               ; 005730d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005730d8
    FCOMP float ptr [EAX + 0x10a70]     ; 005730db
    FNSTSW AX                           ; 005730e1
    SAHF                                ; 005730e3
    JNC 0x00573054                      ; 005730e4
        ;   XREF to: 00573054 (CONDITIONAL_JUMP)  ; LAB_00573054
    MOV EAX,dword ptr [EBP + 0x14]      ; 005730ea
    MOV dword ptr [EAX + 0x10a78],EBX   ; 005730ed
    MOV EAX,0x1                         ; 005730f3
    MOV ESP,EBP                         ; 005730f8
    POP EBP                             ; 005730fa
    POP EDI                             ; 005730fb
    POP ESI                             ; 005730fc
    POP EBX                             ; 005730fd
    RET                                 ; 005730fe
    XOR EAX,EAX                         ; 005730ff
        ;   Label: LAB_005730ff
    MOV ESP,EBP                         ; 00573101
    POP EBP                             ; 00573103
    POP EDI                             ; 00573104
    POP ESI                             ; 00573105
    POP EBX                             ; 00573106
    RET                                 ; 00573107

