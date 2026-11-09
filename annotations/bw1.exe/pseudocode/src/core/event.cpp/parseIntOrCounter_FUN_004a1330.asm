; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseIntOrCounter_FUN_004a1330(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_event.cpp_CEventList_getCounterValue_FUN_004a9e80
;   crt_stdio.c_sscanf_FUN_005c2cac
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004a1330
        ;   Label: core_event.cpp_parseIntOrCounter_FUN_004a1330
    MOV EAX,ESP                         ; 004a1333
    PUSH EAX                            ; 004a1335
    PUSH 0x5dcbd4                       ; 004a1336
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a133b
    PUSH EDX                            ; 004a133f
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 004a1340
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 004a1345
    CMP EAX,0x1                         ; 004a1348
    JNZ 0x004a1354                      ; 004a134b
        ;   XREF to: 004a1354 (CONDITIONAL_JUMP)  ; LAB_004a1354
    MOV EAX,dword ptr [ESP]             ; 004a134d
    ADD ESP,0x4                         ; 004a1350
    RET                                 ; 004a1353
    PUSH EBX                            ; 004a1354
        ;   Label: LAB_004a1354
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a1355
    PUSH ECX                            ; 004a1359
    MOV EBX,dword ptr [0x0061b4d0]      ; 004a135a | DAT_0061b4d0
    PUSH EBX                            ; 004a1360
    CALL core_event.cpp_CEventList_getCounterValue_FUN_004a9e80 ; 004a1361
        ;   XREF to: 004a9e80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_getCounterValue_FUN_004a9e80(CEventList * this_ptr, char * str)
    ADD ESP,0x8                         ; 004a1366
    POP EBX                             ; 004a1369
    ADD ESP,0x4                         ; 004a136a
    RET                                 ; 004a136d

