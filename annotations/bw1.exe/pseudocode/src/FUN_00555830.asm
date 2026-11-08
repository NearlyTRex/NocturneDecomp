; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555830(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_004cf5e0 at 004cf8e0
;   FUN_004d1a80 at 004d1e21
;   FUN_004dc000 at 004dc021
;
; Referenced Globals:
;   undefined4 DAT_005f0bee
;   undefined4 DAT_005f0bf6
;
; Called Functions:
;   FUN_00454830
;   FUN_005c03a0
;   FUN_005c18f4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00555830
        ;   Label: FUN_00555830
    PUSH EBP                            ; 00555831
    MOV EBP,ESP                         ; 00555832
    SUB ESP,0xc                         ; 00555834
    AND ESP,0xfffffff8                  ; 00555837
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055583a
    PUSH EDX                            ; 0055583d
    PUSH 0x1fe37ec                      ; 0055583e
    CALL FUN_00454830                   ; 00555843
        ;   XREF to: 00454830 (UNCONDITIONAL_CALL)  ; undefined FUN_00454830()
    ADD ESP,0x8                         ; 00555848
    MOV EAX,dword ptr [EBP + 0x10]      ; 0055584b
    MOV dword ptr [ESP + 0x8],EAX       ; 0055584e
    FILD dword ptr [ESP + 0x8]          ; 00555852
    FMUL double ptr [0x005f0bee]        ; 00555856 | DAT_005f0bee
    MOV ESI,0x100                       ; 0055585c
    XOR EDX,EDX                         ; 00555861
    XOR ECX,ECX                         ; 00555863
    FSTP float ptr [ESP]                ; 00555865
    MOV dword ptr [ESP + 0x8],EDX       ; 00555868
        ;   Label: LAB_00555868
    FILD dword ptr [ESP + 0x8]          ; 0055586c
    FMUL double ptr [0x005f0bee]        ; 00555870 | DAT_005f0bee
    FLD float ptr [ESP]                 ; 00555876
    FXCH                                ; 00555879
    CALL FUN_005c18f4                   ; 0055587b
        ;   XREF to: 005c18f4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c18f4()
    FMUL double ptr [0x005f0bf6]        ; 00555880 | DAT_005f0bf6
    CALL FUN_005c03a0                   ; 00555886
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 0055588b
    CMP dword ptr [ESP + 0x4],0x100     ; 0055588f
    JL 0x005558b4                       ; 00555897
        ;   XREF to: 005558b4 (CONDITIONAL_JUMP)  ; LAB_005558b4
    ADD ECX,0x4                         ; 00555899
        ;   Label: LAB_00555899
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055589c
    INC EDX                             ; 005558a0
    MOV dword ptr [ECX + 0x1fe6340],EAX ; 005558a1
    CMP EDX,0x10000                     ; 005558a7
    JL 0x00555868                       ; 005558ad
        ;   XREF to: 00555868 (CONDITIONAL_JUMP)  ; LAB_00555868
    MOV ESP,EBP                         ; 005558af
    POP EBP                             ; 005558b1
    POP ESI                             ; 005558b2
    RET                                 ; 005558b3
    MOV dword ptr [ESP + 0x4],ESI       ; 005558b4
        ;   Label: LAB_005558b4
    JMP 0x00555899                      ; 005558b8
        ;   XREF to: 00555899 (UNCONDITIONAL_JUMP)  ; LAB_00555899

