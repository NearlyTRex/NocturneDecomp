; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_save_FUN_004f95b0(CInventory *this_ptr,_FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_archive_FUN_004eab00 at 004ead66
;
; Referenced Globals:
;   TerminatedCString s_s_Inventory_005e65dc
;   TerminatedCString s_s_fileVersion_005e65ee
;   TerminatedCString s_s_d_005e6600
;   TerminatedCString s_s_itemCount_005e6606
;   TerminatedCString s_s_d_005e6616
;   TerminatedCString s_s_currentWeapon_005e661c
;   TerminatedCString s_s_d_005e6630
;   TerminatedCString s_s_battery_strength_005e6636
;   TerminatedCString s_s_f_005e664d
;   TerminatedCString s_s_actor_name_list_005e6653
;   TerminatedCString s_s_actor_data_list_005e6669
;   TerminatedCString s_s_End_inventory_005e667f
;   undefined1 DAT_006106c0
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0
;   core_inv.cpp_CInventory_saveItems_FUN_004f9750
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f95b0
        ;   Label: core_inv.cpp_CInventory_save_FUN_004f95b0
    PUSH ESI                            ; 004f95b1
    PUSH EDI                            ; 004f95b2
    PUSH EBP                            ; 004f95b3
    SUB ESP,0x8                         ; 004f95b4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f95b7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f95bb
    MOV EDX,0x6106c0                    ; 004f95bf | DAT_006106c0
    PUSH EDX                            ; 004f95c4 | DAT_006106c0
    PUSH 0x5e65dc                       ; 004f95c5 | = "%s{ // Inventory\n"
    PUSH EBP                            ; 004f95ca
    MOV dword ptr [ESP + 0x10],EDX      ; 004f95cb | DAT_006106c0
    CALL crt_unknown.c_FUN_005c03c0     ; 004f95cf
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f95d4
    PUSH 0x1                            ; 004f95d7
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 004f95d9
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 004f95de
    PUSH 0x6106c0                       ; 004f95e1 | DAT_006106c0
    PUSH 0x5e65ee                       ; 004f95e6 | = "%s// fileVersion\n"
    PUSH EBP                            ; 004f95eb
    MOV dword ptr [EBX + 0x334],0x2     ; 004f95ec
    CALL crt_unknown.c_FUN_005c03c0     ; 004f95f6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f95fb
    MOV ECX,dword ptr [EBX + 0x334]     ; 004f95fe
    PUSH ECX                            ; 004f9604
    PUSH 0x6106c0                       ; 004f9605 | DAT_006106c0
    PUSH 0x5e6600                       ; 004f960a | = "%s%d\n"
    PUSH EBP                            ; 004f960f
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9610
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 004f9615
    PUSH 0x6106c0                       ; 004f9618 | DAT_006106c0
    PUSH 0x5e6606                       ; 004f961d | = "%s// itemCount\n"
    PUSH EBP                            ; 004f9622
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9623
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f9628
    MOV ESI,dword ptr [EBX + 0x10]      ; 004f962b
    PUSH ESI                            ; 004f962e
    PUSH 0x6106c0                       ; 004f962f | DAT_006106c0
    PUSH 0x5e6616                       ; 004f9634 | = "%s%d\n"
    PUSH EBP                            ; 004f9639
    MOV EDI,0xffffffff                  ; 004f963a
    CALL crt_unknown.c_FUN_005c03c0     ; 004f963f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 004f9644
    MOV EDX,dword ptr [EBX + 0x10]      ; 004f9647
    XOR EAX,EAX                         ; 004f964a
    MOV dword ptr [ESP],EDI             ; 004f964c
    TEST EDX,EDX                        ; 004f964f
    JLE 0x004f9667                      ; 004f9651
        ;   XREF to: 004f9667 (CONDITIONAL_JUMP)  ; LAB_004f9667
    MOV ESI,EBX                         ; 004f9653
    MOV EDX,dword ptr [EBX + 0x338]     ; 004f9655
        ;   Label: LAB_004f9655
    CMP EDX,dword ptr [ESI + 0x14]      ; 004f965b
    JNZ 0x004f9735                      ; 004f965e
        ;   XREF to: 004f9735 (CONDITIONAL_JUMP)  ; LAB_004f9735
    MOV dword ptr [ESP],EAX             ; 004f9664
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f9667
        ;   Label: LAB_004f9667
    PUSH ECX                            ; 004f966b | DAT_006106c0
    PUSH 0x5e661c                       ; 004f966c | = "%s// currentWeapon\n"
    PUSH EBP                            ; 004f9671
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9672
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f9677
    MOV ESI,dword ptr [ESP]             ; 004f967a
    PUSH ESI                            ; 004f967d
    MOV EDI,dword ptr [ESP + 0x8]       ; 004f967e
    PUSH EDI                            ; 004f9682 | DAT_006106c0
    PUSH 0x5e6630                       ; 004f9683 | = "%s%d\n"
    PUSH EBP                            ; 004f9688
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9689
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 004f968e
    PUSH EDI                            ; 004f9691 | DAT_006106c0
    PUSH 0x5e6636                       ; 004f9692 | = "%s// battery strength\n"
    PUSH EBP                            ; 004f9697
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9698
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f969d
    SUB ESP,0x8                         ; 004f96a0
    FLD float ptr [EBX]                 ; 004f96a3
    FSTP double ptr [ESP]               ; 004f96a5
    PUSH EDI                            ; 004f96a8 | DAT_006106c0
    PUSH 0x5e664d                       ; 004f96a9 | = "%s%f\n"
    PUSH EBP                            ; 004f96ae
    CALL crt_unknown.c_FUN_005c03c0     ; 004f96af
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 004f96b4
    PUSH EDI                            ; 004f96b7 | DAT_006106c0
    PUSH 0x5e6653                       ; 004f96b8 | = "%s// actor name list\n"
    PUSH EBP                            ; 004f96bd
    CALL crt_unknown.c_FUN_005c03c0     ; 004f96be
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f96c3
    PUSH EBP                            ; 004f96c6
    PUSH EBX                            ; 004f96c7
    CALL core_inv.cpp_CInventory_saveItems_FUN_004f9750 ; 004f96c8
        ;   XREF to: 004f9750 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_saveItems_FUN_004f9750(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f96cd
    PUSH EDI                            ; 004f96d0 | DAT_006106c0
    PUSH 0x5e6669                       ; 004f96d1 | = "%s// actor data list\n"
    PUSH EBP                            ; 004f96d6
    XOR EDI,EDI                         ; 004f96d7
    CALL crt_unknown.c_FUN_005c03c0     ; 004f96d9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f96de
    ADD ESP,0xc                         ; 004f96e1
    TEST EAX,EAX                        ; 004f96e4
    JLE 0x004f9710                      ; 004f96e6
        ;   XREF to: 004f9710 (CONDITIONAL_JUMP)  ; LAB_004f9710
    MOV ESI,EBX                         ; 004f96e8
    PUSH EBP                            ; 004f96ea
        ;   Label: LAB_004f96ea
    MOV EDX,dword ptr [ESI + 0x14]      ; 004f96eb
    PUSH EDX                            ; 004f96ee
    ADD ESI,0x4                         ; 004f96ef
    INC EDI                             ; 004f96f2
    CALL core_actor.cpp_CDemonActor_save_FUN_0040adb0 ; 004f96f3
        ;   XREF to: 0040adb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040adb0(CDemonActor * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f96f8
    ADD ESP,0x8                         ; 004f96fb
    CMP EDI,ECX                         ; 004f96fe
    JL 0x004f96ea                       ; 004f9700
        ;   XREF to: 004f96ea (CONDITIONAL_JUMP)  ; LAB_004f96ea
    LEA EAX,[EAX]                       ; 004f9702
    LEA EDX,[EDX]                       ; 004f9708
    MOV EAX,EAX                         ; 004f970e
    PUSH -0x1                           ; 004f9710
        ;   Label: LAB_004f9710
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 004f9712
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 004f9717
    MOV EBX,dword ptr [ESP + 0x4]       ; 004f971a
    PUSH EBX                            ; 004f971e | DAT_006106c0
    PUSH 0x5e667f                       ; 004f971f | = "%s} // End inventory\n"
    PUSH EBP                            ; 004f9724
    CALL crt_unknown.c_FUN_005c03c0     ; 004f9725
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 004f972a
    ADD ESP,0x8                         ; 004f972d
    POP EBP                             ; 004f9730
    POP EDI                             ; 004f9731
    POP ESI                             ; 004f9732
    POP EBX                             ; 004f9733
    RET                                 ; 004f9734
    INC EAX                             ; 004f9735
        ;   Label: LAB_004f9735
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f9736
    ADD ESI,0x4                         ; 004f9739
    CMP EAX,ECX                         ; 004f973c
    JL 0x004f9655                       ; 004f973e
        ;   XREF to: 004f9655 (CONDITIONAL_JUMP)  ; LAB_004f9655
    JMP 0x004f9667                      ; 004f9744
        ;   XREF to: 004f9667 (UNCONDITIONAL_JUMP)  ; LAB_004f9667

