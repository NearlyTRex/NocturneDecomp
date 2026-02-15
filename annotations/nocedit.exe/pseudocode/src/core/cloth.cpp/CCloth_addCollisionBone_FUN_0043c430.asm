; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_addCollisionBone_FUN_0043c430(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x4cc]:1  local_4cc
; undefined        Stack[-0x124]:1  local_124
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Select_bone_to_add_00618656
;   TerminatedCString s_Enter_in_X_radius_00618669
;   TerminatedCString s_Enter_in_Y_radius_0061867e
;   int INT_00838e40
;   int INT_00838e4c
;   CDeformableModelInstance g_CDeformableModelInstanceInstance
;
; Called Functions:
;   core_cloth.cpp_CCloth_setup_FUN_00439710
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c430
        ;   Label: core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430
    PUSH ESI                            ; 0043c431
    PUSH EDI                            ; 0043c432
    PUSH EBP                            ; 0043c433
    SUB ESP,0x4bc                       ; 0043c434
    XOR EDX,EDX                         ; 0043c43a
    PUSH 0x838e58                       ; 0043c43c | g_CDeformableModelInstanceInstance
    MOV dword ptr [ESP + 0x4bc],EDX     ; 0043c441
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0043c448
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0043c44d
    MOV EBP,EAX                         ; 0043c450
    MOV ESI,EAX                         ; 0043c452
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0043c454
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,ESP                         ; 0043c459
    PUSH EAX                            ; 0043c45b
    XOR EDI,EDI                         ; 0043c45c
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0043c45e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ECX,dword ptr [EBP + 0x28558]   ; 0043c463
    ADD ESP,0x4                         ; 0043c469
    TEST ECX,ECX                        ; 0043c46c
    JLE 0x0043c4ae                      ; 0043c46e
        ;   XREF to: 0043c4ae (CONDITIONAL_JUMP)  ; LAB_0043c4ae
    LEA EBX,[EBP + 0x2855c]             ; 0043c470
    MOV EBP,dword ptr [ESI + 0x28558]   ; 0043c476
        ;   Label: LAB_0043c476
    XOR EDX,EDX                         ; 0043c47c
    XOR ECX,ECX                         ; 0043c47e
    TEST EBP,EBP                        ; 0043c480
    JLE 0x0043c513                      ; 0043c482
        ;   XREF to: 0043c513 (CONDITIONAL_JUMP)  ; LAB_0043c513
    MOV EAX,ESI                         ; 0043c488
    CMP EDI,dword ptr [EAX + 0x2857c]   ; 0043c48a
        ;   Label: LAB_0043c48a
    JNZ 0x0043c501                      ; 0043c490
        ;   XREF to: 0043c501 (CONDITIONAL_JUMP)  ; LAB_0043c501
    PUSH EBX                            ; 0043c492
        ;   Label: LAB_0043c492
    LEA EAX,[ESP + 0x4]                 ; 0043c493
    PUSH EAX                            ; 0043c497
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0043c498
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0043c49d
    INC EDI                             ; 0043c4a0
        ;   Label: LAB_0043c4a0
    MOV EBP,dword ptr [ESI + 0x28558]   ; 0043c4a1
    ADD EBX,0x24                        ; 0043c4a7
    CMP EDI,EBP                         ; 0043c4aa
    JL 0x0043c476                       ; 0043c4ac
        ;   XREF to: 0043c476 (CONDITIONAL_JUMP)  ; LAB_0043c476
    PUSH 0x0                            ; 0043c4ae
        ;   Label: LAB_0043c4ae
    PUSH -0x1                           ; 0043c4b0
    PUSH 0x618656                       ; 0043c4b2 | = "Select bone to add"
    LEA EAX,[ESP + 0xc]                 ; 0043c4b7
    PUSH EAX                            ; 0043c4bb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0043c4bc
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0043c4c1
    TEST EAX,EAX                        ; 0043c4c4
    JGE 0x0043c51d                      ; 0043c4c6
        ;   XREF to: 0043c51d (CONDITIONAL_JUMP)  ; LAB_0043c51d
    PUSH 0x838e58                       ; 0043c4c8 | g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043c4c8
    PUSH 0x838e4c                       ; 0043c4cd | INT_00838e4c
    PUSH 0x838e40                       ; 0043c4d2 | INT_00838e40
    MOV EAX,dword ptr [ESP + 0x4dc]     ; 0043c4d7
    PUSH EAX                            ; 0043c4de
    CALL core_cloth.cpp_CCloth_setup_FUN_00439710 ; 0043c4df
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_00439710(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 0043c4e4
    PUSH 0x0                            ; 0043c4e7
    LEA EAX,[ESP + 0x4]                 ; 0043c4e9
    PUSH EAX                            ; 0043c4ed
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0043c4ee
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043c4f3
    ADD ESP,0x4bc                       ; 0043c4f6
    POP EBP                             ; 0043c4fc
    POP EDI                             ; 0043c4fd
    POP ESI                             ; 0043c4fe
    POP EBX                             ; 0043c4ff
    RET                                 ; 0043c500
    INC EDX                             ; 0043c501
        ;   Label: LAB_0043c501
    MOV EBP,dword ptr [ESI + 0x28558]   ; 0043c502
    ADD EAX,0x24                        ; 0043c508
    CMP EDX,EBP                         ; 0043c50b
    JL 0x0043c48a                       ; 0043c50d
        ;   XREF to: 0043c48a (CONDITIONAL_JUMP)  ; LAB_0043c48a
    TEST ECX,ECX                        ; 0043c513
        ;   Label: LAB_0043c513
    JNZ 0x0043c492                      ; 0043c515
        ;   XREF to: 0043c492 (CONDITIONAL_JUMP)  ; LAB_0043c492
    JMP 0x0043c4a0                      ; 0043c51b
        ;   XREF to: 0043c4a0 (UNCONDITIONAL_JUMP)  ; LAB_0043c4a0
    PUSH EAX                            ; 0043c51d
        ;   Label: LAB_0043c51d
    LEA EAX,[ESP + 0x4]                 ; 0043c51e
    PUSH EAX                            ; 0043c522
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0043c523
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0043c528
    MOV EDX,dword ptr [ESP + 0x4d0]     ; 0043c52b
    IMUL EDI,dword ptr [EDX + 0x3ce8c],0xac ; 0043c532
    LEA EBX,[EDX + 0x3ce90]             ; 0043c53c
    MOV ESI,EAX                         ; 0043c542
    ADD EDI,EBX                         ; 0043c544
    PUSH EDI                            ; 0043c546
    MOV AL,byte ptr [ESI]               ; 0043c547
        ;   Label: LAB_0043c547
    MOV byte ptr [EDI],AL               ; 0043c549
    CMP AL,0x0                          ; 0043c54b
    JZ 0x0043c55f                       ; 0043c54d
        ;   XREF to: 0043c55f (CONDITIONAL_JUMP)  ; LAB_0043c55f
    MOV AL,byte ptr [ESI + 0x1]         ; 0043c54f
    ADD ESI,0x2                         ; 0043c552
    MOV byte ptr [EDI + 0x1],AL         ; 0043c555
    ADD EDI,0x2                         ; 0043c558
    CMP AL,0x0                          ; 0043c55b
    JNZ 0x0043c547                      ; 0043c55d
        ;   XREF to: 0043c547 (CONDITIONAL_JUMP)  ; LAB_0043c547
    POP EDI                             ; 0043c55f
        ;   Label: LAB_0043c55f
    PUSH 0x618669                       ; 0043c560 | = "Enter in X radius : "
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 0043c565
    PUSH ESI                            ; 0043c56c
    PUSH 0x0                            ; 0043c56d
    PUSH 0xa                            ; 0043c56f
    LEA EAX,[ESP + 0x3b8]               ; 0043c571
    PUSH EAX                            ; 0043c578
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0043c579
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0043c57e
    LEA EAX,[ESP + 0x3a8]               ; 0043c581
    PUSH EAX                            ; 0043c588
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 0043c589
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0043c58e
    MOV dword ptr [ESP + 0x4b0],EDX     ; 0043c595
    FLD double ptr [ESP + 0x4ac]        ; 0043c59c
    ADD ESP,0x4                         ; 0043c5a3
    PUSH 0x61867e                       ; 0043c5a6 | = "Enter in Y radius : "
    LEA EDI,[ESI + 0xb]                 ; 0043c5ab
    PUSH EDI                            ; 0043c5ae
    PUSH 0x0                            ; 0043c5af
    PUSH 0xa                            ; 0043c5b1
    LEA EAX,[ESP + 0x3b8]               ; 0043c5b3
    PUSH EAX                            ; 0043c5ba
    FSTP float ptr [ESP + 0x4c4]        ; 0043c5bb
    MOV dword ptr [ESP + 0x4cc],EDI     ; 0043c5c2
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0043c5c9
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0043c5ce
    LEA EAX,[ESP + 0x3a8]               ; 0043c5d1
    PUSH EAX                            ; 0043c5d8
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 0043c5d9
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0043c5de
    MOV dword ptr [ESP + 0x4b0],EDX     ; 0043c5e5
    FLD double ptr [ESP + 0x4ac]        ; 0043c5ec
    ADD ESP,0x4                         ; 0043c5f3
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 0043c5f6
    IMUL EAX,dword ptr [EAX + 0x3ce8c],0xac ; 0043c5fd
    MOV ECX,dword ptr [ESP + 0x4d0]     ; 0043c607
    ADD EAX,ECX                         ; 0043c60e
    MOV EDX,dword ptr [ESP + 0x4b0]     ; 0043c610
    MOV dword ptr [EAX + 0x3cea4],EDX   ; 0043c617
    IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac ; 0043c61d
    ADD EAX,ECX                         ; 0043c627
    FSTP float ptr [ESP + 0x4b4]        ; 0043c629
    MOV EDX,dword ptr [ESP + 0x4b4]     ; 0043c630
    MOV dword ptr [EAX + 0x3cea8],EDX   ; 0043c637
    IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac ; 0043c63d
    MOV dword ptr [EBX + EAX*0x1 + 0x24],0x0 ; 0043c647
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x24] ; 0043c64f
    MOV dword ptr [EBX + EAX*0x1 + 0x20],EDX ; 0043c653
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x20] ; 0043c657
    MOV dword ptr [EBX + EAX*0x1 + 0x1c],EDX ; 0043c65b
    IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac ; 0043c65f
    MOV dword ptr [EBX + EAX*0x1 + 0x30],0x0 ; 0043c669
    MOV EDI,ECX                         ; 0043c671
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x30] ; 0043c673
    MOV dword ptr [EBX + EAX*0x1 + 0x2c],EDX ; 0043c677
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x2c] ; 0043c67b
    MOV dword ptr [EBX + EAX*0x1 + 0x28],EDX ; 0043c67f
    IMUL EAX,dword ptr [ECX + 0x3ce8c],0xac ; 0043c683
    ADD EAX,EDI                         ; 0043c68d
    MOV dword ptr [EAX + 0x3cec4],0x0   ; 0043c68f
    INC dword ptr [EDI + 0x3ce8c]       ; 0043c699
    JMP 0x0043c4c8                      ; 0043c69f
        ;   XREF to: 0043c4c8 (UNCONDITIONAL_JUMP)  ; LAB_0043c4c8

