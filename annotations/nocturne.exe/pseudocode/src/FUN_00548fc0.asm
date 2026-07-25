; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00548fc0(void)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   Ordinal_4
;   support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00548fc0
        ;   Label: FUN_00548fc0
    PUSH EDI                            ; 00548fc1
    SUB ESP,0x20                        ; 00548fc2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00548fc5
    PUSH EDX                            ; 00548fc9
    LEA ESI,[ESP + 0x14]                ; 00548fca
    CALL support_trisock.cpp_buildSockaddrIn_FUN_00548dc0 ; 00548fce
        ;   XREF to: 00548dc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_00548dc0()
    ADD ESP,0x4                         ; 00548fd3
    MOV EDI,ESP                         ; 00548fd6
    PUSH 0x10                           ; 00548fd8
    LEA EAX,[ESP + 0x4]                 ; 00548fda
    LEA ESI,[ESP + 0x14]                ; 00548fde
    PUSH EAX                            ; 00548fe2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00548fe3
    MOVSD ES:EDI,ESI                    ; 00548fe7
    MOVSD ES:EDI,ESI                    ; 00548fe8
    MOVSD ES:EDI,ESI                    ; 00548fe9
    MOVSD ES:EDI,ESI                    ; 00548fea
    MOV ECX,dword ptr [EAX]             ; 00548feb
    PUSH ECX                            ; 00548fed
    CALL Ordinal_4                      ; 00548fee
        ;   XREF to: 00574bf0 (UNCONDITIONAL_CALL)  ; undefined Ordinal_4()
    TEST EAX,EAX                        ; 00548ff3
    SETZ AL                             ; 00548ff5
    AND EAX,0xff                        ; 00548ff8
    ADD ESP,0x20                        ; 00548ffd
    POP EDI                             ; 00549000
    POP ESI                             ; 00549001
    RET                                 ; 00549002

