; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aa200(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004aa0b0 at 004aa182
;
; Called Functions:
;   FUN_004aa2f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004aa200
        ;   Label: FUN_004aa200
    SUB ESP,0x10                        ; 004aa201
    MOV EBP,dword ptr [ESP + 0x24]      ; 004aa204
    MOV EAX,dword ptr [ESP + 0x18]      ; 004aa208
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004aa20c
    CMP EDX,dword ptr [EAX + 0x1260]    ; 004aa210
    JNZ 0x004aa22c                      ; 004aa216
        ;   XREF to: 004aa22c (CONDITIONAL_JUMP)  ; LAB_004aa22c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004aa218
    MOV ECX,dword ptr [ESP + 0x20]      ; 004aa21c
    CMP ECX,dword ptr [EAX + 0x1264]    ; 004aa220
    JZ 0x004aa2b5                       ; 004aa226
        ;   XREF to: 004aa2b5 (CONDITIONAL_JUMP)  ; LAB_004aa2b5
    PUSH EDI                            ; 004aa22c
        ;   Label: LAB_004aa22c
    PUSH ESI                            ; 004aa22d
    PUSH EBX                            ; 004aa22e
    MOV EDI,EBP                         ; 004aa22f
    IMUL EDI,EBP                        ; 004aa231
    MOV EBX,EBP                         ; 004aa234
    MOV dword ptr [ESP + 0x10],EBP      ; 004aa236
    NEG EBX                             ; 004aa23a
    MOV dword ptr [ESP + 0x10],EBX      ; 004aa23c
    CMP EBP,EBX                         ; 004aa240
    JL 0x004aa29a                       ; 004aa242
        ;   XREF to: 004aa29a (CONDITIONAL_JUMP)  ; LAB_004aa29a
    MOV EAX,EBX                         ; 004aa244
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004aa246
    ADD EAX,EBX                         ; 004aa24a
    MOV dword ptr [ESP + 0xc],EAX       ; 004aa24c
    MOV EBX,EBP                         ; 004aa250
        ;   Label: LAB_004aa250
    NEG EBX                             ; 004aa252
    CMP EBX,EBP                         ; 004aa254
    JG 0x004aa284                       ; 004aa256
        ;   XREF to: 004aa284 (CONDITIONAL_JUMP)  ; LAB_004aa284
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aa258
    MOV dword ptr [ESP + 0x14],EAX      ; 004aa25c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004aa260
    IMUL EAX,EAX                        ; 004aa264
    MOV ESI,dword ptr [ESP + 0x28]      ; 004aa267
    ADD ESI,EBX                         ; 004aa26b
    MOV dword ptr [ESP + 0x18],EAX      ; 004aa26d
    MOV EDX,EBX                         ; 004aa271
        ;   Label: LAB_004aa271
    IMUL EDX,EBX                        ; 004aa273
    ADD EDX,dword ptr [ESP + 0x18]      ; 004aa276
    CMP EDX,EDI                         ; 004aa27a
    JLE 0x004aa2ba                      ; 004aa27c
        ;   XREF to: 004aa2ba (CONDITIONAL_JUMP)  ; LAB_004aa2ba
    INC EBX                             ; 004aa27e
        ;   Label: LAB_004aa27e
    INC ESI                             ; 004aa27f
    CMP EBX,EBP                         ; 004aa280
    JLE 0x004aa271                      ; 004aa282
        ;   XREF to: 004aa271 (CONDITIONAL_JUMP)  ; LAB_004aa271
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aa284
        ;   Label: LAB_004aa284
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa288
    INC EAX                             ; 004aa28c
    INC EDX                             ; 004aa28d
    MOV dword ptr [ESP + 0xc],EAX       ; 004aa28e
    MOV dword ptr [ESP + 0x10],EDX      ; 004aa292
    CMP EBP,EDX                         ; 004aa296
    JGE 0x004aa250                      ; 004aa298
        ;   XREF to: 004aa250 (CONDITIONAL_JUMP)  ; LAB_004aa250
    MOV EDX,dword ptr [ESP + 0x24]      ; 004aa29a
        ;   Label: LAB_004aa29a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004aa29e
    MOV dword ptr [EDX + 0x1260],EAX    ; 004aa2a2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004aa2a8
    MOV dword ptr [EDX + 0x1264],EAX    ; 004aa2ac
    POP EBX                             ; 004aa2b2
    POP ESI                             ; 004aa2b3
    POP EDI                             ; 004aa2b4
    ADD ESP,0x10                        ; 004aa2b5
        ;   Label: LAB_004aa2b5
    POP EBP                             ; 004aa2b8
    RET                                 ; 004aa2b9
    IMUL EDX,EDX,0xff                   ; 004aa2ba
        ;   Label: LAB_004aa2ba
    MOV EAX,EDX                         ; 004aa2c0
    SAR EDX,0x1f                        ; 004aa2c2
    IDIV EDI                            ; 004aa2c5
    MOV EDX,0xff                        ; 004aa2c7
    SUB EDX,EAX                         ; 004aa2cc
    PUSH EDX                            ; 004aa2ce
    MOV EDX,dword ptr [ESP + 0x18]      ; 004aa2cf
    PUSH EDX                            ; 004aa2d3
    PUSH ESI                            ; 004aa2d4
    MOV ECX,dword ptr [ESP + 0x30]      ; 004aa2d5
    PUSH ECX                            ; 004aa2d9
    CALL FUN_004aa2f0                   ; 004aa2da
        ;   XREF to: 004aa2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa2f0()
    ADD ESP,0x10                        ; 004aa2df
    JMP 0x004aa27e                      ; 004aa2e2
        ;   XREF to: 004aa27e (UNCONDITIONAL_JUMP)  ; LAB_004aa27e

