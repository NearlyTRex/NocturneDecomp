; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_wateract.cpp_FUN_005eb040()
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb040
        ;   Label: core_wateract.cpp_FUN_005eb040
    PUSH ESI                            ; 005eb041
    PUSH EDI                            ; 005eb042
    PUSH EBP                            ; 005eb043
    SUB ESP,0x20                        ; 005eb044
    MOV EAX,dword ptr [ESP + 0x34]      ; 005eb047
    MOV EDX,dword ptr [EAX + 0x298]     ; 005eb04b
    XOR EDI,EDI                         ; 005eb051
    TEST EDX,EDX                        ; 005eb053
    JLE 0x005eb0d2                      ; 005eb055
        ;   XREF to: 005eb0d2 (CONDITIONAL_JUMP)  ; LAB_005eb0d2
    MOV EBP,dword ptr [ESP + 0x34]      ; 005eb05b
    ADD EAX,0x29c                       ; 005eb05f
    MOV EBX,dword ptr [ESP + 0x34]      ; 005eb064
    MOV dword ptr [ESP + 0x1c],EAX      ; 005eb068
    MOV EAX,dword ptr [ESP + 0x34]      ; 005eb06c
    ADD EBP,0x20                        ; 005eb070
    ADD EAX,0x3c                        ; 005eb073
    ADD EBX,0x2a8                       ; 005eb076
    MOV dword ptr [ESP + 0x18],EAX      ; 005eb07c
    FLD float ptr [EBX]                 ; 005eb080
        ;   Label: LAB_005eb080
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005eb082
    MOV EDX,dword ptr [ESP + 0x18]      ; 005eb086
    MOV ESI,EDI                         ; 005eb08a
    FSUB float ptr [EBP]                ; 005eb08c
    SHL ESI,0x5                         ; 005eb08f
    FSTP float ptr [ESP]                ; 005eb092
    FLD float ptr [EBX + 0x4]           ; 005eb095
    ADD ESI,EAX                         ; 005eb098
    FSUB float ptr [EBP + 0x4]          ; 005eb09a
    MOV EAX,ESP                         ; 005eb09d
    FSTP float ptr [ESP + 0x4]          ; 005eb09f
    PUSH EAX                            ; 005eb0a3
    LEA EAX,[ESP + 0x10]                ; 005eb0a4
    FLD float ptr [EBX + 0x8]           ; 005eb0a8
    PUSH EAX                            ; 005eb0ab
    FSUB float ptr [EBP + 0x8]          ; 005eb0ac
    PUSH EDX                            ; 005eb0af
    FSTP float ptr [ESP + 0x14]         ; 005eb0b0
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 005eb0b4
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005eb0b9
    CMP ESI,EAX                         ; 005eb0bc
    JNZ 0x005eb0da                      ; 005eb0be
        ;   XREF to: 005eb0da (CONDITIONAL_JUMP)  ; LAB_005eb0da
    MOV EAX,dword ptr [ESP + 0x34]      ; 005eb0c0
        ;   Label: LAB_005eb0c0
    INC EDI                             ; 005eb0c4
    MOV ECX,dword ptr [EAX + 0x298]     ; 005eb0c5
    ADD EBX,0x20                        ; 005eb0cb
    CMP EDI,ECX                         ; 005eb0ce
    JL 0x005eb080                       ; 005eb0d0
        ;   XREF to: 005eb080 (CONDITIONAL_JUMP)  ; LAB_005eb080
    ADD ESP,0x20                        ; 005eb0d2
        ;   Label: LAB_005eb0d2
    POP EBP                             ; 005eb0d5
    POP EDI                             ; 005eb0d6
    POP ESI                             ; 005eb0d7
    POP EBX                             ; 005eb0d8
    RET                                 ; 005eb0d9
    MOV EDX,dword ptr [EAX]             ; 005eb0da
        ;   Label: LAB_005eb0da
    MOV dword ptr [ESI],EDX             ; 005eb0dc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005eb0de
    MOV dword ptr [ESI + 0x4],EDX       ; 005eb0e1
    MOV EDX,dword ptr [EAX + 0x8]       ; 005eb0e4
    MOV dword ptr [ESI + 0x8],EDX       ; 005eb0e7
    JMP 0x005eb0c0                      ; 005eb0ea
        ;   XREF to: 005eb0c0 (UNCONDITIONAL_JUMP)  ; LAB_005eb0c0

