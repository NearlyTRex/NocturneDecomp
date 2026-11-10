; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_save_FUN_004dc2c0(CInventory *this_ptr,_FILE *file_handle)
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
;   core_hero.cpp_FUN_004ce590 at 004ce932
;
; Referenced Globals:
;   TerminatedCString s_s_Inventory_005db7be
;   TerminatedCString s_s_fileVersion_005db7d0
;   TerminatedCString s_s_d_005db7e2
;   TerminatedCString s_s_itemCount_005db7e8
;   TerminatedCString s_s_d_005db7f8
;   TerminatedCString s_s_currentWeapon_005db7fe
;   TerminatedCString s_s_d_005db812
;   TerminatedCString s_s_battery_strength_005db818
;   TerminatedCString s_s_f_005db82f
;   TerminatedCString s_s_actor_name_list_005db835
;   TerminatedCString s_s_actor_data_list_005db84b
;   TerminatedCString s_s_End_inventory_005db861
;   undefined1 DAT_00609590
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_CDemonActor_save_FUN_0040b0a0
;   core_inv.cpp_CInventory_saveItems_FUN_004dc460
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc2c0
        ;   Label: core_inv.cpp_CInventory_save_FUN_004dc2c0
    PUSH ESI                            ; 004dc2c1
    PUSH EDI                            ; 004dc2c2
    PUSH EBP                            ; 004dc2c3
    SUB ESP,0x8                         ; 004dc2c4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004dc2c7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004dc2cb
    MOV EDX,0x609590                    ; 004dc2cf | DAT_00609590
    PUSH EDX                            ; 004dc2d4 | DAT_00609590
    PUSH 0x5db7be                       ; 004dc2d5 | = "%s{ // Inventory\n"
    PUSH EBP                            ; 004dc2da
    MOV dword ptr [ESP + 0x10],EDX      ; 004dc2db | DAT_00609590
    CALL crt_unknown.c_FUN_005b8010     ; 004dc2df
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc2e4
    PUSH 0x1                            ; 004dc2e7
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 004dc2e9
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 004dc2ee
    PUSH 0x609590                       ; 004dc2f1 | DAT_00609590
    PUSH 0x5db7d0                       ; 004dc2f6 | = "%s// fileVersion\n"
    PUSH EBP                            ; 004dc2fb
    MOV dword ptr [EDI + 0x334],0x2     ; 004dc2fc
    CALL crt_unknown.c_FUN_005b8010     ; 004dc306
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc30b
    MOV ECX,dword ptr [EDI + 0x334]     ; 004dc30e
    PUSH ECX                            ; 004dc314
    PUSH 0x609590                       ; 004dc315 | DAT_00609590
    PUSH 0x5db7e2                       ; 004dc31a | = "%s%d\n"
    PUSH EBP                            ; 004dc31f
    CALL crt_unknown.c_FUN_005b8010     ; 004dc320
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004dc325
    PUSH 0x609590                       ; 004dc328 | DAT_00609590
    PUSH 0x5db7e8                       ; 004dc32d | = "%s// itemCount\n"
    PUSH EBP                            ; 004dc332
    CALL crt_unknown.c_FUN_005b8010     ; 004dc333
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc338
    MOV EBX,dword ptr [EDI + 0x10]      ; 004dc33b
    PUSH EBX                            ; 004dc33e
    PUSH 0x609590                       ; 004dc33f | DAT_00609590
    PUSH 0x5db7f8                       ; 004dc344 | = "%s%d\n"
    PUSH EBP                            ; 004dc349
    MOV ESI,0xffffffff                  ; 004dc34a
    CALL crt_unknown.c_FUN_005b8010     ; 004dc34f
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004dc354
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dc357
    XOR EAX,EAX                         ; 004dc35a
    MOV dword ptr [ESP],ESI             ; 004dc35c
    TEST EDX,EDX                        ; 004dc35f
    JLE 0x004dc382                      ; 004dc361
        ;   XREF to: 004dc382 (CONDITIONAL_JUMP)  ; LAB_004dc382
    MOV EDX,dword ptr [EDI + 0x468]     ; 004dc363
    SHL EDX,0x2                         ; 004dc369
    MOV EBX,EDI                         ; 004dc36c
    ADD EDX,EDI                         ; 004dc36e
    MOV ECX,dword ptr [EDX + 0x610]     ; 004dc370
        ;   Label: LAB_004dc370
    CMP ECX,dword ptr [EBX + 0x14]      ; 004dc376
    JNZ 0x004dc445                      ; 004dc379
        ;   XREF to: 004dc445 (CONDITIONAL_JUMP)  ; LAB_004dc445
    MOV dword ptr [ESP],EAX             ; 004dc37f
    MOV EBX,dword ptr [ESP + 0x4]       ; 004dc382
        ;   Label: LAB_004dc382
    PUSH EBX                            ; 004dc386 | DAT_00609590
    PUSH 0x5db7fe                       ; 004dc387 | = "%s// currentWeapon\n"
    PUSH EBP                            ; 004dc38c
    CALL crt_unknown.c_FUN_005b8010     ; 004dc38d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc392
    MOV ESI,dword ptr [ESP]             ; 004dc395
    PUSH ESI                            ; 004dc398
    PUSH EBX                            ; 004dc399 | DAT_00609590
    PUSH 0x5db812                       ; 004dc39a | = "%s%d\n"
    PUSH EBP                            ; 004dc39f
    CALL crt_unknown.c_FUN_005b8010     ; 004dc3a0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 004dc3a5
    PUSH EBX                            ; 004dc3a8 | DAT_00609590
    PUSH 0x5db818                       ; 004dc3a9 | = "%s// battery strength\n"
    PUSH EBP                            ; 004dc3ae
    CALL crt_unknown.c_FUN_005b8010     ; 004dc3af
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc3b4
    SUB ESP,0x8                         ; 004dc3b7
    FLD float ptr [EDI]                 ; 004dc3ba
    FSTP double ptr [ESP]               ; 004dc3bc
    PUSH EBX                            ; 004dc3bf | DAT_00609590
    PUSH 0x5db82f                       ; 004dc3c0 | = "%s%f\n"
    PUSH EBP                            ; 004dc3c5
    CALL crt_unknown.c_FUN_005b8010     ; 004dc3c6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 004dc3cb
    PUSH EBX                            ; 004dc3ce | DAT_00609590
    PUSH 0x5db835                       ; 004dc3cf | = "%s// actor name list\n"
    PUSH EBP                            ; 004dc3d4
    CALL crt_unknown.c_FUN_005b8010     ; 004dc3d5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc3da
    PUSH EBP                            ; 004dc3dd
    PUSH EDI                            ; 004dc3de
    CALL core_inv.cpp_CInventory_saveItems_FUN_004dc460 ; 004dc3df
        ;   XREF to: 004dc460 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_saveItems_FUN_004dc460(CInventory * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004dc3e4
    PUSH EBX                            ; 004dc3e7 | DAT_00609590
    PUSH 0x5db84b                       ; 004dc3e8 | = "%s// actor data list\n"
    PUSH EBP                            ; 004dc3ed
    XOR EBX,EBX                         ; 004dc3ee
    CALL crt_unknown.c_FUN_005b8010     ; 004dc3f0
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EAX,dword ptr [EDI + 0x10]      ; 004dc3f5
    ADD ESP,0xc                         ; 004dc3f8
    TEST EAX,EAX                        ; 004dc3fb
    JLE 0x004dc420                      ; 004dc3fd
        ;   XREF to: 004dc420 (CONDITIONAL_JUMP)  ; LAB_004dc420
    MOV ESI,EDI                         ; 004dc3ff
    PUSH EBP                            ; 004dc401
        ;   Label: LAB_004dc401
    MOV EDX,dword ptr [ESI + 0x14]      ; 004dc402
    PUSH EDX                            ; 004dc405
    ADD ESI,0x4                         ; 004dc406
    INC EBX                             ; 004dc409
    CALL core_actor.cpp_CDemonActor_save_FUN_0040b0a0 ; 004dc40a
        ;   XREF to: 0040b0a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [EDI + 0x10]      ; 004dc40f
    ADD ESP,0x8                         ; 004dc412
    CMP EBX,ECX                         ; 004dc415
    JL 0x004dc401                       ; 004dc417
        ;   XREF to: 004dc401 (CONDITIONAL_JUMP)  ; LAB_004dc401
    LEA EAX,[EAX]                       ; 004dc419
    NOP                                 ; 004dc41f
    PUSH -0x1                           ; 004dc420
        ;   Label: LAB_004dc420
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 004dc422
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 004dc427
    MOV EBX,dword ptr [ESP + 0x4]       ; 004dc42a
    PUSH EBX                            ; 004dc42e | DAT_00609590
    PUSH 0x5db861                       ; 004dc42f | = "%s} // End inventory\n"
    PUSH EBP                            ; 004dc434
    CALL crt_unknown.c_FUN_005b8010     ; 004dc435
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004dc43a
    ADD ESP,0x8                         ; 004dc43d
    POP EBP                             ; 004dc440
    POP EDI                             ; 004dc441
    POP ESI                             ; 004dc442
    POP EBX                             ; 004dc443
    RET                                 ; 004dc444
    INC EAX                             ; 004dc445
        ;   Label: LAB_004dc445
    MOV ECX,dword ptr [EDI + 0x10]      ; 004dc446
    ADD EBX,0x4                         ; 004dc449
    CMP EAX,ECX                         ; 004dc44c
    JL 0x004dc370                       ; 004dc44e
        ;   XREF to: 004dc370 (CONDITIONAL_JUMP)  ; LAB_004dc370
    JMP 0x004dc382                      ; 004dc454
        ;   XREF to: 004dc382 (UNCONDITIONAL_JUMP)  ; LAB_004dc382

