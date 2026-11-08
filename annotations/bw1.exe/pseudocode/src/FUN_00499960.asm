; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00499960(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0049a0d0 at 0049a1c5
;
; Called Functions:
;   FUN_004998a0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499960
        ;   Label: FUN_00499960
    PUSH ESI                            ; 00499961
    PUSH EDI                            ; 00499962
    MOV ESI,dword ptr [ESP + 0x10]      ; 00499963
    MOV EDI,dword ptr [ESP + 0x14]      ; 00499967
    MOV EDX,dword ptr [ESI]             ; 0049996b
    XOR EBX,EBX                         ; 0049996d
    TEST EDX,EDX                        ; 0049996f
    JLE 0x00499990                      ; 00499971
        ;   XREF to: 00499990 (CONDITIONAL_JUMP)  ; LAB_00499990
    PUSH EDI                            ; 00499973
        ;   Label: LAB_00499973
    PUSH EBX                            ; 00499974
    PUSH ESI                            ; 00499975
    CALL FUN_004998a0                   ; 00499976
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998a0()
    ADD ESP,0x8                         ; 0049997b
    PUSH EAX                            ; 0049997e
    CALL FUN_005c04e0                   ; 0049997f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00499984
    TEST EAX,EAX                        ; 00499987
    JZ 0x00499999                       ; 00499989
        ;   XREF to: 00499999 (CONDITIONAL_JUMP)  ; LAB_00499999
    INC EBX                             ; 0049998b
    CMP EBX,dword ptr [ESI]             ; 0049998c
    JL 0x00499973                       ; 0049998e
        ;   XREF to: 00499973 (CONDITIONAL_JUMP)  ; LAB_00499973
    MOV EAX,0xffffffff                  ; 00499990
        ;   Label: LAB_00499990
    POP EDI                             ; 00499995
    POP ESI                             ; 00499996
    POP EBX                             ; 00499997
    RET                                 ; 00499998
    MOV EAX,EBX                         ; 00499999
        ;   Label: LAB_00499999
    POP EDI                             ; 0049999b
    POP ESI                             ; 0049999c
    POP EBX                             ; 0049999d
    RET                                 ; 0049999e

