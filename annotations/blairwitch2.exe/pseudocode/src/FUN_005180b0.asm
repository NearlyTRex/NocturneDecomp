; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005180b0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00438490 at 00438497
;   FUN_004f2100 at 004f2105
;
; Called Functions:
;   FUN_00408790
;   FUN_00438a50
;   FUN_0044fc80
;   FUN_0044fd70
;   FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005180b0
        ;   Label: FUN_005180b0
    SUB ESP,0x10                        ; 005180b1
    MOV EBX,dword ptr [ESP + 0x18]      ; 005180b4
    PUSH EDI                            ; 005180b8
    PUSH ESI                            ; 005180b9
    PUSH EBX                            ; 005180ba
    CALL FUN_00408790                   ; 005180bb
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 005180c0
    ADD EAX,0x2b4                       ; 005180c3
    PUSH EAX                            ; 005180c8
    CALL FUN_0044fc80                   ; 005180c9
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 005180ce
    ADD EAX,0x1b8                       ; 005180d1
    PUSH EAX                            ; 005180d6
    CALL FUN_00438a50                   ; 005180d7
        ;   XREF to: 00438a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a50()
    ADD ESP,0x4                         ; 005180dc
    LEA EBX,[EAX + 0xfffffb94]          ; 005180df
    PUSH 0x5e21ba                       ; 005180e5
    LEA EAX,[EBX + 0x2b4]               ; 005180ea
    PUSH EAX                            ; 005180f0
    MOV dword ptr [EBX + 0x2b0],0x5fac54 ; 005180f1
    CALL FUN_0044fd70                   ; 005180fb
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV byte ptr [EBX + 0x4b0],0x0      ; 00518100
    MOV byte ptr [EBX + 0x514],0x0      ; 00518107
    MOV byte ptr [EBX + 0x578],0x0      ; 0051810e
    MOV byte ptr [EBX + 0x5dc],0x0      ; 00518115
    MOV byte ptr [EBX + 0x5f0],0x0      ; 0051811c
    MOV byte ptr [EBX + 0x604],0x0      ; 00518123
    MOV dword ptr [EBX + 0x430],0x0     ; 0051812a
    MOV dword ptr [EBX + 0x438],0x0     ; 00518134
    MOV dword ptr [EBX + 0x448],0x40000000 ; 0051813e
    MOV dword ptr [EBX + 0x444],0x40000000 ; 00518148
    ADD ESP,0x8                         ; 00518152
    MOV dword ptr [EBX + 0x434],0x0     ; 00518155
    LEA EAX,[EBX + 0x484]               ; 0051815f
    MOV byte ptr [EBX + 0x44c],0x0      ; 00518165
    LEA EDX,[EBX + 0x20]                ; 0051816c
    MOV ECX,EAX                         ; 0051816f
    CMP EAX,EDX                         ; 00518171
    JNZ 0x00518249                      ; 00518173
        ;   XREF to: 00518249 (CONDITIONAL_JUMP)  ; LAB_00518249
    LEA EAX,[EBX + 0x478]               ; 00518179
        ;   Label: LAB_00518179
    CMP EAX,ECX                         ; 0051817f
    JNZ 0x0051825e                      ; 00518181
        ;   XREF to: 0051825e (CONDITIONAL_JUMP)  ; LAB_0051825e
    LEA EAX,[EBX + 0x30]                ; 00518187
        ;   Label: LAB_00518187
    PUSH EAX                            ; 0051818a
    LEA ESI,[ESP + 0xc]                 ; 0051818b
    CALL FUN_00594380                   ; 0051818f
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    LEA ESI,[ESP + 0xc]                 ; 00518194
    LEA EDI,[EBX + 0x4a0]               ; 00518198
    ADD ESP,0x4                         ; 0051819e
    MOVSD ES:EDI,ESI                    ; 005181a1
    MOVSD ES:EDI,ESI                    ; 005181a2
    MOVSD ES:EDI,ESI                    ; 005181a3
    MOVSD ES:EDI,ESI                    ; 005181a4
    LEA EDI,[EBX + 0x490]               ; 005181a5
    LEA ESI,[EBX + 0x4a0]               ; 005181ab
    MOVSD ES:EDI,ESI                    ; 005181b1
    MOVSD ES:EDI,ESI                    ; 005181b2
    MOVSD ES:EDI,ESI                    ; 005181b3
    MOVSD ES:EDI,ESI                    ; 005181b4
    MOV dword ptr [EBX + 0x61c],0x0     ; 005181b5
    MOV dword ptr [EBX + 0x620],0x0     ; 005181bf
    MOV dword ptr [EBX + 0x624],0x0     ; 005181c9
    MOV byte ptr [EBX + 0x628],0x0      ; 005181d3
    MOV dword ptr [EBX + 0x880],0x0     ; 005181da
    MOV dword ptr [EBX + 0x64],0x32     ; 005181e4
    MOV dword ptr [EBX + 0x668],0x0     ; 005181eb
    MOV EAX,EBX                         ; 005181f5
    MOV dword ptr [EBX + 0x43c],0x0     ; 005181f7
    LEA EDX,[EBX + 0x208]               ; 00518201
    MOV dword ptr [EBX + 0x440],0x0     ; 00518207
    POP ESI                             ; 00518211
    POP EDI                             ; 00518212
    ADD EAX,0x34                        ; 00518213
        ;   Label: LAB_00518213
    MOV dword ptr [EAX + 0x644],0x0     ; 00518216
    CMP EAX,EDX                         ; 00518220
    JNZ 0x00518213                      ; 00518222
        ;   XREF to: 00518213 (CONDITIONAL_JUMP)  ; LAB_00518213
    MOV dword ptr [EBX + 0x670],0x0     ; 00518224
    MOV dword ptr [EBX + 0x674],0x1     ; 0051822e
    MOV EAX,EBX                         ; 00518238
    MOV dword ptr [EBX + 0x66c],0x0     ; 0051823a
    ADD ESP,0x10                        ; 00518244
    POP EBX                             ; 00518247
    RET                                 ; 00518248
    MOV ESI,dword ptr [EDX]             ; 00518249
        ;   Label: LAB_00518249
    MOV dword ptr [EAX],ESI             ; 0051824b
    MOV ESI,dword ptr [EDX + 0x4]       ; 0051824d
    MOV dword ptr [EAX + 0x4],ESI       ; 00518250
    MOV ESI,dword ptr [EDX + 0x8]       ; 00518253
    MOV dword ptr [EAX + 0x8],ESI       ; 00518256
    JMP 0x00518179                      ; 00518259
        ;   XREF to: 00518179 (UNCONDITIONAL_JUMP)  ; LAB_00518179
    MOV EDX,dword ptr [ECX]             ; 0051825e
        ;   Label: LAB_0051825e
    MOV dword ptr [EAX],EDX             ; 00518260
    MOV EDX,dword ptr [ECX + 0x4]       ; 00518262
    MOV dword ptr [EAX + 0x4],EDX       ; 00518265
    MOV EDX,dword ptr [ECX + 0x8]       ; 00518268
    MOV dword ptr [EAX + 0x8],EDX       ; 0051826b
    JMP 0x00518187                      ; 0051826e
        ;   XREF to: 00518187 (UNCONDITIONAL_JUMP)  ; LAB_00518187

