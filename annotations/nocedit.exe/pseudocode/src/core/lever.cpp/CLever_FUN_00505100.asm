; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_CLever_FUN_00505100(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_lever.cpp_CLever_getPropertyList_FUN_00505240 at 00505270
;
; Referenced Globals:
;   TerminatedCString s_Ground_lever_00631158
;   undefined4 s_round_lever_00631159
;   TerminatedCString s_Wall_lever_00631165
;   undefined4 s_all_lever_00631166
;   undefined4 s_ll_lever_00631167
;   undefined4 s_l_lever_00631168
;   TerminatedCString s_Unknown_00631170
;   undefined4 s_nknown_00631171
;   undefined4 g_CLeverClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00505100
        ;   Label: core_lever.cpp_CLever_FUN_00505100
    PUSH EDI                            ; 00505101
    MOV EDI,dword ptr [ESP + 0x14]      ; 00505102
    MOV EDX,dword ptr [0x02dd3090]      ; 00505106 | g_CLeverClassInfo.name_hash
    PUSH EDX                            ; 0050510c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0050510d
    PUSH ECX                            ; 00505111
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00505112
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 00505117
    ADD ESP,0x8                         ; 0050511d
    TEST EAX,EAX                        ; 00505120
    JBE 0x0050514b                      ; 00505122
        ;   XREF to: 0050514b (CONDITIONAL_JUMP)  ; LAB_0050514b
    CMP EAX,0x1                         ; 00505124
    JNZ 0x00505152                      ; 00505127
        ;   XREF to: 00505152 (CONDITIONAL_JUMP)  ; LAB_00505152
    MOV ESI,0x631165                    ; 00505129 | = "Wall lever"
    PUSH EDI                            ; 0050512e
        ;   Label: LAB_0050512e
    MOV AL,byte ptr [ESI]               ; 0050512f | = "Ground lever" | s_Wall_lever_00631165 | s_ll_lever_00631167
        ;   Label: LAB_0050512f
    MOV byte ptr [EDI],AL               ; 00505131
    CMP AL,0x0                          ; 00505133
    JZ 0x00505147                       ; 00505135
        ;   XREF to: 00505147 (CONDITIONAL_JUMP)  ; LAB_00505147
    MOV AL,byte ptr [ESI + 0x1]         ; 00505137 | s_round_lever_00631159 | s_all_lever_00631166 | s_l_lever_00631168
    ADD ESI,0x2                         ; 0050513a
    MOV byte ptr [EDI + 0x1],AL         ; 0050513d
    ADD EDI,0x2                         ; 00505140
    CMP AL,0x0                          ; 00505143
    JNZ 0x0050512f                      ; 00505145
        ;   XREF to: 0050512f (CONDITIONAL_JUMP)  ; LAB_0050512f
    POP EDI                             ; 00505147
        ;   Label: LAB_00505147
    POP EDI                             ; 00505148
    POP ESI                             ; 00505149
    RET                                 ; 0050514a
    MOV ESI,0x631158                    ; 0050514b | = "Ground lever"
        ;   Label: LAB_0050514b
    JMP 0x0050512e                      ; 00505150
        ;   XREF to: 0050512e (UNCONDITIONAL_JUMP)  ; LAB_0050512e
    MOV ESI,0x631170                    ; 00505152 | = "Unknown"
        ;   Label: LAB_00505152
    JMP 0x0050512e                      ; 00505157
        ;   XREF to: 0050512e (UNCONDITIONAL_JUMP)  ; LAB_0050512e

