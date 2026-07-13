; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574000(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00573a31 at 00573a89
;
; Called Functions:
;   FUN_0056da80
;   FUN_00570ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574000
        ;   Label: FUN_00574000
    PUSH ESI                            ; 00574001
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574002
    XOR ESI,ESI                         ; 00574006
    PUSH EBX                            ; 00574008
        ;   Label: LAB_00574008
    CALL FUN_00570ca0                   ; 00574009
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0057400e
    TEST EAX,EAX                        ; 00574011
    JNZ 0x00574023                      ; 00574013
        ;   XREF to: 00574023 (CONDITIONAL_JUMP)  ; LAB_00574023
    PUSH EBX                            ; 00574015
    CALL FUN_0056da80                   ; 00574016
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da80()
    INC ESI                             ; 0057401b
    ADD ESP,0x4                         ; 0057401c
    MOV EBX,EAX                         ; 0057401f
    JMP 0x00574008                      ; 00574021
        ;   XREF to: 00574008 (UNCONDITIONAL_JUMP)  ; LAB_00574008
    MOV EAX,ESI                         ; 00574023
        ;   Label: LAB_00574023
    POP ESI                             ; 00574025
    POP EBX                             ; 00574026
    RET                                 ; 00574027

