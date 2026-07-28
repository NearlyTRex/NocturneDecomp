; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_curtain.cpp_FUN_0043dad0 at 0043e084
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e110
        ;   Label: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_0043e110
    PUSH ESI                            ; 0043e111
    PUSH EDI                            ; 0043e112
    PUSH EBP                            ; 0043e113
    SUB ESP,0x20                        ; 0043e114
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e117
    MOV EDX,dword ptr [EAX + 0x1fc]     ; 0043e11b
    XOR ESI,ESI                         ; 0043e121
    TEST EDX,EDX                        ; 0043e123
    JLE 0x0043e1bb                      ; 0043e125
        ;   XREF to: 0043e1bb (CONDITIONAL_JUMP)  ; LAB_0043e1bb
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043e12b
    ADD EAX,0x200                       ; 0043e12f
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043e134
    MOV dword ptr [ESP + 0x18],EAX      ; 0043e138
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e13c
    ADD EBP,0x20                        ; 0043e140
    ADD EAX,0x3c                        ; 0043e143
    ADD EBX,0x220                       ; 0043e146
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043e14c
    IMUL EDI,ESI,0x74                   ; 0043e150
        ;   Label: LAB_0043e150
    ADD EDI,dword ptr [ESP + 0x18]      ; 0043e153
    PUSH EDI                            ; 0043e157
    LEA EAX,[ESP + 0x4]                 ; 0043e158
    PUSH EAX                            ; 0043e15c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043e15d
    PUSH EDX                            ; 0043e161
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0043e162
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [EAX]                 ; 0043e167
    FADD float ptr [EBP]                ; 0043e169
    ADD ESP,0xc                         ; 0043e16c
    FSTP float ptr [ESP + 0xc]          ; 0043e16f
    FLD float ptr [EAX + 0x4]           ; 0043e173
    FADD float ptr [EBP + 0x4]          ; 0043e176
    FSTP float ptr [ESP + 0x10]         ; 0043e179
    FLD float ptr [EAX + 0x8]           ; 0043e17d
    FADD float ptr [EBP + 0x8]          ; 0043e180
    LEA EAX,[ESP + 0xc]                 ; 0043e183
    FSTP float ptr [ESP + 0x14]         ; 0043e187
    CMP EBX,EAX                         ; 0043e18b
    JNZ 0x0043e1c3                      ; 0043e18d
        ;   XREF to: 0043e1c3 (CONDITIONAL_JUMP)  ; LAB_0043e1c3
    LEA EAX,[EDI + 0x38]                ; 0043e18f
        ;   Label: LAB_0043e18f
    LEA EDX,[EDI + 0x20]                ; 0043e192
    CMP EAX,EDX                         ; 0043e195
    JZ 0x0043e1a9                       ; 0043e197
        ;   XREF to: 0043e1a9 (CONDITIONAL_JUMP)  ; LAB_0043e1a9
    MOV ECX,dword ptr [EDX]             ; 0043e199
    MOV dword ptr [EAX],ECX             ; 0043e19b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043e19d
    MOV dword ptr [EAX + 0x4],ECX       ; 0043e1a0
    MOV ECX,dword ptr [EDX + 0x8]       ; 0043e1a3
    MOV dword ptr [EAX + 0x8],ECX       ; 0043e1a6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043e1a9
        ;   Label: LAB_0043e1a9
    INC ESI                             ; 0043e1ad
    MOV ECX,dword ptr [EAX + 0x1fc]     ; 0043e1ae
    ADD EBX,0x74                        ; 0043e1b4
    CMP ESI,ECX                         ; 0043e1b7
    JL 0x0043e150                       ; 0043e1b9
        ;   XREF to: 0043e150 (CONDITIONAL_JUMP)  ; LAB_0043e150
    ADD ESP,0x20                        ; 0043e1bb
        ;   Label: LAB_0043e1bb
    POP EBP                             ; 0043e1be
    POP EDI                             ; 0043e1bf
    POP ESI                             ; 0043e1c0
    POP EBX                             ; 0043e1c1
    RET                                 ; 0043e1c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e1c3
        ;   Label: LAB_0043e1c3
    MOV dword ptr [EBX],EAX             ; 0043e1c7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043e1c9
    MOV dword ptr [EBX + 0x4],EAX       ; 0043e1cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043e1d0
    MOV dword ptr [EBX + 0x8],EAX       ; 0043e1d4
    JMP 0x0043e18f                      ; 0043e1d7
        ;   XREF to: 0043e18f (UNCONDITIONAL_JUMP)  ; LAB_0043e18f

