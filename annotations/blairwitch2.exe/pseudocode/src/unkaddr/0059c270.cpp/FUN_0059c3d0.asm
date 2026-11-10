; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059c270_cpp_FUN_0059c3d0(uint *param_1)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b82e0 at 004b8d7f
;
; Referenced Globals:
;   void* switchdataD_0059c3b4 = 0059c519
;   TerminatedCString s_DebugStateDisplay_005ef717
;   TerminatedCString s_DebugBarrierDisplay_005ef729
;   TerminatedCString s_DebugWayPointDisplay_005ef73d
;   TerminatedCString s_DebugFollowSlotDisplay_005ef752
;   TerminatedCString s_Select_Debug_Flag_005ef769
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01d02f84
;   undefined4 DAT_02668128
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   unkaddr_0059c270.cpp_FUN_0059c380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c3d0
        ;   Label: unkaddr_0059c270.cpp_FUN_0059c3d0
    PUSH ESI                            ; 0059c3d1
    PUSH EDI                            ; 0059c3d2
    PUSH EBP                            ; 0059c3d3
    SUB ESP,0x4c0                       ; 0059c3d4
    MOV EBX,dword ptr [ESP + 0x4d4]     ; 0059c3da
    MOV EAX,ESP                         ; 0059c3e1
    PUSH EAX                            ; 0059c3e3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 0059c3e4
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0059c3e9
    MOV EAX,[0x00617dd4]                ; 0059c3ec | DAT_00617dd4
    PUSH 0x1d                           ; 0059c3f1
    MOV EDX,dword ptr [EAX]             ; 0059c3f3 | DAT_01d02f84
    PUSH EAX                            ; 0059c3f5 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 0059c3f6
    ADD ESP,0x8                         ; 0059c3f8
    TEST EAX,EAX                        ; 0059c3fb
    JNZ 0x0059c419                      ; 0059c3fd
        ;   XREF to: 0059c419 (CONDITIONAL_JUMP)  ; LAB_0059c419
    PUSH 0x0                            ; 0059c3ff
        ;   Label: default
    LEA EAX,[ESP + 0x4]                 ; 0059c401
    PUSH EAX                            ; 0059c405
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0059c406
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059c40b
    ADD ESP,0x4c0                       ; 0059c40e
    POP EBP                             ; 0059c414
    POP EDI                             ; 0059c415
    POP ESI                             ; 0059c416
    POP EBX                             ; 0059c417
    RET                                 ; 0059c418
    PUSH 0x4a                           ; 0059c419
        ;   Label: LAB_0059c419
    MOV EAX,[0x00617dd4]                ; 0059c41b | DAT_00617dd4
    PUSH EAX                            ; 0059c420 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0059c421 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0059c423
    ADD ESP,0x8                         ; 0059c426
    TEST EAX,EAX                        ; 0059c429
    JZ 0x0059c3ff                       ; 0059c42b
        ;   XREF to: 0059c3ff (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x3c0]               ; 0059c42d
    PUSH EAX                            ; 0059c434
    MOV EDX,dword ptr [EBX]             ; 0059c435
    PUSH EDX                            ; 0059c437
    PUSH 0x5ef717                       ; 0059c438 | = "DebugStateDisplay"
    PUSH EBX                            ; 0059c43d
    CALL unkaddr_0059c270.cpp_FUN_0059c380 ; 0059c43e
        ;   XREF to: 0059c380 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059c270.cpp_FUN_0059c380()
    ADD ESP,0x10                        ; 0059c443
    LEA EAX,[ESP + 0x3c0]               ; 0059c446
    PUSH EAX                            ; 0059c44d
    LEA EAX,[ESP + 0x4]                 ; 0059c44e
    PUSH EAX                            ; 0059c452
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0059c453
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059c458
    LEA EAX,[ESP + 0x3c0]               ; 0059c45b
    PUSH EAX                            ; 0059c462
    MOV ECX,dword ptr [EBX + 0x4]       ; 0059c463
    PUSH ECX                            ; 0059c466
    PUSH 0x5ef729                       ; 0059c467 | = "DebugBarrierDisplay"
    PUSH EBX                            ; 0059c46c
    CALL unkaddr_0059c270.cpp_FUN_0059c380 ; 0059c46d
        ;   XREF to: 0059c380 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059c270.cpp_FUN_0059c380()
    ADD ESP,0x10                        ; 0059c472
    LEA EAX,[ESP + 0x3c0]               ; 0059c475
    PUSH EAX                            ; 0059c47c
    LEA EAX,[ESP + 0x4]                 ; 0059c47d
    PUSH EAX                            ; 0059c481
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0059c482
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059c487
    LEA EAX,[ESP + 0x3c0]               ; 0059c48a
    PUSH EAX                            ; 0059c491
    MOV ESI,dword ptr [EBX + 0x8]       ; 0059c492
    PUSH ESI                            ; 0059c495
    PUSH 0x5ef73d                       ; 0059c496 | = "DebugWayPointDisplay"
    PUSH EBX                            ; 0059c49b
    CALL unkaddr_0059c270.cpp_FUN_0059c380 ; 0059c49c
        ;   XREF to: 0059c380 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059c270.cpp_FUN_0059c380()
    ADD ESP,0x10                        ; 0059c4a1
    LEA EAX,[ESP + 0x3c0]               ; 0059c4a4
    PUSH EAX                            ; 0059c4ab
    LEA EAX,[ESP + 0x4]                 ; 0059c4ac
    PUSH EAX                            ; 0059c4b0
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0059c4b1
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059c4b6
    LEA EAX,[ESP + 0x3c0]               ; 0059c4b9
    PUSH EAX                            ; 0059c4c0
    MOV EDI,dword ptr [EBX + 0xc]       ; 0059c4c1
    PUSH EDI                            ; 0059c4c4
    PUSH 0x5ef752                       ; 0059c4c5 | = "DebugFollowSlotDisplay"
    PUSH EBX                            ; 0059c4ca
    CALL unkaddr_0059c270.cpp_FUN_0059c380 ; 0059c4cb
        ;   XREF to: 0059c380 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059c270.cpp_FUN_0059c380()
    ADD ESP,0x10                        ; 0059c4d0
    LEA EAX,[ESP + 0x3c0]               ; 0059c4d3
    PUSH EAX                            ; 0059c4da
    LEA EAX,[ESP + 0x4]                 ; 0059c4db
    PUSH EAX                            ; 0059c4df
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0059c4e0
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059c4e5
    PUSH 0x0                            ; 0059c4e8
    MOV EBP,dword ptr [0x02668128]      ; 0059c4ea | DAT_02668128
    PUSH EBP                            ; 0059c4f0
    PUSH 0x5ef769                       ; 0059c4f1 | = "-- Select Debug Flag --"
    LEA EAX,[ESP + 0xc]                 ; 0059c4f6
    PUSH EAX                            ; 0059c4fa
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250 ; 0059c4fb
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV [0x02668128],EAX                ; 0059c500 | DAT_02668128
    INC EAX                             ; 0059c505
    ADD ESP,0x10                        ; 0059c506
    CMP EAX,0x4                         ; 0059c509
    JA 0x0059c3ff                       ; 0059c50c
        ;   XREF to: 0059c3ff (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59c3b4]  ; 0059c512 | caseD_ffffffff | caseD_0 | caseD_1
        ;   Label: switchD
    XOR EBP,EBP                         ; 0059c519
        ;   Label: caseD_ffffffff
    MOV dword ptr [0x02668128],EBP      ; 0059c51b | DAT_02668128
    JMP 0x0059c3ff                      ; 0059c521
        ;   XREF to: 0059c3ff (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX],0x0             ; 0059c526
        ;   Label: caseD_0
    SETZ AL                             ; 0059c529
    AND EAX,0xff                        ; 0059c52c
    MOV dword ptr [EBX],EAX             ; 0059c531
    JMP 0x0059c3ff                      ; 0059c533
        ;   XREF to: 0059c3ff (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x4],0x0       ; 0059c538
        ;   Label: caseD_1
    SETZ AL                             ; 0059c53c
    AND EAX,0xff                        ; 0059c53f
    MOV dword ptr [EBX + 0x4],EAX       ; 0059c544
    JMP 0x0059c3ff                      ; 0059c547
        ;   XREF to: 0059c3ff (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x8],0x0       ; 0059c54c
        ;   Label: caseD_2
    SETZ AL                             ; 0059c550
    AND EAX,0xff                        ; 0059c553
    MOV dword ptr [EBX + 0x8],EAX       ; 0059c558
    JMP 0x0059c3ff                      ; 0059c55b
        ;   XREF to: 0059c3ff (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0xc],0x0       ; 0059c560
        ;   Label: caseD_3
    SETZ AL                             ; 0059c564
    AND EAX,0xff                        ; 0059c567
    MOV dword ptr [EBX + 0xc],EAX       ; 0059c56c
    JMP 0x0059c3ff                      ; 0059c56f
        ;   XREF to: 0059c3ff (UNCONDITIONAL_JUMP)  ; default

