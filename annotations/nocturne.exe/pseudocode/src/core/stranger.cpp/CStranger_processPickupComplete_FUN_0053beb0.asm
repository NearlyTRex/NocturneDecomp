; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 at 0053827e
;
; Referenced Globals:
;   TerminatedCString s_actionPending_d_stranger_00595acf
;   undefined4 DAT_005b6d50
;   undefined4 g_CAmmoBoxActorType_007641f8.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_ammobox.cpp_FUN_0040f1a0
;   shape_edittool.cpp_FUN_0046fb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053beb0
        ;   Label: core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0
    PUSH EBP                            ; 0053beb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053beb2
    CMP dword ptr [EBX + 0x1fa08],0x0   ; 0053beb6
    JZ 0x0053bf08                       ; 0053bebd
        ;   XREF to: 0053bf08 (CONDITIONAL_JUMP)  ; LAB_0053bf08
    MOV ECX,dword ptr [EBX + 0x1faa0]   ; 0053bebf
    CMP ECX,0x4                         ; 0053bec5
    JNZ 0x0053bf0b                      ; 0053bec8
        ;   XREF to: 0053bf0b (CONDITIONAL_JUMP)  ; LAB_0053bf0b
    MOV EBP,dword ptr [0x00764230]      ; 0053beca | g_CAmmoBoxActorType_007641f8.name_hash
        ;   Label: LAB_0053beca
    PUSH EBP                            ; 0053bed0
    MOV EAX,dword ptr [EBX + 0x1fa08]   ; 0053bed1
    PUSH EAX                            ; 0053bed7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053bed8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053bedd
    TEST EAX,EAX                        ; 0053bee0
    JZ 0x0053bef4                       ; 0053bee2
        ;   XREF to: 0053bef4 (CONDITIONAL_JUMP)  ; LAB_0053bef4
    LEA EDX,[EBX + 0x1f5a0]             ; 0053bee4
    PUSH EDX                            ; 0053beea
    PUSH EAX                            ; 0053beeb
    CALL core_ammobox.cpp_FUN_0040f1a0  ; 0053beec
        ;   XREF to: 0040f1a0 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_FUN_0040f1a0(CAmmoBox * this_ptr, CInventory * inventory)
    ADD ESP,0x8                         ; 0053bef1
    MOV dword ptr [EBX + 0x1faa0],0x1   ; 0053bef4
        ;   Label: LAB_0053bef4
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 0053befe
    POP EBP                             ; 0053bf08
        ;   Label: LAB_0053bf08
    POP EBX                             ; 0053bf09
    RET                                 ; 0053bf0a
    PUSH EDI                            ; 0053bf0b
        ;   Label: LAB_0053bf0b
    PUSH 0xd49                          ; 0053bf0c
    PUSH ECX                            ; 0053bf11
    PUSH 0x595acf                       ; 0053bf12 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x005b6d50]      ; 0053bf17 | DAT_005b6d50
    PUSH EDI                            ; 0053bf1d
    CALL shape_edittool.cpp_FUN_0046fb40 ; 0053bf1e
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x10                        ; 0053bf23
    POP EDI                             ; 0053bf26
    JMP 0x0053beca                      ; 0053bf27
        ;   XREF to: 0053beca (UNCONDITIONAL_JUMP)  ; LAB_0053beca

