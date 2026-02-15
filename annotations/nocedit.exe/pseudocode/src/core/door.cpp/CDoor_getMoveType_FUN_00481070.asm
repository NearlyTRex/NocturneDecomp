; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_getMoveType_FUN_00481070(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f2d70 at 004f2e80
;
; Referenced Globals:
;   void* switchdataD_00481058 = 00481126
;   TerminatedCString s_The_door_is_locked_from__006212e4
;   TerminatedCString s_core_door_cpp_0062130c
;   TerminatedCString s_CDoor_getMoveType_invali_0062131d
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_door.cpp_CDoor_FUN_00481210
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481070
        ;   Label: core_door.cpp_CDoor_getMoveType_FUN_00481070
    PUSH ESI                            ; 00481071
    PUSH EBP                            ; 00481072
    MOV EBP,ESP                         ; 00481073
    SUB ESP,0xc                         ; 00481075
    AND ESP,0xfffffff8                  ; 00481078
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048107b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048107e
    ADD EAX,0x20                        ; 00481081
    PUSH EAX                            ; 00481084
    LEA EAX,[ESP + 0x4]                 ; 00481085
    PUSH EAX                            ; 00481089
    PUSH EBX                            ; 0048108a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0048108b
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00481090
    PUSH 0x6212e4                       ; 00481093 | = "The door is locked from the other side."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00481098
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0048109d
    MOV ESI,EAX                         ; 004810a0
    FLD float ptr [ESP + 0x8]           ; 004810a2
    FLDZ                                ; 004810a6
    FCOMPP                              ; 004810a8
    FNSTSW AX                           ; 004810aa
    SAHF                                ; 004810ac
    JNC 0x004810ea                      ; 004810ad
        ;   XREF to: 004810ea (CONDITIONAL_JUMP)  ; LAB_004810ea
    TEST byte ptr [EBX + 0x9d8],0x1     ; 004810af
    JNZ 0x004811fd                      ; 004810b6
        ;   XREF to: 004811fd (CONDITIONAL_JUMP)  ; LAB_004811fd
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004810bc
    JZ 0x004810e2                       ; 004810c3
        ;   XREF to: 004810e2 (CONDITIONAL_JUMP)  ; LAB_004810e2
    PUSH EBX                            ; 004810c5
    CALL core_door.cpp_CDoor_FUN_00481210 ; 004810c6
        ;   XREF to: 00481210 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004810cb
    PUSH 0x40a00000                     ; 004810ce
    PUSH ESI                            ; 004810d3
    MOV EAX,[0x0067b654]                ; 004810d4 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 004810d9 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004810da
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004810df
    XOR EAX,EAX                         ; 004810e2
        ;   Label: LAB_004810e2
    MOV ESP,EBP                         ; 004810e4
    POP EBP                             ; 004810e6
    POP ESI                             ; 004810e7
    POP EBX                             ; 004810e8
    RET                                 ; 004810e9
    TEST byte ptr [EBX + 0x9d8],0x2     ; 004810ea
        ;   Label: LAB_004810ea
    JNZ 0x004811fd                      ; 004810f1
        ;   XREF to: 004811fd (CONDITIONAL_JUMP)  ; LAB_004811fd
    CMP dword ptr [EBX + 0x9d8],0x0     ; 004810f7
    JZ 0x004810e2                       ; 004810fe
        ;   XREF to: 004810e2 (CONDITIONAL_JUMP)  ; LAB_004810e2
    PUSH EBX                            ; 00481100
    CALL core_door.cpp_CDoor_FUN_00481210 ; 00481101
        ;   XREF to: 00481210 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00481106
    PUSH 0x40a00000                     ; 00481109
    PUSH ESI                            ; 0048110e
    MOV ECX,dword ptr [0x0067b654]      ; 0048110f | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 00481115 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 00481116
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0048111b
    XOR EAX,EAX                         ; 0048111e
    MOV ESP,EBP                         ; 00481120
    POP EBP                             ; 00481122
    POP ESI                             ; 00481123
    POP EBX                             ; 00481124
    RET                                 ; 00481125
    CMP dword ptr [EBX + 0x2e4],0x0     ; 00481126
        ;   Label: caseD_0
    JNZ 0x00481155                      ; 0048112d
        ;   XREF to: 00481155 (CONDITIONAL_JUMP)  ; LAB_00481155
    CMP dword ptr [EBX + 0x2e0],0x0     ; 0048112f
        ;   Label: LAB_0048112f
    JZ 0x0048113d                       ; 00481136
        ;   XREF to: 0048113d (CONDITIONAL_JUMP)  ; LAB_0048113d
    XOR byte ptr [ESP + 0xb],0x80       ; 00481138
    FLD float ptr [ESP + 0x8]           ; 0048113d
        ;   Label: LAB_0048113d
    FLDZ                                ; 00481141
    FCOMPP                              ; 00481143
    FNSTSW AX                           ; 00481145
    SAHF                                ; 00481147
    JBE 0x0048115c                      ; 00481148
        ;   XREF to: 0048115c (CONDITIONAL_JUMP)  ; LAB_0048115c
    MOV EAX,0x3                         ; 0048114a
    MOV ESP,EBP                         ; 0048114f
    POP EBP                             ; 00481151
    POP ESI                             ; 00481152
    POP EBX                             ; 00481153
    RET                                 ; 00481154
    XOR byte ptr [ESP + 0xb],0x80       ; 00481155
        ;   Label: LAB_00481155
    JMP 0x0048112f                      ; 0048115a
        ;   XREF to: 0048112f (UNCONDITIONAL_JUMP)  ; LAB_0048112f
    MOV EAX,0x2                         ; 0048115c
        ;   Label: LAB_0048115c
    MOV ESP,EBP                         ; 00481161
    POP EBP                             ; 00481163
    POP ESI                             ; 00481164
    POP EBX                             ; 00481165
    RET                                 ; 00481166
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00481167
        ;   Label: caseD_1
    JZ 0x0048117b                       ; 0048116e
        ;   XREF to: 0048117b (CONDITIONAL_JUMP)  ; LAB_0048117b
    MOV EAX,0x7                         ; 00481170
    MOV ESP,EBP                         ; 00481175
    POP EBP                             ; 00481177
    POP ESI                             ; 00481178
    POP EBX                             ; 00481179
    RET                                 ; 0048117a
    MOV EAX,0x6                         ; 0048117b
        ;   Label: LAB_0048117b
    MOV ESP,EBP                         ; 00481180
    POP EBP                             ; 00481182
    POP ESI                             ; 00481183
    POP EBX                             ; 00481184
    RET                                 ; 00481185
    CMP dword ptr [EBX + 0x2dc],0x1     ; 00481186
        ;   Label: caseD_2
    JNZ 0x004811b5                      ; 0048118d
        ;   XREF to: 004811b5 (CONDITIONAL_JUMP)  ; LAB_004811b5
    CMP dword ptr [EBX + 0x2e0],0x0     ; 0048118f
        ;   Label: LAB_0048118f
    JZ 0x0048119d                       ; 00481196
        ;   XREF to: 0048119d (CONDITIONAL_JUMP)  ; LAB_0048119d
    XOR byte ptr [ESP + 0xb],0x80       ; 00481198
    FLD float ptr [ESP + 0x8]           ; 0048119d
        ;   Label: LAB_0048119d
    FLDZ                                ; 004811a1
    FCOMPP                              ; 004811a3
    FNSTSW AX                           ; 004811a5
    SAHF                                ; 004811a7
    JBE 0x004811bc                      ; 004811a8
        ;   XREF to: 004811bc (CONDITIONAL_JUMP)  ; LAB_004811bc
    MOV EAX,0x5                         ; 004811aa
    MOV ESP,EBP                         ; 004811af
    POP EBP                             ; 004811b1
    POP ESI                             ; 004811b2
    POP EBX                             ; 004811b3
    RET                                 ; 004811b4
    XOR byte ptr [ESP + 0xb],0x80       ; 004811b5
        ;   Label: LAB_004811b5
    JMP 0x0048118f                      ; 004811ba
        ;   XREF to: 0048118f (UNCONDITIONAL_JUMP)  ; LAB_0048118f
    MOV EAX,0x4                         ; 004811bc
        ;   Label: LAB_004811bc
    MOV ESP,EBP                         ; 004811c1
    POP EBP                             ; 004811c3
    POP ESI                             ; 004811c4
    POP EBX                             ; 004811c5
    RET                                 ; 004811c6
    MOV EAX,0x1                         ; 004811c7
        ;   Label: caseD_3
    MOV ESP,EBP                         ; 004811cc
    POP EBP                             ; 004811ce
    POP ESI                             ; 004811cf
    POP EBX                             ; 004811d0
    RET                                 ; 004811d1
    MOV EBX,0x62130c                    ; 004811d2 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ESI,0x39e                       ; 004811d7
    PUSH 0x62131d                       ; 004811dc | = "CDoor::getMoveType - invalid door!"
    MOV dword ptr [0x02f0ca48],EBX      ; 004811e1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004811e7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004811ed
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004811f2
    XOR EAX,EAX                         ; 004811f5
    MOV ESP,EBP                         ; 004811f7
    POP EBP                             ; 004811f9
    POP ESI                             ; 004811fa
    POP EBX                             ; 004811fb
    RET                                 ; 004811fc
    MOV EAX,dword ptr [EBX + 0x2d8]     ; 004811fd
        ;   Label: LAB_004811fd
    CMP EAX,0x3                         ; 00481203
    JA 0x004811d2                       ; 00481206
        ;   XREF to: 004811d2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x481058]  ; 00481208 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

