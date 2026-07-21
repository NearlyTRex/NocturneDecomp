; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextWrapped_FUN_00402290(byte *param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_drawText_FUN_00402600 at 0040262a
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402290
        ;   Label: engine_2d.c_drawTextWrapped_FUN_00402290
    PUSH ESI                            ; 00402291
    PUSH EDI                            ; 00402292
    PUSH EBP                            ; 00402293
    SUB ESP,0x4                         ; 00402294
    MOV EDX,dword ptr [ESP + 0x18]      ; 00402297
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040229b
    MOV EDI,EDX                         ; 0040229f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004022a1
    SUB ECX,ECX                         ; 004022a5
    DEC ECX                             ; 004022a7
    XOR EAX,EAX                         ; 004022a8
    SCASB.REPNE ES:EDI                  ; 004022aa
    NOT ECX                             ; 004022ac
    DEC ECX                             ; 004022ae
    XOR EBP,EBP                         ; 004022af
    MOV dword ptr [ESP],ECX             ; 004022b1
    TEST ECX,ECX                        ; 004022b4
    JLE 0x00402309                      ; 004022b6
        ;   XREF to: 00402309 (CONDITIONAL_JUMP)  ; LAB_00402309
    MOV EDI,EDX                         ; 004022b8
    CMP byte ptr [EDI],0xa              ; 004022ba
        ;   Label: LAB_004022ba
    JNZ 0x004022ce                      ; 004022bd
        ;   XREF to: 004022ce (CONDITIONAL_JUMP)  ; LAB_004022ce
    MOV ECX,dword ptr [ESP + 0x28]      ; 004022bf
    ADD EBX,0xb                         ; 004022c3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004022c6
    CMP EBX,ECX                         ; 004022ca
    JG 0x00402309                       ; 004022cc
        ;   XREF to: 00402309 (CONDITIONAL_JUMP)  ; LAB_00402309
    XOR EAX,EAX                         ; 004022ce
        ;   Label: LAB_004022ce
    MOV AL,byte ptr [EDI]               ; 004022d0
    CMP EAX,0x20                        ; 004022d2
    JL 0x00402300                       ; 004022d5
        ;   XREF to: 00402300 (CONDITIONAL_JUMP)  ; LAB_00402300
    CMP EAX,0x100                       ; 004022d7
    JGE 0x00402300                      ; 004022dc
        ;   XREF to: 00402300 (CONDITIONAL_JUMP)  ; LAB_00402300
    PUSH EBX                            ; 004022de
    PUSH ESI                            ; 004022df
    PUSH EAX                            ; 004022e0
    CALL engine_2d.c_drawCharacter_FUN_00401c40 ; 004022e1
        ;   XREF to: 00401c40 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawCharacter_FUN_00401c40()
    ADD ESP,0xc                         ; 004022e6
    ADD ESI,EAX                         ; 004022e9
    CMP ESI,dword ptr [ESP + 0x24]      ; 004022eb
    JLE 0x00402300                      ; 004022ef
        ;   XREF to: 00402300 (CONDITIONAL_JUMP)  ; LAB_00402300
    MOV EDX,dword ptr [ESP + 0x28]      ; 004022f1
    ADD EBX,0xb                         ; 004022f5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004022f8
    CMP EBX,EDX                         ; 004022fc
    JG 0x00402309                       ; 004022fe
        ;   XREF to: 00402309 (CONDITIONAL_JUMP)  ; LAB_00402309
    MOV EDX,dword ptr [ESP]             ; 00402300
        ;   Label: LAB_00402300
    INC EBP                             ; 00402303
    INC EDI                             ; 00402304
    CMP EBP,EDX                         ; 00402305
    JL 0x004022ba                       ; 00402307
        ;   XREF to: 004022ba (CONDITIONAL_JUMP)  ; LAB_004022ba
    ADD ESP,0x4                         ; 00402309
        ;   Label: LAB_00402309
    POP EBP                             ; 0040230c
    POP EDI                             ; 0040230d
    POP ESI                             ; 0040230e
    POP EBX                             ; 0040230f
    RET                                 ; 00402310

