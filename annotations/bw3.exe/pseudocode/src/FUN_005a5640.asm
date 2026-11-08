; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5640(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005a5674 at 005a586b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5640
        ;   Label: FUN_005a5640
    PUSH ESI                            ; 005a5641
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a5642
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a5646
    MOV ECX,0xa                         ; 005a564a
    MOV EDX,EBX                         ; 005a564f
    MOV EAX,EBX                         ; 005a5651
    SAR EDX,0x1f                        ; 005a5653
    IDIV ECX                            ; 005a5656
    MOV EDX,EBX                         ; 005a5658
    ADD EAX,0x30                        ; 005a565a
    SAR EDX,0x1f                        ; 005a565d
    MOV byte ptr [ESI],AL               ; 005a5660
    MOV EAX,EBX                         ; 005a5662
    IDIV ECX                            ; 005a5664
    MOV byte ptr [ESI + 0x2],0x0        ; 005a5666
    ADD EDX,0x30                        ; 005a566a
    MOV byte ptr [ESI + 0x1],DL         ; 005a566d
    POP ESI                             ; 005a5670
    POP EBX                             ; 005a5671
    RET                                 ; 005a5672

