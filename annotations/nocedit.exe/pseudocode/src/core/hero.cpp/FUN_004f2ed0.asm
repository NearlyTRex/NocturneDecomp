; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hero.cpp_FUN_004f2ed0()
;
;
; XREF[8]:
;   core_colonel.cpp_FUN_0043fa00 at 0043fe0a
;   core_gabriela.cpp_FUN_004d2ea0 at 004d4005
;   core_gabriela.cpp_FUN_004d4890 at 004d4c5c
;   core_haystack.cpp_FUN_004f0e40 at 004f1297
;   core_icepick.cpp_FUN_004f80b0 at 004f861a
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005be3a9
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5d17
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d90d2
;
; Called Functions:
;   core_door.cpp_CDoor_FUN_00481210
;   core_door.cpp_FUN_0047fcf0
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2ed0
        ;   Label: core_hero.cpp_FUN_004f2ed0
    PUSH ESI                            ; 004f2ed1
    PUSH EBP                            ; 004f2ed2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f2ed3
    MOV EDX,dword ptr [EBX + 0x1fb9c]   ; 004f2ed7
    XOR ESI,ESI                         ; 004f2edd
    TEST EDX,EDX                        ; 004f2edf
    JNZ 0x004f2ee9                      ; 004f2ee1 | LAB_004f2ee9
        ;   XREF to: 004f2ee9 (CONDITIONAL_JUMP)
    MOV EAX,ESI                         ; 004f2ee3
    POP EBP                             ; 004f2ee5
    POP ESI                             ; 004f2ee6
    POP EBX                             ; 004f2ee7
    RET                                 ; 004f2ee8
    PUSH 0x1                            ; 004f2ee9
        ;   Label: LAB_004f2ee9
    MOV ECX,dword ptr [EDX + 0x990]     ; 004f2eeb
    PUSH ECX                            ; 004f2ef1
    LEA EAX,[EBX + 0x1f738]             ; 004f2ef2
    PUSH EAX                            ; 004f2ef8
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 ; 004f2ef9 | int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message)
        ;   XREF to: 005013d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f2efe
    TEST EAX,EAX                        ; 004f2f01
    JZ 0x004f2f29                       ; 004f2f03 | LAB_004f2f29
        ;   XREF to: 004f2f29 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EBX + 0x1fb9c]   ; 004f2f05
    PUSH EBP                            ; 004f2f0b
    MOV ESI,0x1                         ; 004f2f0c
    CALL core_door.cpp_FUN_0047fcf0     ; 004f2f11 | undefined core_door.cpp_FUN_0047fcf0()
        ;   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f2f16
    MOV dword ptr [EBX + 0x1fb9c],0x0   ; 004f2f19
    MOV EAX,ESI                         ; 004f2f23
    POP EBP                             ; 004f2f25
    POP ESI                             ; 004f2f26
    POP EBX                             ; 004f2f27
    RET                                 ; 004f2f28
    PUSH EDI                            ; 004f2f29
        ;   Label: LAB_004f2f29
    MOV EDI,dword ptr [EBX + 0x1fb9c]   ; 004f2f2a
    PUSH EDI                            ; 004f2f30
    CALL core_door.cpp_CDoor_FUN_00481210 ; 004f2f31 | void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)
        ;   XREF to: 00481210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f2f36
    POP EDI                             ; 004f2f39
    MOV dword ptr [EBX + 0x1fb9c],0x0   ; 004f2f3a
    MOV EAX,ESI                         ; 004f2f44
    POP EBP                             ; 004f2f46
    POP ESI                             ; 004f2f47
    POP EBX                             ; 004f2f48
    RET                                 ; 004f2f49

