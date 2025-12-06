; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_005091d0()
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_game.cpp_CGame_FUN_004d8730
;   core_hero.cpp_FUN_004f2220
;   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
;   core_manpuz.cpp_FUN_00509b20
;   core_manpuz.cpp_FUN_0050a610
;   core_manpuz.cpp_FUN_0050a8d0
;   core_manpuz.cpp_FUN_0050af00
;   core_manpuz.cpp_FUN_0050af80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005091d0
        ;   Label: core_manpuz.cpp_FUN_005091d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005091d1
    LEA EAX,[EBX + 0x20]                ; 005091d5
    PUSH 0x41f00000                     ; 005091d8
    PUSH EAX                            ; 005091dd
    CALL core_hero.cpp_FUN_004f2220     ; 005091de | undefined core_hero.cpp_FUN_004f2220()
        ;   XREF to: 004f2220 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005091e3
    TEST EAX,EAX                        ; 005091e6
    JZ 0x005092dc                       ; 005091e8 | LAB_005092dc
        ;   XREF to: 005092dc (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005091ee
    XOR ESI,ESI                         ; 005091ef
    PUSH dword ptr [ESP + 0x10]         ; 005091f1
        ;   Label: LAB_005091f1
    PUSH ESI                            ; 005091f5
    PUSH EBX                            ; 005091f6
    CALL core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290 ; 005091f7 | undefined core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290()
        ;   XREF to: 0050a290 (UNCONDITIONAL_CALL)
    INC ESI                             ; 005091fc
    ADD ESP,0xc                         ; 005091fd
    CMP ESI,0xc                         ; 00509200
    JL 0x005091f1                       ; 00509203 | LAB_005091f1
        ;   XREF to: 005091f1 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00509205
    PUSH dword ptr [ESP + 0x10]         ; 00509207
        ;   Label: LAB_00509207
    PUSH ESI                            ; 0050920b
    PUSH EBX                            ; 0050920c
    CALL core_manpuz.cpp_FUN_0050af00   ; 0050920d | undefined core_manpuz.cpp_FUN_0050af00()
        ;   XREF to: 0050af00 (UNCONDITIONAL_CALL)
    INC ESI                             ; 00509212
    ADD ESP,0xc                         ; 00509213
    CMP ESI,0x2                         ; 00509216
    JL 0x00509207                       ; 00509219 | LAB_00509207
        ;   XREF to: 00509207 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0050921b
    PUSH dword ptr [ESP + 0x10]         ; 0050921d
        ;   Label: LAB_0050921d
    PUSH ESI                            ; 00509221
    PUSH EBX                            ; 00509222
    CALL core_manpuz.cpp_FUN_0050a8d0   ; 00509223 | undefined core_manpuz.cpp_FUN_0050a8d0()
        ;   XREF to: 0050a8d0 (UNCONDITIONAL_CALL)
    INC ESI                             ; 00509228
    ADD ESP,0xc                         ; 00509229
    CMP ESI,0xc                         ; 0050922c
    JL 0x0050921d                       ; 0050922f | LAB_0050921d
        ;   XREF to: 0050921d (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00509231
    PUSH dword ptr [ESP + 0x10]         ; 00509233
        ;   Label: LAB_00509233
    PUSH ESI                            ; 00509237
    PUSH EBX                            ; 00509238
    CALL core_manpuz.cpp_FUN_0050a610   ; 00509239 | undefined core_manpuz.cpp_FUN_0050a610()
        ;   XREF to: 0050a610 (UNCONDITIONAL_CALL)
    INC ESI                             ; 0050923e
    ADD ESP,0xc                         ; 0050923f
    CMP ESI,0xc                         ; 00509242
    JL 0x00509233                       ; 00509245 | LAB_00509233
        ;   XREF to: 00509233 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00509247
    PUSH ESI                            ; 00509249
        ;   Label: LAB_00509249
    PUSH EBX                            ; 0050924a
    CALL core_manpuz.cpp_FUN_00509b20   ; 0050924b | undefined core_manpuz.cpp_FUN_00509b20()
        ;   XREF to: 00509b20 (UNCONDITIONAL_CALL)
    INC ESI                             ; 00509250
    ADD ESP,0x8                         ; 00509251
    CMP ESI,0xc                         ; 00509254
    JL 0x00509249                       ; 00509257 | LAB_00509249
        ;   XREF to: 00509249 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00509259
    PUSH ESI                            ; 0050925b
        ;   Label: LAB_0050925b
    PUSH EBX                            ; 0050925c
    CALL core_manpuz.cpp_FUN_0050af80   ; 0050925d | undefined core_manpuz.cpp_FUN_0050af80()
        ;   XREF to: 0050af80 (UNCONDITIONAL_CALL)
    INC ESI                             ; 00509262
    ADD ESP,0x8                         ; 00509263
    CMP ESI,0x2                         ; 00509266
    JL 0x0050925b                       ; 00509269 | LAB_0050925b
        ;   XREF to: 0050925b (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x13c8]              ; 0050926b
    LEA EAX,[EBX + 0x1368]              ; 00509271
    CMP ESI,EAX                         ; 00509277
    JZ 0x0050928b                       ; 00509279 | LAB_0050928b
        ;   XREF to: 0050928b (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0050927b
    MOV dword ptr [ESI],EDX             ; 0050927d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050927f
    MOV dword ptr [ESI + 0x4],EDX       ; 00509282
    MOV EDX,dword ptr [EAX + 0x8]       ; 00509285
    MOV dword ptr [ESI + 0x8],EDX       ; 00509288
    MOV AH,byte ptr [EBX + 0x13cf]      ; 0050928b
        ;   Label: LAB_0050928b
    LEA ESI,[EBX + 0x1368]              ; 00509291
    XOR AH,0x80                         ; 00509297
    PUSH ESI                            ; 0050929a
    MOV byte ptr [EBX + 0x13cf],AH      ; 0050929b
    LEA EAX,[EBX + 0x1374]              ; 005092a1
    PUSH EAX                            ; 005092a7
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005092a8 | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005092ad
    LEA EAX,[EBX + 0x13c8]              ; 005092b0
    PUSH EAX                            ; 005092b6
    ADD EBX,0x13d4                      ; 005092b7
    PUSH EBX                            ; 005092bd
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005092be | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005092c3
    PUSH 0x3c8efa35                     ; 005092c6
    PUSH ESI                            ; 005092cb
    MOV EDX,dword ptr [0x0067b654]      ; 005092cc | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EDX                            ; 005092d2 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_FUN_004d8730 ; 005092d3 | void core_game.cpp_CGame_FUN_004d8730(CGame * this_ptr)
        ;   XREF to: 004d8730 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005092d8
    POP ESI                             ; 005092db
    POP EBX                             ; 005092dc
        ;   Label: LAB_005092dc
    RET                                 ; 005092dd

