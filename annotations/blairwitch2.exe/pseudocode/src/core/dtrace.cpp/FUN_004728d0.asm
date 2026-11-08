; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004728d0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00472ab0 at 00472ad6
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d1a3d
;   TerminatedCString s_CDemonRaytrace_loadBinar_005d1a50
;   TerminatedCString s_core_dtrace_cpp_005d1a7d
;   TerminatedCString s_CDemonRaytrace_loadBinar_005d1a90
;   TerminatedCString s_core_dtrace_cpp_005d1ac6
;   TerminatedCString s_Release_build_doesn_t_su_005d1ad9
;   TerminatedCString s_core_dtrace_cpp_005d1b04
;   TerminatedCString s_CDemonRaytrace_loadBinar_005d1b17
;   undefined4 DAT_005d1b47
;   undefined4 DAT_00613880
;   undefined4 DAT_01c21e64
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004467a0
;   FUN_00472550
;   FUN_004725c0
;   FUN_004e4500
;   FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004728d0
        ;   Label: FUN_004728d0
    PUSH ESI                            ; 004728d1
    PUSH EDI                            ; 004728d2
    PUSH EBP                            ; 004728d3
    SUB ESP,0x1c                        ; 004728d4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004728d7
    MOV EBP,dword ptr [ESP + 0x34]      ; 004728db
    PUSH EBX                            ; 004728df
    CALL FUN_004725c0                   ; 004728e0
        ;   XREF to: 004725c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004725c0()
    ADD ESP,0x4                         ; 004728e5
    PUSH EBP                            ; 004728e8
    PUSH 0x1                            ; 004728e9
    PUSH 0x4                            ; 004728eb
    LEA EAX,[ESP + 0x24]                ; 004728ed
    XOR EDX,EDX                         ; 004728f1
    PUSH EAX                            ; 004728f3
    MOV dword ptr [0x01c21e64],EDX      ; 004728f4 | DAT_01c21e64
    CALL FUN_005b87c0                   ; 004728fa
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 004728ff
    CMP dword ptr [ESP + 0x18],0x1      ; 00472902
    JL 0x00472a25                       ; 00472907
        ;   XREF to: 00472a25 (CONDITIONAL_JUMP)  ; LAB_00472a25
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047290d
        ;   Label: LAB_0047290d
    CMP EAX,dword ptr [0x00613880]      ; 00472911 | DAT_00613880
    JLE 0x0047293c                      ; 00472917
        ;   XREF to: 0047293c (CONDITIONAL_JUMP)  ; LAB_0047293c
    MOV ECX,0x5d1a7d                    ; 00472919 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x14b                       ; 0047291e
    PUSH 0x5d1a90                       ; 00472923 | = "CDemonRaytrace::loadBinary - file is ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00472928 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0047292e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00472934
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00472939
    PUSH EBP                            ; 0047293c
        ;   Label: LAB_0047293c
    PUSH 0x1                            ; 0047293d
    PUSH 0x4                            ; 0047293f
    LEA EAX,[EBX + 0x40]                ; 00472941
    PUSH EAX                            ; 00472944
    CALL FUN_005b87c0                   ; 00472945
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0047294a
    PUSH EBP                            ; 0047294d
    PUSH 0x1                            ; 0047294e
    PUSH 0x4                            ; 00472950
    LEA EAX,[EBX + 0x44]                ; 00472952
    PUSH EAX                            ; 00472955
    CALL FUN_005b87c0                   ; 00472956
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0047295b
    PUSH EBP                            ; 0047295e
    PUSH 0x1                            ; 0047295f
    PUSH 0x4                            ; 00472961
    LEA EAX,[EBX + 0x48]                ; 00472963
    PUSH EAX                            ; 00472966
    CALL FUN_005b87c0                   ; 00472967
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0047296c
    PUSH EBP                            ; 0047296f
    PUSH 0x1                            ; 00472970
    PUSH 0xc                            ; 00472972
    LEA EAX,[EBX + 0x10]                ; 00472974
    PUSH EAX                            ; 00472977
    CALL FUN_005b87c0                   ; 00472978
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0047297d
    PUSH EBP                            ; 00472980
    PUSH 0x1                            ; 00472981
    PUSH 0xc                            ; 00472983
    LEA EAX,[EBX + 0x1c]                ; 00472985
    PUSH EAX                            ; 00472988
    CALL FUN_005b87c0                   ; 00472989
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    ADD ESP,0x10                        ; 0047298e
    PUSH EBP                            ; 00472991
    PUSH 0x1                            ; 00472992
    PUSH 0xc                            ; 00472994
    LEA ESI,[EBX + 0x28]                ; 00472996
    PUSH ESI                            ; 00472999
    CALL FUN_005b87c0                   ; 0047299a
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b87c0()
    FLD float ptr [0x005d1b47]          ; 0047299f | DAT_005d1b47
    FLD float ptr [ESI]                 ; 004729a5
    FMUL ST1                            ; 004729a7
    FLD float ptr [ESI + 0x4]           ; 004729a9
    FMUL ST2                            ; 004729ac
    FLD float ptr [ESI + 0x8]           ; 004729ae
    FMULP ST3                           ; 004729b1
    LEA EDI,[ESP + 0x1c]                ; 004729b3
    ADD ESP,0x10                        ; 004729b7
    MOV ESI,ESP                         ; 004729ba
    FXCH                                ; 004729bc
    FSTP float ptr [ESP]                ; 004729be
    FSTP float ptr [ESP + 0x4]          ; 004729c1
    FSTP float ptr [ESP + 0x8]          ; 004729c5
    MOVSD ES:EDI,ESI                    ; 004729c9
    MOVSD ES:EDI,ESI                    ; 004729ca
    MOVSD ES:EDI,ESI                    ; 004729cb
    LEA EAX,[ESP + 0xc]                 ; 004729cc
    LEA ESI,[EBX + 0x34]                ; 004729d0
    CMP ESI,EAX                         ; 004729d3
    JZ 0x004729eb                       ; 004729d5
        ;   XREF to: 004729eb (CONDITIONAL_JUMP)  ; LAB_004729eb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004729d7
    MOV dword ptr [ESI],EAX             ; 004729db
    MOV EAX,dword ptr [ESP + 0x10]      ; 004729dd
    MOV dword ptr [ESI + 0x4],EAX       ; 004729e1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004729e4
    MOV dword ptr [ESI + 0x8],EAX       ; 004729e8
    CMP dword ptr [ESP + 0x18],0x4      ; 004729eb
        ;   Label: LAB_004729eb
    JL 0x00472a4d                       ; 004729f0
        ;   XREF to: 00472a4d (CONDITIONAL_JUMP)  ; LAB_00472a4d
    PUSH EBX                            ; 004729f2
    CALL FUN_00472550                   ; 004729f3
        ;   XREF to: 00472550 (UNCONDITIONAL_CALL)  ; undefined FUN_00472550()
    XOR ESI,ESI                         ; 004729f8
    XOR EDI,EDI                         ; 004729fa
    ADD ESP,0x4                         ; 004729fc
    MOV ECX,dword ptr [EBX + 0x44]      ; 004729ff
        ;   Label: LAB_004729ff
    MOV EAX,dword ptr [EBX + 0x40]      ; 00472a02
    IMUL EAX,ECX                        ; 00472a05
    IMUL EAX,dword ptr [EBX + 0x48]     ; 00472a08
    CMP ESI,EAX                         ; 00472a0c
    JGE 0x00472a6f                      ; 00472a0e
        ;   XREF to: 00472a6f (CONDITIONAL_JUMP)  ; LAB_00472a6f
    MOV EAX,dword ptr [EBX + 0x50]      ; 00472a10
    PUSH EBP                            ; 00472a13
    ADD EAX,EDI                         ; 00472a14
    PUSH EAX                            ; 00472a16
    INC ESI                             ; 00472a17
    CALL FUN_004467a0                   ; 00472a18
        ;   XREF to: 004467a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004467a0()
    ADD EDI,0x34                        ; 00472a1d
    ADD ESP,0x8                         ; 00472a20
    JMP 0x004729ff                      ; 00472a23
        ;   XREF to: 004729ff (UNCONDITIONAL_JUMP)  ; LAB_004729ff
    MOV ESI,0x5d1a3d                    ; 00472a25 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00472a25
    MOV EDI,0x148                       ; 00472a2a
    PUSH 0x5d1a50                       ; 00472a2f | = "CDemonRaytrace::loadBinary - invalid ..."
    MOV dword ptr [0x01d046a0],ESI      ; 00472a34 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00472a3a | DAT_01d046a4
    CALL FUN_004e4500                   ; 00472a40
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00472a45
    JMP 0x0047290d                      ; 00472a48
        ;   XREF to: 0047290d (UNCONDITIONAL_JUMP)  ; LAB_0047290d
    MOV EAX,0x5d1ac6                    ; 00472a4d | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00472a4d
    MOV EDX,0x1e2                       ; 00472a52
    PUSH 0x5d1ad9                       ; 00472a57 | = "Release build doesn't support old geo..."
    MOV [0x01d046a0],EAX                ; 00472a5c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00472a61 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00472a67
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00472a6c
    TEST byte ptr [EBP + 0xc],0x20      ; 00472a6f
        ;   Label: LAB_00472a6f
    JNZ 0x00472a7d                      ; 00472a73
        ;   XREF to: 00472a7d (CONDITIONAL_JUMP)  ; LAB_00472a7d
    ADD ESP,0x1c                        ; 00472a75
    POP EBP                             ; 00472a78
    POP EDI                             ; 00472a79
    POP ESI                             ; 00472a7a
    POP EBX                             ; 00472a7b
    RET                                 ; 00472a7c
    MOV ECX,0x5d1b04                    ; 00472a7d | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00472a7d
    MOV EBX,0x1ff                       ; 00472a82
    PUSH 0x5d1b17                       ; 00472a87 | = "CDemonRaytrace::loadBinary - error re..."
    MOV dword ptr [0x01d046a0],ECX      ; 00472a8c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00472a92 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00472a98
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00472a9d
    ADD ESP,0x1c                        ; 00472aa0
    POP EBP                             ; 00472aa3
    POP EDI                             ; 00472aa4
    POP ESI                             ; 00472aa5
    POP EBX                             ; 00472aa6
    RET                                 ; 00472aa7

