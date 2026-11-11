; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_load_FUN_005b14a0(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 at 0042b51f
;   core_charactr.cpp_CCharacter_setup_FUN_00422930 at 00422aba
;   core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0 at 0056f412
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f11a3
;   TerminatedCString s_CClothList_load_out_of_m_005f11b5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_005adeb0
;   core_main.c_FUN_004e4500
;   core_necklace.cpp_FUN_005adda0
;   core_necklace.cpp_FUN_005ade00
;   crt_memory.c_operator_new_FUN_005b8be2
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b14a0
        ;   Label: core_cloth.cpp_CClothList_load_FUN_005b14a0
    PUSH ESI                            ; 005b14a1
    PUSH EDI                            ; 005b14a2
    PUSH EBP                            ; 005b14a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b14a4
    MOV EDX,dword ptr [EBP]             ; 005b14a8
    XOR EDI,EDI                         ; 005b14ab
    TEST EDX,EDX                        ; 005b14ad
    JLE 0x005b1528                      ; 005b14af
        ;   XREF to: 005b1528 (CONDITIONAL_JUMP)  ; LAB_005b1528
    LEA ESI,[EBP + 0x4]                 ; 005b14b5
    MOV EBX,EBP                         ; 005b14b8
    MOV EAX,dword ptr [EBX + 0x194]     ; 005b14ba
        ;   Label: LAB_005b14ba
    TEST EAX,EAX                        ; 005b14c0
    JNZ 0x005b152d                      ; 005b14c2
        ;   XREF to: 005b152d (CONDITIONAL_JUMP)  ; LAB_005b152d
    PUSH 0x3ab30                        ; 005b14c4
        ;   Label: LAB_005b14c4
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005b14c9
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005b14ce
    TEST EAX,EAX                        ; 005b14d1
    JZ 0x005b14de                       ; 005b14d3
        ;   XREF to: 005b14de (CONDITIONAL_JUMP)  ; LAB_005b14de
    PUSH EAX                            ; 005b14d5
    CALL core_necklace.cpp_FUN_005adda0 ; 005b14d6
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005adda0()
    ADD ESP,0x4                         ; 005b14db
    MOV dword ptr [EBX + 0x194],EAX     ; 005b14de
        ;   Label: LAB_005b14de
    TEST EAX,EAX                        ; 005b14e4
    JNZ 0x005b150a                      ; 005b14e6
        ;   XREF to: 005b150a (CONDITIONAL_JUMP)  ; LAB_005b150a
    MOV ECX,0x5f11a3                    ; 005b14e8 | = "..\\core\\cloth.cpp"
    MOV EAX,0x5b6                       ; 005b14ed
    PUSH 0x5f11b5                       ; 005b14f2 | = "CClothList::load - out of memory for ..."
    MOV dword ptr [0x01d046a0],ECX      ; 005b14f7 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b14fd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b1502
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b1507
    PUSH ESI                            ; 005b150a
        ;   Label: LAB_005b150a
    MOV ECX,dword ptr [EBX + 0x194]     ; 005b150b
    PUSH ECX                            ; 005b1511
    ADD EBX,0x4                         ; 005b1512
    INC EDI                             ; 005b1515
    CALL core_cloth.cpp_CCloth_load_FUN_005adeb0 ; 005b1516
        ;   XREF to: 005adeb0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_005adeb0(CCloth * this_ptr, char * filename)
    ADD ESI,0x28                        ; 005b151b
    MOV EAX,dword ptr [EBP]             ; 005b151e
    ADD ESP,0x8                         ; 005b1521
    CMP EDI,EAX                         ; 005b1524
    JL 0x005b14ba                       ; 005b1526
        ;   XREF to: 005b14ba (CONDITIONAL_JUMP)  ; LAB_005b14ba
    POP EBP                             ; 005b1528
        ;   Label: LAB_005b1528
    POP EDI                             ; 005b1529
    POP ESI                             ; 005b152a
    POP EBX                             ; 005b152b
    RET                                 ; 005b152c
    PUSH 0x0                            ; 005b152d
        ;   Label: LAB_005b152d
    PUSH EAX                            ; 005b152f
    CALL core_necklace.cpp_FUN_005ade00 ; 005b1530
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 005b1535
    PUSH EAX                            ; 005b1538
    CALL crt_unknown.c_FUN_005b7fdc     ; 005b1539
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b153e
    JMP 0x005b14c4                      ; 005b1541
        ;   XREF to: 005b14c4 (UNCONDITIONAL_JUMP)  ; LAB_005b14c4

