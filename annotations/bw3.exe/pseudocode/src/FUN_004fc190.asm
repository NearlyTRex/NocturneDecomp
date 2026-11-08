; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc190(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_004fbb70 at 004fbe98
;   FUN_004fbf20 at 004fbfe9
;
; Referenced Globals:
;   undefined4 DAT_005c9d00
;
; Called Functions:
;   FUN_004fc070
;   FUN_004fc420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc190
        ;   Label: FUN_004fc190
    PUSH ESI                            ; 004fc191
    PUSH EDI                            ; 004fc192
    PUSH EBP                            ; 004fc193
    SUB ESP,0x8                         ; 004fc194
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004fc197
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fc19b
    MOV EAX,dword ptr [ESI + 0xc]       ; 004fc19f
    MOV dword ptr [ESP],EAX             ; 004fc1a2
    FLD float ptr [ESP]                 ; 004fc1a5
    FCOMP float ptr [0x005c9d00]        ; 004fc1a8 | DAT_005c9d00
    FNSTSW AX                           ; 004fc1ae
    SAHF                                ; 004fc1b0
    JZ 0x004fc1f7                       ; 004fc1b1
        ;   XREF to: 004fc1f7 (CONDITIONAL_JUMP)  ; LAB_004fc1f7
    FLD float ptr [ESI + 0x10]          ; 004fc1b3
        ;   Label: LAB_004fc1b3
    FLDZ                                ; 004fc1b6
    FCOMPP                              ; 004fc1b8
    FNSTSW AX                           ; 004fc1ba
    SAHF                                ; 004fc1bc
    JNC 0x004fc219                      ; 004fc1bd
        ;   XREF to: 004fc219 (CONDITIONAL_JUMP)  ; LAB_004fc219
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fc1bf
    MOV dword ptr [EBX + 0x18],EAX      ; 004fc1c2
    MOV EAX,dword ptr [ESP]             ; 004fc1c5
    MOV dword ptr [EBX + 0x1c],EAX      ; 004fc1c8
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fc1cb
    MOV dword ptr [EBX + 0x14],0x3a83126f ; 004fc1ce
    MOV dword ptr [EBX + 0xc],EAX       ; 004fc1d5
    FLD float ptr [ESI + 0x10]          ; 004fc1d8
    FLD1                                ; 004fc1db
    FDIVRP                              ; 004fc1dd
    MOV dword ptr [EBX + 0x20],0x0      ; 004fc1df
    FSTP float ptr [EBX + 0x10]         ; 004fc1e6
    MOV EAX,dword ptr [ESI + 0x14]      ; 004fc1e9
    MOV dword ptr [EBX + 0x24],EAX      ; 004fc1ec
    ADD ESP,0x8                         ; 004fc1ef
        ;   Label: LAB_004fc1ef
    POP EBP                             ; 004fc1f2
    POP EDI                             ; 004fc1f3
    POP ESI                             ; 004fc1f4
    POP EBX                             ; 004fc1f5
    RET                                 ; 004fc1f6
    MOV EDX,dword ptr [ESI + 0x8]       ; 004fc1f7
        ;   Label: LAB_004fc1f7
    PUSH EDX                            ; 004fc1fa
    MOV ECX,dword ptr [EBX + 0x4]       ; 004fc1fb
    PUSH dword ptr [EBX + 0x8]          ; 004fc1fe
    PUSH ECX                            ; 004fc201
    MOV EAX,dword ptr [EBX + 0x50]      ; 004fc202
    PUSH EBX                            ; 004fc205
    CALL dword ptr [EAX + 0x4]          ; 004fc206
    ADD ESP,0x10                        ; 004fc209
    MOV dword ptr [ESP + 0x4],EAX       ; 004fc20c
    FILD dword ptr [ESP + 0x4]          ; 004fc210
    FSTP float ptr [ESP]                ; 004fc214
    JMP 0x004fc1b3                      ; 004fc217
        ;   XREF to: 004fc1b3 (UNCONDITIONAL_JUMP)  ; LAB_004fc1b3
    MOV EDI,dword ptr [ESI + 0x8]       ; 004fc219
        ;   Label: LAB_004fc219
    PUSH dword ptr [ESP]                ; 004fc21c
    PUSH EDI                            ; 004fc21f
    PUSH EBX                            ; 004fc220
    CALL FUN_004fc420                   ; 004fc221
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc420()
    MOV EBP,dword ptr [ESI + 0x14]      ; 004fc226
    ADD ESP,0xc                         ; 004fc229
    TEST EBP,EBP                        ; 004fc22c
    JZ 0x004fc1ef                       ; 004fc22e
        ;   XREF to: 004fc1ef (CONDITIONAL_JUMP)  ; LAB_004fc1ef
    PUSH EBX                            ; 004fc230
    CALL FUN_004fc070                   ; 004fc231
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc236
    ADD ESP,0x4                         ; 004fc239
    MOV dword ptr [EBX + 0x28],EAX      ; 004fc23c
    ADD ESP,0x8                         ; 004fc23f
    POP EBP                             ; 004fc242
    POP EDI                             ; 004fc243
    POP ESI                             ; 004fc244
    POP EBX                             ; 004fc245
    RET                                 ; 004fc246

