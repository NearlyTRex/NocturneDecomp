; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseIntOrCounter_FUN_00488cc0(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_getCounterValue_FUN_00491510
;   crt_stdio.c_sscanf_FUN_005ba8cc
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00488cc0
        ;   Label: core_event.cpp_parseIntOrCounter_FUN_00488cc0
    MOV EAX,ESP                         ; 00488cc3
    PUSH EAX                            ; 00488cc5
    PUSH 0x5d2e3b                       ; 00488cc6
    MOV EDX,dword ptr [ESP + 0x10]      ; 00488ccb
    PUSH EDX                            ; 00488ccf
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00488cd0
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 00488cd5
    CMP EAX,0x1                         ; 00488cd8
    JNZ 0x00488ce4                      ; 00488cdb
        ;   XREF to: 00488ce4 (CONDITIONAL_JUMP)  ; LAB_00488ce4
    MOV EAX,dword ptr [ESP]             ; 00488cdd
    ADD ESP,0x4                         ; 00488ce0
    RET                                 ; 00488ce3
    PUSH EBX                            ; 00488ce4
        ;   Label: LAB_00488ce4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00488ce5
    PUSH ECX                            ; 00488ce9
    MOV EBX,dword ptr [0x006141f0]      ; 00488cea | DAT_006141f0
    PUSH EBX                            ; 00488cf0
    CALL core_event.cpp_CEventList_getCounterValue_FUN_00491510 ; 00488cf1
        ;   XREF to: 00491510 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_00491510(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 00488cf6
    POP EBX                             ; 00488cf9
    ADD ESP,0x4                         ; 00488cfa
    RET                                 ; 00488cfd

