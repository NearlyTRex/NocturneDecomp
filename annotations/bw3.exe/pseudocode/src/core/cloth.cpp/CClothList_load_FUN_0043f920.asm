; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_load_FUN_0043f920(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_charactr.cpp_CCharacter_setup_FUN_0042b0e0 at 0042b26a
;   core_spirbear.cpp_CSpiritBear_setup_FUN_0059aba0 at 0059ac06
;   core_spireagl.cpp_CSpiritEagle_setup_FUN_005992f0 at 00599342
;   core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060 at 0059a0c6
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005b91e0
;   TerminatedCString s_CClothList_load_out_of_m_005b91f2
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_0043c220
;   core_cloth.cpp_CCloth_load_FUN_0043c330
;   core_cloth.cpp_FUN_0043c280
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f920
        ;   Label: core_cloth.cpp_CClothList_load_FUN_0043f920
    PUSH ESI                            ; 0043f921
    PUSH EDI                            ; 0043f922
    PUSH EBP                            ; 0043f923
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043f924
    MOV EDX,dword ptr [EBP]             ; 0043f928
    XOR EDI,EDI                         ; 0043f92b
    TEST EDX,EDX                        ; 0043f92d
    JLE 0x0043f9a8                      ; 0043f92f
        ;   XREF to: 0043f9a8 (CONDITIONAL_JUMP)  ; LAB_0043f9a8
    LEA ESI,[EBP + 0x4]                 ; 0043f935
    MOV EBX,EBP                         ; 0043f938
    MOV EAX,dword ptr [EBX + 0x194]     ; 0043f93a
        ;   Label: LAB_0043f93a
    TEST EAX,EAX                        ; 0043f940
    JNZ 0x0043f9ad                      ; 0043f942
        ;   XREF to: 0043f9ad (CONDITIONAL_JUMP)  ; LAB_0043f9ad
    PUSH 0x3ab30                        ; 0043f944
        ;   Label: LAB_0043f944
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0043f949
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0043f94e
    TEST EAX,EAX                        ; 0043f951
    JZ 0x0043f95e                       ; 0043f953
        ;   XREF to: 0043f95e (CONDITIONAL_JUMP)  ; LAB_0043f95e
    PUSH EAX                            ; 0043f955
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043c220 ; 0043f956
        ;   XREF to: 0043c220 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043c220(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043f95b
    MOV dword ptr [EBX + 0x194],EAX     ; 0043f95e
        ;   Label: LAB_0043f95e
    TEST EAX,EAX                        ; 0043f964
    JNZ 0x0043f98a                      ; 0043f966
        ;   XREF to: 0043f98a (CONDITIONAL_JUMP)  ; LAB_0043f98a
    MOV ECX,0x5b91e0                    ; 0043f968 | = "..\\core\\cloth.cpp"
    MOV EAX,0x5b6                       ; 0043f96d
    PUSH 0x5b91f2                       ; 0043f972 | = "CClothList::load - out of memory for ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0043f977 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0043f97d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043f982
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043f987
    PUSH ESI                            ; 0043f98a
        ;   Label: LAB_0043f98a
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043f98b
    PUSH ECX                            ; 0043f991
    ADD EBX,0x4                         ; 0043f992
    INC EDI                             ; 0043f995
    CALL core_cloth.cpp_CCloth_load_FUN_0043c330 ; 0043f996
        ;   XREF to: 0043c330 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043c330(CCloth * this_ptr, char * filename)
    ADD ESI,0x28                        ; 0043f99b
    MOV EAX,dword ptr [EBP]             ; 0043f99e
    ADD ESP,0x8                         ; 0043f9a1
    CMP EDI,EAX                         ; 0043f9a4
    JL 0x0043f93a                       ; 0043f9a6
        ;   XREF to: 0043f93a (CONDITIONAL_JUMP)  ; LAB_0043f93a
    POP EBP                             ; 0043f9a8
        ;   Label: LAB_0043f9a8
    POP EDI                             ; 0043f9a9
    POP ESI                             ; 0043f9aa
    POP EBX                             ; 0043f9ab
    RET                                 ; 0043f9ac
    PUSH 0x0                            ; 0043f9ad
        ;   Label: LAB_0043f9ad
    PUSH EAX                            ; 0043f9af
    CALL core_cloth.cpp_FUN_0043c280    ; 0043f9b0
        ;   XREF to: 0043c280 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c280()
    ADD ESP,0x8                         ; 0043f9b5
    PUSH EAX                            ; 0043f9b8
    CALL crt_unknown.c_FUN_005a30c4     ; 0043f9b9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0043f9be
    JMP 0x0043f944                      ; 0043f9c1
        ;   XREF to: 0043f944 (UNCONDITIONAL_JUMP)  ; LAB_0043f944

