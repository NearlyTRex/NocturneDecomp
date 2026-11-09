; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dcad0(int param_1)
;
;
; XREF[1]:
;   core_hero.cpp_FUN_004d26b0 at 004d26de
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_005c64ee
;   TerminatedCString s_CInventory_setupItems_we_005c64fe
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcad0
        ;   Label: core_inv.cpp_FUN_004dcad0
    PUSH ESI                            ; 004dcad1
    PUSH EDI                            ; 004dcad2
    PUSH EBP                            ; 004dcad3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dcad4
    CMP dword ptr [EDI + 0x458],0x0     ; 004dcad8
    JNZ 0x004dcb15                      ; 004dcadf
        ;   XREF to: 004dcb15 (CONDITIONAL_JUMP)  ; LAB_004dcb15
    MOV ESI,dword ptr [EDI + 0x10]      ; 004dcae1
        ;   Label: LAB_004dcae1
    XOR EBX,EBX                         ; 004dcae4
    TEST ESI,ESI                        ; 004dcae6
    JLE 0x004dcb10                      ; 004dcae8
        ;   XREF to: 004dcb10 (CONDITIONAL_JUMP)  ; LAB_004dcb10
    MOV ESI,EDI                         ; 004dcaea
    MOV EAX,dword ptr [ESI + 0x14]      ; 004dcaec
        ;   Label: LAB_004dcaec
    PUSH EAX                            ; 004dcaef
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dcaf0
    ADD ESI,0x4                         ; 004dcaf6
    INC EBX                             ; 004dcaf9
    CALL dword ptr [EDX]                ; 004dcafa
    MOV EBP,dword ptr [EDI + 0x10]      ; 004dcafc
    ADD ESP,0x4                         ; 004dcaff
    CMP EBX,EBP                         ; 004dcb02
    JL 0x004dcaec                       ; 004dcb04
        ;   XREF to: 004dcaec (CONDITIONAL_JUMP)  ; LAB_004dcaec
    LEA EAX,[EAX]                       ; 004dcb06
    LEA EDX,[EDX]                       ; 004dcb0c
    POP EBP                             ; 004dcb10
        ;   Label: LAB_004dcb10
    POP EDI                             ; 004dcb11
    POP ESI                             ; 004dcb12
    POP EBX                             ; 004dcb13
    RET                                 ; 004dcb14
    MOV ECX,0x5c64ee                    ; 004dcb15 | = "..\\core\\inv.cpp"
        ;   Label: LAB_004dcb15
    MOV EBX,0x75c                       ; 004dcb1a
    PUSH 0x5c64fe                       ; 004dcb1f | = "CInventory::setupItems - we should ow..."
    MOV dword ptr [0x01d71de0],ECX      ; 004dcb24 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004dcb2a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004dcb30
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004dcb35
    JMP 0x004dcae1                      ; 004dcb38
        ;   XREF to: 004dcae1 (UNCONDITIONAL_JUMP)  ; LAB_004dcae1

