; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004319d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[11]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0d3a
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 00419f7d
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417e0f
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 0042630e
;   core_demnfolk.cpp_FUN_00455080 at 004555fe
;   core_event.cpp_FUN_0048c2e0 at 0048cefc
;   core_hero.cpp_FUN_004d4160 at 004d4180
;   core_styldemo.cpp_CStylerDemon_process_FUN_0059e600 at 0059e766
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 0058943a
;   core_zombiepriest.cpp_FUN_0058d960 at 0058dbcb
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b84f4
;   TerminatedCString s_CCharacter_pickupObjectN_005b8509
;   TerminatedCString s_core_charactr_cpp_005b853a
;   TerminatedCString s_CCharacter_pickupObjectN_005b854f
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_charactr.cpp_FUN_00431ab0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004319d0
        ;   Label: core_charactr.cpp_FUN_004319d0
    PUSH ESI                            ; 004319d1
    PUSH EDI                            ; 004319d2
    PUSH EBP                            ; 004319d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004319d4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004319d8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004319dc
    TEST EDI,EDI                        ; 004319e0
    JL 0x004319e9                       ; 004319e2
        ;   XREF to: 004319e9 (CONDITIONAL_JUMP)  ; LAB_004319e9
    CMP EDI,0x2                         ; 004319e4
    JL 0x00431a0c                       ; 004319e7
        ;   XREF to: 00431a0c (CONDITIONAL_JUMP)  ; LAB_00431a0c
    MOV EDX,0x5b84f4                    ; 004319e9 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_004319e9
    MOV ECX,0xeec                       ; 004319ee
    PUSH 0x5b8509                       ; 004319f3 | = "CCharacter::pickupObjectNow - invalid..."
    MOV dword ptr [0x01d71de0],EDX      ; 004319f8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004319fe | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00431a04
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00431a09
    TEST EBP,EBP                        ; 00431a0c
        ;   Label: LAB_00431a0c
    JNZ 0x00431a15                      ; 00431a0e
        ;   XREF to: 00431a15 (CONDITIONAL_JUMP)  ; LAB_00431a15
    POP EBP                             ; 00431a10
        ;   Label: LAB_00431a10
    POP EDI                             ; 00431a11
    POP ESI                             ; 00431a12
    POP EBX                             ; 00431a13
    RET                                 ; 00431a14
    PUSH 0x0                            ; 00431a15
        ;   Label: LAB_00431a15
    PUSH EDI                            ; 00431a17
    MOV EAX,dword ptr [ESI + 0x154]     ; 00431a18
    PUSH ESI                            ; 00431a1e
    CALL dword ptr [EAX + 0x128]        ; 00431a1f
    LEA EAX,[EDI*0x8 + 0x0]             ; 00431a25
    MOV EBX,EAX                         ; 00431a2c
    SHL EAX,0x4                         ; 00431a2e
    SUB EAX,EBX                         ; 00431a31
    LEA EBX,[ESI + 0x25a8]              ; 00431a33
    ADD EBX,EAX                         ; 00431a39
    MOV EAX,dword ptr [EBX + 0x4]       ; 00431a3b
    ADD ESP,0xc                         ; 00431a3e
    TEST EAX,EAX                        ; 00431a41
    JL 0x00431a4f                       ; 00431a43
        ;   XREF to: 00431a4f (CONDITIONAL_JUMP)  ; LAB_00431a4f
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00431a45
    JZ 0x00431a10                       ; 00431a4d
        ;   XREF to: 00431a10 (CONDITIONAL_JUMP)  ; LAB_00431a10
    CMP dword ptr [EBX],0x0             ; 00431a4f
        ;   Label: LAB_00431a4f
    JGE 0x00431a76                      ; 00431a52
        ;   XREF to: 00431a76 (CONDITIONAL_JUMP)  ; LAB_00431a76
    MOV EAX,0x5b853a                    ; 00431a54 | = "..\\core\\charactr.cpp"
    MOV EDX,0xf04                       ; 00431a59
    PUSH 0x5b854f                       ; 00431a5e | = "CCharacter::pickupObjectNow - invalid..."
    MOV [0x01d71de0],EAX                ; 00431a63 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00431a68 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00431a6e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00431a73
    PUSH ESI                            ; 00431a76
        ;   Label: LAB_00431a76
    MOV EAX,dword ptr [EBP + 0x154]     ; 00431a77
    PUSH EBP                            ; 00431a7d
    CALL dword ptr [EAX + 0x88]         ; 00431a7e
    ADD ESP,0x8                         ; 00431a84
    MOV ECX,dword ptr [ESP + 0x24]      ; 00431a87
    PUSH ECX                            ; 00431a8b
    PUSH dword ptr [ESP + 0x24]         ; 00431a8c
    PUSH EDI                            ; 00431a90
    PUSH ESI                            ; 00431a91
    MOV dword ptr [EBX + 0x8],EBP       ; 00431a92
    CALL core_charactr.cpp_FUN_00431ab0 ; 00431a95
        ;   XREF to: 00431ab0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431ab0()
    ADD ESP,0x10                        ; 00431a9a
    POP EBP                             ; 00431a9d
    POP EDI                             ; 00431a9e
    POP ESI                             ; 00431a9f
    POP EBX                             ; 00431aa0
    RET                                 ; 00431aa1

