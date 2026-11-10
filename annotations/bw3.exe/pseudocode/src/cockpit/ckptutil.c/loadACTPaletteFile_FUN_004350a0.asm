; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_004350a0(char *base_filename,uchar *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   base_filename
; uchar *          Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00435010 at 00435024
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   support_trstream.cpp_FUN_00573fc0
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_FUN_00573c00
;   unkafter_turret.cpp_FUN_00573db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004350a0
        ;   Label: cockpit_ckptutil.c_loadACTPaletteFile_FUN_004350a0
    PUSH ESI                            ; 004350a1
    PUSH EDI                            ; 004350a2
    SUB ESP,0xcc                        ; 004350a3
    MOV ESI,dword ptr [ESP + 0xdc]      ; 004350a9
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004350b0
    LEA EAX,[ESP + 0xa0]                ; 004350b7
    PUSH EAX                            ; 004350be
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004350bf
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004350c4
    MOV EDI,ESP                         ; 004350c7
    MOV DL,0x2e                         ; 004350c9
    PUSH EDI                            ; 004350cb
    MOV AL,byte ptr [ESI]               ; 004350cc
        ;   Label: LAB_004350cc
    MOV byte ptr [EDI],AL               ; 004350ce
    CMP AL,0x0                          ; 004350d0
    JZ 0x004350e4                       ; 004350d2
        ;   XREF to: 004350e4 (CONDITIONAL_JUMP)  ; LAB_004350e4
    MOV AL,byte ptr [ESI + 0x1]         ; 004350d4
    ADD ESI,0x2                         ; 004350d7
    MOV byte ptr [EDI + 0x1],AL         ; 004350da
    ADD EDI,0x2                         ; 004350dd
    CMP AL,0x0                          ; 004350e0
    JNZ 0x004350cc                      ; 004350e2
        ;   XREF to: 004350cc (CONDITIONAL_JUMP)  ; LAB_004350cc
    POP EDI                             ; 004350e4
        ;   Label: LAB_004350e4
    MOV ESI,ESP                         ; 004350e5
    MOV AL,byte ptr [ESI]               ; 004350e7
        ;   Label: LAB_004350e7
    CMP AL,DL                           ; 004350e9
    JZ 0x004350ff                       ; 004350eb
        ;   XREF to: 004350ff (CONDITIONAL_JUMP)  ; LAB_004350ff
    CMP AL,0x0                          ; 004350ed
    JZ 0x004350fd                       ; 004350ef
        ;   XREF to: 004350fd (CONDITIONAL_JUMP)  ; LAB_004350fd
    INC ESI                             ; 004350f1
    MOV AL,byte ptr [ESI]               ; 004350f2
    CMP AL,DL                           ; 004350f4
    JZ 0x004350ff                       ; 004350f6
        ;   XREF to: 004350ff (CONDITIONAL_JUMP)  ; LAB_004350ff
    INC ESI                             ; 004350f8
    CMP AL,0x0                          ; 004350f9
    JNZ 0x004350e7                      ; 004350fb
        ;   XREF to: 004350e7 (CONDITIONAL_JUMP)  ; LAB_004350e7
    SUB ESI,ESI                         ; 004350fd
        ;   Label: LAB_004350fd
    MOV EDI,ESI                         ; 004350ff
        ;   Label: LAB_004350ff
    TEST ESI,ESI                        ; 00435101
    JNZ 0x00435123                      ; 00435103
        ;   XREF to: 00435123 (CONDITIONAL_JUMP)  ; LAB_00435123
    MOV ESI,ESP                         ; 00435105
    XOR DL,DL                           ; 00435107
    MOV AL,byte ptr [ESI]               ; 00435109
        ;   Label: LAB_00435109
    CMP AL,DL                           ; 0043510b
    JZ 0x00435121                       ; 0043510d
        ;   XREF to: 00435121 (CONDITIONAL_JUMP)  ; LAB_00435121
    CMP AL,0x0                          ; 0043510f
    JZ 0x0043511f                       ; 00435111
        ;   XREF to: 0043511f (CONDITIONAL_JUMP)  ; LAB_0043511f
    INC ESI                             ; 00435113
    MOV AL,byte ptr [ESI]               ; 00435114
    CMP AL,DL                           ; 00435116
    JZ 0x00435121                       ; 00435118
        ;   XREF to: 00435121 (CONDITIONAL_JUMP)  ; LAB_00435121
    INC ESI                             ; 0043511a
    CMP AL,0x0                          ; 0043511b
    JNZ 0x00435109                      ; 0043511d
        ;   XREF to: 00435109 (CONDITIONAL_JUMP)  ; LAB_00435109
    SUB ESI,ESI                         ; 0043511f
        ;   Label: LAB_0043511f
    MOV EDI,ESI                         ; 00435121
        ;   Label: LAB_00435121
    MOV ESI,0x5b892e                    ; 00435123
        ;   Label: LAB_00435123
    PUSH EDI                            ; 00435128
    MOV AL,byte ptr [ESI]               ; 00435129
        ;   Label: LAB_00435129
    MOV byte ptr [EDI],AL               ; 0043512b
    CMP AL,0x0                          ; 0043512d
    JZ 0x00435141                       ; 0043512f
        ;   XREF to: 00435141 (CONDITIONAL_JUMP)  ; LAB_00435141
    MOV AL,byte ptr [ESI + 0x1]         ; 00435131
    ADD ESI,0x2                         ; 00435134
    MOV byte ptr [EDI + 0x1],AL         ; 00435137
    ADD EDI,0x2                         ; 0043513a
    CMP AL,0x0                          ; 0043513d
    JNZ 0x00435129                      ; 0043513f
        ;   XREF to: 00435129 (CONDITIONAL_JUMP)  ; LAB_00435129
    POP EDI                             ; 00435141
        ;   Label: LAB_00435141
    PUSH 0x1                            ; 00435142
    LEA EAX,[ESP + 0x4]                 ; 00435144
    PUSH EAX                            ; 00435148
    PUSH 0x5b8933                       ; 00435149
    LEA EAX,[ESP + 0xac]                ; 0043514e
    PUSH EAX                            ; 00435155
    CALL support_trstream.cpp_FUN_00573fc0 ; 00435156
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573fc0()
    ADD ESP,0x10                        ; 0043515b
    TEST EAX,EAX                        ; 0043515e
    JZ 0x004351e7                       ; 00435160
        ;   XREF to: 004351e7 (CONDITIONAL_JUMP)  ; LAB_004351e7
    PUSH 0x300                          ; 00435166
    PUSH EBX                            ; 0043516b
    LEA EAX,[ESP + 0xa8]                ; 0043516c
    PUSH EAX                            ; 00435173
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00435174
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00435179
    CMP EAX,0x300                       ; 0043517c
    JZ 0x004351bb                       ; 00435181
        ;   XREF to: 004351bb (CONDITIONAL_JUMP)  ; LAB_004351bb
    MOV EAX,ESP                         ; 00435183
    PUSH EAX                            ; 00435185
    PUSH 0x5b8937                       ; 00435186
    LEA EAX,[ESP + 0x58]                ; 0043518b
    PUSH EAX                            ; 0043518f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00435190
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8949                    ; 00435195
    ADD ESP,0xc                         ; 0043519a
    LEA EAX,[ESP + 0x50]                ; 0043519d
    MOV ECX,0x119                       ; 004351a1
    PUSH EAX                            ; 004351a6
    MOV dword ptr [0x01d71de0],EDX      ; 004351a7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004351ad | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004351b3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004351b8
    LEA EAX,[ESP + 0xa0]                ; 004351bb
        ;   Label: LAB_004351bb
    PUSH EAX                            ; 004351c2
    CALL unkafter_turret.cpp_FUN_00573db0 ; 004351c3
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 004351c8
    PUSH 0x0                            ; 004351cb
        ;   Label: LAB_004351cb
    LEA EAX,[ESP + 0xa4]                ; 004351cd
    PUSH EAX                            ; 004351d4
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004351d5
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004351da
    ADD ESP,0xcc                        ; 004351dd
    POP EDI                             ; 004351e3
    POP ESI                             ; 004351e4
    POP EBX                             ; 004351e5
    RET                                 ; 004351e6
    MOV ECX,0x300                       ; 004351e7
        ;   Label: LAB_004351e7
    MOV ESI,0x1c6b298                   ; 004351ec
    MOV EDI,EBX                         ; 004351f1
    PUSH EDI                            ; 004351f3
    MOV EAX,ECX                         ; 004351f4
    SHR ECX,0x2                         ; 004351f6
    MOVSD.REP ES:EDI,ESI                ; 004351f9
    MOV CL,AL                           ; 004351fb
    AND CL,0x3                          ; 004351fd
    MOVSB.REP ES:EDI,ESI                ; 00435200
    POP EDI                             ; 00435202
    JMP 0x004351cb                      ; 00435203
        ;   XREF to: 004351cb (UNCONDITIONAL_JUMP)  ; LAB_004351cb

