; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c1f00()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005be2ce
;
; Referenced Globals:
;   TerminatedCString s_actionPending_d_stranger_00653aac
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1f00
        ;   Label: core_stranger.cpp_CStranger_FUN_005c1f00
    PUSH EBP                            ; 005c1f01
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c1f02
    CMP dword ptr [EBX + 0x1fba0],0x0   ; 005c1f06
    JZ 0x005c1f58                       ; 005c1f0d
        ;   XREF to: 005c1f58 (CONDITIONAL_JUMP)  ; LAB_005c1f58
    MOV ECX,dword ptr [EBX + 0x1fc38]   ; 005c1f0f
    CMP ECX,0x4                         ; 005c1f15
    JNZ 0x005c1f5b                      ; 005c1f18
        ;   XREF to: 005c1f5b (CONDITIONAL_JUMP)  ; LAB_005c1f5b
    MOV EBP,dword ptr [0x008223e0]      ; 005c1f1a | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_005c1f1a
    PUSH EBP                            ; 005c1f20
    MOV EAX,dword ptr [EBX + 0x1fba0]   ; 005c1f21
    PUSH EAX                            ; 005c1f27
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c1f28
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c1f2d
    TEST EAX,EAX                        ; 005c1f30
    JZ 0x005c1f44                       ; 005c1f32
        ;   XREF to: 005c1f44 (CONDITIONAL_JUMP)  ; LAB_005c1f44
    LEA EDX,[EBX + 0x1f738]             ; 005c1f34
    PUSH EDX                            ; 005c1f3a
    PUSH EAX                            ; 005c1f3b
    CALL core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 ; 005c1f3c
        ;   XREF to: 00411700 (UNCONDITIONAL_CALL)  ; undefined core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700()
    ADD ESP,0x8                         ; 005c1f41
    MOV dword ptr [EBX + 0x1fc38],0x1   ; 005c1f44
        ;   Label: LAB_005c1f44
    MOV dword ptr [EBX + 0x1fba0],0x0   ; 005c1f4e
    POP EBP                             ; 005c1f58
        ;   Label: LAB_005c1f58
    POP EBX                             ; 005c1f59
    RET                                 ; 005c1f5a
    PUSH EDI                            ; 005c1f5b
        ;   Label: LAB_005c1f5b
    PUSH 0xd52                          ; 005c1f5c
    PUSH ECX                            ; 005c1f61
    PUSH 0x653aac                       ; 005c1f62 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x00678a60]      ; 005c1f67 | g_CEditorToolsPtr
    PUSH EDI                            ; 005c1f6d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 005c1f6e
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005c1f73
    POP EDI                             ; 005c1f76
    JMP 0x005c1f1a                      ; 005c1f77
        ;   XREF to: 005c1f1a (UNCONDITIONAL_JUMP)  ; LAB_005c1f1a

