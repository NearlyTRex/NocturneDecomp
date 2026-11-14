; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_inv_cpp_FUN_004db990(CInventory *this_ptr,char *item_name)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   item_name
;
; XREF[4]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 004928e4
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bbb3a
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004baa2f
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e12f
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db990
        ;   Label: core_inv.cpp_FUN_004db990
    PUSH ESI                            ; 004db991
    PUSH EDI                            ; 004db992
    PUSH EBP                            ; 004db993
    MOV EDI,dword ptr [ESP + 0x14]      ; 004db994
    MOV EBP,dword ptr [ESP + 0x18]      ; 004db998
    MOV EDX,dword ptr [EDI + 0x10]      ; 004db99c
    XOR ESI,ESI                         ; 004db99f
    TEST EDX,EDX                        ; 004db9a1
    JLE 0x004db9c3                      ; 004db9a3
        ;   XREF to: 004db9c3 (CONDITIONAL_JUMP)  ; LAB_004db9c3
    MOV EBX,EDI                         ; 004db9a5
    PUSH EBP                            ; 004db9a7
        ;   Label: LAB_004db9a7
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db9a8
    PUSH EAX                            ; 004db9ab
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004db9ac
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db9b1
    TEST EAX,EAX                        ; 004db9b4
    JZ 0x004db9ca                       ; 004db9b6
        ;   XREF to: 004db9ca (CONDITIONAL_JUMP)  ; LAB_004db9ca
    INC ESI                             ; 004db9b8
    MOV ECX,dword ptr [EDI + 0x10]      ; 004db9b9
    ADD EBX,0x4                         ; 004db9bc
    CMP ESI,ECX                         ; 004db9bf
    JL 0x004db9a7                       ; 004db9c1
        ;   XREF to: 004db9a7 (CONDITIONAL_JUMP)  ; LAB_004db9a7
    XOR EAX,EAX                         ; 004db9c3
        ;   Label: LAB_004db9c3
    POP EBP                             ; 004db9c5
    POP EDI                             ; 004db9c6
    POP ESI                             ; 004db9c7
    POP EBX                             ; 004db9c8
    RET                                 ; 004db9c9
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db9ca
        ;   Label: LAB_004db9ca
    POP EBP                             ; 004db9cd
    POP EDI                             ; 004db9ce
    POP ESI                             ; 004db9cf
    POP EBX                             ; 004db9d0
    RET                                 ; 004db9d1

