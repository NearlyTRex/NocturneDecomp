; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getPickupHandIndex_FUN_00598e40(CZombie *this_ptr,int object_shape_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   object_shape_type
;
; XREF[3]:
;   core_zombie.cpp_CZombie_canPickupWithHand_FUN_00598ee0 at 00598eeb
;   core_zombie.cpp_CZombie_processPickup_FUN_005984e0 at 005986c1
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 00596451
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005ef2be
;   undefined4 DAT_005ef2c7
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598e40
        ;   Label: core_zombie.cpp_CZombie_getPickupHandIndex_FUN_00598e40
    PUSH EBP                            ; 00598e41
    MOV EBP,ESP                         ; 00598e42
    MOV EBX,dword ptr [EBP + 0x10]      ; 00598e44
    CMP EBX,0x2                         ; 00598e47
    JZ 0x00598e66                       ; 00598e4a
        ;   XREF to: 00598e66 (CONDITIONAL_JUMP)  ; LAB_00598e66
    MOV EAX,dword ptr [EBP + 0xc]       ; 00598e4c
    PUSH 0x5ef2be                       ; 00598e4f | = "jeff.dfm"
    ADD EAX,0x2514                      ; 00598e54
    PUSH EAX                            ; 00598e59
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00598e5a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00598e5f
    TEST EAX,EAX                        ; 00598e62
    JZ 0x00598e96                       ; 00598e64
        ;   XREF to: 00598e96 (CONDITIONAL_JUMP)  ; LAB_00598e96
    PUSH 0x3                            ; 00598e66
        ;   Label: LAB_00598e66
    MOV EAX,dword ptr [EBP + 0xc]       ; 00598e68
    PUSH 0x5ef2c7                       ; 00598e6b | DAT_005ef2c7
    ADD EAX,0x2514                      ; 00598e70
    PUSH EAX                            ; 00598e75
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00598e76
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00598e7b
    TEST EAX,EAX                        ; 00598e7e
    JNZ 0x00598eb8                      ; 00598e80
        ;   XREF to: 00598eb8 (CONDITIONAL_JUMP)  ; LAB_00598eb8
    CMP EBX,0x2                         ; 00598e82
    JNC 0x00598ea0                      ; 00598e85
        ;   XREF to: 00598ea0 (CONDITIONAL_JUMP)  ; LAB_00598ea0
    CMP EBX,0x1                         ; 00598e87
    JNZ 0x00598ea7                      ; 00598e8a
        ;   XREF to: 00598ea7 (CONDITIONAL_JUMP)  ; LAB_00598ea7
    MOV EBX,0x1                         ; 00598e8c
        ;   Label: LAB_00598e8c
    MOV EAX,EBX                         ; 00598e91
    POP EBP                             ; 00598e93
    POP EBX                             ; 00598e94
    RET                                 ; 00598e95
    MOV EBX,0xffffffff                  ; 00598e96
        ;   Label: LAB_00598e96
    MOV EAX,EBX                         ; 00598e9b
    POP EBP                             ; 00598e9d
    POP EBX                             ; 00598e9e
    RET                                 ; 00598e9f
    JBE 0x00598e8c                      ; 00598ea0
        ;   XREF to: 00598e8c (CONDITIONAL_JUMP)  ; LAB_00598e8c
        ;   Label: LAB_00598ea0
    CMP EBX,0x3                         ; 00598ea2
    JZ 0x00598e8c                       ; 00598ea5
        ;   XREF to: 00598e8c (CONDITIONAL_JUMP)  ; LAB_00598e8c
    MOV EBX,0xffffffff                  ; 00598ea7
        ;   Label: LAB_00598ea7
    MOV EAX,EBX                         ; 00598eac
    POP EBP                             ; 00598eae
    POP EBX                             ; 00598eaf
    RET                                 ; 00598eb0
    XOR EBX,EBX                         ; 00598eb1
        ;   Label: LAB_00598eb1
    MOV EAX,EBX                         ; 00598eb3
    POP EBP                             ; 00598eb5
    POP EBX                             ; 00598eb6
    RET                                 ; 00598eb7
    CMP EBX,0x2                         ; 00598eb8
        ;   Label: LAB_00598eb8
    JNC 0x00598ecc                      ; 00598ebb
        ;   XREF to: 00598ecc (CONDITIONAL_JUMP)  ; LAB_00598ecc
    CMP EBX,0x1                         ; 00598ebd
    JZ 0x00598e8c                       ; 00598ec0
        ;   XREF to: 00598e8c (CONDITIONAL_JUMP)  ; LAB_00598e8c
    MOV EBX,0xffffffff                  ; 00598ec2
    MOV EAX,EBX                         ; 00598ec7
    POP EBP                             ; 00598ec9
    POP EBX                             ; 00598eca
    RET                                 ; 00598ecb
    JBE 0x00598eb1                      ; 00598ecc
        ;   XREF to: 00598eb1 (CONDITIONAL_JUMP)  ; LAB_00598eb1
        ;   Label: LAB_00598ecc
    CMP EBX,0x3                         ; 00598ece
    JZ 0x00598e8c                       ; 00598ed1
        ;   XREF to: 00598e8c (CONDITIONAL_JUMP)  ; LAB_00598e8c
    MOV EBX,0xffffffff                  ; 00598ed3
    MOV EAX,EBX                         ; 00598ed8
    POP EBP                             ; 00598eda
    POP EBX                             ; 00598edb
    RET                                 ; 00598edc

