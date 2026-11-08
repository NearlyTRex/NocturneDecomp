; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530630(undefined4 param_1,int param_2)
;
;
; XREF[7]:
;   FUN_0041d020 at 0041d251
;   FUN_00455d10 at 0045622c
;   FUN_00485a30 at 00485b23
;   FUN_004e38d0 at 004e3a34
;   FUN_0052f2a0 at 0052f2df
;   FUN_0053f060 at 0053f153
;   FUN_0059ccf0 at 0059ce91
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e592a
;   TerminatedCString s_Too_many_dynamic_lights_005e593a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01fc9608
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530630
        ;   Label: FUN_00530630
    PUSH ESI                            ; 00530631
    MOV ESI,dword ptr [0x01fc9608]      ; 00530632 | DAT_01fc9608
    MOV EBX,dword ptr [ESP + 0x10]      ; 00530638
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0053063c
    JZ 0x0053067a                       ; 00530643
        ;   XREF to: 0053067a (CONDITIONAL_JUMP)  ; LAB_0053067a
    TEST ESI,ESI                        ; 00530645
    JLE 0x00530661                      ; 00530647
        ;   XREF to: 00530661 (CONDITIONAL_JUMP)  ; LAB_00530661
    LEA EDX,[ESI*0x4 + 0x0]             ; 00530649
    XOR EAX,EAX                         ; 00530650
    CMP EBX,dword ptr [EAX + 0x1fc960c] ; 00530652
        ;   Label: LAB_00530652
    JZ 0x0053067a                       ; 00530658
        ;   XREF to: 0053067a (CONDITIONAL_JUMP)  ; LAB_0053067a
    ADD EAX,0x4                         ; 0053065a
    CMP EAX,EDX                         ; 0053065d
    JL 0x00530652                       ; 0053065f
        ;   XREF to: 00530652 (CONDITIONAL_JUMP)  ; LAB_00530652
    MOV dword ptr [0x01fc9608],ESI      ; 00530661 | DAT_01fc9608
        ;   Label: LAB_00530661
    CMP ESI,0x4                         ; 00530667
    JGE 0x00530683                      ; 0053066a
        ;   XREF to: 00530683 (CONDITIONAL_JUMP)  ; LAB_00530683
    MOV ESI,dword ptr [0x01fc9608]      ; 0053066c | DAT_01fc9608
        ;   Label: LAB_0053066c
    INC ESI                             ; 00530672
    MOV dword ptr [ESI*0x4 + 0x1fc9608],EBX ; 00530673 | DAT_01fc9608
    MOV dword ptr [0x01fc9608],ESI      ; 0053067a | DAT_01fc9608
        ;   Label: LAB_0053067a
    POP ESI                             ; 00530680
    POP EBX                             ; 00530681
    RET                                 ; 00530682
    PUSH EDI                            ; 00530683
        ;   Label: LAB_00530683
    MOV ECX,0x5e592a                    ; 00530684 | = "..\\core\\set.cpp"
    MOV EDI,0x9b1                       ; 00530689
    PUSH 0x5e593a                       ; 0053068e | = "Too many dynamic lights!"
    MOV dword ptr [0x01d046a0],ECX      ; 00530693 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00530699 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0053069f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 005306a4
    POP EDI                             ; 005306a7
    JMP 0x0053066c                      ; 005306a8
        ;   XREF to: 0053066c (UNCONDITIONAL_JUMP)  ; LAB_0053066c

