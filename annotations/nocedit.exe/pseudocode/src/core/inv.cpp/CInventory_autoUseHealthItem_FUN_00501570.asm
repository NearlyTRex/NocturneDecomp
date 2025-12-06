; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory * this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c48b0 at 005c4987
;
; Referenced Globals:
;   TerminatedCString s_Auto_use_selected_health_00630bd0
;   TerminatedCString s_Auto_use_health_00630bea
;   TerminatedCString s_no_more_auto_health_left_00630bfb
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   undefined4 DAT_02db8780.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_inv.cpp_CInventory_select_FUN_004ff800
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501570
        ;   Label: core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
    PUSH ESI                            ; 00501571
    PUSH EDI                            ; 00501572
    PUSH EBP                            ; 00501573
    MOV EDI,dword ptr [ESP + 0x14]      ; 00501574
    MOV EDX,dword ptr [EDI + 0x334]     ; 00501578
    TEST EDX,EDX                        ; 0050157e
    JNZ 0x005015c8                      ; 00501580 | LAB_005015c8
        ;   XREF to: 005015c8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDI + 0x8]       ; 00501582
        ;   Label: LAB_00501582
    XOR EBX,EBX                         ; 00501585
    TEST ESI,ESI                        ; 00501587
    JLE 0x005015af                      ; 00501589 | LAB_005015af
        ;   XREF to: 005015af (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 0050158b
    MOV ECX,dword ptr [0x02db87b8]      ; 0050158d | DAT_02db8780.name_hash
        ;   Label: LAB_0050158d
    PUSH ECX                            ; 00501593
    MOV EBP,dword ptr [ESI + 0xc]       ; 00501594
    PUSH EBP                            ; 00501597
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00501598 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050159d
    TEST EAX,EAX                        ; 005015a0
    JNZ 0x005015fb                      ; 005015a2 | LAB_005015fb
        ;   XREF to: 005015fb (CONDITIONAL_JUMP)
    INC EBX                             ; 005015a4
    MOV EAX,dword ptr [EDI + 0x8]       ; 005015a5
    ADD ESI,0x4                         ; 005015a8
    CMP EBX,EAX                         ; 005015ab
    JL 0x0050158d                       ; 005015ad | LAB_0050158d
        ;   XREF to: 0050158d (CONDITIONAL_JUMP)
    PUSH 0x630bfb                       ; 005015af | = "no more auto health left\n" | s_no_more_auto_health_left_00630bfb = no more auto health left

        ;   Label: LAB_005015af
    MOV EDX,dword ptr [0x0066e8e0]      ; 005015b4 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EDX                            ; 005015ba | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005015bb | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005015c0
        ;   Label: LAB_005015c0
    POP EBP                             ; 005015c3
    POP EDI                             ; 005015c4
    POP ESI                             ; 005015c5
    POP EBX                             ; 005015c6
    RET                                 ; 005015c7
    MOV ECX,dword ptr [0x02db87b8]      ; 005015c8 | DAT_02db8780.name_hash
        ;   Label: LAB_005015c8
    PUSH ECX                            ; 005015ce
    PUSH EDX                            ; 005015cf
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005015d0 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005015d5
    ADD ESP,0x8                         ; 005015d7
    TEST EAX,EAX                        ; 005015da
    JZ 0x00501582                       ; 005015dc | LAB_00501582
        ;   XREF to: 00501582 (CONDITIONAL_JUMP)
    PUSH 0x630bd0                       ; 005015de | = "Auto use selected health\n" | s_Auto_use_selected_health_00630bd0 = Auto use selected health

    MOV EBP,dword ptr [0x0066e8e0]      ; 005015e3 | CConsole * g_CConsolePtr
    PUSH EBP                            ; 005015e9 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005015ea | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005015ef
    PUSH EBX                            ; 005015f2
    PUSH EDI                            ; 005015f3
    CALL core_inv.cpp_CInventory_select_FUN_004ff800 ; 005015f4 | int core_inv.cpp_CInventory_select_FUN_004ff800(CInventory * this_ptr, CDemonActor * actor_ptr)
        ;   XREF to: 004ff800 (UNCONDITIONAL_CALL)
    JMP 0x005015c0                      ; 005015f9 | LAB_005015c0
        ;   XREF to: 005015c0 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005015fb
        ;   Label: LAB_005015fb
    PUSH EDI                            ; 005015fc
    CALL core_inv.cpp_CInventory_select_FUN_004ff800 ; 005015fd | int core_inv.cpp_CInventory_select_FUN_004ff800(CInventory * this_ptr, CDemonActor * actor_ptr)
        ;   XREF to: 004ff800 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00501602
    PUSH 0x630bea                       ; 00501605 | = "Auto use health\n" | s_Auto_use_health_00630bea = Auto use health

    MOV EAX,[0x0066e8e0]                ; 0050160a | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH EAX                            ; 0050160f | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00501610 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00501615
    POP EBP                             ; 00501618
    POP EDI                             ; 00501619
    POP ESI                             ; 0050161a
    POP EBX                             ; 0050161b
    RET                                 ; 0050161c

