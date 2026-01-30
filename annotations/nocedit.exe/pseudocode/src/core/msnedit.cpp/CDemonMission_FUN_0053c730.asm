; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c730(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 0053a971
;
; Referenced Globals:
;   TerminatedCString s_s_s_0063c881
;   TerminatedCString s_Edit_s_properties_0063c887
;   undefined4 DAT_00680908
;   undefined4 DAT_0068090c
;   undefined4 DAT_02f79820
;   undefined4 DAT_02f79c20
;   undefined4 DAT_02f7a024
;   int INT_02f7a028
;   undefined4 DAT_02f7a02c
;   undefined4 DAT_02f7a030
;   undefined4 DAT_02f7a031
;   undefined4 DAT_02f7a032
;   undefined4 DAT_02f7a033
;   undefined4 DAT_02f7a080
;   undefined4 DAT_02f7a118
;
; Called Functions:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
;   core_actor.cpp_CActorProperty_FUN_0040ea50
;   core_actor.cpp_FUN_0040e150
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c730
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053c730
    PUSH EBP                            ; 0053c731
    SUB ESP,0x538                       ; 0053c732
    MOV EBX,dword ptr [ESP + 0x544]     ; 0053c738
    PUSH 0x2f7a024                      ; 0053c73f | DAT_02f7a024
    CALL core_actor.cpp_FUN_0040e150    ; 0053c744
        ;   XREF to: 0040e150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e150()
    MOV EDX,dword ptr [EBX + 0x28]      ; 0053c749
    ADD ESP,0x4                         ; 0053c74c
    TEST EDX,EDX                        ; 0053c74f
    JZ 0x0053c8bf                       ; 0053c751
        ;   XREF to: 0053c8bf (CONDITIONAL_JUMP)  ; LAB_0053c8bf
    PUSH EDI                            ; 0053c757
    PUSH ESI                            ; 0053c758
    MOV ECX,0x19                        ; 0053c759
    LEA EDI,[ESP + 0x4dc]               ; 0053c75e
    MOV ESI,0x680908                    ; 0053c765 | DAT_00680908
    MOVSD.REP ES:EDI,ESI                ; 0053c76a | DAT_00680908 | DAT_0068090c
    MOV EBP,0x2f79820                   ; 0053c76c | DAT_02f79820
    PUSH 0x2f7a024                      ; 0053c771 | DAT_02f7a024
        ;   Label: LAB_0053c771
    CALL core_actor.cpp_FUN_0040e150    ; 0053c776
        ;   XREF to: 0040e150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e150()
    ADD ESP,0x4                         ; 0053c77b
    MOV EAX,dword ptr [EBX + 0x28]      ; 0053c77e
    PUSH 0x2f7a024                      ; 0053c781 | DAT_02f7a024
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053c786
    PUSH EAX                            ; 0053c78c
    CALL dword ptr [EDX + 0xd4]         ; 0053c78d
    ADD ESP,0x8                         ; 0053c793
    LEA EAX,[ESP + 0x8]                 ; 0053c796
    PUSH EAX                            ; 0053c79a
    XOR ESI,ESI                         ; 0053c79b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053c79d
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ECX,dword ptr [0x02f7a028]      ; 0053c7a2 | INT_02f7a028
    ADD ESP,0x4                         ; 0053c7a8
    TEST ECX,ECX                        ; 0053c7ab
    JLE 0x0053c807                      ; 0053c7ad
        ;   XREF to: 0053c807 (CONDITIONAL_JUMP)  ; LAB_0053c807
    MOV EDI,0x2f7a02c                   ; 0053c7af | DAT_02f7a02c
    ADD EDI,0x4                         ; 0053c7b4
    PUSH EBP                            ; 0053c7b7 | DAT_02f79820
        ;   Label: LAB_0053c7b7
    MOV EAX,dword ptr [EBX + 0x28]      ; 0053c7b8
    PUSH EAX                            ; 0053c7bb
    IMUL EAX,ESI,0xec                   ; 0053c7bc
    ADD EAX,0x2f7a02c                   ; 0053c7c2 | DAT_02f7a118 | DAT_02f7a02c
    PUSH EAX                            ; 0053c7c7 | DAT_02f7a02c | DAT_02f7a118
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0053c7c8
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorProperty_FUN_0040ea50()
    ADD ESP,0xc                         ; 0053c7cd
    PUSH EBP                            ; 0053c7d0 | DAT_02f79820
    PUSH EDI                            ; 0053c7d1 | DAT_02f7a030
    PUSH 0x63c881                       ; 0053c7d2 | = "%s\t%s"
    PUSH 0x2f79c20                      ; 0053c7d7 | DAT_02f79c20
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053c7dc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0053c7e1
    PUSH 0x2f79c20                      ; 0053c7e4 | DAT_02f79c20
    LEA EAX,[ESP + 0xc]                 ; 0053c7e9
    PUSH EAX                            ; 0053c7ed
    INC ESI                             ; 0053c7ee
    ADD EDI,0xec                        ; 0053c7ef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053c7f5
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EDX,dword ptr [0x02f7a028]      ; 0053c7fa | INT_02f7a028
    ADD ESP,0x8                         ; 0053c800
    CMP ESI,EDX                         ; 0053c803
    JL 0x0053c7b7                       ; 0053c805
        ;   XREF to: 0053c7b7 (CONDITIONAL_JUMP)  ; LAB_0053c7b7
    MOV ECX,dword ptr [EBX + 0x28]      ; 0053c807
        ;   Label: LAB_0053c807
    PUSH ECX                            ; 0053c80a
    PUSH 0x63c887                       ; 0053c80b | = "Edit %s properties"
    LEA EAX,[ESP + 0x3b8]               ; 0053c810
    PUSH EAX                            ; 0053c817
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053c818
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053c81d
    PUSH 0x0                            ; 0053c820
    LEA EAX,[ESP + 0x4e0]               ; 0053c822
    PUSH EAX                            ; 0053c829
    LEA EAX,[ESP + 0x10]                ; 0053c82a
    PUSH EAX                            ; 0053c82e
    CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070 ; 0053c82f
        ;   XREF to: 004a3070 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070(CStrList * this_ptr, char * search_field)
    ADD ESP,0x8                         ; 0053c834
    PUSH EAX                            ; 0053c837
    LEA EAX,[ESP + 0x3b8]               ; 0053c838
    PUSH EAX                            ; 0053c83f
    LEA EAX,[ESP + 0x14]                ; 0053c840
    PUSH EAX                            ; 0053c844
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053c845
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053c84a
    TEST EAX,EAX                        ; 0053c84d
    JL 0x0053c8ae                       ; 0053c84f
        ;   XREF to: 0053c8ae (CONDITIONAL_JUMP)  ; LAB_0053c8ae
    IMUL ECX,EAX,0xec                   ; 0053c851
    MOV EDX,0x2f7a02c                   ; 0053c857 | DAT_02f7a02c
    ADD EDX,ECX                         ; 0053c85c
    LEA EDI,[ESP + 0x4dc]               ; 0053c85e
    LEA ESI,[EDX + 0x4]                 ; 0053c865
    PUSH EDI                            ; 0053c868
    MOV AL,byte ptr [ESI]               ; 0053c869 | DAT_02f7a030 | DAT_02f7a032
        ;   Label: LAB_0053c869
    MOV byte ptr [EDI],AL               ; 0053c86b
    CMP AL,0x0                          ; 0053c86d
    JZ 0x0053c881                       ; 0053c86f
        ;   XREF to: 0053c881 (CONDITIONAL_JUMP)  ; LAB_0053c881
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c871 | DAT_02f7a031 | DAT_02f7a033
    ADD ESI,0x2                         ; 0053c874
    MOV byte ptr [EDI + 0x1],AL         ; 0053c877
    ADD EDI,0x2                         ; 0053c87a
    CMP AL,0x0                          ; 0053c87d
    JNZ 0x0053c869                      ; 0053c87f
        ;   XREF to: 0053c869 (CONDITIONAL_JUMP)  ; LAB_0053c869
    POP EDI                             ; 0053c881
        ;   Label: LAB_0053c881
    CMP dword ptr [ECX + 0x2f7a080],0x0 ; 0053c882 | DAT_02f7a080
    JNZ 0x0053c89f                      ; 0053c889
        ;   XREF to: 0053c89f (CONDITIONAL_JUMP)  ; LAB_0053c89f
    PUSH 0x0                            ; 0053c88b
        ;   Label: LAB_0053c88b
    LEA EAX,[ESP + 0xc]                 ; 0053c88d
    PUSH EAX                            ; 0053c891
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053c892
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053c897
    JMP 0x0053c771                      ; 0053c89a
        ;   XREF to: 0053c771 (UNCONDITIONAL_JUMP)  ; LAB_0053c771
    MOV EDI,dword ptr [EBX + 0x28]      ; 0053c89f
        ;   Label: LAB_0053c89f
    PUSH EDI                            ; 0053c8a2
    PUSH EDX                            ; 0053c8a3
    CALL core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 ; 0053c8a4
        ;   XREF to: 0040eed0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053c8a9
    JMP 0x0053c88b                      ; 0053c8ac
        ;   XREF to: 0053c88b (UNCONDITIONAL_JUMP)  ; LAB_0053c88b
    PUSH 0x0                            ; 0053c8ae
        ;   Label: LAB_0053c8ae
    LEA EAX,[ESP + 0xc]                 ; 0053c8b0
    PUSH EAX                            ; 0053c8b4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053c8b5
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053c8ba
    POP ESI                             ; 0053c8bd
    POP EDI                             ; 0053c8be
    ADD ESP,0x538                       ; 0053c8bf
        ;   Label: LAB_0053c8bf
    POP EBP                             ; 0053c8c5
    POP EBX                             ; 0053c8c6
    RET                                 ; 0053c8c7

