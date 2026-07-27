; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1e1c
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500641
;
; Referenced Globals:
;   undefined4 DAT_01c08b5c
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_0047ab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dcd0
        ;   Label: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047dcd1
    CMP byte ptr [EAX],0x0              ; 0047dcd5
    JNZ 0x0047dcde                      ; 0047dcd8
        ;   XREF to: 0047dcde (CONDITIONAL_JUMP)  ; LAB_0047dcde
    XOR EAX,EAX                         ; 0047dcda
        ;   Label: LAB_0047dcda
    POP EBX                             ; 0047dcdc
    RET                                 ; 0047dcdd
    PUSH EAX                            ; 0047dcde
        ;   Label: LAB_0047dcde
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047dcdf
    MOV EDX,0x1                         ; 0047dce3
    PUSH ECX                            ; 0047dce8
    XOR EBX,EBX                         ; 0047dce9
    MOV dword ptr [0x01c08b5c],EDX      ; 0047dceb | DAT_01c08b5c
    CALL core_event.cpp_CEventList_executeCommandString_FUN_0047ab90 ; 0047dcf1
        ;   XREF to: 0047ab90 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommandString_FUN_0047ab90()
    ADD ESP,0x8                         ; 0047dcf6
    MOV dword ptr [0x01c08b5c],EBX      ; 0047dcf9 | DAT_01c08b5c
    TEST EAX,EAX                        ; 0047dcff
    JNZ 0x0047dcda                      ; 0047dd01
        ;   XREF to: 0047dcda (CONDITIONAL_JUMP)  ; LAB_0047dcda
    MOV EAX,0x1c08b60                   ; 0047dd03 | DAT_01c08b60
    POP EBX                             ; 0047dd08
    RET                                 ; 0047dd09

