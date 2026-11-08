; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005890c0(void)
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
;
; XREF[4]:
;   FUN_004b5190 at 004b5265
;   FUN_004bcbf0 at 004bcddd
;   FUN_0055ff40 at 0055ffaf
;   FUN_00589560 at 005895ab
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee2b0
;   TerminatedCString s_openScreenDevice_Unable_005ee2c7
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661afc
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005890c0
        ;   Label: FUN_005890c0
    PUSH EBP                            ; 005890c1
    SUB ESP,0x6c                        ; 005890c2
    MOV EDX,dword ptr [0x02661afc]      ; 005890c5 | DAT_02661afc
    TEST EDX,EDX                        ; 005890cb
    JNZ 0x005890e0                      ; 005890cd
        ;   XREF to: 005890e0 (CONDITIONAL_JUMP)  ; LAB_005890e0
    CMP dword ptr [0x01c37788],0x0      ; 005890cf | DAT_01c37788
    JZ 0x005890e6                       ; 005890d6
        ;   XREF to: 005890e6 (CONDITIONAL_JUMP)  ; LAB_005890e6
    LEA EAX,[EAX]                       ; 005890d8
    MOV EDX,EDX                         ; 005890de
    ADD ESP,0x6c                        ; 005890e0
        ;   Label: LAB_005890e0
    POP EBP                             ; 005890e3
    POP EBX                             ; 005890e4
    RET                                 ; 005890e5
    PUSH 0x6c                           ; 005890e6
        ;   Label: LAB_005890e6
    PUSH EDX                            ; 005890e8
    LEA EAX,[ESP + 0x8]                 ; 005890e9
    PUSH EAX                            ; 005890ed
    CALL FUN_005b77c0                   ; 005890ee
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005890f3
    PUSH 0x0                            ; 005890f6
    PUSH 0x1                            ; 005890f8
    LEA ECX,[ESP + 0x8]                 ; 005890fa
    MOV EBX,0x6c                        ; 005890fe
    PUSH ECX                            ; 00589103
    MOV EAX,[0x02661ae8]                ; 00589104 | DAT_02661ae8
    MOV dword ptr [ESP + 0xc],EBX       ; 00589109
    PUSH 0x0                            ; 0058910d
    MOV EDX,dword ptr [EAX]             ; 0058910f
    PUSH EAX                            ; 00589111
    CALL dword ptr [EDX + 0x64]         ; 00589112
    TEST EAX,EAX                        ; 00589115
    JZ 0x00589140                       ; 00589117
        ;   XREF to: 00589140 (CONDITIONAL_JUMP)  ; LAB_00589140
    PUSH EDI                            ; 00589119
    PUSH ESI                            ; 0058911a
    MOV ESI,0x5ee2b0                    ; 0058911b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x23b                       ; 00589120
    PUSH 0x5ee2c7                       ; 00589125 | = "openScreenDevice - Unable to lock scr..."
    MOV dword ptr [0x01d046a0],ESI      ; 0058912a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00589130 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00589136
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0058913b
    POP ESI                             ; 0058913e
    POP EDI                             ; 0058913f
    MOV EBP,dword ptr [0x006141bc]      ; 00589140 | DAT_006141bc
        ;   Label: LAB_00589140
    MOV EDX,dword ptr [ESP + 0x24]      ; 00589146
    TEST EBP,EBP                        ; 0058914a
    JLE 0x005890e0                      ; 0058914c
        ;   XREF to: 005890e0 (CONDITIONAL_JUMP)  ; LAB_005890e0
    MOV EBX,dword ptr [ESP + 0x10]      ; 0058914e
    LEA ECX,[EBP*0x4 + 0x0]             ; 00589152
    XOR EAX,EAX                         ; 00589159
    MOV dword ptr [EAX + 0x1c2a38c],EDX ; 0058915b | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_0058915b
    ADD EAX,0x4                         ; 00589161
    ADD EDX,EBX                         ; 00589164
    CMP EAX,ECX                         ; 00589166
    JL 0x0058915b                       ; 00589168
        ;   XREF to: 0058915b (CONDITIONAL_JUMP)  ; LAB_0058915b
    ADD ESP,0x6c                        ; 0058916a
    POP EBP                             ; 0058916d
    POP EBX                             ; 0058916e
    RET                                 ; 0058916f

