; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   unkafter_hostage.cpp_FUN_00454b30 at 00454b43
;
; Referenced Globals:
;   undefined4 DAT_005de05c
;   undefined4 DAT_005de060
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_skeleton.cpp_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454b60
        ;   Label: core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60
    PUSH ESI                            ; 00454b61
    PUSH EDI                            ; 00454b62
    PUSH EBP                            ; 00454b63
    SUB ESP,0x4                         ; 00454b64
    MOV EBP,dword ptr [ESP + 0x18]      ; 00454b67
    PUSH EBP                            ; 00454b6b
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00454b6c
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00454b71
    MOV EBX,EAX                         ; 00454b74
    PUSH 0x5ba3ba                       ; 00454b76
    MOV EBP,EAX                         ; 00454b7b
    ADD EAX,0x158                       ; 00454b7d
    PUSH EAX                            ; 00454b82
    MOV ESI,0x5ba3c7                    ; 00454b83
    MOV dword ptr [EAX + -0x4],0x5de074 ; 00454b88
    CALL core_skeleton.cpp_FUN_0054eae0 ; 00454b8f
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f000000 ; 00454b94
    LEA EDI,[EBX + 0xd074]              ; 00454b9e
    MOV dword ptr [EBX + 0x3270],0x3f800000 ; 00454ba4
    FLD float ptr [0x005de05c]          ; 00454bae | DAT_005de05c
    MOV dword ptr [EBX + 0xd064],0x0    ; 00454bb4
    FLD float ptr [0x005de060]          ; 00454bbe | DAT_005de060
    MOV dword ptr [EBX + 0xd060],0x0    ; 00454bc4
    ADD ESP,0x8                         ; 00454bce
    FXCH                                ; 00454bd1
    FSTP float ptr [EBX + 0x3274]       ; 00454bd3
    FSTP float ptr [EBX + 0x3278]       ; 00454bd9
    PUSH EDI                            ; 00454bdf
    MOV AL,byte ptr [ESI]               ; 00454be0
        ;   Label: LAB_00454be0
    MOV byte ptr [EDI],AL               ; 00454be2
    CMP AL,0x0                          ; 00454be4
    JZ 0x00454bf8                       ; 00454be6
        ;   XREF to: 00454bf8 (CONDITIONAL_JUMP)  ; LAB_00454bf8
    MOV AL,byte ptr [ESI + 0x1]         ; 00454be8
    ADD ESI,0x2                         ; 00454beb
    MOV byte ptr [EDI + 0x1],AL         ; 00454bee
    ADD EDI,0x2                         ; 00454bf1
    CMP AL,0x0                          ; 00454bf4
    JNZ 0x00454be0                      ; 00454bf6
        ;   XREF to: 00454be0 (CONDITIONAL_JUMP)  ; LAB_00454be0
    POP EDI                             ; 00454bf8
        ;   Label: LAB_00454bf8
    PUSH 0x3f800000                     ; 00454bf9
    PUSH 0x3e99999a                     ; 00454bfe
    CALL core_actor.cpp_FUN_0040ce40    ; 00454c03
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00454c08
    FLD float ptr [ESP + 0x8]           ; 00454c0c
    ADD ESP,0x8                         ; 00454c10
    PUSH 0xff                           ; 00454c13
    MOV dword ptr [EBX + 0xd06c],0x0    ; 00454c18
    PUSH 0x0                            ; 00454c22
    FSTP float ptr [EBX + 0xd054]       ; 00454c24
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00454c2a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xd05c],0x0    ; 00454c2f
    MOV dword ptr [EBX + 0xd070],0x0    ; 00454c39
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 00454c43
    MOV dword ptr [EBX + 0xd0dc],0x0    ; 00454c4d
    MOV dword ptr [EBX + 0xd130],0x0    ; 00454c57
    MOV dword ptr [EBX + 0xd0e0],0x0    ; 00454c61
    MOV dword ptr [EBX + 0xd140],0x0    ; 00454c6b
    MOV dword ptr [EBX + 0xd144],0x0    ; 00454c75
    MOV dword ptr [EBX + 0xd050],0x0    ; 00454c7f
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 00454c89
    MOV dword ptr [EBX + 0xd068],0x2    ; 00454c93
    MOV dword ptr [EBX + 0xd0e4],0x0    ; 00454c9d
    MOV dword ptr [EBX + 0xd134],0x0    ; 00454ca7
    MOV dword ptr [EBX + 0xd138],0x0    ; 00454cb1
    ADD ESP,0x8                         ; 00454cbb
    MOV dword ptr [EBX + 0xd13c],0x0    ; 00454cbe
    PUSH 0x5ba3cc                       ; 00454cc8
    MOV EDX,dword ptr [0x005fba60]      ; 00454ccd | DAT_005fba60
    MOV dword ptr [EBX + 0xd058],EAX    ; 00454cd3
    PUSH EDX                            ; 00454cd9
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 00454cda
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00454ce4
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00454ce9
    TEST EAX,EAX                        ; 00454cec
    JZ 0x00454d04                       ; 00454cee
        ;   XREF to: 00454d04 (CONDITIONAL_JUMP)  ; LAB_00454d04
    MOV dword ptr [EBX + 0xd148],0x3f800000 ; 00454cf0
    MOV EAX,EBP                         ; 00454cfa
    ADD ESP,0x4                         ; 00454cfc
    POP EBP                             ; 00454cff
    POP EDI                             ; 00454d00
    POP ESI                             ; 00454d01
    POP EBX                             ; 00454d02
    RET                                 ; 00454d03
    MOV dword ptr [EBX + 0xd148],0x3f400000 ; 00454d04
        ;   Label: LAB_00454d04
    MOV EAX,EBP                         ; 00454d0e
    ADD ESP,0x4                         ; 00454d10
    POP EBP                             ; 00454d13
    POP EDI                             ; 00454d14
    POP ESI                             ; 00454d15
    POP EBX                             ; 00454d16
    RET                                 ; 00454d17

