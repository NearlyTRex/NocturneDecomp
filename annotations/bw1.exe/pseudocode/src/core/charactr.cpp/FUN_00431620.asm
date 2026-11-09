; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00431620(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431620
        ;   Label: core_charactr.cpp_FUN_00431620
    PUSH ESI                            ; 00431621
    PUSH EDI                            ; 00431622
    SUB ESP,0x18                        ; 00431623
    MOV EBX,dword ptr [ESP + 0x28]      ; 00431626
    CMP dword ptr [EBX + 0x27b0],0x0    ; 0043162a
    JZ 0x0043163c                       ; 00431631
        ;   XREF to: 0043163c (CONDITIONAL_JUMP)  ; LAB_0043163c
    XOR EAX,EAX                         ; 00431633
    ADD ESP,0x18                        ; 00431635
    POP EDI                             ; 00431638
    POP ESI                             ; 00431639
    POP EBX                             ; 0043163a
    RET                                 ; 0043163b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043163c
        ;   Label: LAB_0043163c
    PUSH ECX                            ; 00431640
    PUSH EBX                            ; 00431641
    LEA ESI,[ESP + 0x8]                 ; 00431642
    LEA EDI,[ESP + 0x14]                ; 00431646
    CALL core_actor.cpp_FUN_00408bb0    ; 0043164a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x8]                 ; 0043164f
    ADD ESP,0x8                         ; 00431653
    LEA EAX,[ESP + 0xc]                 ; 00431656
    PUSH dword ptr [ESP + 0x30]         ; 0043165a
    MOVSD ES:EDI,ESI                    ; 0043165e
    MOVSD ES:EDI,ESI                    ; 0043165f
    MOVSD ES:EDI,ESI                    ; 00431660
    PUSH EAX                            ; 00431661
    MOV ESI,dword ptr [EBX + 0x154]     ; 00431662
    PUSH EBX                            ; 00431668
    CALL dword ptr [ESI + 0xac]         ; 00431669
    ADD ESP,0xc                         ; 0043166f
    TEST EAX,EAX                        ; 00431672
    JNZ 0x0043168a                      ; 00431674
        ;   XREF to: 0043168a (CONDITIONAL_JUMP)  ; LAB_0043168a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00431676
    MOV dword ptr [EAX + 0x4],0x0       ; 0043167a
    XOR EAX,EAX                         ; 00431681
    ADD ESP,0x18                        ; 00431683
    POP EDI                             ; 00431686
    POP ESI                             ; 00431687
    POP EBX                             ; 00431688
    RET                                 ; 00431689
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043168a
        ;   Label: LAB_0043168a
    PUSH ESI                            ; 0043168e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0043168f
    PUSH EBX                            ; 00431695
    CALL dword ptr [EAX + 0x108]        ; 00431696
    MOV EAX,0x1                         ; 0043169c
    ADD ESP,0x8                         ; 004316a1
    ADD ESP,0x18                        ; 004316a4
    POP EDI                             ; 004316a7
    POP ESI                             ; 004316a8
    POP EBX                             ; 004316a9
    RET                                 ; 004316aa

