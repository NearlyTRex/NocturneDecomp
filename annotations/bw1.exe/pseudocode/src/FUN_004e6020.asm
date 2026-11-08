; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6020(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004e4730 at 004e4773
;
; Called Functions:
;   FUN_004e4830
;   FUN_004e5fa0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004e6020
        ;   Label: FUN_004e6020
    JNZ 0x004e6028                      ; 004e6025
        ;   XREF to: 004e6028 (CONDITIONAL_JUMP)  ; LAB_004e6028
    RET                                 ; 004e6027
    PUSH EDI                            ; 004e6028
        ;   Label: LAB_004e6028
    PUSH ESI                            ; 004e6029
    PUSH EBX                            ; 004e602a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e602b
    PUSH ECX                            ; 004e602f
    CALL FUN_004e5fa0                   ; 004e6030
        ;   XREF to: 004e5fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5fa0()
    ADD ESP,0x4                         ; 004e6035
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e6038
    PUSH EBX                            ; 004e603c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e603d
    PUSH ESI                            ; 004e6041
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e6042
    PUSH EDI                            ; 004e6046
    PUSH EAX                            ; 004e6047
    CALL FUN_004e4830                   ; 004e6048
        ;   XREF to: 004e4830 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4830()
    ADD ESP,0x10                        ; 004e604d
    POP EBX                             ; 004e6050
    POP ESI                             ; 004e6051
    POP EDI                             ; 004e6052
    RET                                 ; 004e6053

