; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00426990(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004268b0 at 0042696c
;
; Called Functions:
;   FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426990
        ;   Label: FUN_00426990
    PUSH ESI                            ; 00426991
    PUSH EDI                            ; 00426992
    PUSH EBP                            ; 00426993
    SUB ESP,0x4                         ; 00426994
    MOV EBP,dword ptr [ESP + 0x18]      ; 00426997
    LEA EAX,[EBP + 0x2b4]               ; 0042699b
    PUSH EAX                            ; 004269a1
    XOR EDI,EDI                         ; 004269a2
    CALL FUN_00547890                   ; 004269a4
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004269a9
    MOV EDX,dword ptr [EBP + 0x3564]    ; 004269ac
    MOV dword ptr [ESP],EAX             ; 004269b2
    TEST EDX,EDX                        ; 004269b5
    JLE 0x004269f8                      ; 004269b7
        ;   XREF to: 004269f8 (CONDITIONAL_JUMP)  ; LAB_004269f8
    LEA EBX,[EBP + 0x3a20]              ; 004269b9
    MOV ESI,EBP                         ; 004269bf
    MOV EAX,dword ptr [ESI + 0x3570]    ; 004269c1
        ;   Label: LAB_004269c1
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 004269c7
    JZ 0x004269e4                       ; 004269cf
        ;   XREF to: 004269e4 (CONDITIONAL_JUMP)  ; LAB_004269e4
    IMUL EAX,dword ptr [ESI + 0x3574],0x24 ; 004269d1
    ADD EAX,dword ptr [ESP]             ; 004269d8
    CMP dword ptr [EAX + 0x1d21c],-0x1  ; 004269db
    JNZ 0x00426a00                      ; 004269e2
        ;   XREF to: 00426a00 (CONDITIONAL_JUMP)  ; LAB_00426a00
    ADD ESI,0x18                        ; 004269e4
        ;   Label: LAB_004269e4
    INC EDI                             ; 004269e7
    MOV ECX,dword ptr [EBP + 0x3564]    ; 004269e8
    ADD EBX,0x400                       ; 004269ee
    CMP EDI,ECX                         ; 004269f4
    JL 0x004269c1                       ; 004269f6
        ;   XREF to: 004269c1 (CONDITIONAL_JUMP)  ; LAB_004269c1
    ADD ESP,0x4                         ; 004269f8
        ;   Label: LAB_004269f8
    POP EBP                             ; 004269fb
    POP EDI                             ; 004269fc
    POP ESI                             ; 004269fd
    POP EBX                             ; 004269fe
    RET                                 ; 004269ff
    PUSH EBX                            ; 00426a00
        ;   Label: LAB_00426a00
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00426a01
    CALL dword ptr [EAX + 0x1c]         ; 00426a07
    ADD ESP,0x4                         ; 00426a0a
    JMP 0x004269e4                      ; 00426a0d
        ;   XREF to: 004269e4 (UNCONDITIONAL_JUMP)  ; LAB_004269e4

