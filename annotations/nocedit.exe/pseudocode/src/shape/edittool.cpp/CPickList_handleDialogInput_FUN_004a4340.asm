; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db3e5
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 at 004a3ea6
;
; Referenced Globals:
;   double DOUBLE_00623a76 = 294912
;   int g_LastClickTimestamp
;   int g_LastClickItemIndex
;   void* g_ActiveControl
;   int g_MouseX
;   int g_MouseY
;   _BIT_INTEGER32 g_MouseButtonFlags
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
;   shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
;   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
;   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4340
        ;   Label: shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
    PUSH ESI                            ; 004a4341
    PUSH EDI                            ; 004a4342
    PUSH EBP                            ; 004a4343
    MOV EBP,ESP                         ; 004a4344
    SUB ESP,0x4                         ; 004a4346
    AND ESP,0xfffffff8                  ; 004a4349
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a434c
    PUSH EBX                            ; 004a434f
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240 ; 004a4350
        ;   XREF to: 004a5240 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x170]     ; 004a4355
    ADD ESP,0x4                         ; 004a435b
    TEST EDX,EDX                        ; 004a435e
    JZ 0x004a4380                       ; 004a4360
        ;   XREF to: 004a4380 (CONDITIONAL_JUMP)  ; LAB_004a4380
    MOV ECX,dword ptr [EBX + 0x17c]     ; 004a4362
    PUSH ECX                            ; 004a4368
    PUSH EBX                            ; 004a4369
    CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0 ; 004a436a
        ;   XREF to: 004a54e0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList * this_ptr, int item_index)
    ADD ESP,0x8                         ; 004a436f
    TEST EAX,EAX                        ; 004a4372
    JNZ 0x004a4520                      ; 004a4374
        ;   XREF to: 004a4520 (CONDITIONAL_JUMP)  ; LAB_004a4520
    MOV dword ptr [EBX + 0x170],EAX     ; 004a437a
    PUSH EBX                            ; 004a4380
        ;   Label: LAB_004a4380
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a4381
    CALL dword ptr [EAX + 0x18]         ; 004a4384
    ADD ESP,0x4                         ; 004a4387
    TEST EAX,EAX                        ; 004a438a
    JL 0x004a452d                       ; 004a438c
        ;   XREF to: 004a452d (CONDITIONAL_JUMP)  ; LAB_004a452d
    PUSH EBX                            ; 004a4392
    CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240 ; 004a4393
        ;   XREF to: 004a5240 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)
    MOV ESI,dword ptr [EBX + 0x40]      ; 004a4398
    ADD ESP,0x4                         ; 004a439b
    TEST ESI,ESI                        ; 004a439e
    JNZ 0x004a4514                      ; 004a43a0
        ;   XREF to: 004a4514 (CONDITIONAL_JUMP)  ; LAB_004a4514
    MOV EDI,dword ptr [EBX + 0x1d8]     ; 004a43a6
    LEA ECX,[EBX + 0x1a4]               ; 004a43ac
    CMP EDI,0x1                         ; 004a43b2
    JNZ 0x004a4539                      ; 004a43b5
        ;   XREF to: 004a4539 (CONDITIONAL_JUMP)  ; LAB_004a4539
    MOV EAX,dword ptr [EBX + 0x180]     ; 004a43bb
    MOV dword ptr [EBX + 0x1a4],EAX     ; 004a43c1
    MOV EAX,dword ptr [EBX]             ; 004a43c7
    MOV dword ptr [EBX + 0x1a8],EAX     ; 004a43c9
    MOV EAX,dword ptr [EBX + 0x188]     ; 004a43cf
    PUSH ECX                            ; 004a43d5
    MOV dword ptr [EBX + 0x1ac],EAX     ; 004a43d6
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 004a43dc
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1a4]     ; 004a43e1
    ADD ESP,0x4                         ; 004a43e7
        ;   Label: LAB_004a43e7
    MOV dword ptr [EBX + 0x180],EAX     ; 004a43ea
    MOV ECX,dword ptr [EBX + 0x190]     ; 004a43f0
        ;   Label: LAB_004a43f0
    MOV EAX,dword ptr [EBX + 0x188]     ; 004a43f6
    IMUL EAX,ECX                        ; 004a43fc
    MOV ESI,dword ptr [EBX + 0x180]     ; 004a43ff
    MOV EDI,dword ptr [EBX + 0x17c]     ; 004a4405
    ADD EAX,ESI                         ; 004a440b
    CMP EAX,EDI                         ; 004a440d
    JG 0x004a4418                       ; 004a440f
        ;   XREF to: 004a4418 (CONDITIONAL_JUMP)  ; LAB_004a4418
    DEC EAX                             ; 004a4411
    MOV dword ptr [EBX + 0x17c],EAX     ; 004a4412
    MOV EDX,dword ptr [EBX + 0x180]     ; 004a4418
        ;   Label: LAB_004a4418
    CMP EDX,dword ptr [EBX + 0x17c]     ; 004a441e
    JLE 0x004a442c                      ; 004a4424
        ;   XREF to: 004a442c (CONDITIONAL_JUMP)  ; LAB_004a442c
    MOV dword ptr [EBX + 0x17c],EDX     ; 004a4426
    CMP byte ptr [EBX + 0x44],0x0       ; 004a442c
        ;   Label: LAB_004a442c
    JZ 0x004a4469                       ; 004a4430
        ;   XREF to: 004a4469 (CONDITIONAL_JUMP)  ; LAB_004a4469
    LEA EAX,[EBX + 0x1dc]               ; 004a4432
    PUSH EAX                            ; 004a4438
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 004a4439
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 004a443e
    TEST EAX,EAX                        ; 004a4441
    JZ 0x004a444f                       ; 004a4443
        ;   XREF to: 004a444f (CONDITIONAL_JUMP)  ; LAB_004a444f
    MOV dword ptr [EBX + 0x170],0x1     ; 004a4445
    MOV ECX,dword ptr [0x02cf2b00]      ; 004a444f | g_ActiveControl
        ;   Label: LAB_004a444f
    LEA EAX,[EBX + 0x1dc]               ; 004a4455
    CMP EAX,ECX                         ; 004a445b
    JNZ 0x004a4469                      ; 004a445d
        ;   XREF to: 004a4469 (CONDITIONAL_JUMP)  ; LAB_004a4469
    MOV dword ptr [EBX + 0x3a4],0x0     ; 004a445f
    CMP byte ptr [EBX + 0xa8],0x0       ; 004a4469
        ;   Label: LAB_004a4469
    JNZ 0x004a4599                      ; 004a4470
        ;   XREF to: 004a4599 (CONDITIONAL_JUMP)  ; LAB_004a4599
    TEST byte ptr [0x02cf6a94],0x1      ; 004a4476 | g_MouseButtonFlags
        ;   Label: LAB_004a4476
    JZ 0x004a4514                       ; 004a447d
        ;   XREF to: 004a4514 (CONDITIONAL_JUMP)  ; LAB_004a4514
    CMP dword ptr [0x02cf2b00],0x0      ; 004a4483 | g_ActiveControl
    JNZ 0x004a4514                      ; 004a448a
        ;   XREF to: 004a4514 (CONDITIONAL_JUMP)  ; LAB_004a4514
    MOV EDX,dword ptr [0x02cf6a90]      ; 004a4490 | g_MouseY
    PUSH EDX                            ; 004a4496
    MOV ECX,dword ptr [0x02cf6a8c]      ; 004a4497 | g_MouseX
    PUSH ECX                            ; 004a449d
    PUSH EBX                            ; 004a449e
    CALL shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0 ; 004a449f
        ;   XREF to: 004a53a0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0(CPickList * this_ptr, int mouse_x, int mouse_y)
    ADD ESP,0xc                         ; 004a44a4
    MOV ESI,EAX                         ; 004a44a7
    TEST EAX,EAX                        ; 004a44a9
    JL 0x004a450e                       ; 004a44ab
        ;   XREF to: 004a450e (CONDITIONAL_JUMP)  ; LAB_004a450e
    MOV CL,byte ptr [0x02cf6a94]        ; 004a44ad | g_MouseButtonFlags
    MOV dword ptr [EBX + 0x3a4],0xffffffff ; 004a44b3
    AND CL,0xfe                         ; 004a44bd
    MOV dword ptr [EBX + 0x17c],EAX     ; 004a44c0
    MOV byte ptr [0x02cf6a94],CL        ; 004a44c6 | g_MouseButtonFlags
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a44cc
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDI,dword ptr [0x02cf2af8]      ; 004a44d1 | g_LastClickTimestamp
    MOV EDX,EAX                         ; 004a44d7
    SUB EAX,EDI                         ; 004a44d9
    TEST EAX,EAX                        ; 004a44db
    JLE 0x004a4508                      ; 004a44dd
        ;   XREF to: 004a4508 (CONDITIONAL_JUMP)  ; LAB_004a4508
    MOV dword ptr [ESP],EAX             ; 004a44df
    FILD dword ptr [ESP]                ; 004a44e2
    FCOMP double ptr [0x00623a76]       ; 004a44e5 | DOUBLE_00623a76
    FNSTSW AX                           ; 004a44eb
    SAHF                                ; 004a44ed
    JNC 0x004a4508                      ; 004a44ee
        ;   XREF to: 004a4508 (CONDITIONAL_JUMP)  ; LAB_004a4508
    MOV ECX,dword ptr [0x02cf2afc]      ; 004a44f0 | g_LastClickItemIndex
    CMP ECX,dword ptr [EBX + 0x17c]     ; 004a44f6
    JNZ 0x004a4508                      ; 004a44fc
        ;   XREF to: 004a4508 (CONDITIONAL_JUMP)  ; LAB_004a4508
    MOV dword ptr [EBX + 0x170],0x1     ; 004a44fe
    MOV dword ptr [0x02cf2af8],EDX      ; 004a4508 | g_LastClickTimestamp
        ;   Label: LAB_004a4508
    MOV dword ptr [0x02cf2afc],ESI      ; 004a450e | g_LastClickItemIndex
        ;   Label: LAB_004a450e
    MOV EAX,0xfffffffe                  ; 004a4514
        ;   Label: LAB_004a4514
    MOV ESP,EBP                         ; 004a4519
    POP EBP                             ; 004a451b
    POP EDI                             ; 004a451c
    POP ESI                             ; 004a451d
    POP EBX                             ; 004a451e
    RET                                 ; 004a451f
    MOV EAX,dword ptr [EBX + 0x17c]     ; 004a4520
        ;   Label: LAB_004a4520
    MOV ESP,EBP                         ; 004a4526
    POP EBP                             ; 004a4528
    POP EDI                             ; 004a4529
    POP ESI                             ; 004a452a
    POP EBX                             ; 004a452b
    RET                                 ; 004a452c
    MOV EAX,0xffffffff                  ; 004a452d
        ;   Label: LAB_004a452d
    MOV ESP,EBP                         ; 004a4532
    POP EBP                             ; 004a4534
    POP EDI                             ; 004a4535
    POP ESI                             ; 004a4536
    POP EBX                             ; 004a4537
    RET                                 ; 004a4538
    CMP EDI,0x2                         ; 004a4539
        ;   Label: LAB_004a4539
    JNZ 0x004a43f0                      ; 004a453c
        ;   XREF to: 004a43f0 (CONDITIONAL_JUMP)  ; LAB_004a43f0
    MOV EDX,dword ptr [EBX + 0x180]     ; 004a4542
    MOV ESI,dword ptr [EBX + 0x188]     ; 004a4548
    MOV EAX,EDX                         ; 004a454e
    SAR EDX,0x1f                        ; 004a4550
    IDIV ESI                            ; 004a4553
    MOV dword ptr [EBX + 0x1a4],EAX     ; 004a4555
    MOV EDI,dword ptr [EBX + 0x188]     ; 004a455b
    MOV EAX,dword ptr [EBX]             ; 004a4561
    ADD EAX,EDI                         ; 004a4563
    LEA EDX,[EAX + -0x1]                ; 004a4565
    MOV EAX,EDX                         ; 004a4568
    SAR EDX,0x1f                        ; 004a456a
    IDIV EDI                            ; 004a456d
    MOV dword ptr [EBX + 0x1a8],EAX     ; 004a456f
    MOV EAX,dword ptr [EBX + 0x190]     ; 004a4575
    PUSH ECX                            ; 004a457b
    MOV dword ptr [EBX + 0x1ac],EAX     ; 004a457c
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 004a4582
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1a4]     ; 004a4587
    IMUL EAX,dword ptr [EBX + 0x188]    ; 004a458d
    JMP 0x004a43e7                      ; 004a4594
        ;   XREF to: 004a43e7 (UNCONDITIONAL_JUMP)  ; LAB_004a43e7
    LEA ESI,[EBX + 0x2c0]               ; 004a4599
        ;   Label: LAB_004a4599
    PUSH ESI                            ; 004a459f
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830 ; 004a45a0
        ;   XREF to: 004a6830 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 004a45a5
    TEST EAX,EAX                        ; 004a45a8
    JNZ 0x004a452d                      ; 004a45aa
        ;   XREF to: 004a452d (CONDITIONAL_JUMP)  ; LAB_004a452d
    CMP ESI,dword ptr [0x02cf2b00]      ; 004a45ac | g_ActiveControl
    JNZ 0x004a4476                      ; 004a45b2
        ;   XREF to: 004a4476 (CONDITIONAL_JUMP)  ; LAB_004a4476
    MOV dword ptr [EBX + 0x3a4],0x1     ; 004a45b8
    JMP 0x004a4476                      ; 004a45c2
        ;   XREF to: 004a4476 (UNCONDITIONAL_JUMP)  ; LAB_004a4476

