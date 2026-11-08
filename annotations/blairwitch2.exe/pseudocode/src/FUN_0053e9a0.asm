; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053e9a0(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_0053ea00 at 0053ea11
;
; Referenced Globals:
;   undefined4 DAT_005e6785
;   undefined4 DAT_005e678d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e9a0
        ;   Label: FUN_0053e9a0
    SUB ESP,0x8                         ; 0053e9a1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053e9a4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053e9a8
    MOV EBX,dword ptr [ECX + 0x10b14]   ; 0053e9ac
    MOV EDX,dword ptr [EAX]             ; 0053e9b2
    CMP EDX,EBX                         ; 0053e9b4
    JZ 0x0053e9dd                       ; 0053e9b6
        ;   XREF to: 0053e9dd (CONDITIONAL_JUMP)  ; LAB_0053e9dd
    CMP EDX,dword ptr [ECX + 0x10b0c]   ; 0053e9b8
    JZ 0x0053e9c8                       ; 0053e9be
        ;   XREF to: 0053e9c8 (CONDITIONAL_JUMP)  ; LAB_0053e9c8
    CMP EDX,dword ptr [ECX + 0x10b10]   ; 0053e9c0
    JNZ 0x0053e9e8                      ; 0053e9c6
        ;   XREF to: 0053e9e8 (CONDITIONAL_JUMP)  ; LAB_0053e9e8
    FLD float ptr [EAX + 0x4]           ; 0053e9c8
        ;   Label: LAB_0053e9c8
    FLD ST0                             ; 0053e9cb
    FMUL double ptr [0x005e678d]        ; 0053e9cd | DAT_005e678d
    FSTP ST1                            ; 0053e9d3
    FSTP float ptr [EAX + 0x4]          ; 0053e9d5
    ADD ESP,0x8                         ; 0053e9d8
    POP EBX                             ; 0053e9db
    RET                                 ; 0053e9dc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053e9dd
        ;   Label: LAB_0053e9dd
    MOV dword ptr [EAX + 0x4],EDX       ; 0053e9e0
    ADD ESP,0x8                         ; 0053e9e3
    POP EBX                             ; 0053e9e6
    RET                                 ; 0053e9e7
    FLD float ptr [EAX + 0x4]           ; 0053e9e8
        ;   Label: LAB_0053e9e8
    FLD ST0                             ; 0053e9eb
    FMUL double ptr [0x005e6785]        ; 0053e9ed | DAT_005e6785
    FSTP ST1                            ; 0053e9f3
    FSTP float ptr [EAX + 0x4]          ; 0053e9f5
    ADD ESP,0x8                         ; 0053e9f8
    POP EBX                             ; 0053e9fb
    RET                                 ; 0053e9fc

