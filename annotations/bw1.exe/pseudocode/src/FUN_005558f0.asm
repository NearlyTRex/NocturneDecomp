; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005558f0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_004a1d00 at 004a5085
;   FUN_004d1a80 at 004d2498
;   FUN_00555970 at 005559a6
;
; Called Functions:
;   FUN_00453540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005558f0
        ;   Label: FUN_005558f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005558f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005558f5
    IMUL EAX,ECX,0x1a4                  ; 005558f9
    MOV EBX,dword ptr [ESP + 0x10]      ; 005558ff
    MOV dword ptr [EDX + EAX*0x1 + 0x14c],EBX ; 00555903
    CMP ECX,dword ptr [EDX + 0x15aeb8]  ; 0055590a
    JZ 0x00555914                       ; 00555910
        ;   XREF to: 00555914 (CONDITIONAL_JUMP)  ; LAB_00555914
    POP EBX                             ; 00555912
    RET                                 ; 00555913
    PUSH dword ptr [ESP + 0x10]         ; 00555914
        ;   Label: LAB_00555914
    PUSH 0x1fe37ec                      ; 00555918
    CALL FUN_00453540                   ; 0055591d
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; undefined FUN_00453540()
    ADD ESP,0x8                         ; 00555922
    POP EBX                             ; 00555925
    RET                                 ; 00555926

