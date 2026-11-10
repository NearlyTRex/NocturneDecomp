; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState core_construc_cpp_FUN_004444f0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00431000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004444f0
        ;   Label: core_construc.cpp_FUN_004444f0
    PUSH EDX                            ; 004444f4
    CALL core_charactr.cpp_CCharacter_getDeathState_FUN_00431000 ; 004444f5
        ;   XREF to: 00431000 (UNCONDITIONAL_CALL)  ; EDeathState core_charactr.cpp_CCharacter_getDeathState_FUN_00431000(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004444fa
    MOV EDX,EAX                         ; 004444fd
    TEST EAX,EAX                        ; 004444ff
    JNZ 0x00444516                      ; 00444501
        ;   XREF to: 00444516 (CONDITIONAL_JUMP)  ; LAB_00444516
    MOV EAX,dword ptr [ESP + 0x4]       ; 00444503
    CMP dword ptr [EAX + 0xd844],0x0    ; 00444507
    JZ 0x00444516                       ; 0044450e
        ;   XREF to: 00444516 (CONDITIONAL_JUMP)  ; LAB_00444516
    MOV EAX,0xfffffffe                  ; 00444510
    RET                                 ; 00444515
    MOV EAX,EDX                         ; 00444516
        ;   Label: LAB_00444516
    RET                                 ; 00444518

