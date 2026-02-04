; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   item_name
;
; XREF[4]:
;   core_event.cpp_CEventList_FUN_004ae140 at 004aea3d
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de559
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e440
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030 at 005e71de
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe9d0
        ;   Label: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
    PUSH ESI                            ; 004fe9d1
    PUSH EDI                            ; 004fe9d2
    PUSH EBP                            ; 004fe9d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fe9d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fe9d8
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fe9dc
    XOR ESI,ESI                         ; 004fe9df
    TEST EDX,EDX                        ; 004fe9e1
    JLE 0x004fea03                      ; 004fe9e3
        ;   XREF to: 004fea03 (CONDITIONAL_JUMP)  ; LAB_004fea03
    MOV EBX,EDI                         ; 004fe9e5
    PUSH EBP                            ; 004fe9e7
        ;   Label: LAB_004fe9e7
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fe9e8
    PUSH EAX                            ; 004fe9eb
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004fe9ec
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe9f1
    TEST EAX,EAX                        ; 004fe9f4
    JZ 0x004fea0a                       ; 004fe9f6
        ;   XREF to: 004fea0a (CONDITIONAL_JUMP)  ; LAB_004fea0a
    INC ESI                             ; 004fe9f8
    MOV ECX,dword ptr [EDI + 0x8]       ; 004fe9f9
    ADD EBX,0x4                         ; 004fe9fc
    CMP ESI,ECX                         ; 004fe9ff
    JL 0x004fe9e7                       ; 004fea01
        ;   XREF to: 004fe9e7 (CONDITIONAL_JUMP)  ; LAB_004fe9e7
    XOR EAX,EAX                         ; 004fea03
        ;   Label: LAB_004fea03
    POP EBP                             ; 004fea05
    POP EDI                             ; 004fea06
    POP ESI                             ; 004fea07
    POP EBX                             ; 004fea08
    RET                                 ; 004fea09
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fea0a
        ;   Label: LAB_004fea0a
    POP EBP                             ; 004fea0d
    POP EDI                             ; 004fea0e
    POP ESI                             ; 004fea0f
    POP EBX                             ; 004fea10
    RET                                 ; 004fea11

