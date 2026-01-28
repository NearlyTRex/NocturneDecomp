; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,FILE *file_handle)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_CHero_serialize_FUN_004f2610 at 004f2859
;
; Referenced Globals:
;   TerminatedCString s_s_Inventory_00630886
;   TerminatedCString s_s_fileVersion_00630898
;   TerminatedCString s_s_d_006308aa
;   TerminatedCString s_s_itemCount_006308b0
;   TerminatedCString s_s_d_006308c0
;   TerminatedCString s_s_currentWeapon_006308c6
;   TerminatedCString s_s_d_006308da
;   TerminatedCString s_s_battery_strength_006308e0
;   TerminatedCString s_s_f_006308f7
;   TerminatedCString s_s_actor_name_list_006308fd
;   TerminatedCString s_s_actor_data_list_00630913
;   TerminatedCString s_s_End_inventory_00630929
;   char[104] g_PropertyNamePrefix
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_CDemonActor_save_FUN_0040af30
;   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff210
        ;   Label: core_inv.cpp_CInventory_save_FUN_004ff210
    PUSH ESI                            ; 004ff211
    PUSH EDI                            ; 004ff212
    PUSH EBP                            ; 004ff213
    SUB ESP,0x8                         ; 004ff214
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ff217
    MOV EBP,dword ptr [ESP + 0x20]      ; 004ff21b
    MOV EDX,0x66e178                    ; 004ff21f | g_PropertyNamePrefix
    PUSH EDX                            ; 004ff224 | g_PropertyNamePrefix
    PUSH 0x630886                       ; 004ff225 | = "%s{ // Inventory\n"
    PUSH EBP                            ; 004ff22a
    MOV dword ptr [ESP + 0x10],EDX      ; 004ff22b | g_PropertyNamePrefix
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff22f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff234
    PUSH 0x1                            ; 004ff237
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 004ff239
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 004ff23e
    PUSH 0x66e178                       ; 004ff241 | g_PropertyNamePrefix
    PUSH 0x630898                       ; 004ff246 | = "%s// fileVersion\n"
    PUSH EBP                            ; 004ff24b
    MOV dword ptr [EBX + 0x32c],0x2     ; 004ff24c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff256
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff25b
    MOV ECX,dword ptr [EBX + 0x32c]     ; 004ff25e
    PUSH ECX                            ; 004ff264
    PUSH 0x66e178                       ; 004ff265 | g_PropertyNamePrefix
    PUSH 0x6308aa                       ; 004ff26a | = "%s%d\n"
    PUSH EBP                            ; 004ff26f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff270
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 004ff275
    PUSH 0x66e178                       ; 004ff278 | g_PropertyNamePrefix
    PUSH 0x6308b0                       ; 004ff27d | = "%s// itemCount\n"
    PUSH EBP                            ; 004ff282
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff283
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff288
    MOV ESI,dword ptr [EBX + 0x8]       ; 004ff28b
    PUSH ESI                            ; 004ff28e
    PUSH 0x66e178                       ; 004ff28f | g_PropertyNamePrefix
    PUSH 0x6308c0                       ; 004ff294 | = "%s%d\n"
    PUSH EBP                            ; 004ff299
    MOV EDI,0xffffffff                  ; 004ff29a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff29f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 004ff2a4
    MOV EDX,dword ptr [EBX + 0x8]       ; 004ff2a7
    XOR EAX,EAX                         ; 004ff2aa
    MOV dword ptr [ESP],EDI             ; 004ff2ac
    TEST EDX,EDX                        ; 004ff2af
    JLE 0x004ff2c7                      ; 004ff2b1
        ;   XREF to: 004ff2c7 (CONDITIONAL_JUMP)  ; LAB_004ff2c7
    MOV ESI,EBX                         ; 004ff2b3
    MOV EDX,dword ptr [EBX + 0x330]     ; 004ff2b5
        ;   Label: LAB_004ff2b5
    CMP EDX,dword ptr [ESI + 0xc]       ; 004ff2bb
    JNZ 0x004ff395                      ; 004ff2be
        ;   XREF to: 004ff395 (CONDITIONAL_JUMP)  ; LAB_004ff395
    MOV dword ptr [ESP],EAX             ; 004ff2c4
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ff2c7 | g_PropertyNamePrefix
        ;   Label: LAB_004ff2c7
    PUSH ECX                            ; 004ff2cb | g_PropertyNamePrefix
    PUSH 0x6308c6                       ; 004ff2cc | = "%s// currentWeapon\n"
    PUSH EBP                            ; 004ff2d1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff2d2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff2d7
    MOV ESI,dword ptr [ESP]             ; 004ff2da
    PUSH ESI                            ; 004ff2dd
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ff2de
    PUSH EDI                            ; 004ff2e2 | g_PropertyNamePrefix
    PUSH 0x6308da                       ; 004ff2e3 | = "%s%d\n"
    PUSH EBP                            ; 004ff2e8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff2e9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 004ff2ee
    PUSH EDI                            ; 004ff2f1 | g_PropertyNamePrefix
    PUSH 0x6308e0                       ; 004ff2f2 | = "%s// battery strength\n"
    PUSH EBP                            ; 004ff2f7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff2f8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff2fd
    SUB ESP,0x8                         ; 004ff300
    FLD float ptr [EBX]                 ; 004ff303
    FSTP double ptr [ESP]               ; 004ff305
    PUSH EDI                            ; 004ff308 | g_PropertyNamePrefix
    PUSH 0x6308f7                       ; 004ff309 | = "%s%f\n"
    PUSH EBP                            ; 004ff30e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff30f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004ff314
    PUSH EDI                            ; 004ff317 | g_PropertyNamePrefix
    PUSH 0x6308fd                       ; 004ff318 | = "%s// actor name list\n"
    PUSH EBP                            ; 004ff31d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff31e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff323
    PUSH EBP                            ; 004ff326
    PUSH EBX                            ; 004ff327
    CALL core_inv.cpp_CInventory_saveItems_FUN_004ff3b0 ; 004ff328
        ;   XREF to: 004ff3b0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_saveItems_FUN_004ff3b0(CInventory * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 004ff32d
    PUSH EDI                            ; 004ff330 | g_PropertyNamePrefix
    PUSH 0x630913                       ; 004ff331 | = "%s// actor data list\n"
    PUSH EBP                            ; 004ff336
    XOR EDI,EDI                         ; 004ff337
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff339
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ff33e
    ADD ESP,0xc                         ; 004ff341
    TEST EAX,EAX                        ; 004ff344
    JLE 0x004ff370                      ; 004ff346
        ;   XREF to: 004ff370 (CONDITIONAL_JUMP)  ; LAB_004ff370
    MOV ESI,EBX                         ; 004ff348
    PUSH EBP                            ; 004ff34a
        ;   Label: LAB_004ff34a
    MOV EDX,dword ptr [ESI + 0xc]       ; 004ff34b
    PUSH EDX                            ; 004ff34e
    ADD ESI,0x4                         ; 004ff34f
    INC EDI                             ; 004ff352
    CALL core_actor.cpp_CDemonActor_save_FUN_0040af30 ; 004ff353
        ;   XREF to: 0040af30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, FILE * file_handle)
    MOV ECX,dword ptr [EBX + 0x8]       ; 004ff358
    ADD ESP,0x8                         ; 004ff35b
    CMP EDI,ECX                         ; 004ff35e
    JL 0x004ff34a                       ; 004ff360
        ;   XREF to: 004ff34a (CONDITIONAL_JUMP)  ; LAB_004ff34a
    LEA EAX,[EAX]                       ; 004ff362
    LEA EDX,[EDX]                       ; 004ff368
    MOV EAX,EAX                         ; 004ff36e
    PUSH -0x1                           ; 004ff370
        ;   Label: LAB_004ff370
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 004ff372
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 004ff377
    MOV EBX,dword ptr [ESP + 0x4]       ; 004ff37a | g_PropertyNamePrefix
    PUSH EBX                            ; 004ff37e | g_PropertyNamePrefix
    PUSH 0x630929                       ; 004ff37f | = "%s} // End inventory\n"
    PUSH EBP                            ; 004ff384
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ff385
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004ff38a
    ADD ESP,0x8                         ; 004ff38d
    POP EBP                             ; 004ff390
    POP EDI                             ; 004ff391
    POP ESI                             ; 004ff392
    POP EBX                             ; 004ff393
    RET                                 ; 004ff394
    INC EAX                             ; 004ff395
        ;   Label: LAB_004ff395
    MOV ECX,dword ptr [EBX + 0x8]       ; 004ff396
    ADD ESI,0x4                         ; 004ff399
    CMP EAX,ECX                         ; 004ff39c
    JL 0x004ff2b5                       ; 004ff39e
        ;   XREF to: 004ff2b5 (CONDITIONAL_JUMP)  ; LAB_004ff2b5
    JMP 0x004ff2c7                      ; 004ff3a4
        ;   XREF to: 004ff2c7 (UNCONDITIONAL_JUMP)  ; LAB_004ff2c7

