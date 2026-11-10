; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e720(CAmmoBox *this_ptr,CInventory *inventory)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; CInventory *     Stack[0x8]:4   inventory
;
; XREF[1]:
;   core_prye.cpp_FUN_00520d20 at 00520d5c
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_005b615c
;   TerminatedCString s_Out_of_memory_005b6170
;   TerminatedCString s_Some_ammo_005b617e
;   undefined4 s_ome_ammo_005b617e+1
;   undefined4 s_me_ammo_005b617e+2
;   undefined4 s_e_ammo_005b617e+3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60
;   core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040e070
;   core_inv.cpp_FUN_004da880
;   core_main.c_FUN_004e4330
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e720
        ;   Label: core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e720
    PUSH EBP                            ; 0040e721
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040e722
    MOV EDX,dword ptr [EBP + 0x320]     ; 0040e726
    TEST EDX,EDX                        ; 0040e72c
    JNZ 0x0040e73c                      ; 0040e72e
        ;   XREF to: 0040e73c (CONDITIONAL_JUMP)  ; LAB_0040e73c
    CMP dword ptr [EBP + 0x314],0x0     ; 0040e730
    JNZ 0x0040e763                      ; 0040e737
        ;   XREF to: 0040e763 (CONDITIONAL_JUMP)  ; LAB_0040e763
    POP EBP                             ; 0040e739
    POP EBX                             ; 0040e73a
    RET                                 ; 0040e73b
    PUSH 0x1                            ; 0040e73c
        ;   Label: LAB_0040e73c
    PUSH EDX                            ; 0040e73e
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e73f
    PUSH EBX                            ; 0040e743
    CALL core_inv.cpp_FUN_004da880      ; 0040e744
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV dword ptr [EBP + 0x320],0x0     ; 0040e749
    ADD ESP,0xc                         ; 0040e753
    MOV dword ptr [EBP + 0x314],0x0     ; 0040e756
    POP EBP                             ; 0040e760
    POP EBX                             ; 0040e761
    RET                                 ; 0040e762
    PUSH 0x320                          ; 0040e763
        ;   Label: LAB_0040e763
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0040e768
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040e76d
    TEST EAX,EAX                        ; 0040e770
    JZ 0x0040e77d                       ; 0040e772
        ;   XREF to: 0040e77d (CONDITIONAL_JUMP)  ; LAB_0040e77d
    PUSH EAX                            ; 0040e774
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040de60 ; 0040e775
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040de60(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040e77a
    PUSH EDI                            ; 0040e77d
        ;   Label: LAB_0040e77d
    PUSH ESI                            ; 0040e77e
    MOV EBX,EAX                         ; 0040e77f
    TEST EAX,EAX                        ; 0040e781
    JNZ 0x0040e7a8                      ; 0040e783
        ;   XREF to: 0040e7a8 (CONDITIONAL_JUMP)  ; LAB_0040e7a8
    MOV ESI,0x5b615c                    ; 0040e785 | = "..\\core\\ammobox.cpp"
    MOV EDI,0xa2                        ; 0040e78a
    PUSH 0x5b6170                       ; 0040e78f | = "Out of memory"
    MOV dword ptr [0x01d71de0],ESI      ; 0040e794 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0040e79a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040e7a0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0040e7a5
    MOV EAX,dword ptr [EBP + 0x314]     ; 0040e7a8
        ;   Label: LAB_0040e7a8
    PUSH EAX                            ; 0040e7ae
    PUSH EBX                            ; 0040e7af
    CALL core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040e070 ; 0040e7b0
        ;   XREF to: 0040e070 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040e070(CAmmo * this_ptr, int ammo_count)
    MOV EAX,dword ptr [EBP + 0x318]     ; 0040e7b5
    ADD ESP,0x8                         ; 0040e7bb
    MOV dword ptr [EBX + 0x318],EAX     ; 0040e7be
    PUSH EBX                            ; 0040e7c4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e7c5
    CALL dword ptr [EAX]                ; 0040e7cb
    ADD ESP,0x4                         ; 0040e7cd
    MOV ESI,0x5b617e                    ; 0040e7d0 | = "Some_ammo"
    MOV EDI,EBX                         ; 0040e7d5
    PUSH EDI                            ; 0040e7d7
    MOV AL,byte ptr [ESI]               ; 0040e7d8 | = "Some_ammo" | s_me_ammo_005b617e+2
        ;   Label: LAB_0040e7d8
    MOV byte ptr [EDI],AL               ; 0040e7da
    CMP AL,0x0                          ; 0040e7dc
    JZ 0x0040e7f0                       ; 0040e7de
        ;   XREF to: 0040e7f0 (CONDITIONAL_JUMP)  ; LAB_0040e7f0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e7e0 | s_ome_ammo_005b617e+1 | s_e_ammo_005b617e+3
    ADD ESI,0x2                         ; 0040e7e3
    MOV byte ptr [EDI + 0x1],AL         ; 0040e7e6
    ADD EDI,0x2                         ; 0040e7e9
    CMP AL,0x0                          ; 0040e7ec
    JNZ 0x0040e7d8                      ; 0040e7ee
        ;   XREF to: 0040e7d8 (CONDITIONAL_JUMP)  ; LAB_0040e7d8
    POP EDI                             ; 0040e7f0
        ;   Label: LAB_0040e7f0
    PUSH 0x1                            ; 0040e7f1
    PUSH EBX                            ; 0040e7f3
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040e7f4
    PUSH EDX                            ; 0040e7f8
    CALL core_inv.cpp_FUN_004da880      ; 0040e7f9
        ;   XREF to: 004da880 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004da880(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 0040e7fe
    MOV dword ptr [EBP + 0x314],0x0     ; 0040e801
    POP ESI                             ; 0040e80b
    POP EDI                             ; 0040e80c
    POP EBP                             ; 0040e80d
    POP EBX                             ; 0040e80e
    RET                                 ; 0040e80f

