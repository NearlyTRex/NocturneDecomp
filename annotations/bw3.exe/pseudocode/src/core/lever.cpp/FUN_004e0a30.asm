; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lever_cpp_FUN_004e0a30(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_hero.cpp_FUN_004d32d0 at 004d33f2
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0a30
        ;   Label: core_lever.cpp_FUN_004e0a30
    PUSH ESI                            ; 004e0a31
    PUSH EDI                            ; 004e0a32
    PUSH EBP                            ; 004e0a33
    MOV EBP,ESP                         ; 004e0a34
    SUB ESP,0x18                        ; 004e0a36
    AND ESP,0xfffffff8                  ; 004e0a39
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e0a3c
    CMP dword ptr [EBX + 0x80c],0x2     ; 004e0a3f
    JNZ 0x004e0a54                      ; 004e0a46
        ;   XREF to: 004e0a54 (CONDITIONAL_JUMP)  ; LAB_004e0a54
    MOV EAX,0x1                         ; 004e0a48
        ;   Label: LAB_004e0a48
    MOV ESP,EBP                         ; 004e0a4d
    POP EBP                             ; 004e0a4f
    POP EDI                             ; 004e0a50
    POP ESI                             ; 004e0a51
    POP EBX                             ; 004e0a52
    RET                                 ; 004e0a53
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e0a54
        ;   Label: LAB_004e0a54
    PUSH ECX                            ; 004e0a57
    PUSH EBX                            ; 004e0a58
    LEA ESI,[ESP + 0x14]                ; 004e0a59
    LEA EDI,[ESP + 0x8]                 ; 004e0a5d
    CALL core_actor.cpp_FUN_00408bf0    ; 004e0a61
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x14]                ; 004e0a66
    ADD ESP,0x8                         ; 004e0a6a
    MOVSD ES:EDI,ESI                    ; 004e0a6d
    MOVSD ES:EDI,ESI                    ; 004e0a6e
    MOVSD ES:EDI,ESI                    ; 004e0a6f
    CMP dword ptr [EBX + 0x80c],0x0     ; 004e0a70
    JNZ 0x004e0a86                      ; 004e0a77
        ;   XREF to: 004e0a86 (CONDITIONAL_JUMP)  ; LAB_004e0a86
    FLD float ptr [ESP + 0x8]           ; 004e0a79
    FLDZ                                ; 004e0a7d
    FCOMPP                              ; 004e0a7f
    FNSTSW AX                           ; 004e0a81
    SAHF                                ; 004e0a83
    JC 0x004e0a48                       ; 004e0a84
        ;   XREF to: 004e0a48 (CONDITIONAL_JUMP)  ; LAB_004e0a48
    MOV EDI,dword ptr [EBX + 0x80c]     ; 004e0a86
        ;   Label: LAB_004e0a86
    CMP EDI,0x1                         ; 004e0a8c
    JNZ 0x004e0aa7                      ; 004e0a8f
        ;   XREF to: 004e0aa7 (CONDITIONAL_JUMP)  ; LAB_004e0aa7
    FLD float ptr [ESP + 0x8]           ; 004e0a91
    FLDZ                                ; 004e0a95
    FCOMPP                              ; 004e0a97
    FNSTSW AX                           ; 004e0a99
    SAHF                                ; 004e0a9b
    JBE 0x004e0aa7                      ; 004e0a9c
        ;   XREF to: 004e0aa7 (CONDITIONAL_JUMP)  ; LAB_004e0aa7
    MOV EAX,EDI                         ; 004e0a9e
    MOV ESP,EBP                         ; 004e0aa0
    POP EBP                             ; 004e0aa2
    POP EDI                             ; 004e0aa3
    POP ESI                             ; 004e0aa4
    POP EBX                             ; 004e0aa5
    RET                                 ; 004e0aa6
    XOR EAX,EAX                         ; 004e0aa7
        ;   Label: LAB_004e0aa7
    MOV ESP,EBP                         ; 004e0aa9
    POP EBP                             ; 004e0aab
    POP EDI                             ; 004e0aac
    POP ESI                             ; 004e0aad
    POP EBX                             ; 004e0aae
    RET                                 ; 004e0aaf

