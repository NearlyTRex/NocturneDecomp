; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a010(undefined4 param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[1]:
;   FUN_0052a0d0 at 0052a29c
;
; Referenced Globals:
;   TerminatedCString s_anon_005e5029
;   undefined4 DAT_00618170
;   TerminatedCString s_none_0061b468
;   undefined4 DAT_0061b470
;   undefined4 DAT_0061b474
;
; Called Functions:
;   FUN_004fc740
;   FUN_005b8100
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052a010
        ;   Label: FUN_0052a010
    PUSH EDI                            ; 0052a011
    SUB ESP,0xc8                        ; 0052a012
    MOV EAX,ESP                         ; 0052a018
    PUSH EAX                            ; 0052a01a
    MOV ECX,0x32                        ; 0052a01b
    LEA EDI,[ESP + 0x4]                 ; 0052a020
    PUSH 0x5e5029                       ; 0052a024 | = "\"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0052a029
    MOV ESI,0x61b470                    ; 0052a030 | DAT_0061b470
    PUSH EDX                            ; 0052a035
    MOVSD.REP ES:EDI,ESI                ; 0052a036 | DAT_0061b470 | DAT_0061b474
    CALL FUN_005b8100                   ; 0052a038
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 0052a03d
    PUSH 0x61b468                       ; 0052a040 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 0052a045
    PUSH EAX                            ; 0052a049
    CALL FUN_005b8130                   ; 0052a04a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052a04f
    TEST EAX,EAX                        ; 0052a052
    JNZ 0x0052a06c                      ; 0052a054
        ;   XREF to: 0052a06c (CONDITIONAL_JUMP)  ; LAB_0052a06c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0052a056
    MOV dword ptr [EAX],0x0             ; 0052a05d
    ADD ESP,0xc8                        ; 0052a063
    POP EDI                             ; 0052a069
    POP ESI                             ; 0052a06a
    RET                                 ; 0052a06b
    MOV EAX,ESP                         ; 0052a06c
        ;   Label: LAB_0052a06c
    PUSH EAX                            ; 0052a06e
    MOV ECX,dword ptr [0x00618170]      ; 0052a06f | DAT_00618170
    PUSH ECX                            ; 0052a075
    CALL FUN_004fc740                   ; 0052a076
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc740()
    ADD ESP,0x8                         ; 0052a07b
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0052a07e
    MOV dword ptr [EDX],EAX             ; 0052a085
    ADD ESP,0xc8                        ; 0052a087
    POP EDI                             ; 0052a08d
    POP ESI                             ; 0052a08e
    RET                                 ; 0052a08f

