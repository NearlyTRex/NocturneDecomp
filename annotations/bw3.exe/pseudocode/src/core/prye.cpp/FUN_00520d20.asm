; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_00520d20(int param_1)
;
;
; XREF[1]:
;   core_prye.cpp_FUN_0051b550 at 0051bf39
;
; Referenced Globals:
;   undefined4 s_actionPending_d_prye_cpp_005cd4de+1
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_ammobox.cpp_FUN_0040e720
;   shape_edittool.cpp_FUN_0047cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520d20
        ;   Label: core_prye.cpp_FUN_00520d20
    PUSH EBP                            ; 00520d21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520d22
    CMP dword ptr [EBX + 0x20b98],0x0   ; 00520d26
    JZ 0x00520d78                       ; 00520d2d
        ;   XREF to: 00520d78 (CONDITIONAL_JUMP)  ; LAB_00520d78
    MOV ECX,dword ptr [EBX + 0x20b64]   ; 00520d2f
    CMP ECX,0x4                         ; 00520d35
    JNZ 0x00520d7b                      ; 00520d38
        ;   XREF to: 00520d7b (CONDITIONAL_JUMP)  ; LAB_00520d7b
    MOV EBP,dword ptr [0x007dfe14]      ; 00520d3a | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_00520d3a
    PUSH EBP                            ; 00520d40
    MOV EAX,dword ptr [EBX + 0x20b98]   ; 00520d41
    PUSH EAX                            ; 00520d47
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00520d48
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 00520d4d
    TEST EAX,EAX                        ; 00520d50
    JZ 0x00520d64                       ; 00520d52
        ;   XREF to: 00520d64 (CONDITIONAL_JUMP)  ; LAB_00520d64
    LEA EDX,[EBX + 0x206e8]             ; 00520d54
    PUSH EDX                            ; 00520d5a
    PUSH EAX                            ; 00520d5b
    CALL core_ammobox.cpp_FUN_0040e720  ; 00520d5c
        ;   XREF to: 0040e720 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040e720(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 00520d61
    MOV dword ptr [EBX + 0x20b64],0x1   ; 00520d64
        ;   Label: LAB_00520d64
    MOV dword ptr [EBX + 0x20b98],0x0   ; 00520d6e
    POP EBP                             ; 00520d78
        ;   Label: LAB_00520d78
    POP EBX                             ; 00520d79
    RET                                 ; 00520d7a
    PUSH EDI                            ; 00520d7b
        ;   Label: LAB_00520d7b
    PUSH 0x108a                         ; 00520d7c
    PUSH ECX                            ; 00520d81
    PUSH 0x5cd4df                       ; 00520d82 | s_actionPending_d_prye_cpp_005cd4de+1
    MOV EDI,dword ptr [0x005fb140]      ; 00520d87 | g_CEditorToolsPtr
    PUSH EDI                            ; 00520d8d
    CALL shape_edittool.cpp_FUN_0047cee0 ; 00520d8e
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x10                        ; 00520d93
    POP EDI                             ; 00520d96
    JMP 0x00520d3a                      ; 00520d97
        ;   XREF to: 00520d3a (UNCONDITIONAL_JUMP)  ; LAB_00520d3a

