; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_FUN_004cf0c0(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_mission.cpp_FUN_004f6410 at 004f671c
;
; Referenced Globals:
;   TerminatedCString s_Gore_005c4799
;   undefined4 DAT_005c47a7
;   undefined4 DAT_005c47ab
;   undefined4 DAT_01d276b8
;   undefined4 DAT_01d4a940
;
; Called Functions:
;   core_gore.cpp_FUN_004cdbe0
;   core_gore.cpp_FUN_004ce0f0
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf0c0
        ;   Label: core_gore.cpp_FUN_004cf0c0
    PUSH ESI                            ; 004cf0c1
    PUSH EDI                            ; 004cf0c2
    PUSH EBP                            ; 004cf0c3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004cf0c4
    PUSH 0x5c4799                       ; 004cf0c8 | = "--- Gore ---\n"
    PUSH EDI                            ; 004cf0cd
    CALL crt_unknown.c_FUN_005a3140     ; 004cf0ce
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004cf0d3
    MOV EDX,dword ptr [0x01d4a940]      ; 004cf0d6 | DAT_01d4a940
    PUSH EDX                            ; 004cf0dc
    PUSH 0x5c47a7                       ; 004cf0dd | DAT_005c47a7
    PUSH EDI                            ; 004cf0e2
    XOR ESI,ESI                         ; 004cf0e3
    CALL crt_unknown.c_FUN_005a3140     ; 004cf0e5
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [0x01d4a940]      ; 004cf0ea | DAT_01d4a940
    ADD ESP,0xc                         ; 004cf0f0
    TEST ECX,ECX                        ; 004cf0f3
    JLE 0x004cf120                      ; 004cf0f5
        ;   XREF to: 004cf120 (CONDITIONAL_JUMP)  ; LAB_004cf120
    MOV EBX,0x1d4a944                   ; 004cf0f7
    PUSH EDI                            ; 004cf0fc
        ;   Label: LAB_004cf0fc
    PUSH EBX                            ; 004cf0fd
    INC ESI                             ; 004cf0fe
    CALL core_gore.cpp_FUN_004ce0f0     ; 004cf0ff
        ;   XREF to: 004ce0f0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ce0f0()
    MOV EBP,dword ptr [0x01d4a940]      ; 004cf104 | DAT_01d4a940
    ADD ESP,0x8                         ; 004cf10a
    ADD EBX,0x2c                        ; 004cf10d
    CMP ESI,EBP                         ; 004cf110
    JL 0x004cf0fc                       ; 004cf112
        ;   XREF to: 004cf0fc (CONDITIONAL_JUMP)  ; LAB_004cf0fc
    LEA EAX,[EAX]                       ; 004cf114
    LEA EDX,[EDX]                       ; 004cf11a
    MOV EAX,[0x01d276b8]                ; 004cf120 | DAT_01d276b8
        ;   Label: LAB_004cf120
    PUSH EAX                            ; 004cf125
    PUSH 0x5c47ab                       ; 004cf126 | DAT_005c47ab
    PUSH EDI                            ; 004cf12b
    XOR EBX,EBX                         ; 004cf12c
    CALL crt_unknown.c_FUN_005a3140     ; 004cf12e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [0x01d276b8]      ; 004cf133 | DAT_01d276b8
    ADD ESP,0xc                         ; 004cf139
    TEST EDX,EDX                        ; 004cf13c
    JLE 0x004cf160                      ; 004cf13e
        ;   XREF to: 004cf160 (CONDITIONAL_JUMP)  ; LAB_004cf160
    MOV ESI,0x1d276bc                   ; 004cf140
    PUSH EDI                            ; 004cf145
        ;   Label: LAB_004cf145
    PUSH ESI                            ; 004cf146
    INC EBX                             ; 004cf147
    CALL core_gore.cpp_FUN_004cdbe0     ; 004cf148
        ;   XREF to: 004cdbe0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cdbe0()
    MOV ECX,dword ptr [0x01d276b8]      ; 004cf14d | DAT_01d276b8
    ADD ESP,0x8                         ; 004cf153
    ADD ESI,0x48                        ; 004cf156
    CMP EBX,ECX                         ; 004cf159
    JL 0x004cf145                       ; 004cf15b
        ;   XREF to: 004cf145 (CONDITIONAL_JUMP)  ; LAB_004cf145
    LEA EAX,[EAX]                       ; 004cf15d
    POP EBP                             ; 004cf160
        ;   Label: LAB_004cf160
    POP EDI                             ; 004cf161
    POP ESI                             ; 004cf162
    POP EBX                             ; 004cf163
    RET                                 ; 004cf164

