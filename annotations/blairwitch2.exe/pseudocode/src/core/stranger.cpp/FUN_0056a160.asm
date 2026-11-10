; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_0056a160(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_005656f0 at 00565d6a
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005eba7c+1
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a160
        ;   Label: core_stranger.cpp_FUN_0056a160
    PUSH EBP                            ; 0056a161
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056a162
    CMP dword ptr [EBX + 0x25608],0x0   ; 0056a166
    JZ 0x0056a1b8                       ; 0056a16d
        ;   XREF to: 0056a1b8 (CONDITIONAL_JUMP)  ; LAB_0056a1b8
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 0056a16f
    CMP ECX,0x4                         ; 0056a175
    JNZ 0x0056a1bb                      ; 0056a178
        ;   XREF to: 0056a1bb (CONDITIONAL_JUMP)  ; LAB_0056a1bb
    MOV EBP,dword ptr [0x007bc3e0]      ; 0056a17a | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_0056a17a
    PUSH EBP                            ; 0056a180
    MOV EAX,dword ptr [EBX + 0x25608]   ; 0056a181
    PUSH EAX                            ; 0056a187
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056a188
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0056a18d
    TEST EAX,EAX                        ; 0056a190
    JZ 0x0056a1a4                       ; 0056a192
        ;   XREF to: 0056a1a4 (CONDITIONAL_JUMP)  ; LAB_0056a1a4
    LEA EDX,[EBX + 0x2437c]             ; 0056a194
    PUSH EDX                            ; 0056a19a
    PUSH EAX                            ; 0056a19b
    CALL core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670 ; 0056a19c
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 0056a1a1
    MOV dword ptr [EBX + 0x256a4],0x1   ; 0056a1a4
        ;   Label: LAB_0056a1a4
    MOV dword ptr [EBX + 0x25608],0x0   ; 0056a1ae
    POP EBP                             ; 0056a1b8
        ;   Label: LAB_0056a1b8
    POP EBX                             ; 0056a1b9
    RET                                 ; 0056a1ba
    PUSH EDI                            ; 0056a1bb
        ;   Label: LAB_0056a1bb
    PUSH 0xd45                          ; 0056a1bc
    PUSH ECX                            ; 0056a1c1
    PUSH 0x5eba7d                       ; 0056a1c2 | s_actionPending_d_stranger_005eba7c+1
    MOV EDI,dword ptr [0x006138e0]      ; 0056a1c7 | g_CEditorToolsPtr
    PUSH EDI                            ; 0056a1cd
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0 ; 0056a1ce
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056a1d3
    POP EDI                             ; 0056a1d6
    JMP 0x0056a17a                      ; 0056a1d7
        ;   XREF to: 0056a17a (UNCONDITIONAL_JUMP)  ; LAB_0056a17a

