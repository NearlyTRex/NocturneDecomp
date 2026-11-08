; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00598600(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598600
        ;   Label: FUN_00598600
    PUSH ESI                            ; 00598601
    PUSH EDI                            ; 00598602
    SUB ESP,0x18                        ; 00598603
    MOV EAX,dword ptr [ESP + 0x28]      ; 00598606
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0059860a
    MOV EDX,dword ptr [EAX + 0xd054]    ; 0059860e
    PUSH EDX                            ; 00598614
    ADD EAX,0x158                       ; 00598615
    PUSH EAX                            ; 0059861a
    LEA ESI,[ESP + 0x8]                 ; 0059861b
    LEA EDI,[ESP + 0x14]                ; 0059861f
    CALL FUN_0054dcc0                   ; 00598623
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00598628
    ADD ESP,0x8                         ; 0059862c
    LEA EAX,[ESP + 0xc]                 ; 0059862f
    MOVSD ES:EDI,ESI                    ; 00598633
    MOVSD ES:EDI,ESI                    ; 00598634
    MOVSD ES:EDI,ESI                    ; 00598635
    CMP EBX,EAX                         ; 00598636
    JNZ 0x00598646                      ; 00598638
        ;   XREF to: 00598646 (CONDITIONAL_JUMP)  ; LAB_00598646
    MOV EAX,0x1                         ; 0059863a
    ADD ESP,0x18                        ; 0059863f
    POP EDI                             ; 00598642
    POP ESI                             ; 00598643
    POP EBX                             ; 00598644
    RET                                 ; 00598645
    MOV EAX,dword ptr [ESP + 0xc]       ; 00598646
        ;   Label: LAB_00598646
    MOV dword ptr [EBX],EAX             ; 0059864a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059864c
    MOV dword ptr [EBX + 0x4],EAX       ; 00598650
    MOV EAX,dword ptr [ESP + 0x14]      ; 00598653
    MOV dword ptr [EBX + 0x8],EAX       ; 00598657
    MOV EAX,0x1                         ; 0059865a
    ADD ESP,0x18                        ; 0059865f
    POP EDI                             ; 00598662
    POP ESI                             ; 00598663
    POP EBX                             ; 00598664
    RET                                 ; 00598665

