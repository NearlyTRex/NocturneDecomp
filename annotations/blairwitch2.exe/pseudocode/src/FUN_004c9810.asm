; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9810(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004c7da0 at 004c7de3
;
; Called Functions:
;   FUN_004c7ea0
;   FUN_004c9790
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004c9810
        ;   Label: FUN_004c9810
    JNZ 0x004c9818                      ; 004c9815
        ;   XREF to: 004c9818 (CONDITIONAL_JUMP)  ; LAB_004c9818
    RET                                 ; 004c9817
    PUSH EDI                            ; 004c9818
        ;   Label: LAB_004c9818
    PUSH ESI                            ; 004c9819
    PUSH EBX                            ; 004c981a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c981b
    PUSH ECX                            ; 004c981f
    CALL FUN_004c9790                   ; 004c9820
        ;   XREF to: 004c9790 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9790()
    ADD ESP,0x4                         ; 004c9825
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004c9828
    PUSH EBX                            ; 004c982c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c982d
    PUSH ESI                            ; 004c9831
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004c9832
    PUSH EDI                            ; 004c9836
    PUSH EAX                            ; 004c9837
    CALL FUN_004c7ea0                   ; 004c9838
        ;   XREF to: 004c7ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c7ea0()
    ADD ESP,0x10                        ; 004c983d
    POP EBX                             ; 004c9840
    POP ESI                             ; 004c9841
    POP EDI                             ; 004c9842
    RET                                 ; 004c9843

