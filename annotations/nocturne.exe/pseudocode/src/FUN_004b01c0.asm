; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b01c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004ae900 at 004ae943
;
; Called Functions:
;   FUN_004aea00
;   FUN_004b0140
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004b01c0
        ;   Label: FUN_004b01c0
    JNZ 0x004b01c8                      ; 004b01c5
        ;   XREF to: 004b01c8 (CONDITIONAL_JUMP)  ; LAB_004b01c8
    RET                                 ; 004b01c7
    PUSH EDI                            ; 004b01c8
        ;   Label: LAB_004b01c8
    PUSH ESI                            ; 004b01c9
    PUSH EBX                            ; 004b01ca
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b01cb
    PUSH ECX                            ; 004b01cf
    CALL FUN_004b0140                   ; 004b01d0
        ;   XREF to: 004b0140 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0140()
    ADD ESP,0x4                         ; 004b01d5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b01d8
    PUSH EBX                            ; 004b01dc
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b01dd
    PUSH ESI                            ; 004b01e1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004b01e2
    PUSH EDI                            ; 004b01e6
    PUSH EAX                            ; 004b01e7
    CALL FUN_004aea00                   ; 004b01e8
        ;   XREF to: 004aea00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aea00()
    ADD ESP,0x10                        ; 004b01ed
    POP EBX                             ; 004b01f0
    POP ESI                             ; 004b01f1
    POP EDI                             ; 004b01f2
    RET                                 ; 004b01f3

