; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_inv_cpp_FUN_004f8c40(CInventory *this_ptr,char *item_name)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   item_name
;
; XREF[4]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7a74
;   core_game.cpp_FUN_004d27b0 at 004d321a
;   core_script.cpp_CScript_step_FUN_00544460 at 00548a3f
;   core_vampboss.cpp_FUN_005a6da0 at 005a6f76
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8c40
        ;   Label: core_inv.cpp_FUN_004f8c40
    PUSH ESI                            ; 004f8c41
    PUSH EDI                            ; 004f8c42
    PUSH EBP                            ; 004f8c43
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f8c44
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f8c48
    MOV EDX,dword ptr [EDI + 0x10]      ; 004f8c4c
    XOR ESI,ESI                         ; 004f8c4f
    TEST EDX,EDX                        ; 004f8c51
    JLE 0x004f8c73                      ; 004f8c53
        ;   XREF to: 004f8c73 (CONDITIONAL_JUMP)  ; LAB_004f8c73
    MOV EBX,EDI                         ; 004f8c55
    PUSH EBP                            ; 004f8c57
        ;   Label: LAB_004f8c57
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8c58
    PUSH EAX                            ; 004f8c5b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f8c5c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f8c61
    TEST EAX,EAX                        ; 004f8c64
    JZ 0x004f8c7a                       ; 004f8c66
        ;   XREF to: 004f8c7a (CONDITIONAL_JUMP)  ; LAB_004f8c7a
    INC ESI                             ; 004f8c68
    MOV ECX,dword ptr [EDI + 0x10]      ; 004f8c69
    ADD EBX,0x4                         ; 004f8c6c
    CMP ESI,ECX                         ; 004f8c6f
    JL 0x004f8c57                       ; 004f8c71
        ;   XREF to: 004f8c57 (CONDITIONAL_JUMP)  ; LAB_004f8c57
    XOR EAX,EAX                         ; 004f8c73
        ;   Label: LAB_004f8c73
    POP EBP                             ; 004f8c75
    POP EDI                             ; 004f8c76
    POP ESI                             ; 004f8c77
    POP EBX                             ; 004f8c78
    RET                                 ; 004f8c79
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f8c7a
        ;   Label: LAB_004f8c7a
    POP EBP                             ; 004f8c7d
    POP EDI                             ; 004f8c7e
    POP ESI                             ; 004f8c7f
    POP EBX                             ; 004f8c80
    RET                                 ; 004f8c81

