; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_event_cpp_parseIntOrCounter_FUN_0047a350(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   TerminatedCString s_d_0057f3c3
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_getCounterValue_FUN_004807e0
;   crt_stdio.c_sscanf_FUN_00566b5c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0047a350
        ;   Label: core_event.cpp_parseIntOrCounter_FUN_0047a350
    MOV EAX,ESP                         ; 0047a353
    PUSH EAX                            ; 0047a355
    PUSH 0x57f3c3                       ; 0047a356 | = "%d"
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047a35b
    PUSH EDX                            ; 0047a35f
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047a360
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 0047a365
    CMP EAX,0x1                         ; 0047a368
    JNZ 0x0047a374                      ; 0047a36b
        ;   XREF to: 0047a374 (CONDITIONAL_JUMP)  ; LAB_0047a374
    MOV EAX,dword ptr [ESP]             ; 0047a36d
    ADD ESP,0x4                         ; 0047a370
    RET                                 ; 0047a373
    PUSH EBX                            ; 0047a374
        ;   Label: LAB_0047a374
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047a375
    PUSH ECX                            ; 0047a379
    MOV EBX,dword ptr [0x005b7650]      ; 0047a37a | DAT_005b7650
    PUSH EBX                            ; 0047a380
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004807e0 ; 0047a381
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004807e0(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 0047a386
    POP EBX                             ; 0047a389
    ADD ESP,0x4                         ; 0047a38a
    RET                                 ; 0047a38d

