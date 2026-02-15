; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005075e5
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005071fa
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c5f1
;   core_msnedit.cpp_FUN_00535e70 at 00536b85
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 00565181
;   core_setedit.cpp_CDemonSet_FUN_00577af0 at 00577bd1
;   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 at 004a6471
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 at 004a4582
;
; Referenced Globals:
;   void* switchdataD_004a5fa8 = 004a61cc
;   void* g_ActiveControl
;   int g_ScrollAction
;   int g_ScrollTimer
;   int g_ScrollDelay
;   int g_DragStartMouseX
;   int g_DragStartMouseY
;   int g_DragStartScrollPos
;   int g_DragStartThumbPos
;   int g_MouseX
;   int g_MouseY
;   _BIT_INTEGER g_MouseButtonFlags
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5fc0
        ;   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
    PUSH ESI                            ; 004a5fc1
    PUSH EDI                            ; 004a5fc2
    PUSH EBP                            ; 004a5fc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a5fc4
    PUSH EBX                            ; 004a5fc8
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380 ; 004a5fc9
        ;   XREF to: 004a6380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a5fce
    PUSH EBX                            ; 004a5fd1
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0 ; 004a5fd2
        ;   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar * this_ptr)
    MOV EDX,dword ptr [0x02cf2b00]      ; 004a5fd7 | g_ActiveControl
    ADD ESP,0x4                         ; 004a5fdd
    CMP EBX,EDX                         ; 004a5fe0
    JNZ 0x004a625a                      ; 004a5fe2
        ;   XREF to: 004a625a (CONDITIONAL_JUMP)  ; LAB_004a625a
    TEST byte ptr [0x02cf6a94],0x1      ; 004a5fe8 | g_MouseButtonFlags
    JZ 0x004a609a                       ; 004a5fef
        ;   XREF to: 004a609a (CONDITIONAL_JUMP)  ; LAB_004a609a
    CMP dword ptr [0x02cf2b04],0x0      ; 004a5ff5 | g_ScrollAction
    JNZ 0x004a6178                      ; 004a5ffc
        ;   XREF to: 004a6178 (CONDITIONAL_JUMP)  ; LAB_004a6178
    CMP dword ptr [EBX + 0x10],0x0      ; 004a6002
    JZ 0x004a60a7                       ; 004a6006
        ;   XREF to: 004a60a7 (CONDITIONAL_JUMP)  ; LAB_004a60a7
    MOV EDI,dword ptr [0x02cf2b10]      ; 004a600c | g_DragStartMouseX
    MOV ESI,dword ptr [EBX + 0x24]      ; 004a6012
    MOV EBP,dword ptr [0x02cf2b1c]      ; 004a6015 | g_DragStartThumbPos
    ADD ESI,EDI                         ; 004a601b
    MOV EAX,[0x02cf6a8c]                ; 004a601d | g_MouseX
    SUB ESI,EBP                         ; 004a6022
    MOV EDX,dword ptr [0x02cf2b14]      ; 004a6024 | g_DragStartMouseY
    CMP EAX,ESI                         ; 004a602a
    JGE 0x004a6030                      ; 004a602c
        ;   XREF to: 004a6030 (CONDITIONAL_JUMP)  ; LAB_004a6030
    MOV EAX,ESI                         ; 004a602e
    MOV ESI,dword ptr [0x02cf2b1c]      ; 004a6030 | g_DragStartThumbPos
        ;   Label: LAB_004a6030
    MOV EBP,dword ptr [0x02cf2b10]      ; 004a6036 | g_DragStartMouseX
    MOV ECX,dword ptr [EBX + 0x30]      ; 004a603c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004a603f
    ADD ECX,ESI                         ; 004a6042
    MOV ESI,dword ptr [EBX + 0x28]      ; 004a6044
    SUB ECX,EDI                         ; 004a6047
    ADD ESI,EBP                         ; 004a6049
    SUB ESI,ECX                         ; 004a604b
    CMP EAX,ESI                         ; 004a604d
    JLE 0x004a6053                      ; 004a604f
        ;   XREF to: 004a6053 (CONDITIONAL_JUMP)  ; LAB_004a6053
    MOV EAX,ESI                         ; 004a6051
    MOV ECX,dword ptr [0x02cf2b10]      ; 004a6053 | g_DragStartMouseX
        ;   Label: LAB_004a6053
    MOV ESI,EAX                         ; 004a6059
    MOV EDI,dword ptr [0x02cf2b1c]      ; 004a605b | g_DragStartThumbPos
    SUB ESI,ECX                         ; 004a6061
    ADD ESI,EDI                         ; 004a6063
    PUSH EDX                            ; 004a6065
        ;   Label: LAB_004a6065
    PUSH EAX                            ; 004a6066
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0 ; 004a6067
        ;   XREF to: 005f30d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a606c
    MOV EBP,dword ptr [EBX + 0x4]       ; 004a606f
    ADD ESP,0x8                         ; 004a6072
    CMP EAX,EBP                         ; 004a6075
    JL 0x004a6107                       ; 004a6077
        ;   XREF to: 004a6107 (CONDITIONAL_JUMP)  ; LAB_004a6107
    MOV dword ptr [EBX],0x0             ; 004a607d
        ;   Label: LAB_004a607d
    PUSH EBX                            ; 004a6083
        ;   Label: LAB_004a6083
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380 ; 004a6084
        ;   XREF to: 004a6380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a6089
    PUSH EBX                            ; 004a608c
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0 ; 004a608d
        ;   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a6092
    POP EBP                             ; 004a6095
        ;   Label: LAB_004a6095
    POP EDI                             ; 004a6096
    POP ESI                             ; 004a6097
    POP EBX                             ; 004a6098
    RET                                 ; 004a6099
    XOR EDX,EDX                         ; 004a609a
        ;   Label: LAB_004a609a
    MOV dword ptr [0x02cf2b00],EDX      ; 004a609c | g_ActiveControl
    POP EBP                             ; 004a60a2
    POP EDI                             ; 004a60a3
    POP ESI                             ; 004a60a4
    POP EBX                             ; 004a60a5
    RET                                 ; 004a60a6
    MOV ECX,dword ptr [0x02cf2b14]      ; 004a60a7 | g_DragStartMouseY
        ;   Label: LAB_004a60a7
    MOV ESI,dword ptr [EBX + 0x24]      ; 004a60ad
    MOV EDI,dword ptr [0x02cf2b1c]      ; 004a60b0 | g_DragStartThumbPos
    ADD ESI,ECX                         ; 004a60b6
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a60b8 | g_MouseY
    SUB ESI,EDI                         ; 004a60be
    MOV EAX,[0x02cf2b10]                ; 004a60c0 | g_DragStartMouseX
    CMP EDX,ESI                         ; 004a60c5
    JGE 0x004a60cb                      ; 004a60c7
        ;   XREF to: 004a60cb (CONDITIONAL_JUMP)  ; LAB_004a60cb
    MOV EDX,ESI                         ; 004a60c9
    MOV ESI,dword ptr [0x02cf2b1c]      ; 004a60cb | g_DragStartThumbPos
        ;   Label: LAB_004a60cb
    MOV EBP,dword ptr [EBX + 0x30]      ; 004a60d1
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004a60d4
    ADD ESI,EBP                         ; 004a60d7
    SUB ESI,ECX                         ; 004a60d9
    MOV EDI,dword ptr [0x02cf2b14]      ; 004a60db | g_DragStartMouseY
    MOV ECX,ESI                         ; 004a60e1
    MOV ESI,dword ptr [EBX + 0x28]      ; 004a60e3
    ADD ESI,EDI                         ; 004a60e6
    SUB ESI,ECX                         ; 004a60e8
    CMP EDX,ESI                         ; 004a60ea
    JLE 0x004a60f0                      ; 004a60ec
        ;   XREF to: 004a60f0 (CONDITIONAL_JUMP)  ; LAB_004a60f0
    MOV EDX,ESI                         ; 004a60ee
    MOV EBP,dword ptr [0x02cf2b14]      ; 004a60f0 | g_DragStartMouseY
        ;   Label: LAB_004a60f0
    MOV ESI,EDX                         ; 004a60f6
    MOV ECX,dword ptr [0x02cf2b1c]      ; 004a60f8 | g_DragStartThumbPos
    SUB ESI,EBP                         ; 004a60fe
    ADD ESI,ECX                         ; 004a6100
    JMP 0x004a6065                      ; 004a6102
        ;   XREF to: 004a6065 (UNCONDITIONAL_JUMP)  ; LAB_004a6065
    CMP EBP,0x1                         ; 004a6107
        ;   Label: LAB_004a6107
    JL 0x004a607d                       ; 004a610a
        ;   XREF to: 004a607d (CONDITIONAL_JUMP)  ; LAB_004a607d
    CMP ESI,dword ptr [0x02cf2b1c]      ; 004a6110 | g_DragStartThumbPos
    JNZ 0x004a6124                      ; 004a6116
        ;   XREF to: 004a6124 (CONDITIONAL_JUMP)  ; LAB_004a6124
    MOV EAX,[0x02cf2b18]                ; 004a6118 | g_DragStartScrollPos
    MOV dword ptr [EBX],EAX             ; 004a611d
    JMP 0x004a6083                      ; 004a611f
        ;   XREF to: 004a6083 (UNCONDITIONAL_JUMP)  ; LAB_004a6083
    MOV ECX,dword ptr [EBX + 0x24]      ; 004a6124
        ;   Label: LAB_004a6124
    CMP ESI,ECX                         ; 004a6127
    JLE 0x004a607d                      ; 004a6129
        ;   XREF to: 004a607d (CONDITIONAL_JUMP)  ; LAB_004a607d
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004a612f
    MOV EDX,dword ptr [EBX + 0x30]      ; 004a6132
    SUB EDX,EDI                         ; 004a6135
    MOV EBP,dword ptr [EBX + 0x28]      ; 004a6137
    LEA EAX,[ESI + EDX*0x1]             ; 004a613a
    CMP EAX,EBP                         ; 004a613d
    JL 0x004a6150                       ; 004a613f
        ;   XREF to: 004a6150 (CONDITIONAL_JUMP)  ; LAB_004a6150
    MOV EDX,dword ptr [EBX + 0x8]       ; 004a6141
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a6144
    SUB EAX,EDX                         ; 004a6147
    MOV dword ptr [EBX],EAX             ; 004a6149
    JMP 0x004a6083                      ; 004a614b
        ;   XREF to: 004a6083 (UNCONDITIONAL_JUMP)  ; LAB_004a6083
    MOV EAX,EBP                         ; 004a6150
        ;   Label: LAB_004a6150
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a6152
    SUB EAX,ECX                         ; 004a6155
    MOV EBP,dword ptr [EBX + 0x24]      ; 004a6157
    MOV ECX,EAX                         ; 004a615a
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a615c
    SUB ECX,EDX                         ; 004a615f
    MOV EDX,ESI                         ; 004a6161
    SUB EAX,EDI                         ; 004a6163
    SUB EDX,EBP                         ; 004a6165
    IMUL EDX,EAX                        ; 004a6167
    MOV EAX,EDX                         ; 004a616a
    SAR EDX,0x1f                        ; 004a616c
    IDIV ECX                            ; 004a616f
    MOV dword ptr [EBX],EAX             ; 004a6171
    JMP 0x004a6083                      ; 004a6173
        ;   XREF to: 004a6083 (UNCONDITIONAL_JUMP)  ; LAB_004a6083
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a6178
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004a6178
    MOV ESI,dword ptr [0x02cf2b08]      ; 004a617d | g_ScrollTimer
    MOV EDX,EAX                         ; 004a6183
    SUB EAX,ESI                         ; 004a6185
    TEST EAX,EAX                        ; 004a6187
    JL 0x004a61f0                       ; 004a6189
        ;   XREF to: 004a61f0 (CONDITIONAL_JUMP)  ; LAB_004a61f0
    MOV EDI,dword ptr [0x02cf2b0c]      ; 004a618b | g_ScrollDelay
        ;   Label: LAB_004a618b
    SUB EDI,EAX                         ; 004a6191
    MOV dword ptr [0x02cf2b08],EDX      ; 004a6193 | g_ScrollTimer
    MOV dword ptr [0x02cf2b0c],EDI      ; 004a6199 | g_ScrollDelay
    TEST EDI,EDI                        ; 004a619f
    JG 0x004a61d5                       ; 004a61a1
        ;   XREF to: 004a61d5 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x9999                      ; 004a61a3
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a61a8
    MOV [0x02cf2b0c],EAX                ; 004a61ab | g_ScrollDelay
    TEST EDX,EDX                        ; 004a61b0
    JZ 0x004a61f4                       ; 004a61b2
        ;   XREF to: 004a61f4 (CONDITIONAL_JUMP)  ; LAB_004a61f4
    MOV EAX,[0x02cf6a8c]                ; 004a61b4 | g_MouseX
    MOV EDX,dword ptr [0x02cf2b04]      ; 004a61b9 | g_ScrollAction
        ;   Label: LAB_004a61b9
    DEC EDX                             ; 004a61bf
    CMP EDX,0x3                         ; 004a61c0
    JA 0x004a61d5                       ; 004a61c3
        ;   XREF to: 004a61d5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4a5fa8]  ; 004a61c5 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ESI,dword ptr [EBX]             ; 004a61cc
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a61ce
    SUB ESI,EAX                         ; 004a61d1
    MOV dword ptr [EBX],ESI             ; 004a61d3
    MOV EDI,dword ptr [0x02cf2b14]      ; 004a61d5 | g_DragStartMouseY
        ;   Label: default
    PUSH EDI                            ; 004a61db
    MOV EBP,dword ptr [0x02cf2b10]      ; 004a61dc | g_DragStartMouseX
    PUSH EBP                            ; 004a61e2
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0 ; 004a61e3
        ;   XREF to: 005f30d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005f30d0(int x, int y)
    ADD ESP,0x8                         ; 004a61e8
    JMP 0x004a6083                      ; 004a61eb
        ;   XREF to: 004a6083 (UNCONDITIONAL_JUMP)  ; LAB_004a6083
    XOR EAX,EAX                         ; 004a61f0
        ;   Label: LAB_004a61f0
    JMP 0x004a618b                      ; 004a61f2
        ;   XREF to: 004a618b (UNCONDITIONAL_JUMP)  ; LAB_004a618b
    MOV EAX,[0x02cf6a90]                ; 004a61f4 | g_MouseY
        ;   Label: LAB_004a61f4
    JMP 0x004a61b9                      ; 004a61f9
        ;   XREF to: 004a61b9 (UNCONDITIONAL_JUMP)  ; LAB_004a61b9
    MOV ECX,dword ptr [EBX]             ; 004a61fb
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a61fd
    ADD ECX,EAX                         ; 004a6200
    MOV dword ptr [EBX],ECX             ; 004a6202
    JMP 0x004a61d5                      ; 004a6204
        ;   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x2c]      ; 004a6206
        ;   Label: caseD_3
    JGE 0x004a6216                      ; 004a6209
        ;   XREF to: 004a6216 (CONDITIONAL_JUMP)  ; LAB_004a6216
    MOV EDX,dword ptr [EBX]             ; 004a620b
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a620d
    SUB EDX,EAX                         ; 004a6210
    MOV dword ptr [EBX],EDX             ; 004a6212
    JMP 0x004a61d5                      ; 004a6214
        ;   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)  ; default
    MOV CL,byte ptr [0x02cf6a94]        ; 004a6216 | g_MouseButtonFlags
        ;   Label: LAB_004a6216
    XOR EAX,EAX                         ; 004a621c
    AND CL,0xfe                         ; 004a621e
    MOV [0x02cf2b00],EAX                ; 004a6221 | g_ActiveControl
    MOV byte ptr [0x02cf6a94],CL        ; 004a6226 | g_MouseButtonFlags
    JMP 0x004a61d5                      ; 004a622c
        ;   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x30]      ; 004a622e
        ;   Label: caseD_4
    JLE 0x004a623e                      ; 004a6231
        ;   XREF to: 004a623e (CONDITIONAL_JUMP)  ; LAB_004a623e
    MOV EDI,dword ptr [EBX]             ; 004a6233
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a6235
    ADD EDI,EAX                         ; 004a6238
    MOV dword ptr [EBX],EDI             ; 004a623a
    JMP 0x004a61d5                      ; 004a623c
        ;   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)  ; default
    MOV DH,byte ptr [0x02cf6a94]        ; 004a623e | g_MouseButtonFlags
        ;   Label: LAB_004a623e
    XOR ESI,ESI                         ; 004a6244
    AND DH,0xfe                         ; 004a6246
    MOV dword ptr [0x02cf2b00],ESI      ; 004a6249 | g_ActiveControl
    MOV byte ptr [0x02cf6a94],DH        ; 004a624f | g_MouseButtonFlags
    JMP 0x004a61d5                      ; 004a6255
        ;   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)  ; default
    TEST EDX,EDX                        ; 004a625a
        ;   Label: LAB_004a625a
    JNZ 0x004a6095                      ; 004a625c
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    TEST byte ptr [0x02cf6a94],0x1      ; 004a6262 | g_MouseButtonFlags
    JZ 0x004a6095                       ; 004a6269
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    MOV EAX,[0x02cf6a8c]                ; 004a626f | g_MouseX
    CMP EAX,dword ptr [EBX + 0x14]      ; 004a6274
    JL 0x004a6095                       ; 004a6277
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    MOV EAX,[0x02cf6a90]                ; 004a627d | g_MouseY
    CMP EAX,dword ptr [EBX + 0x18]      ; 004a6282
    JL 0x004a6095                       ; 004a6285
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    MOV EAX,[0x02cf6a8c]                ; 004a628b | g_MouseX
    CMP EAX,dword ptr [EBX + 0x1c]      ; 004a6290
    JGE 0x004a6095                      ; 004a6293
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    MOV EAX,[0x02cf6a90]                ; 004a6299 | g_MouseY
    CMP EAX,dword ptr [EBX + 0x20]      ; 004a629e
    JGE 0x004a6095                      ; 004a62a1
        ;   XREF to: 004a6095 (CONDITIONAL_JUMP)  ; LAB_004a6095
    MOV EAX,[0x02cf6a8c]                ; 004a62a7 | g_MouseX
    MOV [0x02cf2b10],EAX                ; 004a62ac | g_DragStartMouseX
    MOV EAX,[0x02cf6a90]                ; 004a62b1 | g_MouseY
    MOV [0x02cf2b14],EAX                ; 004a62b6 | g_DragStartMouseY
    MOV EAX,dword ptr [EBX]             ; 004a62bb
    MOV dword ptr [0x02cf2b00],EBX      ; 004a62bd | g_ActiveControl
    MOV [0x02cf2b18],EAX                ; 004a62c3 | g_DragStartScrollPos
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004a62c8
    MOV ECX,dword ptr [EBX + 0x10]      ; 004a62cb
    MOV [0x02cf2b1c],EAX                ; 004a62ce | g_DragStartThumbPos
    TEST ECX,ECX                        ; 004a62d3
    JZ 0x004a6317                       ; 004a62d5
        ;   XREF to: 004a6317 (CONDITIONAL_JUMP)  ; LAB_004a6317
    MOV EAX,[0x02cf6a8c]                ; 004a62d7 | g_MouseX
    CMP EAX,dword ptr [EBX + 0x24]      ; 004a62dc
        ;   Label: LAB_004a62dc
    JGE 0x004a631e                      ; 004a62df
        ;   XREF to: 004a631e (CONDITIONAL_JUMP)  ; LAB_004a631e
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a62e1
    MOV EBP,dword ptr [EBX]             ; 004a62e4
    MOV EDI,0x1                         ; 004a62e6
    SUB EBP,EAX                         ; 004a62eb
    MOV dword ptr [0x02cf2b04],EDI      ; 004a62ed | g_ScrollAction
    MOV dword ptr [EBX],EBP             ; 004a62f3
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a62f5
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004a62f5
    MOV [0x02cf2b08],EAX                ; 004a62fa | g_ScrollTimer
    MOV EAX,0x48000                     ; 004a62ff
    PUSH EBX                            ; 004a6304
    MOV [0x02cf2b0c],EAX                ; 004a6305 | g_ScrollDelay
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 004a630a
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a630f
    POP EBP                             ; 004a6312
    POP EDI                             ; 004a6313
    POP ESI                             ; 004a6314
    POP EBX                             ; 004a6315
    RET                                 ; 004a6316
    MOV EAX,[0x02cf6a90]                ; 004a6317 | g_MouseY
        ;   Label: LAB_004a6317
    JMP 0x004a62dc                      ; 004a631c
        ;   XREF to: 004a62dc (UNCONDITIONAL_JUMP)  ; LAB_004a62dc
    CMP EAX,dword ptr [EBX + 0x28]      ; 004a631e
        ;   Label: LAB_004a631e
    JL 0x004a6339                       ; 004a6321
        ;   XREF to: 004a6339 (CONDITIONAL_JUMP)  ; LAB_004a6339
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a6323
    MOV ESI,dword ptr [EBX]             ; 004a6326
    MOV ECX,0x2                         ; 004a6328
    ADD ESI,EAX                         ; 004a632d
    MOV dword ptr [0x02cf2b04],ECX      ; 004a632f | g_ScrollAction
    MOV dword ptr [EBX],ESI             ; 004a6335
    JMP 0x004a62f5                      ; 004a6337
        ;   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)  ; LAB_004a62f5
    CMP EAX,dword ptr [EBX + 0x2c]      ; 004a6339
        ;   Label: LAB_004a6339
    JGE 0x004a6354                      ; 004a633c
        ;   XREF to: 004a6354 (CONDITIONAL_JUMP)  ; LAB_004a6354
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a633e
    MOV EDX,dword ptr [EBX]             ; 004a6341
    MOV EBP,0x3                         ; 004a6343
    SUB EDX,EAX                         ; 004a6348
    MOV dword ptr [0x02cf2b04],EBP      ; 004a634a | g_ScrollAction
    MOV dword ptr [EBX],EDX             ; 004a6350
    JMP 0x004a62f5                      ; 004a6352
        ;   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)  ; LAB_004a62f5
    CMP EAX,dword ptr [EBX + 0x30]      ; 004a6354
        ;   Label: LAB_004a6354
    JL 0x004a636f                       ; 004a6357
        ;   XREF to: 004a636f (CONDITIONAL_JUMP)  ; LAB_004a636f
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a6359
    MOV EDI,dword ptr [EBX]             ; 004a635c
    MOV ESI,0x4                         ; 004a635e
    ADD EDI,EAX                         ; 004a6363
    MOV dword ptr [0x02cf2b04],ESI      ; 004a6365 | g_ScrollAction
    MOV dword ptr [EBX],EDI             ; 004a636b
    JMP 0x004a62f5                      ; 004a636d
        ;   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)  ; LAB_004a62f5
    XOR ECX,ECX                         ; 004a636f
        ;   Label: LAB_004a636f
    MOV dword ptr [0x02cf2b04],ECX      ; 004a6371 | g_ScrollAction
    JMP 0x004a62f5                      ; 004a6377
        ;   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)  ; LAB_004a62f5

