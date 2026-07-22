; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d49f0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   string s_..\\core\\mimic.cpp_005893d1
;   string s_CMimic::setup_-_can't_use_mimic_i_005893e3
;   undefined4 DAT_005b7650
;   undefined4 DAT_005bdee0
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea280
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
;   core_charactr.cpp_FUN_004259f0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
;   core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   FUN_004c8440
;   FUN_004d4ba0
;   FUN_004d4f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d49f0
        ;   Label: FUN_004d49f0
    PUSH EDI                            ; 004d49f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d49f2
    MOV EAX,[0x005bdee0]                ; 004d49f6 | DAT_005bdee0
    CMP dword ptr [EAX],0x0             ; 004d49fb | DAT_01cea280
    JNZ 0x004d4a86                      ; 004d49fe
        ;   XREF to: 004d4a86 (CONDITIONAL_JUMP)  ; LAB_004d4a86
    MOV EAX,[0x01cae0e8]                ; 004d4a04 | DAT_01cae0e8
        ;   Label: LAB_004d4a04
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4a09
    MOV EDX,dword ptr [EDX + 0x108]     ; 004d4a10
    MOV dword ptr [EBX + 0x108],EDX     ; 004d4a16
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4a1c
    MOV EDX,dword ptr [EDX + 0x10c]     ; 004d4a23
    MOV dword ptr [EBX + 0x10c],EDX     ; 004d4a29
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4a2f
    FLD float ptr [EBX + 0x47578]       ; 004d4a36
    MOV EAX,dword ptr [EAX + 0x110]     ; 004d4a3c
    FLDZ                                ; 004d4a42
    MOV dword ptr [EBX + 0x110],EAX     ; 004d4a44
    FCOMPP                              ; 004d4a4a
    FNSTSW AX                           ; 004d4a4c
    SAHF                                ; 004d4a4e
    JBE 0x004d4ab0                      ; 004d4a4f
        ;   XREF to: 004d4ab0 (CONDITIONAL_JUMP)  ; LAB_004d4ab0
    PUSH dword ptr [ESP + 0x10]         ; 004d4a51
    PUSH EBX                            ; 004d4a55
    CALL core_charactr.cpp_FUN_004259f0 ; 004d4a56
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004d4a5b
    TEST EAX,EAX                        ; 004d4a5e
    JZ 0x004d4a83                       ; 004d4a60
        ;   XREF to: 004d4a83 (CONDITIONAL_JUMP)  ; LAB_004d4a83
    MOV EDI,dword ptr [EBX + 0x4691c]   ; 004d4a62
    CMP EDI,0x1                         ; 004d4a68
    JLE 0x004d4ac0                      ; 004d4a6b
        ;   XREF to: 004d4ac0 (CONDITIONAL_JUMP)  ; LAB_004d4ac0
    PUSH dword ptr [ESP + 0x10]         ; 004d4a6d
    PUSH EBX                            ; 004d4a71
    CALL FUN_004d4f30                   ; 004d4a72
        ;   XREF to: 004d4f30 (UNCONDITIONAL_CALL)  ; undefined FUN_004d4f30()
    ADD ESP,0x8                         ; 004d4a77
    PUSH EBX                            ; 004d4a7a
        ;   Label: LAB_004d4a7a
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 004d4a7b
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0()
    ADD ESP,0x4                         ; 004d4a80
    POP EDI                             ; 004d4a83
        ;   Label: LAB_004d4a83
    POP EBX                             ; 004d4a84
    RET                                 ; 004d4a85
    PUSH ESI                            ; 004d4a86
        ;   Label: LAB_004d4a86
    MOV ECX,0x5893d1                    ; 004d4a87 | = "..\\core\\mimic.cpp"
    MOV ESI,0x130                       ; 004d4a8c
    PUSH 0x5893e3                       ; 004d4a91 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d4a96 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d4a9c | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d4aa2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d4aa7
    POP ESI                             ; 004d4aaa
    JMP 0x004d4a04                      ; 004d4aab
        ;   XREF to: 004d4a04 (UNCONDITIONAL_JUMP)  ; LAB_004d4a04
    PUSH dword ptr [ESP + 0x10]         ; 004d4ab0
        ;   Label: LAB_004d4ab0
    PUSH EBX                            ; 004d4ab4
    CALL core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 ; 004d4ab5
        ;   XREF to: 004d5e20 (UNCONDITIONAL_CALL)  ; undefined core_mimic.cpp_CMimic_processMorph_FUN_004d5e20()
    ADD ESP,0x8                         ; 004d4aba
    POP EDI                             ; 004d4abd
    POP EBX                             ; 004d4abe
    RET                                 ; 004d4abf
    JGE 0x004d4ae5                      ; 004d4ac0
        ;   XREF to: 004d4ae5 (CONDITIONAL_JUMP)  ; LAB_004d4ae5
        ;   Label: LAB_004d4ac0
    LEA EAX,[EBX + 0xbd88]              ; 004d4ac2
    PUSH EAX                            ; 004d4ac8
    MOV EAX,[0x005b7650]                ; 004d4ac9 | DAT_005b7650
    PUSH EAX                            ; 004d4ace
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004d4acf
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004d4ad4
    TEST EAX,EAX                        ; 004d4ad7
    JZ 0x004d4ae5                       ; 004d4ad9
        ;   XREF to: 004d4ae5 (CONDITIONAL_JUMP)  ; LAB_004d4ae5
    MOV dword ptr [EBX + 0x4691c],0x1   ; 004d4adb
    LEA EAX,[EBX + 0xbd24]              ; 004d4ae5
        ;   Label: LAB_004d4ae5
    PUSH EAX                            ; 004d4aeb
    MOV EDX,dword ptr [0x005b7650]      ; 004d4aec | DAT_005b7650
    PUSH EDX                            ; 004d4af2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004d4af3
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004d4af8
    TEST EAX,EAX                        ; 004d4afb
    JZ 0x004d4a7a                       ; 004d4afd
        ;   XREF to: 004d4a7a (CONDITIONAL_JUMP)  ; LAB_004d4a7a
    PUSH EBX                            ; 004d4b03
    CALL FUN_004d4ba0                   ; 004d4b04
        ;   XREF to: 004d4ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d4ba0()
    MOV ECX,dword ptr [EBX + 0x4691c]   ; 004d4b09
    ADD ESP,0x4                         ; 004d4b0f
    CMP ECX,0x1                         ; 004d4b12
    JNZ 0x004d4a7a                      ; 004d4b15
        ;   XREF to: 004d4a7a (CONDITIONAL_JUMP)  ; LAB_004d4a7a
    MOV EAX,[0x01cae0e8]                ; 004d4b1b | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d4b20
    ADD EAX,0x150                       ; 004d4b27
    PUSH EAX                            ; 004d4b2c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004d4b2d
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d4b32
    ADD ESP,0x4                         ; 004d4b35
    CMP EAX,0x3                         ; 004d4b38
    JNC 0x004d4b5f                      ; 004d4b3b
        ;   XREF to: 004d4b5f (CONDITIONAL_JUMP)  ; LAB_004d4b5f
    CMP EAX,0x1                         ; 004d4b3d
    JNC 0x004d4b4a                      ; 004d4b40
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
    TEST EAX,EAX                        ; 004d4b42
    JNZ 0x004d4a7a                      ; 004d4b44
        ;   XREF to: 004d4a7a (CONDITIONAL_JUMP)  ; LAB_004d4a7a
    PUSH EBX                            ; 004d4b4a
        ;   Label: LAB_004d4b4a
    CALL core_mimic.cpp_CMimic_setupCloth_FUN_004d5770 ; 004d4b4b
        ;   XREF to: 004d5770 (UNCONDITIONAL_CALL)  ; undefined core_mimic.cpp_CMimic_setupCloth_FUN_004d5770()
    ADD ESP,0x4                         ; 004d4b50
    PUSH EBX                            ; 004d4b53
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 004d4b54
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0()
    ADD ESP,0x4                         ; 004d4b59
    POP EDI                             ; 004d4b5c
    POP EBX                             ; 004d4b5d
    RET                                 ; 004d4b5e
    JBE 0x004d4b4a                      ; 004d4b5f
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
        ;   Label: LAB_004d4b5f
    CMP EAX,0x11                        ; 004d4b61
    JNC 0x004d4b77                      ; 004d4b64
        ;   XREF to: 004d4b77 (CONDITIONAL_JUMP)  ; LAB_004d4b77
    CMP EAX,0x10                        ; 004d4b66
    JZ 0x004d4b4a                       ; 004d4b69
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
    PUSH EBX                            ; 004d4b6b
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 004d4b6c
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0()
    ADD ESP,0x4                         ; 004d4b71
    POP EDI                             ; 004d4b74
    POP EBX                             ; 004d4b75
    RET                                 ; 004d4b76
    JBE 0x004d4b4a                      ; 004d4b77
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
        ;   Label: LAB_004d4b77
    CMP EAX,0x14                        ; 004d4b79
    JC 0x004d4a7a                       ; 004d4b7c
        ;   XREF to: 004d4a7a (CONDITIONAL_JUMP)  ; LAB_004d4a7a
    JBE 0x004d4b4a                      ; 004d4b82
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
    CMP EAX,0x15                        ; 004d4b84
    JZ 0x004d4b4a                       ; 004d4b87
        ;   XREF to: 004d4b4a (CONDITIONAL_JUMP)  ; LAB_004d4b4a
    PUSH EBX                            ; 004d4b89
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 004d4b8a
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0()
    ADD ESP,0x4                         ; 004d4b8f
    POP EDI                             ; 004d4b92
    POP EBX                             ; 004d4b93
    RET                                 ; 004d4b94

