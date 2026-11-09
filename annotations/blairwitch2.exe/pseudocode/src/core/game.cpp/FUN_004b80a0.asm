; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b80a0(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b70e7
;
; Referenced Globals:
;   undefined4 DAT_005d78f3
;   undefined4 DAT_005d78fb
;   undefined4 DAT_005d7903
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c37790
;   undefined4 DAT_01cb7784
;   undefined4 g_CDemonSetInstance.field1420984_0x15aeb8
;
; Called Functions:
;   core_game.cpp_FUN_004b76c0
;   wincore_winrun.cpp_setCursorPosition_FUN_0058ed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b80a0
        ;   Label: core_game.cpp_FUN_004b80a0
    PUSH ESI                            ; 004b80a1
    PUSH EDI                            ; 004b80a2
    PUSH EBP                            ; 004b80a3
    MOV EBP,ESP                         ; 004b80a4
    SUB ESP,0x2c                        ; 004b80a6
    AND ESP,0xfffffff8                  ; 004b80a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b80ac
    MOV EBX,dword ptr [EBP + 0x18]      ; 004b80af
    PUSH EBX                            ; 004b80b2
    PUSH EDI                            ; 004b80b3
    CALL core_game.cpp_FUN_004b76c0     ; 004b80b4
        ;   XREF to: 004b76c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b76c0(CGame * this_ptr, SPlayerInput * player_control)
    MOV EDX,dword ptr [EDI + 0x29c]     ; 004b80b9
    ADD ESP,0x8                         ; 004b80bf
    TEST EDX,EDX                        ; 004b80c2
    JZ 0x004b80cd                       ; 004b80c4
        ;   XREF to: 004b80cd (CONDITIONAL_JUMP)  ; LAB_004b80cd
    MOV ESP,EBP                         ; 004b80c6
        ;   Label: LAB_004b80c6
    POP EBP                             ; 004b80c8
    POP EDI                             ; 004b80c9
    POP ESI                             ; 004b80ca
    POP EBX                             ; 004b80cb
    RET                                 ; 004b80cc
    MOV EAX,[0x006141b8]                ; 004b80cd | DAT_006141b8
        ;   Label: LAB_004b80cd
    MOV EDX,EAX                         ; 004b80d2
    SAR EDX,0x1f                        ; 004b80d4
    SUB EAX,EDX                         ; 004b80d7
    SAR EAX,0x1                         ; 004b80d9
    MOV dword ptr [ESP + 0x20],EAX      ; 004b80db
    MOV EAX,[0x006141bc]                ; 004b80df | DAT_006141bc
    MOV EDX,EAX                         ; 004b80e4
    SAR EDX,0x1f                        ; 004b80e6
    SUB EAX,EDX                         ; 004b80e9
    SAR EAX,0x1                         ; 004b80eb
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b80ed
    MOV ESI,EAX                         ; 004b80f1
    MOV EAX,[0x01c2a37c]                ; 004b80f3 | DAT_01c2a37c
    SUB EAX,ECX                         ; 004b80f8
    MOV dword ptr [ESP + 0x18],EAX      ; 004b80fa
    MOV EAX,[0x01c2a380]                ; 004b80fe | DAT_01c2a380
    PUSH ESI                            ; 004b8103
    SUB EAX,ESI                         ; 004b8104
    PUSH ECX                            ; 004b8106
    MOV dword ptr [ESP + 0x24],EAX      ; 004b8107
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 004b810b
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    MOV EAX,[0x0061b5a8]                ; 004b8110 | g_CDemonSetPtr
    MOV EDX,dword ptr [0x01cb7784]      ; 004b8115 | DAT_01cb7784
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b811b | g_CDemonSetInstance.field1420984_0x15aeb8
    ADD ESP,0x8                         ; 004b8121
    CMP EAX,EDX                         ; 004b8124
    JNZ 0x004b80c6                      ; 004b8126
        ;   XREF to: 004b80c6 (CONDITIONAL_JUMP)  ; LAB_004b80c6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b8128
    MOV dword ptr [ESP + 0x28],EAX      ; 004b812c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b8130
    MOV dword ptr [ESP + 0x24],EAX      ; 004b8134
    FILD dword ptr [ESP + 0x28]         ; 004b8138
    FILD dword ptr [ESP + 0x24]         ; 004b813c
    FDIVP                               ; 004b8140
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b8142
    MOV dword ptr [ESP + 0x24],EAX      ; 004b8146
    MOV dword ptr [ESP + 0x28],ESI      ; 004b814a
    FILD dword ptr [ESP + 0x24]         ; 004b814e
    FILD dword ptr [ESP + 0x28]         ; 004b8152
    FDIVP                               ; 004b8156
    FLD double ptr [0x005d78f3]         ; 004b8158 | DAT_005d78f3
    FILD dword ptr [EDI + 0xb0]         ; 004b815e
    FMUL ST1                            ; 004b8164
    FILD dword ptr [EDI + 0xb4]         ; 004b8166
    FMULP ST2                           ; 004b816c
    FMUL double ptr [0x005d78fb]        ; 004b816e | DAT_005d78fb
    FMUL ST3                            ; 004b8174
    FXCH ST2                            ; 004b8176
    FXCH                                ; 004b8178
    FMUL ST1                            ; 004b817a
    FXCH ST2                            ; 004b817c
    FSTP ST3                            ; 004b817e
    FXCH ST2                            ; 004b8180
    FST float ptr [ESP + 0x4]           ; 004b8182
    FXCH                                ; 004b8186
    FSTP ST2                            ; 004b8188
    FXCH                                ; 004b818a
    FSTP float ptr [ESP]                ; 004b818c
    FCOMP double ptr [0x005d7903]       ; 004b818f | DAT_005d7903
    FNSTSW AX                           ; 004b8195
    SAHF                                ; 004b8197
    JNC 0x004b81a2                      ; 004b8198
        ;   XREF to: 004b81a2 (CONDITIONAL_JUMP)  ; LAB_004b81a2
    MOV dword ptr [ESP + 0x4],0xbf800000 ; 004b819a
    FLD float ptr [ESP + 0x4]           ; 004b81a2
        ;   Label: LAB_004b81a2
    FLD1                                ; 004b81a6
    FCOMPP                              ; 004b81a8
    FNSTSW AX                           ; 004b81aa
    SAHF                                ; 004b81ac
    JNC 0x004b81b7                      ; 004b81ad
        ;   XREF to: 004b81b7 (CONDITIONAL_JUMP)  ; LAB_004b81b7
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004b81af
    FLD float ptr [ESP]                 ; 004b81b7
        ;   Label: LAB_004b81b7
    FCOMP double ptr [0x005d7903]       ; 004b81ba | DAT_005d7903
    FNSTSW AX                           ; 004b81c0
    SAHF                                ; 004b81c2
    JNC 0x004b81cc                      ; 004b81c3
        ;   XREF to: 004b81cc (CONDITIONAL_JUMP)  ; LAB_004b81cc
    MOV dword ptr [ESP],0xbf800000      ; 004b81c5
    FLD float ptr [ESP]                 ; 004b81cc
        ;   Label: LAB_004b81cc
    FLD1                                ; 004b81cf
    FCOMPP                              ; 004b81d1
    FNSTSW AX                           ; 004b81d3
    SAHF                                ; 004b81d5
    JNC 0x004b81df                      ; 004b81d6
        ;   XREF to: 004b81df (CONDITIONAL_JUMP)  ; LAB_004b81df
    MOV dword ptr [ESP],0x3f800000      ; 004b81d8
    CMP dword ptr [EDI + 0xa8],0x0      ; 004b81df
        ;   Label: LAB_004b81df
    JZ 0x004b81ed                       ; 004b81e6
        ;   XREF to: 004b81ed (CONDITIONAL_JUMP)  ; LAB_004b81ed
    XOR byte ptr [ESP + 0x3],0x80       ; 004b81e8
    MOV EAX,dword ptr [EDI + 0x34]      ; 004b81ed
        ;   Label: LAB_004b81ed
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b81f0 | DAT_01c37790
    JZ 0x004b8234                       ; 004b81f7
        ;   XREF to: 004b8234 (CONDITIONAL_JUMP)  ; LAB_004b8234
    FLD float ptr [EBX + 0x24]          ; 004b81f9
    FABS                                ; 004b81fc
    FLD float ptr [ESP + 0x4]           ; 004b81fe
    FABS                                ; 004b8202
    FCOMPP                              ; 004b8204
    FNSTSW AX                           ; 004b8206
    SAHF                                ; 004b8208
    JBE 0x004b8212                      ; 004b8209
        ;   XREF to: 004b8212 (CONDITIONAL_JUMP)  ; LAB_004b8212
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b820b
    MOV dword ptr [EBX + 0x24],EAX      ; 004b820f
    FLD float ptr [EBX + 0x2c]          ; 004b8212
        ;   Label: LAB_004b8212
    FABS                                ; 004b8215
    FLD float ptr [ESP]                 ; 004b8217
    FABS                                ; 004b821a
    FCOMPP                              ; 004b821c
    FNSTSW AX                           ; 004b821e
    SAHF                                ; 004b8220
    JBE 0x004b80c6                      ; 004b8221
        ;   XREF to: 004b80c6 (CONDITIONAL_JUMP)  ; LAB_004b80c6
    MOV EAX,dword ptr [ESP]             ; 004b8227
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b822a
    MOV ESP,EBP                         ; 004b822d
    POP EBP                             ; 004b822f
    POP EDI                             ; 004b8230
    POP ESI                             ; 004b8231
    POP EBX                             ; 004b8232
    RET                                 ; 004b8233
    FLD float ptr [EBX + 0x28]          ; 004b8234
        ;   Label: LAB_004b8234
    FABS                                ; 004b8237
    FLD float ptr [ESP + 0x4]           ; 004b8239
    FABS                                ; 004b823d
    FCOMPP                              ; 004b823f
    FNSTSW AX                           ; 004b8241
    SAHF                                ; 004b8243
    JBE 0x004b8212                      ; 004b8244
        ;   XREF to: 004b8212 (CONDITIONAL_JUMP)  ; LAB_004b8212
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b8246
    MOV dword ptr [EBX + 0x28],EAX      ; 004b824a
    JMP 0x004b8212                      ; 004b824d
        ;   XREF to: 004b8212 (UNCONDITIONAL_JUMP)  ; LAB_004b8212

