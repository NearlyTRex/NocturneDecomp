; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[8]:
;   FUN_0041aef0 at 0041af1d
;   FUN_00430960 at 00430a82
;   FUN_00430a90 at 00430b45
;   FUN_00430b60 at 00430bf8
;   FUN_004e6060 at 004e6094
;   FUN_004ed890 at 004ede00
;   FUN_005099a0 at 00509a5c
;   FUN_005952f0 at 00595741
;
; Referenced Globals:
;   undefined4 DAT_01cd0ea8
;
; Called Functions:
;   FUN_004e3e20
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e5f40
        ;   Label: FUN_004e5f40
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e5f41
    CMP ECX,0x2                         ; 004e5f45
    JZ 0x004e5f90                       ; 004e5f48
        ;   XREF to: 004e5f90 (CONDITIONAL_JUMP)  ; LAB_004e5f90
    PUSH EDI                            ; 004e5f4a
    MOV EDX,dword ptr [0x01cd0ea8]      ; 004e5f4b | DAT_01cd0ea8
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e5f51
    ADD EAX,EDX                         ; 004e5f58
    SHL EAX,0x3                         ; 004e5f5a
    INC EDX                             ; 004e5f5d
    ADD EAX,0x1cd0eac                   ; 004e5f5e
    MOV dword ptr [0x01cd0ea8],EDX      ; 004e5f63 | DAT_01cd0ea8
    CMP EDX,0x100                       ; 004e5f69
    JL 0x004e5f7b                       ; 004e5f6f
        ;   XREF to: 004e5f7b (CONDITIONAL_JUMP)  ; LAB_004e5f7b
    PUSH ESI                            ; 004e5f71
    XOR ESI,ESI                         ; 004e5f72
    MOV dword ptr [0x01cd0ea8],ESI      ; 004e5f74 | DAT_01cd0ea8
    POP ESI                             ; 004e5f7a
    PUSH ECX                            ; 004e5f7b
        ;   Label: LAB_004e5f7b
    MOV EDI,dword ptr [ESP + 0x18]      ; 004e5f7c
    PUSH EDI                            ; 004e5f80
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e5f81
    PUSH EBP                            ; 004e5f85
    PUSH EAX                            ; 004e5f86
    CALL FUN_004e3e20                   ; 004e5f87
        ;   XREF to: 004e3e20 (UNCONDITIONAL_CALL)  ; undefined FUN_004e3e20()
    ADD ESP,0x10                        ; 004e5f8c
    POP EDI                             ; 004e5f8f
    POP EBP                             ; 004e5f90
        ;   Label: LAB_004e5f90
    RET                                 ; 004e5f91

