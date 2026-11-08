; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c8da0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004c9e70 at 004c9ebb
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d94ee
;   TerminatedCString s_d_d_005d94f8
;   TerminatedCString s_d_f_d_d_d_005d94ff
;
; Called Functions:
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8da0
        ;   Label: FUN_004c8da0
    PUSH ESI                            ; 004c8da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c8da2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c8da6
    LEA EAX,[EBX + 0xc]                 ; 004c8daa
    PUSH EAX                            ; 004c8dad
    LEA EAX,[EBX + 0x8]                 ; 004c8dae
    PUSH EAX                            ; 004c8db1
    LEA EAX,[EBX + 0x4]                 ; 004c8db2
    PUSH EAX                            ; 004c8db5
    PUSH 0x5d94ee                       ; 004c8db6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c8dbb
    CALL FUN_005b8100                   ; 004c8dbc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 004c8dc1
    LEA EAX,[EBX + 0x10]                ; 004c8dc4
    PUSH EAX                            ; 004c8dc7
    PUSH EBX                            ; 004c8dc8
    PUSH 0x5d94f8                       ; 004c8dc9 | = "%d,%d\n"
    PUSH ESI                            ; 004c8dce
    CALL FUN_005b8100                   ; 004c8dcf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 004c8dd4
    LEA EAX,[EBX + 0x24]                ; 004c8dd7
    PUSH EAX                            ; 004c8dda
    LEA EAX,[EBX + 0x20]                ; 004c8ddb
    PUSH EAX                            ; 004c8dde
    LEA EAX,[EBX + 0x1c]                ; 004c8ddf
    PUSH EAX                            ; 004c8de2
    LEA EAX,[EBX + 0x18]                ; 004c8de3
    PUSH EAX                            ; 004c8de6
    ADD EBX,0x14                        ; 004c8de7
    PUSH EBX                            ; 004c8dea
    PUSH 0x5d94ff                       ; 004c8deb | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004c8df0
    CALL FUN_005b8100                   ; 004c8df1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x1c                        ; 004c8df6
    POP ESI                             ; 004c8df9
    POP EBX                             ; 004c8dfa
    RET                                 ; 004c8dfb

