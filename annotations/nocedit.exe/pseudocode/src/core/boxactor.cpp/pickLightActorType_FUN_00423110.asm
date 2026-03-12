; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ELightActorType __cdecl core_boxactor_cpp_pickLightActorType_FUN_00423110(char *prompt_text,int allow_custom,uint current_type)
;
; Parameters:
; char *           Stack[0x4]:4   prompt_text
; int              Stack[0x8]:4   allow_custom
; uint             Stack[0xc]:4   current_type
; Local Variables:
; CPickList        Stack[-0x3b0]:936  local_3b0
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_initializeInEditor_FUN_00423590 at 00423599
;   core_boxactor.cpp_CLightActor_propertyActionTypeCallback_FUN_00423380 at 004233ca
;
; Referenced Globals:
;   void* switchdataD_004230b0 = 00423130
;   void* PTR_LAB_004230c4 = 00423206
;   void* PTR_LAB_004230d8 = 0042322e
;   void* PTR_LAB_004230ec = 00423256
;   void* PTR_LAB_004230f0 = 004231ac
;   void* switchdataD_00423100 = 004231e7
;   TerminatedCString s_Custom_0061698f
;   TerminatedCString s_Flashlight_00616996
;   TerminatedCString s_Lantern_006169a1
;   TerminatedCString s_Globe_006169a9
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423110
        ;   Label: core_boxactor.cpp_pickLightActorType_FUN_00423110
    PUSH ESI                            ; 00423111
    SUB ESP,0x3a8                       ; 00423112
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00423118
    MOV ESI,0xffffffff                  ; 0042311f
    CMP EAX,0x3                         ; 00423124
    JA 0x00423135                       ; 00423127
        ;   XREF to: 00423135 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4230b0]  ; 00423129 | caseD_3 | switchdataD_004230b0
        ;   Label: switchD
    MOV ESI,0x3                         ; 00423130
        ;   Label: caseD_0
    MOV EAX,ESP                         ; 00423135
        ;   Label: default
    PUSH EAX                            ; 00423137
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00423138
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EAX,0x4                         ; 0042313d
    ADD ESP,0x4                         ; 00423142
    JMP dword ptr [EAX + 0x4230c0]      ; 00423145 | PTR_LAB_004230c4 | LAB_00423206
    PUSH EBX                            ; 00423150 | = "Flashlight" | s_Custom_0061698f | s_Lantern_006169a1
        ;   Label: LAB_00423150
    LEA EAX,[ESP + 0x4]                 ; 00423151
    PUSH EAX                            ; 00423155
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00423156
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,0x8                         ; 0042315b
    ADD ESP,0x8                         ; 00423160
    JMP dword ptr [EAX + 0x4230d0]      ; 00423163 | PTR_LAB_004230d8 | LAB_0042322e
    PUSH EBX                            ; 0042316e | = "Lantern" | s_Custom_0061698f | s_Flashlight_00616996
        ;   Label: LAB_0042316e
    LEA EAX,[ESP + 0x4]                 ; 0042316f
    PUSH EAX                            ; 00423173
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00423174
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,0xc                         ; 00423179
    ADD ESP,0x8                         ; 0042317e
    JMP dword ptr [EAX + 0x4230e0]      ; 00423181 | PTR_LAB_004230ec | LAB_00423256
    PUSH EBX                            ; 0042318c | = "Globe" | s_Custom_0061698f | s_Flashlight_00616996
        ;   Label: LAB_0042318c
    LEA EAX,[ESP + 0x4]                 ; 0042318d
    PUSH EAX                            ; 00423191
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00423192
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00423197
    CMP dword ptr [ESP + 0x3b8],0x0     ; 0042319a
    JZ 0x004231bf                       ; 004231a2
        ;   XREF to: 004231bf (CONDITIONAL_JUMP)  ; LAB_004231bf
    XOR EAX,EAX                         ; 004231a4
    JMP dword ptr [EAX + 0x4230f0]      ; 004231a6 | PTR_LAB_004230f0 | LAB_004231ac
    MOV EBX,0x61698f                    ; 004231ac | = "Custom"
        ;   Label: LAB_004231ac
    PUSH EBX                            ; 004231b1 | = "Custom" | s_Flashlight_00616996 | s_Lantern_006169a1
        ;   Label: LAB_004231b1
    LEA EAX,[ESP + 0x4]                 ; 004231b2
    PUSH EAX                            ; 004231b6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004231b7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004231bc
    PUSH 0x0                            ; 004231bf
        ;   Label: LAB_004231bf
    PUSH ESI                            ; 004231c1
    MOV ECX,dword ptr [ESP + 0x3bc]     ; 004231c2
    PUSH ECX                            ; 004231c9
    LEA EAX,[ESP + 0xc]                 ; 004231ca
    PUSH EAX                            ; 004231ce
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004231cf
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004231d4
    CMP EAX,0x3                         ; 004231d7
    JA 0x004232d7                       ; 004231da
        ;   XREF to: 004232d7 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x423100]  ; 004231e0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x0                            ; 004231e7
        ;   Label: caseD_0
    LEA EAX,[ESP + 0x4]                 ; 004231e9
    PUSH EAX                            ; 004231ed
    MOV EBX,0x1                         ; 004231ee
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004231f3
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004231f8
    MOV EAX,EBX                         ; 004231fb
    ADD ESP,0x3a8                       ; 004231fd
    POP ESI                             ; 00423203
    POP EBX                             ; 00423204
    RET                                 ; 00423205
    MOV EBX,0x616996                    ; 00423206 | = "Flashlight"
        ;   Label: LAB_00423206
    JMP 0x00423150                      ; 0042320b
        ;   XREF to: 00423150 (UNCONDITIONAL_JUMP)  ; LAB_00423150
    MOV EBX,0x6169a1                    ; 0042322e | = "Lantern"
        ;   Label: LAB_0042322e
    JMP 0x0042316e                      ; 00423233
        ;   XREF to: 0042316e (UNCONDITIONAL_JUMP)  ; LAB_0042316e
    MOV EBX,0x6169a9                    ; 00423256 | = "Globe"
        ;   Label: LAB_00423256
    JMP 0x0042318c                      ; 0042325b
        ;   XREF to: 0042318c (UNCONDITIONAL_JUMP)  ; LAB_0042318c
    PUSH 0x0                            ; 0042327e
        ;   Label: caseD_1
    LEA EAX,[ESP + 0x4]                 ; 00423280
    PUSH EAX                            ; 00423284
    MOV EBX,0x2                         ; 00423285
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0042328a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042328f
    MOV EAX,EBX                         ; 00423292
    ADD ESP,0x3a8                       ; 00423294
    POP ESI                             ; 0042329a
    POP EBX                             ; 0042329b
    RET                                 ; 0042329c
    PUSH 0x0                            ; 0042329d
        ;   Label: caseD_2
    LEA EAX,[ESP + 0x4]                 ; 0042329f
    PUSH EAX                            ; 004232a3
    MOV EBX,0x3                         ; 004232a4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004232a9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004232ae
    MOV EAX,EBX                         ; 004232b1
    ADD ESP,0x3a8                       ; 004232b3
    POP ESI                             ; 004232b9
    POP EBX                             ; 004232ba
    RET                                 ; 004232bb
    XOR EBX,EBX                         ; 004232bc
        ;   Label: caseD_3
    PUSH EBX                            ; 004232be
    LEA EAX,[ESP + 0x4]                 ; 004232bf
    PUSH EAX                            ; 004232c3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004232c4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004232c9
    MOV EAX,EBX                         ; 004232cc
    ADD ESP,0x3a8                       ; 004232ce
    POP ESI                             ; 004232d4
    POP EBX                             ; 004232d5
    RET                                 ; 004232d6
    PUSH 0x0                            ; 004232d7
        ;   Label: default
    LEA EAX,[ESP + 0x4]                 ; 004232d9
    PUSH EAX                            ; 004232dd
    MOV EBX,0xffffffff                  ; 004232de
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004232e3
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004232e8
    MOV EAX,EBX                         ; 004232eb
    ADD ESP,0x3a8                       ; 004232ed
    POP ESI                             ; 004232f3
    POP EBX                             ; 004232f4
    RET                                 ; 004232f5

