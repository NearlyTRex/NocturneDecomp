; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004af410 at 004af8ad
;
; Referenced Globals:
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0a40
        ;   Label: core_gabriela.cpp_CGabriella_collectAmmo_FUN_004b0a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0a41
    MOV EDX,dword ptr [EBX + 0x25608]   ; 004b0a45
    TEST EDX,EDX                        ; 004b0a4b
    JNZ 0x004b0a51                      ; 004b0a4d
        ;   XREF to: 004b0a51 (CONDITIONAL_JUMP)  ; LAB_004b0a51
    POP EBX                             ; 004b0a4f
    RET                                 ; 004b0a50
    MOV ECX,dword ptr [0x007bc3e0]      ; 004b0a51 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004b0a51
    PUSH ECX                            ; 004b0a57
    PUSH EDX                            ; 004b0a58
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b0a59
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004b0a5e
    TEST EAX,EAX                        ; 004b0a61
    JZ 0x004b0a75                       ; 004b0a63
        ;   XREF to: 004b0a75 (CONDITIONAL_JUMP)  ; LAB_004b0a75
    LEA EDX,[EBX + 0x2437c]             ; 004b0a65
    PUSH EDX                            ; 004b0a6b
    PUSH EAX                            ; 004b0a6c
    CALL core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670 ; 004b0a6d
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 004b0a72
    MOV dword ptr [EBX + 0x25608],0x0   ; 004b0a75
        ;   Label: LAB_004b0a75
    POP EBX                             ; 004b0a7f
    RET                                 ; 004b0a80

