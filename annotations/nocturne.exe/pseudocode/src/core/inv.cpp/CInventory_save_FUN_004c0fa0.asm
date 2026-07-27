; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_FUN_004b49a0 at 004b4be9
;
; Referenced Globals:
;   TerminatedCString s_s_Inventory_005871f5
;   TerminatedCString s_s_fileVersion_00587207
;   TerminatedCString s_s_d_00587219
;   TerminatedCString s_s_itemCount_0058721f
;   TerminatedCString s_s_d_0058722f
;   TerminatedCString s_s_currentWeapon_00587235
;   TerminatedCString s_s_d_00587249
;   TerminatedCString s_s_battery_strength_0058724f
;   TerminatedCString s_s_f_00587266
;   TerminatedCString s_s_actor_name_list_0058726c
;   TerminatedCString s_s_actor_data_list_00587282
;   TerminatedCString s_s_End_inventory_00587298
;   undefined1 DAT_005acc90
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
;   core_actor.cpp_CDemonActor_save_FUN_0040c040
;   core_inv.cpp_CInventory_saveItems_FUN_004c1140
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0fa0
        ;   Label: core_inv.cpp_CInventory_save_FUN_004c0fa0
    PUSH ESI                            ; 004c0fa1
    PUSH EDI                            ; 004c0fa2
    PUSH EBP                            ; 004c0fa3
    SUB ESP,0x8                         ; 004c0fa4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004c0fa7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004c0fab
    MOV EDX,0x5acc90                    ; 004c0faf | DAT_005acc90
    PUSH EDX                            ; 004c0fb4 | DAT_005acc90
    PUSH 0x5871f5                       ; 004c0fb5 | = "%s{ // Inventory\n"
    PUSH EBP                            ; 004c0fba
    MOV dword ptr [ESP + 0x10],EDX      ; 004c0fbb | DAT_005acc90
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c0fbf
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c0fc4
    PUSH 0x1                            ; 004c0fc7
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 004c0fc9
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 004c0fce
    PUSH 0x5acc90                       ; 004c0fd1 | DAT_005acc90
    PUSH 0x587207                       ; 004c0fd6 | = "%s// fileVersion\n"
    PUSH EBP                            ; 004c0fdb
    MOV dword ptr [EBX + 0x32c],0x2     ; 004c0fdc
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c0fe6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c0feb
    MOV ECX,dword ptr [EBX + 0x32c]     ; 004c0fee
    PUSH ECX                            ; 004c0ff4
    PUSH 0x5acc90                       ; 004c0ff5 | DAT_005acc90
    PUSH 0x587219                       ; 004c0ffa | = "%s%d\n"
    PUSH EBP                            ; 004c0fff
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1000
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004c1005
    PUSH 0x5acc90                       ; 004c1008 | DAT_005acc90
    PUSH 0x58721f                       ; 004c100d | = "%s// itemCount\n"
    PUSH EBP                            ; 004c1012
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1013
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c1018
    MOV ESI,dword ptr [EBX + 0x8]       ; 004c101b
    PUSH ESI                            ; 004c101e
    PUSH 0x5acc90                       ; 004c101f | DAT_005acc90
    PUSH 0x58722f                       ; 004c1024 | = "%s%d\n"
    PUSH EBP                            ; 004c1029
    MOV EDI,0xffffffff                  ; 004c102a
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c102f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004c1034
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c1037
    XOR EAX,EAX                         ; 004c103a
    MOV dword ptr [ESP],EDI             ; 004c103c
    TEST EDX,EDX                        ; 004c103f
    JLE 0x004c1057                      ; 004c1041
        ;   XREF to: 004c1057 (CONDITIONAL_JUMP)  ; LAB_004c1057
    MOV ESI,EBX                         ; 004c1043
    MOV EDX,dword ptr [EBX + 0x330]     ; 004c1045
        ;   Label: LAB_004c1045
    CMP EDX,dword ptr [ESI + 0xc]       ; 004c104b
    JNZ 0x004c1125                      ; 004c104e
        ;   XREF to: 004c1125 (CONDITIONAL_JUMP)  ; LAB_004c1125
    MOV dword ptr [ESP],EAX             ; 004c1054
    MOV ECX,dword ptr [ESP + 0x4]       ; 004c1057
        ;   Label: LAB_004c1057
    PUSH ECX                            ; 004c105b | DAT_005acc90
    PUSH 0x587235                       ; 004c105c | = "%s// currentWeapon\n"
    PUSH EBP                            ; 004c1061
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1062
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c1067
    MOV ESI,dword ptr [ESP]             ; 004c106a
    PUSH ESI                            ; 004c106d
    MOV EDI,dword ptr [ESP + 0x8]       ; 004c106e
    PUSH EDI                            ; 004c1072 | DAT_005acc90
    PUSH 0x587249                       ; 004c1073 | = "%s%d\n"
    PUSH EBP                            ; 004c1078
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1079
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004c107e
    PUSH EDI                            ; 004c1081 | DAT_005acc90
    PUSH 0x58724f                       ; 004c1082 | = "%s// battery strength\n"
    PUSH EBP                            ; 004c1087
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1088
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c108d
    SUB ESP,0x8                         ; 004c1090
    FLD float ptr [EBX]                 ; 004c1093
    FSTP double ptr [ESP]               ; 004c1095
    PUSH EDI                            ; 004c1098 | DAT_005acc90
    PUSH 0x587266                       ; 004c1099 | = "%s%f\n"
    PUSH EBP                            ; 004c109e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c109f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 004c10a4
    PUSH EDI                            ; 004c10a7 | DAT_005acc90
    PUSH 0x58726c                       ; 004c10a8 | = "%s// actor name list\n"
    PUSH EBP                            ; 004c10ad
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c10ae
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c10b3
    PUSH EBP                            ; 004c10b6
    PUSH EBX                            ; 004c10b7
    CALL core_inv.cpp_CInventory_saveItems_FUN_004c1140 ; 004c10b8
        ;   XREF to: 004c1140 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_saveItems_FUN_004c1140()
    ADD ESP,0x8                         ; 004c10bd
    PUSH EDI                            ; 004c10c0 | DAT_005acc90
    PUSH 0x587282                       ; 004c10c1 | = "%s// actor data list\n"
    PUSH EBP                            ; 004c10c6
    XOR EDI,EDI                         ; 004c10c7
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c10c9
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c10ce
    ADD ESP,0xc                         ; 004c10d1
    TEST EAX,EAX                        ; 004c10d4
    JLE 0x004c1100                      ; 004c10d6
        ;   XREF to: 004c1100 (CONDITIONAL_JUMP)  ; LAB_004c1100
    MOV ESI,EBX                         ; 004c10d8
    PUSH EBP                            ; 004c10da
        ;   Label: LAB_004c10da
    MOV EDX,dword ptr [ESI + 0xc]       ; 004c10db
    PUSH EDX                            ; 004c10de
    ADD ESI,0x4                         ; 004c10df
    INC EDI                             ; 004c10e2
    CALL core_actor.cpp_CDemonActor_save_FUN_0040c040 ; 004c10e3
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_save_FUN_0040c040()
    MOV ECX,dword ptr [EBX + 0x8]       ; 004c10e8
    ADD ESP,0x8                         ; 004c10eb
    CMP EDI,ECX                         ; 004c10ee
    JL 0x004c10da                       ; 004c10f0
        ;   XREF to: 004c10da (CONDITIONAL_JUMP)  ; LAB_004c10da
    LEA EAX,[EAX]                       ; 004c10f2
    LEA EDX,[EDX]                       ; 004c10f8
    MOV EAX,EAX                         ; 004c10fe
    PUSH -0x1                           ; 004c1100
        ;   Label: LAB_004c1100
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 004c1102
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 004c1107
    MOV EBX,dword ptr [ESP + 0x4]       ; 004c110a
    PUSH EBX                            ; 004c110e | DAT_005acc90
    PUSH 0x587298                       ; 004c110f | = "%s} // End inventory\n"
    PUSH EBP                            ; 004c1114
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004c1115
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004c111a
    ADD ESP,0x8                         ; 004c111d
    POP EBP                             ; 004c1120
    POP EDI                             ; 004c1121
    POP ESI                             ; 004c1122
    POP EBX                             ; 004c1123
    RET                                 ; 004c1124
    INC EAX                             ; 004c1125
        ;   Label: LAB_004c1125
    MOV ECX,dword ptr [EBX + 0x8]       ; 004c1126
    ADD ESI,0x4                         ; 004c1129
    CMP EAX,ECX                         ; 004c112c
    JL 0x004c1045                       ; 004c112e
        ;   XREF to: 004c1045 (CONDITIONAL_JUMP)  ; LAB_004c1045
    JMP 0x004c1057                      ; 004c1134
        ;   XREF to: 004c1057 (UNCONDITIONAL_JUMP)  ; LAB_004c1057

