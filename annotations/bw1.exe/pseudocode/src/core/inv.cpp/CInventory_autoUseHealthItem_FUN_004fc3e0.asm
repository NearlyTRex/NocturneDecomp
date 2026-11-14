; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_004fc3e0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_CDoc_processDamage_FUN_004737b0 at 00473902
;   core_stranger.cpp_CStranger_processDamage_FUN_0058fcb0 at 0058fd94
;
; Referenced Globals:
;   TerminatedCString s_Auto_use_selected_health_005e696e
;   TerminatedCString s_Auto_use_health_005e6988
;   TerminatedCString s_no_more_auto_health_left_005e6999
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 g_CHealthItemClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_inv.cpp_CInventory_select_FUN_004f9bd0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc3e0
        ;   Label: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004fc3e0
    PUSH ESI                            ; 004fc3e1
    PUSH EDI                            ; 004fc3e2
    PUSH EBP                            ; 004fc3e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fc3e4
    MOV EDX,dword ptr [EDI + 0x33c]     ; 004fc3e8
    TEST EDX,EDX                        ; 004fc3ee
    JNZ 0x004fc438                      ; 004fc3f0
        ;   XREF to: 004fc438 (CONDITIONAL_JUMP)  ; LAB_004fc438
    MOV ESI,dword ptr [EDI + 0x10]      ; 004fc3f2
        ;   Label: LAB_004fc3f2
    XOR EBX,EBX                         ; 004fc3f5
    TEST ESI,ESI                        ; 004fc3f7
    JLE 0x004fc41f                      ; 004fc3f9
        ;   XREF to: 004fc41f (CONDITIONAL_JUMP)  ; LAB_004fc41f
    MOV ESI,EDI                         ; 004fc3fb
    MOV ECX,dword ptr [0x01d06a90]      ; 004fc3fd | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004fc3fd
    PUSH ECX                            ; 004fc403
    MOV EBP,dword ptr [ESI + 0x14]      ; 004fc404
    PUSH EBP                            ; 004fc407
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fc408
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fc40d
    TEST EAX,EAX                        ; 004fc410
    JNZ 0x004fc46b                      ; 004fc412
        ;   XREF to: 004fc46b (CONDITIONAL_JUMP)  ; LAB_004fc46b
    INC EBX                             ; 004fc414
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fc415
    ADD ESI,0x4                         ; 004fc418
    CMP EBX,EAX                         ; 004fc41b
    JL 0x004fc3fd                       ; 004fc41d
        ;   XREF to: 004fc3fd (CONDITIONAL_JUMP)  ; LAB_004fc3fd
    PUSH 0x5e6999                       ; 004fc41f | = "no more auto health left\n"
        ;   Label: LAB_004fc41f
    MOV EDX,dword ptr [0x00611100]      ; 004fc424 | g_CConsolePtr
    PUSH EDX                            ; 004fc42a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004fc42b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fc430
        ;   Label: LAB_004fc430
    POP EBP                             ; 004fc433
    POP EDI                             ; 004fc434
    POP ESI                             ; 004fc435
    POP EBX                             ; 004fc436
    RET                                 ; 004fc437
    MOV ECX,dword ptr [0x01d06a90]      ; 004fc438 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004fc438
    PUSH ECX                            ; 004fc43e
    PUSH EDX                            ; 004fc43f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fc440
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004fc445
    ADD ESP,0x8                         ; 004fc447
    TEST EAX,EAX                        ; 004fc44a
    JZ 0x004fc3f2                       ; 004fc44c
        ;   XREF to: 004fc3f2 (CONDITIONAL_JUMP)  ; LAB_004fc3f2
    PUSH 0x5e696e                       ; 004fc44e | = "Auto use selected health\n"
    MOV EBP,dword ptr [0x00611100]      ; 004fc453 | g_CConsolePtr
    PUSH EBP                            ; 004fc459 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004fc45a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fc45f
    PUSH EBX                            ; 004fc462
    PUSH EDI                            ; 004fc463
    CALL core_inv.cpp_CInventory_select_FUN_004f9bd0 ; 004fc464
        ;   XREF to: 004f9bd0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_select_FUN_004f9bd0(CInventory * this_ptr, CDemonActor * actor_ptr)
    JMP 0x004fc430                      ; 004fc469
        ;   XREF to: 004fc430 (UNCONDITIONAL_JUMP)  ; LAB_004fc430
    PUSH EAX                            ; 004fc46b
        ;   Label: LAB_004fc46b
    PUSH EDI                            ; 004fc46c
    CALL core_inv.cpp_CInventory_select_FUN_004f9bd0 ; 004fc46d
        ;   XREF to: 004f9bd0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_select_FUN_004f9bd0(CInventory * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004fc472
    PUSH 0x5e6988                       ; 004fc475 | = "Auto use health\n"
    MOV EAX,[0x00611100]                ; 004fc47a | g_CConsolePtr
    PUSH EAX                            ; 004fc47f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004fc480
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fc485
    POP EBP                             ; 004fc488
    POP EDI                             ; 004fc489
    POP ESI                             ; 004fc48a
    POP EBX                             ; 004fc48b
    RET                                 ; 004fc48c

