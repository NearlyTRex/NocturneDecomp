; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571ea0(void)
;
;
; XREF[1]:
;   FUN_00503e20 at 00503e50
;
; Referenced Globals:
;   TerminatedCString s_initSockets_005d6dc0
;   TerminatedCString s_support_trisock_cpp_005d6dcd
;   TerminatedCString s_Can_t_create_mutex_005d6de4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd8a8
;
; Called Functions:
;   FUN_004e4330
;   FUN_00581920
;   FUN_00581c70
;   Ordinal_115
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 00571ea0
        ;   Label: FUN_00571ea0
    PUSH 0x5d6dc0                       ; 00571ea6 | = "initSockets\n"
    CALL FUN_00581c70                   ; 00571eab
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00581c70()
    ADD ESP,0x4                         ; 00571eb0
    MOV EAX,ESP                         ; 00571eb3
    PUSH EAX                            ; 00571eb5
    PUSH 0x101                          ; 00571eb6
    CALL Ordinal_115                    ; 00571ebb
        ;   XREF to: 005b2568 (UNCONDITIONAL_CALL)  ; undefined Ordinal_115()
    CMP dword ptr [0x02cfd8a8],0x0      ; 00571ec0 | DAT_02cfd8a8
    JZ 0x00571ed0                       ; 00571ec7
        ;   XREF to: 00571ed0 (CONDITIONAL_JUMP)  ; LAB_00571ed0
    ADD ESP,0x190                       ; 00571ec9
        ;   Label: LAB_00571ec9
    RET                                 ; 00571ecf
    CALL FUN_00581920                   ; 00571ed0
        ;   XREF to: 00581920 (UNCONDITIONAL_CALL)  ; undefined FUN_00581920()
        ;   Label: LAB_00571ed0
    MOV [0x02cfd8a8],EAX                ; 00571ed5 | DAT_02cfd8a8
    TEST EAX,EAX                        ; 00571eda
    JNZ 0x00571ec9                      ; 00571edc
        ;   XREF to: 00571ec9 (CONDITIONAL_JUMP)  ; LAB_00571ec9
    PUSH EBX                            ; 00571ede
    MOV ECX,0x5d6dcd                    ; 00571edf | = "..\\support\\trisock.cpp"
    MOV EBX,0x927                       ; 00571ee4
    PUSH 0x5d6de4                       ; 00571ee9 | = "Can't create mutex"
    MOV dword ptr [0x01d71de0],ECX      ; 00571eee | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00571ef4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00571efa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00571eff
    POP EBX                             ; 00571f02
    ADD ESP,0x190                       ; 00571f03
    RET                                 ; 00571f09

