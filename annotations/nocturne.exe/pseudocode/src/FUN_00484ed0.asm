; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484ed0(int *param_1)
;
;
; XREF[1]:
;   FUN_0048a390 at 0048a3fc
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   FUN_0048aae0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484ed0
        ;   Label: FUN_00484ed0
    MOV EDX,dword ptr [EAX]             ; 00484ed4
    DEC EDX                             ; 00484ed6
    MOV dword ptr [EAX],EDX             ; 00484ed7
    TEST EDX,EDX                        ; 00484ed9
    JL 0x00484ee3                       ; 00484edb
        ;   XREF to: 00484ee3 (CONDITIONAL_JUMP)  ; LAB_00484ee3
    CMP EDX,0x1                         ; 00484edd
    JZ 0x00484eea                       ; 00484ee0
        ;   XREF to: 00484eea (CONDITIONAL_JUMP)  ; LAB_00484eea
    RET                                 ; 00484ee2
    MOV dword ptr [EAX],0x0             ; 00484ee3
        ;   Label: LAB_00484ee3
    RET                                 ; 00484ee9
    PUSH ESI                            ; 00484eea
        ;   Label: LAB_00484eea
    ADD EAX,0x4                         ; 00484eeb
    PUSH EAX                            ; 00484eee
    MOV ESI,dword ptr [0x005b80f0]      ; 00484eef | DAT_005b80f0
    PUSH ESI                            ; 00484ef5
    CALL FUN_0048aae0                   ; 00484ef6
        ;   XREF to: 0048aae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048aae0()
    ADD ESP,0x8                         ; 00484efb
    POP ESI                             ; 00484efe
    RET                                 ; 00484eff

