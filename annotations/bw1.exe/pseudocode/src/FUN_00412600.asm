; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00412600(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_007c374c
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412600
        ;   Label: FUN_00412600
    PUSH ESI                            ; 00412601
    PUSH EDI                            ; 00412602
    PUSH EBP                            ; 00412603
    SUB ESP,0x18                        ; 00412604
    MOV EBX,dword ptr [ESP + 0x30]      ; 00412607
    MOV EDX,dword ptr [0x007c374c]      ; 0041260b | DAT_007c374c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00412611
    PUSH EDX                            ; 00412615
    ADD EAX,0x158                       ; 00412616
    MOV EBP,0x1                         ; 0041261b
    PUSH EAX                            ; 00412620
    LEA ESI,[ESP + 0x8]                 ; 00412621
    LEA EDI,[ESP + 0x14]                ; 00412625
    CALL FUN_00569130                   ; 00412629
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 0041262e
    ADD ESP,0x8                         ; 00412632
    LEA EAX,[ESP + 0xc]                 ; 00412635
    MOVSD ES:EDI,ESI                    ; 00412639
    MOVSD ES:EDI,ESI                    ; 0041263a
    MOVSD ES:EDI,ESI                    ; 0041263b
    CMP EBX,EAX                         ; 0041263c
    JNZ 0x0041264a                      ; 0041263e
        ;   XREF to: 0041264a (CONDITIONAL_JUMP)  ; LAB_0041264a
    MOV EAX,EBP                         ; 00412640
    ADD ESP,0x18                        ; 00412642
    POP EBP                             ; 00412645
    POP EDI                             ; 00412646
    POP ESI                             ; 00412647
    POP EBX                             ; 00412648
    RET                                 ; 00412649
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041264a
        ;   Label: LAB_0041264a
    MOV dword ptr [EBX],EAX             ; 0041264e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00412650
    MOV dword ptr [EBX + 0x4],EAX       ; 00412654
    MOV EAX,dword ptr [ESP + 0x14]      ; 00412657
    MOV dword ptr [EBX + 0x8],EAX       ; 0041265b
    MOV EAX,EBP                         ; 0041265e
    ADD ESP,0x18                        ; 00412660
    POP EBP                             ; 00412663
    POP EDI                             ; 00412664
    POP ESI                             ; 00412665
    POP EBX                             ; 00412666
    RET                                 ; 00412667

