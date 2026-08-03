; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_scat_cpp_CScat_renderOpaque_FUN_004fcb20(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004fcaf0 = 004fcb76
;   double DOUBLE_0058df1e = 0.950000000000000
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcb20
        ;   Label: core_scat.cpp_CScat_renderOpaque_FUN_004fcb20
    SUB ESP,0x4                         ; 004fcb21
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fcb24
    PUSH EBX                            ; 004fcb28
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004fcb29
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fcb2e
    TEST EAX,EAX                        ; 004fcb31
    JZ 0x004fcb46                       ; 004fcb33
        ;   XREF to: 004fcb46 (CONDITIONAL_JUMP)  ; LAB_004fcb46
    PUSH ESI                            ; 004fcb35
    MOV EDX,dword ptr [EBX + 0x1fa50]   ; 004fcb36
    TEST EDX,EDX                        ; 004fcb3c
    JNZ 0x004fcb4b                      ; 004fcb3e
        ;   XREF to: 004fcb4b (CONDITIONAL_JUMP)  ; LAB_004fcb4b
    MOV EAX,0x1                         ; 004fcb40
    POP ESI                             ; 004fcb45
    ADD ESP,0x4                         ; 004fcb46
        ;   Label: LAB_004fcb46
    POP EBX                             ; 004fcb49
    RET                                 ; 004fcb4a
    PUSH EDX                            ; 004fcb4b
        ;   Label: LAB_004fcb4b
    MOV ESI,dword ptr [EDX + 0x14c]     ; 004fcb4c
    CALL dword ptr [ESI + 0x8]          ; 004fcb52
    ADD ESP,0x4                         ; 004fcb55
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fcb58
    XOR ESI,ESI                         ; 004fcb5e
    TEST EAX,EAX                        ; 004fcb60
    JZ 0x004fcb7b                       ; 004fcb62
        ;   XREF to: 004fcb7b (CONDITIONAL_JUMP)  ; LAB_004fcb7b
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 004fcb64
    CMP EAX,0x8                         ; 004fcb6a
    JA 0x004fcb76                       ; 004fcb6d
        ;   XREF to: 004fcb76 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x4fcaf0]  ; 004fcb6f | caseD_7 | caseD_8 | switchdataD_004fcaf0
        ;   Label: switchD
    MOV EAX,0x2                         ; 004fcb76
        ;   Label: caseD_0
    PUSH EAX                            ; 004fcb7b
        ;   Label: LAB_004fcb7b
    PUSH EBX                            ; 004fcb7c
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 004fcb7d
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 004fcb82
    FLD float ptr [ESP + 0xc]           ; 004fcb86
    ADD ESP,0x8                         ; 004fcb8a
    FCOMP double ptr [0x0058df1e]       ; 004fcb8d | DOUBLE_0058df1e
    FNSTSW AX                           ; 004fcb93
    SAHF                                ; 004fcb95
    JBE 0x004fcbbd                      ; 004fcb96
        ;   XREF to: 004fcbbd (CONDITIONAL_JUMP)  ; LAB_004fcbbd
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fcb98
        ;   Label: LAB_004fcb98
    PUSH EAX                            ; 004fcb9e
    MOV EBX,dword ptr [EAX + 0x14c]     ; 004fcb9f
    CALL dword ptr [EBX + 0xe8]         ; 004fcba5
    ADD ESP,0x4                         ; 004fcbab
    MOV EAX,0x1                         ; 004fcbae
    POP ESI                             ; 004fcbb3
    ADD ESP,0x4                         ; 004fcbb4
    POP EBX                             ; 004fcbb7
    RET                                 ; 004fcbb8
    XOR EAX,EAX                         ; 004fcbb9
        ;   Label: caseD_8
    JMP 0x004fcb7b                      ; 004fcbbb
        ;   XREF to: 004fcb7b (UNCONDITIONAL_JUMP)  ; LAB_004fcb7b
    TEST ESI,ESI                        ; 004fcbbd
        ;   Label: LAB_004fcbbd
    JNZ 0x004fcb98                      ; 004fcbbf
        ;   XREF to: 004fcb98 (CONDITIONAL_JUMP)  ; LAB_004fcb98
    MOV EAX,0x1                         ; 004fcbc1
    POP ESI                             ; 004fcbc6
    ADD ESP,0x4                         ; 004fcbc7
    POP EBX                             ; 004fcbca
    RET                                 ; 004fcbcb

