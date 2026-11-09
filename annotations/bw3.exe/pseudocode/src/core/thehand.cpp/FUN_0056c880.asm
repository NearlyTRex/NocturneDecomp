; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_thehand_cpp_FUN_0056c880(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82088
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c880
        ;   Label: core_thehand.cpp_FUN_0056c880
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056c881
    PUSH EBX                            ; 0056c885
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056c886
    CALL dword ptr [EAX + 0x70]         ; 0056c88c
    ADD ESP,0x4                         ; 0056c88f
    TEST EAX,EAX                        ; 0056c892
    JZ 0x0056c8a8                       ; 0056c894
        ;   XREF to: 0056c8a8 (CONDITIONAL_JUMP)  ; LAB_0056c8a8
    MOV EAX,[0x00600530]                ; 0056c896 | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 0056c89b | DAT_01d82088
    JNZ 0x0056c8a8                      ; 0056c8a2
        ;   XREF to: 0056c8a8 (CONDITIONAL_JUMP)  ; LAB_0056c8a8
    XOR EAX,EAX                         ; 0056c8a4
    POP EBX                             ; 0056c8a6
    RET                                 ; 0056c8a7
    PUSH EBX                            ; 0056c8a8
        ;   Label: LAB_0056c8a8
    CALL core_charactr.cpp_FUN_0042e220 ; 0056c8a9
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056c8ae
    POP EBX                             ; 0056c8b1
    RET                                 ; 0056c8b2

