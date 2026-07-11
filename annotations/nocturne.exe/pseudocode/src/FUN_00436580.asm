; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00436580(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00436e80 at 0043705d
;
; Called Functions:
;   FUN_0055aa00
;   FUN_0055bd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436580
        ;   Label: FUN_00436580
    PUSH ESI                            ; 00436581
    PUSH EDI                            ; 00436582
    SUB ESP,0x12c                       ; 00436583
    IMUL EBX,dword ptr [ESP + 0x140],0xac ; 00436589
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00436594
    ADD EAX,0x37b50                     ; 0043659b
    ADD EBX,EAX                         ; 004365a0
    MOV ESI,dword ptr [EBX + 0x40]      ; 004365a2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004365a5
    SUB EAX,ESI                         ; 004365ac
    MOV ESI,EAX                         ; 004365ae
    MOV EAX,dword ptr [ESP + 0x144]     ; 004365b0
    SHL ESI,0x4                         ; 004365b7
    ADD EAX,0xe80                       ; 004365ba
    ADD EAX,ESI                         ; 004365bf
    PUSH EAX                            ; 004365c1
    LEA ESI,[ESP + 0xf4]                ; 004365c2
    LEA EDI,[ESP + 0xc4]                ; 004365c9
    CALL FUN_0055bd00                   ; 004365d0
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bd00()
    MOV ECX,0xc                         ; 004365d5
    ADD ESP,0x4                         ; 004365da
    LEA EAX,[EBX + 0x48]                ; 004365dd
    LEA ESI,[ESP + 0xf0]                ; 004365e0
    PUSH EAX                            ; 004365e7
    LEA EAX,[ESP + 0xc4]                ; 004365e8
    MOVSD.REP ES:EDI,ESI                ; 004365ef
    PUSH EAX                            ; 004365f1
    LEA ESI,[ESP + 0x68]                ; 004365f2
    LEA EDI,[ESP + 0x8]                 ; 004365f6
    CALL FUN_0055aa00                   ; 004365fa
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 004365ff
    LEA ESI,[ESP + 0x68]                ; 00436604
    ADD ESP,0x8                         ; 00436608
    MOVSD.REP ES:EDI,ESI                ; 0043660b
    MOV EAX,dword ptr [ESP]             ; 0043660d
    MOV dword ptr [EBX + 0x78],EAX      ; 00436610
    MOV EAX,dword ptr [ESP + 0x10]      ; 00436613
    MOV dword ptr [EBX + 0x7c],EAX      ; 00436617
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043661a
    MOV dword ptr [EBX + 0x80],EAX      ; 0043661e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00436624
    MOV dword ptr [EBX + 0x84],EAX      ; 00436628
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043662e
    MOV dword ptr [EBX + 0x88],EAX      ; 00436632
    MOV EAX,dword ptr [ESP + 0x24]      ; 00436638
    MOV dword ptr [EBX + 0x8c],EAX      ; 0043663c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00436642
    MOV dword ptr [EBX + 0x90],EAX      ; 00436646
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043664c
    MOV dword ptr [EBX + 0x94],EAX      ; 00436650
    MOV EAX,dword ptr [ESP + 0x28]      ; 00436656
    MOV dword ptr [EBX + 0x98],EAX      ; 0043665a
    MOV EAX,ESP                         ; 00436660
    PUSH EAX                            ; 00436662
    LEA ESI,[ESP + 0x34]                ; 00436663
    LEA EDI,[ESP + 0x94]                ; 00436667
    CALL FUN_0055bd00                   ; 0043666e
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bd00()
    MOV ECX,0xc                         ; 00436673
    LEA ESI,[ESP + 0x34]                ; 00436678
    ADD ESP,0x4                         ; 0043667c
    MOVSD.REP ES:EDI,ESI                ; 0043667f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00436681
    MOV dword ptr [ESP + 0x120],EAX     ; 00436688
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043668f
    MOV dword ptr [ESP + 0x124],EAX     ; 00436696
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0043669d
    ADD EBX,0xa0                        ; 004366a4
    MOV dword ptr [ESP + 0x128],EAX     ; 004366aa
    LEA EAX,[ESP + 0x120]               ; 004366b1
    CMP EBX,EAX                         ; 004366b8
    JNZ 0x004366c6                      ; 004366ba
        ;   XREF to: 004366c6 (CONDITIONAL_JUMP)  ; LAB_004366c6
    ADD ESP,0x12c                       ; 004366bc
    POP EDI                             ; 004366c2
    POP ESI                             ; 004366c3
    POP EBX                             ; 004366c4
    RET                                 ; 004366c5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004366c6
        ;   Label: LAB_004366c6
    MOV dword ptr [EBX],EAX             ; 004366cd
    MOV EAX,dword ptr [ESP + 0x124]     ; 004366cf
    MOV dword ptr [EBX + 0x4],EAX       ; 004366d6
    MOV EAX,dword ptr [ESP + 0x128]     ; 004366d9
    MOV dword ptr [EBX + 0x8],EAX       ; 004366e0
    ADD ESP,0x12c                       ; 004366e3
    POP EDI                             ; 004366e9
    POP ESI                             ; 004366ea
    POP EBX                             ; 004366eb
    RET                                 ; 004366ec

