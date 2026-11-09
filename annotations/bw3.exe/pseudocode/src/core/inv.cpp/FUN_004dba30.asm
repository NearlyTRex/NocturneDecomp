; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004dba30(int param_1,int param_2)
;
;
; XREF[1]:
;   core_enemy.cpp_FUN_00489c90 at 00489cfe
;
; Referenced Globals:
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dba30
        ;   Label: core_inv.cpp_FUN_004dba30
    PUSH ESI                            ; 004dba31
    PUSH EDI                            ; 004dba32
    PUSH EBP                            ; 004dba33
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dba34
    MOV EBP,dword ptr [ESP + 0x18]      ; 004dba38
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dba3c
    XOR ESI,ESI                         ; 004dba3f
    TEST EDX,EDX                        ; 004dba41
    JLE 0x004dba70                      ; 004dba43
        ;   XREF to: 004dba70 (CONDITIONAL_JUMP)  ; LAB_004dba70
    MOV EBX,EDI                         ; 004dba45
    MOV EAX,[0x02d0c150]                ; 004dba47 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004dba47
    PUSH EAX                            ; 004dba4c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004dba4d
    PUSH EDX                            ; 004dba50
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dba51
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dba56
    TEST EAX,EAX                        ; 004dba59
    JZ 0x004dba65                       ; 004dba5b
        ;   XREF to: 004dba65 (CONDITIONAL_JUMP)  ; LAB_004dba65
    CMP EBP,dword ptr [EAX + 0x56c]     ; 004dba5d
    JZ 0x004dba77                       ; 004dba63
        ;   XREF to: 004dba77 (CONDITIONAL_JUMP)  ; LAB_004dba77
    INC ESI                             ; 004dba65
        ;   Label: LAB_004dba65
    MOV ECX,dword ptr [EDI + 0x10]      ; 004dba66
    ADD EBX,0x4                         ; 004dba69
    CMP ESI,ECX                         ; 004dba6c
    JL 0x004dba47                       ; 004dba6e
        ;   XREF to: 004dba47 (CONDITIONAL_JUMP)  ; LAB_004dba47
    XOR EAX,EAX                         ; 004dba70
        ;   Label: LAB_004dba70
    POP EBP                             ; 004dba72
    POP EDI                             ; 004dba73
    POP ESI                             ; 004dba74
    POP EBX                             ; 004dba75
    RET                                 ; 004dba76
    MOV EAX,dword ptr [EBX + 0x14]      ; 004dba77
        ;   Label: LAB_004dba77
    POP EBP                             ; 004dba7a
    POP EDI                             ; 004dba7b
    POP ESI                             ; 004dba7c
    POP EBX                             ; 004dba7d
    RET                                 ; 004dba7e

