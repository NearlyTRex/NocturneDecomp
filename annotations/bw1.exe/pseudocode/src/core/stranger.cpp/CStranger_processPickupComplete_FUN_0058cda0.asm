; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_005881d0 at 0058884a
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005f6cf0+1
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210
;   shape_edittool.cpp_FUN_00494340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cda0
        ;   Label: core_stranger.cpp_CStranger_processPickupComplete_FUN_0058cda0
    PUSH EBP                            ; 0058cda1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058cda2
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 0058cda6
    JZ 0x0058cdf8                       ; 0058cdad
        ;   XREF to: 0058cdf8 (CONDITIONAL_JUMP)  ; LAB_0058cdf8
    MOV ECX,dword ptr [EBX + 0x1ff5c]   ; 0058cdaf
    CMP ECX,0x4                         ; 0058cdb5
    JNZ 0x0058cdfb                      ; 0058cdb8
        ;   XREF to: 0058cdfb (CONDITIONAL_JUMP)  ; LAB_0058cdfb
    MOV EBP,dword ptr [0x007c33e0]      ; 0058cdba | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_0058cdba
    PUSH EBP                            ; 0058cdc0
    MOV EAX,dword ptr [EBX + 0x1ff78]   ; 0058cdc1
    PUSH EAX                            ; 0058cdc7
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058cdc8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0058cdcd
    TEST EAX,EAX                        ; 0058cdd0
    JZ 0x0058cde4                       ; 0058cdd2
        ;   XREF to: 0058cde4 (CONDITIONAL_JUMP)  ; LAB_0058cde4
    LEA EDX,[EBX + 0x1fae8]             ; 0058cdd4
    PUSH EDX                            ; 0058cdda
    PUSH EAX                            ; 0058cddb
    CALL core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210 ; 0058cddc
        ;   XREF to: 0040e210 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 0058cde1
    MOV dword ptr [EBX + 0x1ff5c],0x1   ; 0058cde4
        ;   Label: LAB_0058cde4
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 0058cdee
    POP EBP                             ; 0058cdf8
        ;   Label: LAB_0058cdf8
    POP EBX                             ; 0058cdf9
    RET                                 ; 0058cdfa
    PUSH EDI                            ; 0058cdfb
        ;   Label: LAB_0058cdfb
    PUSH 0xdba                          ; 0058cdfc
    PUSH ECX                            ; 0058ce01
    PUSH 0x5f6cf1                       ; 0058ce02 | s_actionPending_d_stranger_005f6cf0+1
    MOV EDI,dword ptr [0x0061abc0]      ; 0058ce07 | g_CEditorToolsPtr
    PUSH EDI                            ; 0058ce0d
    CALL shape_edittool.cpp_FUN_00494340 ; 0058ce0e
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 0058ce13
    POP EDI                             ; 0058ce16
    JMP 0x0058cdba                      ; 0058ce17
        ;   XREF to: 0058cdba (UNCONDITIONAL_JUMP)  ; LAB_0058cdba

