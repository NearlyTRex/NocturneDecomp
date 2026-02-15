; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00506b10(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_litecone.cpp_factoryFunc_FUN_00506ad0 at 00506aea
;
; Referenced Globals:
;   TerminatedCString s_none_00631556
;   undefined4 s_one_00631557
;   undefined4 s_ne_00631558
;   undefined4 s_e_00631559
;   TerminatedCString s_none_0063155b
;   undefined4 s_one_0063155c
;   undefined4 s_ne_0063155d
;   undefined4 s_e_0063155e
;   CDemonActor_vtable g_CLightConeVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00506b10
        ;   Label: core_litecone.cpp_CLightCone_ctor_FUN_00506b10
    PUSH EDI                            ; 00506b11
    MOV EDX,dword ptr [ESP + 0xc]       ; 00506b12
    PUSH EDX                            ; 00506b16
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00506b17
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x660bb4 ; 00506b1c | g_CLightConeVTable
    MOV ESI,0x631556                    ; 00506b26 | = "none"
    MOV dword ptr [EAX + 0x158],0x42600000 ; 00506b2b
    MOV EDX,EAX                         ; 00506b35
    MOV dword ptr [EAX + 0x15c],0x40c00000 ; 00506b37
    ADD ESP,0x4                         ; 00506b41
    MOV dword ptr [EAX + 0xfc],0x1      ; 00506b44
    LEA EDI,[EAX + 0x164]               ; 00506b4e
    MOV dword ptr [EAX + 0x160],0x1     ; 00506b54
    PUSH EDI                            ; 00506b5e
    MOV AL,byte ptr [ESI]               ; 00506b5f | = "none" | s_ne_00631558
        ;   Label: LAB_00506b5f
    MOV byte ptr [EDI],AL               ; 00506b61
    CMP AL,0x0                          ; 00506b63
    JZ 0x00506b77                       ; 00506b65
        ;   XREF to: 00506b77 (CONDITIONAL_JUMP)  ; LAB_00506b77
    MOV AL,byte ptr [ESI + 0x1]         ; 00506b67 | s_one_00631557 | s_e_00631559
    ADD ESI,0x2                         ; 00506b6a
    MOV byte ptr [EDI + 0x1],AL         ; 00506b6d
    ADD EDI,0x2                         ; 00506b70
    CMP AL,0x0                          ; 00506b73
    JNZ 0x00506b5f                      ; 00506b75
        ;   XREF to: 00506b5f (CONDITIONAL_JUMP)  ; LAB_00506b5f
    POP EDI                             ; 00506b77
        ;   Label: LAB_00506b77
    MOV ESI,0x63155b                    ; 00506b78 | = "none"
    LEA EDI,[EDX + 0x1c8]               ; 00506b7d
    PUSH EDI                            ; 00506b83
    MOV AL,byte ptr [ESI]               ; 00506b84 | = "none" | s_ne_0063155d
        ;   Label: LAB_00506b84
    MOV byte ptr [EDI],AL               ; 00506b86
    CMP AL,0x0                          ; 00506b88
    JZ 0x00506b9c                       ; 00506b8a
        ;   XREF to: 00506b9c (CONDITIONAL_JUMP)  ; LAB_00506b9c
    MOV AL,byte ptr [ESI + 0x1]         ; 00506b8c | s_one_0063155c | s_e_0063155e
    ADD ESI,0x2                         ; 00506b8f
    MOV byte ptr [EDI + 0x1],AL         ; 00506b92
    ADD EDI,0x2                         ; 00506b95
    CMP AL,0x0                          ; 00506b98
    JNZ 0x00506b84                      ; 00506b9a
        ;   XREF to: 00506b84 (CONDITIONAL_JUMP)  ; LAB_00506b84
    POP EDI                             ; 00506b9c
        ;   Label: LAB_00506b9c
    MOV EAX,EDX                         ; 00506b9d
    POP EDI                             ; 00506b9f
    POP ESI                             ; 00506ba0
    RET                                 ; 00506ba1

