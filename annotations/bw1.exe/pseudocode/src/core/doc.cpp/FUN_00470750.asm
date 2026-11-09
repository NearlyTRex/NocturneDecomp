; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00470750(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_0046bde0 at 0046c812
;
; Referenced Globals:
;   undefined4 s_actionPending_d_doc_cpp_005da0fb+1
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_ammobox.cpp_FUN_0040e210
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470750
        ;   Label: core_doc.cpp_FUN_00470750
    PUSH EBP                            ; 00470751
    MOV EBX,dword ptr [ESP + 0xc]       ; 00470752
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 00470756
    JZ 0x004707a8                       ; 0047075d
        ;   XREF to: 004707a8 (CONDITIONAL_JUMP)  ; LAB_004707a8
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 0047075f
    CMP ECX,0x4                         ; 00470765
    JNZ 0x004707ab                      ; 00470768
        ;   XREF to: 004707ab (CONDITIONAL_JUMP)  ; LAB_004707ab
    MOV EBP,dword ptr [0x007c33e0]      ; 0047076a | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_0047076a
    PUSH EBP                            ; 00470770
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 00470771
    PUSH EAX                            ; 00470777
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00470778
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0047077d
    TEST EAX,EAX                        ; 00470780
    JZ 0x00470794                       ; 00470782
        ;   XREF to: 00470794 (CONDITIONAL_JUMP)  ; LAB_00470794
    LEA EDX,[EBX + 0x1fae8]             ; 00470784
    PUSH EDX                            ; 0047078a
    PUSH EAX                            ; 0047078b
    CALL core_ammobox.cpp_FUN_0040e210  ; 0047078c
        ;   XREF to: 0040e210 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040e210(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 00470791
    MOV dword ptr [EBX + 0x1ff5c],0x1   ; 00470794
        ;   Label: LAB_00470794
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 0047079e
    POP EBP                             ; 004707a8
        ;   Label: LAB_004707a8
    POP EBX                             ; 004707a9
    RET                                 ; 004707aa
    PUSH EDI                            ; 004707ab
        ;   Label: LAB_004707ab
    PUSH 0xe77                          ; 004707ac
    PUSH ECX                            ; 004707b1
    PUSH 0x5da0fc                       ; 004707b2 | s_actionPending_d_doc_cpp_005da0fb+1
    MOV EDI,dword ptr [0x0061abc0]      ; 004707b7 | g_CEditorToolsPtr
    PUSH EDI                            ; 004707bd
    CALL shape_edittool.cpp_FUN_00494340 ; 004707be
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 004707c3
    POP EDI                             ; 004707c6
    JMP 0x0047076a                      ; 004707c7
        ;   XREF to: 0047076a (UNCONDITIONAL_JUMP)  ; LAB_0047076a

