; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_00516f30(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   skip_data_load
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 005171a5
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 at 00517397
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00516200
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_stdio.c_fseek_FUN_005b929c
;   crt_unknown.c_FUN_005b8580
;   crt_unknown.c_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516f30
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30
    PUSH ESI                            ; 00516f31
    PUSH EDI                            ; 00516f32
    PUSH EBP                            ; 00516f33
    SUB ESP,0x1c                        ; 00516f34
    MOV EBX,dword ptr [ESP + 0x30]      ; 00516f37
    MOV EBP,dword ptr [ESP + 0x34]      ; 00516f3b
    PUSH EBX                            ; 00516f3f
    CALL cockpit_pkbitmap.cpp_FUN_00516200 ; 00516f40
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00516200()
    ADD ESP,0x4                         ; 00516f45
        ;   Label: LAB_00516f45
    PUSH EBP                            ; 00516f48
    PUSH 0x1                            ; 00516f49
    PUSH 0x1c                           ; 00516f4b
    LEA EAX,[ESP + 0xc]                 ; 00516f4d
    PUSH EAX                            ; 00516f51
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00516f52
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00516f57
    CMP EAX,0x1                         ; 00516f5a
    JNZ 0x00516fbe                      ; 00516f5d
        ;   XREF to: 00516fbe (CONDITIONAL_JUMP)  ; LAB_00516fbe
    MOV ECX,0x4                         ; 00516f5f
    MOV EDI,0x61b3bc                    ; 00516f64
    MOV ESI,ESP                         ; 00516f69
    XOR EAX,EAX                         ; 00516f6b
    CMPSB.REPE ES:EDI,ESI               ; 00516f6d
    JZ 0x00516f76                       ; 00516f6f
        ;   XREF to: 00516f76 (CONDITIONAL_JUMP)  ; LAB_00516f76
    SBB EAX,EAX                         ; 00516f71
    SBB EAX,-0x1                        ; 00516f73
    TEST EAX,EAX                        ; 00516f76
        ;   Label: LAB_00516f76
    JZ 0x00516fe2                       ; 00516f78
        ;   XREF to: 00516fe2 (CONDITIONAL_JUMP)  ; LAB_00516fe2
    MOV ECX,0x5e1cf3                    ; 00516f7a
        ;   Label: LAB_00516f7a
    MOV ESI,0x4b0                       ; 00516f7f
    PUSH 0x5e1d0b                       ; 00516f84
    MOV dword ptr [0x01d046a0],ECX      ; 00516f89 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00516f8f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516f95
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00516f9a
    MOV EDI,0x5e1d2e                    ; 00516f9d
        ;   Label: LAB_00516f9d
    MOV EAX,0x4b1                       ; 00516fa2
    PUSH 0x5e1d46                       ; 00516fa7
    MOV dword ptr [0x01d046a0],EDI      ; 00516fac | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00516fb2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516fb7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    JMP 0x00516f45                      ; 00516fbc
        ;   XREF to: 00516f45 (UNCONDITIONAL_JUMP)  ; LAB_00516f45
    MOV EAX,0x5e1cad                    ; 00516fbe
        ;   Label: LAB_00516fbe
    MOV EDX,0x4af                       ; 00516fc3
    PUSH 0x5e1cc5                       ; 00516fc8
    MOV [0x01d046a0],EAX                ; 00516fcd | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00516fd2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516fd8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00516fdd
    JMP 0x00516f7a                      ; 00516fe0
        ;   XREF to: 00516f7a (UNCONDITIONAL_JUMP)  ; LAB_00516f7a
    MOV EDX,dword ptr [ESP + 0x4]       ; 00516fe2
        ;   Label: LAB_00516fe2
    CMP EDX,0x1                         ; 00516fe6
    JC 0x00516f7a                       ; 00516fe9
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    CMP dword ptr [ESP + 0x8],0x1       ; 00516feb
    JC 0x00516f7a                       ; 00516ff0
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    MOV dword ptr [EBX + 0x18],EDX      ; 00516ff2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00516ff5
    MOV dword ptr [EBX + 0x1c],EAX      ; 00516ff9
    CMP dword ptr [ESP + 0xc],0x0       ; 00516ffc
    JNZ 0x00516f7a                      ; 00517001
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    CMP dword ptr [ESP + 0x10],0x0      ; 00517007
    JNZ 0x00516f7a                      ; 0051700c
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    MOV EAX,dword ptr [EBX + 0x18]      ; 00517012
    MOV EDX,dword ptr [ESP + 0x14]      ; 00517015
    DEC EAX                             ; 00517019
    CMP EAX,EDX                         ; 0051701a
    JNZ 0x00516f7a                      ; 0051701c
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00517022
    MOV ECX,dword ptr [ESP + 0x18]      ; 00517025
    DEC EAX                             ; 00517029
    CMP EAX,ECX                         ; 0051702a
    JNZ 0x00516f7a                      ; 0051702c
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00517032
    INC EAX                             ; 00517035
    SHL EAX,0x2                         ; 00517036
    PUSH EAX                            ; 00517039
    CALL crt_unknown.c_FUN_005b8df8     ; 0051703a
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 0051703f
    MOV dword ptr [EBX + 0x20],EAX      ; 00517042
    TEST EAX,EAX                        ; 00517045
    JZ 0x00516f9d                       ; 00517047
        ;   XREF to: 00516f9d (CONDITIONAL_JUMP)  ; LAB_00516f9d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051704d
    PUSH EBP                            ; 00517050
    INC EAX                             ; 00517051
    PUSH 0x1                            ; 00517052
    SHL EAX,0x2                         ; 00517054
    PUSH EAX                            ; 00517057
    MOV EDI,dword ptr [EBX + 0x20]      ; 00517058
    PUSH EDI                            ; 0051705b
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051705c
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00517061
    CMP EAX,0x1                         ; 00517064
    JNZ 0x00516fbe                      ; 00517067
        ;   XREF to: 00516fbe (CONDITIONAL_JUMP)  ; LAB_00516fbe
    XOR EDX,EDX                         ; 0051706d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051706f
        ;   Label: LAB_0051706f
    INC EAX                             ; 00517072
    CMP EDX,EAX                         ; 00517073
    JGE 0x0051707a                      ; 00517075
        ;   XREF to: 0051707a (CONDITIONAL_JUMP)  ; LAB_0051707a
    INC EDX                             ; 00517077
    JMP 0x0051706f                      ; 00517078
        ;   XREF to: 0051706f (UNCONDITIONAL_JUMP)  ; LAB_0051706f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0051707a
        ;   Label: LAB_0051707a
    XOR EDX,EDX                         ; 0051707d
    TEST EAX,EAX                        ; 0051707f
    JLE 0x0051709c                      ; 00517081
        ;   XREF to: 0051709c (CONDITIONAL_JUMP)  ; LAB_0051709c
    MOV EAX,dword ptr [EBX + 0x20]      ; 00517083
    MOV EDI,dword ptr [EAX + 0x4]       ; 00517086
        ;   Label: LAB_00517086
    CMP EDI,dword ptr [EAX]             ; 00517089
    JL 0x00516f7a                       ; 0051708b
        ;   XREF to: 00516f7a (CONDITIONAL_JUMP)  ; LAB_00516f7a
    INC EDX                             ; 00517091
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00517092
    ADD EAX,0x4                         ; 00517095
    CMP EDX,ECX                         ; 00517098
    JL 0x00517086                       ; 0051709a
        ;   XREF to: 00517086 (CONDITIONAL_JUMP)  ; LAB_00517086
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051709c
        ;   Label: LAB_0051709c
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051709f
    MOV EDI,dword ptr [ESP + 0x38]      ; 005170a2
    MOV ESI,dword ptr [EAX + EDX*0x4]   ; 005170a6
    TEST EDI,EDI                        ; 005170a9
    JNZ 0x00517118                      ; 005170ab
        ;   XREF to: 00517118 (CONDITIONAL_JUMP)  ; LAB_00517118
    PUSH ESI                            ; 005170ad
    CALL crt_unknown.c_FUN_005b8580     ; 005170ae
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005170b3
    MOV dword ptr [EBX + 0x14],EAX      ; 005170b6
    TEST EAX,EAX                        ; 005170b9
    JZ 0x00516f9d                       ; 005170bb
        ;   XREF to: 00516f9d (CONDITIONAL_JUMP)  ; LAB_00516f9d
    PUSH EBP                            ; 005170c1
    PUSH 0x1                            ; 005170c2
    PUSH ESI                            ; 005170c4
    PUSH EAX                            ; 005170c5
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 005170c6
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 005170cb
    CMP EAX,0x1                         ; 005170ce
    JNZ 0x00516fbe                      ; 005170d1
        ;   XREF to: 00516fbe (CONDITIONAL_JUMP)  ; LAB_00516fbe
    MOV EDX,dword ptr [EBX + 0x20]      ; 005170d7
    MOV ECX,dword ptr [EBX + 0x14]      ; 005170da
    MOV EBX,dword ptr [EBX + 0x1c]      ; 005170dd
    MOV EAX,dword ptr [EDX]             ; 005170e0
    MOV ESI,dword ptr [EDX + EBX*0x4]   ; 005170e2
    ADD EAX,ECX                         ; 005170e5
    ADD ECX,ESI                         ; 005170e7
    CMP EAX,ECX                         ; 005170e9
    JNC 0x00517110                      ; 005170eb
        ;   XREF to: 00517110 (CONDITIONAL_JUMP)  ; LAB_00517110
    LEA EDX,[EAX + 0x4]                 ; 005170ed
        ;   Label: LAB_005170ed
    MOV AX,word ptr [EAX + 0x2]         ; 005170f0
    AND EAX,0xffff                      ; 005170f4
    ADD EAX,0x3                         ; 005170f9
    AND AL,0xfc                         ; 005170fc
    ADD EAX,EDX                         ; 005170fe
    CMP EAX,ECX                         ; 00517100
    JC 0x005170ed                       ; 00517102
        ;   XREF to: 005170ed (CONDITIONAL_JUMP)  ; LAB_005170ed
    LEA EAX,[EAX]                       ; 00517104
    LEA EDX,[EDX]                       ; 0051710a
    ADD ESP,0x1c                        ; 00517110
        ;   Label: LAB_00517110
    POP EBP                             ; 00517113
    POP EDI                             ; 00517114
    POP ESI                             ; 00517115
    POP EBX                             ; 00517116
    RET                                 ; 00517117
    PUSH 0x1                            ; 00517118
        ;   Label: LAB_00517118
    PUSH ESI                            ; 0051711a
    PUSH EBP                            ; 0051711b
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051711c
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 00517121
    ADD ESP,0x1c                        ; 00517124
    POP EBP                             ; 00517127
    POP EDI                             ; 00517128
    POP ESI                             ; 00517129
    POP EBX                             ; 0051712a
    RET                                 ; 0051712b

