; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trisock_cpp_setSocketBlocking_FUN_00549240(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9d8e
;
; Called Functions:
;   Ordinal_12
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00549240
        ;   Label: support_trisock.cpp_setSocketBlocking_FUN_00549240
    CMP dword ptr [ESP + 0xc],0x0       ; 00549243
    SETZ AL                             ; 00549248
    AND EAX,0xff                        ; 0054924b
    MOV dword ptr [ESP],EAX             ; 00549250
    MOV EAX,ESP                         ; 00549253
    PUSH EAX                            ; 00549255
    MOV EAX,dword ptr [ESP + 0xc]       ; 00549256
    PUSH 0x8004667e                     ; 0054925a
    MOV ECX,dword ptr [EAX]             ; 0054925f
    PUSH ECX                            ; 00549261
    CALL Ordinal_12                     ; 00549262
        ;   XREF to: 00574bba (UNCONDITIONAL_CALL)  ; undefined Ordinal_12()
    TEST EAX,EAX                        ; 00549267
    SETZ AL                             ; 00549269
    AND EAX,0xff                        ; 0054926c
    ADD ESP,0x4                         ; 00549271
    RET                                 ; 00549274

