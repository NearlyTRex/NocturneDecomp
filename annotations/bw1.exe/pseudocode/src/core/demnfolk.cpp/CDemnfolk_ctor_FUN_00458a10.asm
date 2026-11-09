; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_demnfolk.cpp_factoryFuncDemnfolk_FUN_004589e0 at 004589f3
;
; Referenced Globals:
;   undefined4 DAT_005fe69c
;   undefined4 DAT_005fe6a0
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458a10
        ;   Label: core_demnfolk.cpp_CDemnfolk_ctor_FUN_00458a10
    PUSH ESI                            ; 00458a11
    PUSH EDI                            ; 00458a12
    SUB ESP,0x4                         ; 00458a13
    MOV EDX,dword ptr [ESP + 0x14]      ; 00458a16
    PUSH EDX                            ; 00458a1a
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 00458a1b
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00458a20
    PUSH 0x5d7d53                       ; 00458a23
    MOV EBX,EAX                         ; 00458a28
    ADD EAX,0x158                       ; 00458a2a
    PUSH EAX                            ; 00458a2f
    MOV ESI,0x5d7d60                    ; 00458a30
    MOV dword ptr [EAX + -0x4],0x5fe6b4 ; 00458a35
    CALL core_skeleton.cpp_FUN_00569f50 ; 00458a3c
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f000000 ; 00458a41
    LEA EDI,[EBX + 0xc288]              ; 00458a4b
    MOV dword ptr [EBX + 0x2ff0],0x3f800000 ; 00458a51
    FLD float ptr [0x005fe69c]          ; 00458a5b | DAT_005fe69c
    MOV dword ptr [EBX + 0xc278],0x0    ; 00458a61
    FLD float ptr [0x005fe6a0]          ; 00458a6b | DAT_005fe6a0
    MOV dword ptr [EBX + 0xc274],0x0    ; 00458a71
    ADD ESP,0x8                         ; 00458a7b
    FXCH                                ; 00458a7e
    FSTP float ptr [EBX + 0x2ff4]       ; 00458a80
    FSTP float ptr [EBX + 0x2ff8]       ; 00458a86
    PUSH EDI                            ; 00458a8c
    MOV AL,byte ptr [ESI]               ; 00458a8d
        ;   Label: LAB_00458a8d
    MOV byte ptr [EDI],AL               ; 00458a8f
    CMP AL,0x0                          ; 00458a91
    JZ 0x00458aa5                       ; 00458a93
        ;   XREF to: 00458aa5 (CONDITIONAL_JUMP)  ; LAB_00458aa5
    MOV AL,byte ptr [ESI + 0x1]         ; 00458a95
    ADD ESI,0x2                         ; 00458a98
    MOV byte ptr [EDI + 0x1],AL         ; 00458a9b
    ADD EDI,0x2                         ; 00458a9e
    CMP AL,0x0                          ; 00458aa1
    JNZ 0x00458a8d                      ; 00458aa3
        ;   XREF to: 00458a8d (CONDITIONAL_JUMP)  ; LAB_00458a8d
    POP EDI                             ; 00458aa5
        ;   Label: LAB_00458aa5
    PUSH 0x3f800000                     ; 00458aa6
    PUSH 0x3e99999a                     ; 00458aab
    CALL core_actor.cpp_FUN_0040cc00    ; 00458ab0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 00458ab5
    FLD float ptr [ESP + 0x8]           ; 00458ab9
    ADD ESP,0x8                         ; 00458abd
    PUSH 0xff                           ; 00458ac0
    MOV dword ptr [EBX + 0xc280],0x0    ; 00458ac5
    PUSH 0x0                            ; 00458acf
    FSTP float ptr [EBX + 0xc268]       ; 00458ad1
    CALL core_actor.cpp_FUN_0040cc60    ; 00458ad7
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc270],0x0    ; 00458adc
    MOV dword ptr [EBX + 0xc284],0x0    ; 00458ae6
    MOV dword ptr [EBX + 0xc2ec],0x0    ; 00458af0
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 00458afa
    MOV dword ptr [EBX + 0xc344],0x0    ; 00458b04
    MOV dword ptr [EBX + 0xc2f4],0x0    ; 00458b0e
    MOV dword ptr [EBX + 0xc35c],0x0    ; 00458b18
    MOV dword ptr [EBX + 0xc360],0x0    ; 00458b22
    MOV dword ptr [EBX + 0xc264],0x0    ; 00458b2c
    MOV dword ptr [EBX + 0x252c],0x40490fdb ; 00458b36
    MOV dword ptr [EBX + 0x2530],0x40490fdb ; 00458b40
    MOV dword ptr [EBX + 0xc27c],0x2    ; 00458b4a
    MOV dword ptr [EBX + 0xc2f8],0x0    ; 00458b54
    MOV dword ptr [EBX + 0xc348],0x0    ; 00458b5e
    MOV dword ptr [EBX + 0xc34c],0x0    ; 00458b68
    MOV dword ptr [EBX + 0xc350],0x0    ; 00458b72
    MOV dword ptr [EBX + 0xc354],0x0    ; 00458b7c
    MOV dword ptr [EBX + 0xc358],0x0    ; 00458b86
    MOV dword ptr [EBX + 0xc364],0x0    ; 00458b90
    ADD ESP,0x8                         ; 00458b9a
    MOV dword ptr [EBX + 0xc26c],EAX    ; 00458b9d
    MOV EAX,EBX                         ; 00458ba3
    MOV dword ptr [EBX + 0xc2ec],0x0    ; 00458ba5
    ADD ESP,0x4                         ; 00458baf
    POP EDI                             ; 00458bb2
    POP ESI                             ; 00458bb3
    POP EBX                             ; 00458bb4
    RET                                 ; 00458bb5

