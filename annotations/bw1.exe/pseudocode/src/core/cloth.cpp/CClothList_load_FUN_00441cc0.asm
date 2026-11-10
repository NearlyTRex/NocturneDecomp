; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_load_FUN_00441cc0(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c69a
;   core_succubus.cpp_CSuccubus_setup_FUN_00591ff0 at 00592062
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d6970
;   TerminatedCString s_CClothList_load_out_of_m_005d6982
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_0043e5c0
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0
;   core_cloth.cpp_FUN_0043e620
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441cc0
        ;   Label: core_cloth.cpp_CClothList_load_FUN_00441cc0
    PUSH ESI                            ; 00441cc1
    PUSH EDI                            ; 00441cc2
    PUSH EBP                            ; 00441cc3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00441cc4
    MOV EDX,dword ptr [EBP]             ; 00441cc8
    XOR EDI,EDI                         ; 00441ccb
    TEST EDX,EDX                        ; 00441ccd
    JLE 0x00441d48                      ; 00441ccf
        ;   XREF to: 00441d48 (CONDITIONAL_JUMP)  ; LAB_00441d48
    LEA ESI,[EBP + 0x4]                 ; 00441cd5
    MOV EBX,EBP                         ; 00441cd8
    MOV EAX,dword ptr [EBX + 0x194]     ; 00441cda
        ;   Label: LAB_00441cda
    TEST EAX,EAX                        ; 00441ce0
    JNZ 0x00441d4d                      ; 00441ce2
        ;   XREF to: 00441d4d (CONDITIONAL_JUMP)  ; LAB_00441d4d
    PUSH 0x3ab30                        ; 00441ce4
        ;   Label: LAB_00441ce4
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00441ce9
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 00441cee
    TEST EAX,EAX                        ; 00441cf1
    JZ 0x00441cfe                       ; 00441cf3
        ;   XREF to: 00441cfe (CONDITIONAL_JUMP)  ; LAB_00441cfe
    PUSH EAX                            ; 00441cf5
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043e5c0 ; 00441cf6
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043e5c0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 00441cfb
    MOV dword ptr [EBX + 0x194],EAX     ; 00441cfe
        ;   Label: LAB_00441cfe
    TEST EAX,EAX                        ; 00441d04
    JNZ 0x00441d2a                      ; 00441d06
        ;   XREF to: 00441d2a (CONDITIONAL_JUMP)  ; LAB_00441d2a
    MOV ECX,0x5d6970                    ; 00441d08 | = "..\\core\\cloth.cpp"
    MOV EAX,0x5b6                       ; 00441d0d
    PUSH 0x5d6982                       ; 00441d12 | = "CClothList::load - out of memory for ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00441d17 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00441d1d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00441d22
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00441d27
    PUSH ESI                            ; 00441d2a
        ;   Label: LAB_00441d2a
    MOV ECX,dword ptr [EBX + 0x194]     ; 00441d2b
    PUSH ECX                            ; 00441d31
    ADD EBX,0x4                         ; 00441d32
    INC EDI                             ; 00441d35
    CALL core_cloth.cpp_CCloth_load_FUN_0043e6d0 ; 00441d36
        ;   XREF to: 0043e6d0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_0043e6d0(CCloth * this_ptr, char * filename)
    ADD ESI,0x28                        ; 00441d3b
    MOV EAX,dword ptr [EBP]             ; 00441d3e
    ADD ESP,0x8                         ; 00441d41
    CMP EDI,EAX                         ; 00441d44
    JL 0x00441cda                       ; 00441d46
        ;   XREF to: 00441cda (CONDITIONAL_JUMP)  ; LAB_00441cda
    POP EBP                             ; 00441d48
        ;   Label: LAB_00441d48
    POP EDI                             ; 00441d49
    POP ESI                             ; 00441d4a
    POP EBX                             ; 00441d4b
    RET                                 ; 00441d4c
    PUSH 0x0                            ; 00441d4d
        ;   Label: LAB_00441d4d
    PUSH EAX                            ; 00441d4f
    CALL core_cloth.cpp_FUN_0043e620    ; 00441d50
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 00441d55
    PUSH EAX                            ; 00441d58
    CALL crt_unknown.c_FUN_005c0344     ; 00441d59
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00441d5e
    JMP 0x00441ce4                      ; 00441d61
        ;   XREF to: 00441ce4 (UNCONDITIONAL_JUMP)  ; LAB_00441ce4

