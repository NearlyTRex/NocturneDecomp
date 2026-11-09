; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041cda0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_boxactor.cpp_FUN_0041cb40 at 0041cca6
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_box.cpp_FUN_0041bb80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cda0
        ;   Label: core_boxactor.cpp_FUN_0041cda0
    SUB ESP,0x78                        ; 0041cda1
    MOV EBX,dword ptr [ESP + 0x80]      ; 0041cda4
    MOV EDX,dword ptr [EBX + 0x480]     ; 0041cdab
    TEST EDX,EDX                        ; 0041cdb1
    JNZ 0x0041cdba                      ; 0041cdb3
        ;   XREF to: 0041cdba (CONDITIONAL_JUMP)  ; LAB_0041cdba
    ADD ESP,0x78                        ; 0041cdb5
    POP EBX                             ; 0041cdb8
    RET                                 ; 0041cdb9
    PUSH EDI                            ; 0041cdba
        ;   Label: LAB_0041cdba
    PUSH ESI                            ; 0041cdbb
    LEA EAX,[EBX + 0x20]                ; 0041cdbc
    PUSH EAX                            ; 0041cdbf
    PUSH EDX                            ; 0041cdc0
    LEA ESI,[ESP + 0x7c]                ; 0041cdc1
    LEA EDI,[ESP + 0x40]                ; 0041cdc5
    CALL core_actor.cpp_FUN_00408de0    ; 0041cdc9
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x7c]                ; 0041cdce
    ADD ESP,0x8                         ; 0041cdd2
    LEA EAX,[ESP + 0x38]                ; 0041cdd5
    MOVSD ES:EDI,ESI                    ; 0041cdd9
    MOVSD ES:EDI,ESI                    ; 0041cdda
    MOVSD ES:EDI,ESI                    ; 0041cddb
    PUSH EAX                            ; 0041cddc
    MOV EAX,dword ptr [EBX + 0x480]     ; 0041cddd
    PUSH EAX                            ; 0041cde3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0041cde4
    LEA ESI,[ESP + 0x28]                ; 0041cdea
    LEA EDI,[ESP + 0x10]                ; 0041cdee
    CALL dword ptr [EDX + 0x24]         ; 0041cdf2
    MOV ECX,0x6                         ; 0041cdf5
    LEA ESI,[ESP + 0x28]                ; 0041cdfa
    ADD ESP,0x4                         ; 0041cdfe
    LEA EAX,[ESP + 0xc]                 ; 0041ce01
    MOVSD.REP ES:EDI,ESI                ; 0041ce05
    PUSH EAX                            ; 0041ce07
    LEA ESI,[ESP + 0x64]                ; 0041ce08
    LEA EDI,[ESP + 0x4c]                ; 0041ce0c
    CALL core_box.cpp_FUN_0041bb80      ; 0041ce10
        ;   XREF to: 0041bb80 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041bb80()
    LEA ESI,[ESP + 0x64]                ; 0041ce15
    LEA EAX,[ESP + 0x4c]                ; 0041ce19
    ADD ESP,0x8                         ; 0041ce1d
    LEA EDX,[ESP + 0x38]                ; 0041ce20
    MOVSD ES:EDI,ESI                    ; 0041ce24
    MOVSD ES:EDI,ESI                    ; 0041ce25
    MOVSD ES:EDI,ESI                    ; 0041ce26
    CMP EDX,EAX                         ; 0041ce27
    JZ 0x0041ce43                       ; 0041ce29
        ;   XREF to: 0041ce43 (CONDITIONAL_JUMP)  ; LAB_0041ce43
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041ce2b
    MOV dword ptr [ESP + 0x38],EAX      ; 0041ce2f
    MOV EAX,dword ptr [ESP + 0x48]      ; 0041ce33
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041ce37
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041ce3b
    MOV dword ptr [ESP + 0x40],EAX      ; 0041ce3f
    LEA EAX,[ESP + 0x38]                ; 0041ce43
        ;   Label: LAB_0041ce43
    PUSH EAX                            ; 0041ce47
    MOV ESI,dword ptr [EBX + 0x480]     ; 0041ce48
    PUSH ESI                            ; 0041ce4e
    LEA ESI,[ESP + 0x58]                ; 0041ce4f
    LEA EDI,[ESP + 0x70]                ; 0041ce53
    CALL core_actor.cpp_FUN_00408d70    ; 0041ce57
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x58]                ; 0041ce5c
    ADD ESP,0x8                         ; 0041ce60
    MOVSD ES:EDI,ESI                    ; 0041ce63
    MOVSD ES:EDI,ESI                    ; 0041ce64
    MOVSD ES:EDI,ESI                    ; 0041ce65
    MOV EAX,dword ptr [ESP + 0x68]      ; 0041ce66
    MOV dword ptr [EBX + 0x20],EAX      ; 0041ce6a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041ce6d
    MOV dword ptr [EBX + 0x24],EAX      ; 0041ce71
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041ce74
    MOV dword ptr [EBX + 0x28],EAX      ; 0041ce78
    POP ESI                             ; 0041ce7b
    POP EDI                             ; 0041ce7c
    ADD ESP,0x78                        ; 0041ce7d
    POP EBX                             ; 0041ce80
    RET                                 ; 0041ce81

