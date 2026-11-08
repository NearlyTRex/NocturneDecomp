; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547a80(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00547cb0 at 00547da0
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d15f4
;   TerminatedCString s_Too_bony_005d1609
;   TerminatedCString s_core_skeleton_cpp_005d1613
;   TerminatedCString s_Out_of_hunk_in_CSkeleton_005d1628
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_00547b90
;   FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547a80
        ;   Label: FUN_00547a80
    PUSH ESI                            ; 00547a81
    PUSH EBP                            ; 00547a82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00547a83
    PUSH 0x0                            ; 00547a87
    PUSH EBX                            ; 00547a89
    CALL FUN_00547b90                   ; 00547a8a
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00547b90()
    ADD ESP,0x8                         ; 00547a8f
    CMP dword ptr [ESP + 0x14],0x64     ; 00547a92
    JLE 0x00547abc                      ; 00547a97
        ;   XREF to: 00547abc (CONDITIONAL_JUMP)  ; LAB_00547abc
    MOV ECX,0x5d15f4                    ; 00547a99 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xc8                        ; 00547a9e
    PUSH 0x5d1609                       ; 00547aa3 | = "Too bony!"
    MOV dword ptr [0x01d71de0],ECX      ; 00547aa8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00547aae | DAT_01d71de4
    CALL FUN_004e4330                   ; 00547ab4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00547ab9
    MOV EAX,dword ptr [ESP + 0x14]      ; 00547abc
        ;   Label: LAB_00547abc
    MOV dword ptr [EBX + 0x1de78],EAX   ; 00547ac0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00547ac6
    MOV dword ptr [EBX + 0x1ec8c],EAX   ; 00547aca
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 00547ad0
    IMUL EAX,dword ptr [EBX + 0x1ec8c]  ; 00547ad6
    SHL EAX,0x4                         ; 00547add
    PUSH EAX                            ; 00547ae0
    CALL FUN_005a40df                   ; 00547ae1
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    MOV EDX,dword ptr [EBX + 0x1ec8c]   ; 00547ae6
    MOV dword ptr [EBX + 0x1ec90],EAX   ; 00547aec
    LEA EAX,[EDX*0x4 + 0x0]             ; 00547af2
    SUB EAX,EDX                         ; 00547af9
    ADD ESP,0x4                         ; 00547afb
    SHL EAX,0x2                         ; 00547afe
    PUSH EAX                            ; 00547b01
    CALL FUN_005a40df                   ; 00547b02
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    MOV EDX,dword ptr [EBX + 0x1ec8c]   ; 00547b07
    MOV dword ptr [EBX + 0x1ec94],EAX   ; 00547b0d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00547b13
    SUB EAX,EDX                         ; 00547b1a
    ADD ESP,0x4                         ; 00547b1c
    SHL EAX,0x2                         ; 00547b1f
    PUSH EAX                            ; 00547b22
    CALL FUN_005a40df                   ; 00547b23
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    ADD ESP,0x4                         ; 00547b28
    MOV EBP,dword ptr [EBX + 0x1ec90]   ; 00547b2b
    MOV dword ptr [EBX + 0x1ec98],EAX   ; 00547b31
    TEST EBP,EBP                        ; 00547b37
    JZ 0x00547b51                       ; 00547b39
        ;   XREF to: 00547b51 (CONDITIONAL_JUMP)  ; LAB_00547b51
    CMP dword ptr [EBX + 0x1ec94],0x0   ; 00547b3b
    JZ 0x00547b51                       ; 00547b42
        ;   XREF to: 00547b51 (CONDITIONAL_JUMP)  ; LAB_00547b51
    CMP dword ptr [EBX + 0x1ec98],0x0   ; 00547b44
    JZ 0x00547b51                       ; 00547b4b
        ;   XREF to: 00547b51 (CONDITIONAL_JUMP)  ; LAB_00547b51
    POP EBP                             ; 00547b4d
    POP ESI                             ; 00547b4e
    POP EBX                             ; 00547b4f
    RET                                 ; 00547b50
    PUSH EDI                            ; 00547b51
        ;   Label: LAB_00547b51
    MOV EDI,dword ptr [EBX + 0x1ec8c]   ; 00547b52
    PUSH EDI                            ; 00547b58
    MOV EBP,dword ptr [EBX + 0x1de78]   ; 00547b59
    PUSH EBP                            ; 00547b5f
    MOV ECX,0x5d1613                    ; 00547b60 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdc                        ; 00547b65
    PUSH 0x5d1628                       ; 00547b6a | = "Out of hunk in CSkeleton::allocMemory..."
    MOV dword ptr [0x01d71de0],ECX      ; 00547b6f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00547b75 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00547b7b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00547b80
    POP EDI                             ; 00547b83
    POP EBP                             ; 00547b84
    POP ESI                             ; 00547b85
    POP EBX                             ; 00547b86
    RET                                 ; 00547b87

