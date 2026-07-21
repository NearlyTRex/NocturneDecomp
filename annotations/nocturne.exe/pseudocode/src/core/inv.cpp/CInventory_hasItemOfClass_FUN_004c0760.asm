; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004c0760(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047ebca
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0760
        ;   Label: core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760
    PUSH ESI                            ; 004c0761
    PUSH EDI                            ; 004c0762
    PUSH EBP                            ; 004c0763
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c0764
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c0768
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c076c
    XOR EBX,EBX                         ; 004c076f
    TEST EDX,EDX                        ; 004c0771
    JLE 0x004c0793                      ; 004c0773
        ;   XREF to: 004c0793 (CONDITIONAL_JUMP)  ; LAB_004c0793
    MOV ESI,EDI                         ; 004c0775
    PUSH EBP                            ; 004c0777
        ;   Label: LAB_004c0777
    MOV EAX,dword ptr [ESI + 0xc]       ; 004c0778
    PUSH EAX                            ; 004c077b
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c077c
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c0781
    TEST EAX,EAX                        ; 004c0784
    JNZ 0x004c079a                      ; 004c0786
        ;   XREF to: 004c079a (CONDITIONAL_JUMP)  ; LAB_004c079a
    INC EBX                             ; 004c0788
    MOV ECX,dword ptr [EDI + 0x8]       ; 004c0789
    ADD ESI,0x4                         ; 004c078c
    CMP EBX,ECX                         ; 004c078f
    JL 0x004c0777                       ; 004c0791
        ;   XREF to: 004c0777 (CONDITIONAL_JUMP)  ; LAB_004c0777
    XOR EAX,EAX                         ; 004c0793
        ;   Label: LAB_004c0793
    POP EBP                             ; 004c0795
    POP EDI                             ; 004c0796
    POP ESI                             ; 004c0797
    POP EBX                             ; 004c0798
    RET                                 ; 004c0799
    MOV EAX,0x1                         ; 004c079a
        ;   Label: LAB_004c079a
    POP EBP                             ; 004c079f
    POP EDI                             ; 004c07a0
    POP ESI                             ; 004c07a1
    POP EBX                             ; 004c07a2
    RET                                 ; 004c07a3

