; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b3a0 at 0041b3b3
;
; Referenced Globals:
;   undefined4 DAT_005d45b1
;   undefined4 DAT_005fcc30
;   undefined4 DAT_005fcc34
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_boneguy.cpp_FUN_0041b590
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b750
        ;   Label: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750
    PUSH ESI                            ; 0041b751
    PUSH EDI                            ; 0041b752
    SUB ESP,0x28                        ; 0041b753
    MOV EBX,dword ptr [ESP + 0x38]      ; 0041b756
    PUSH EBX                            ; 0041b75a
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0041b75b
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041b760
    PUSH 0x5fcd90                       ; 0041b763
    PUSH 0x14                           ; 0041b768
    ADD EAX,0xc2e8                      ; 0041b76a
    PUSH EAX                            ; 0041b76f
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0041b770
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0041b775
    LEA EBX,[EAX + 0xffff3d18]          ; 0041b778
    PUSH 0x5d4599                       ; 0041b77e
    LEA EAX,[EBX + 0x158]               ; 0041b783
    PUSH EAX                            ; 0041b789
    MOV dword ptr [EBX + 0x154],0x5fcc44 ; 0041b78a
    CALL core_skeleton.cpp_FUN_00569f50 ; 0041b794
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0041b799
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 0041b7a3
    MOV ESI,0x5d45a5                    ; 0041b7ad
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041b7b2
    LEA EDI,[EBX + 0xc27c]              ; 0041b7bc
    MOV dword ptr [EBX + 0xc888],0x0    ; 0041b7c2
    FLD float ptr [0x005fcc30]          ; 0041b7cc | DAT_005fcc30
    MOV dword ptr [EBX + 0x27a0],0x2    ; 0041b7d2
    FLD float ptr [0x005fcc34]          ; 0041b7dc | DAT_005fcc34
    MOV dword ptr [EBX + 0xc2e0],0x41200000 ; 0041b7e2
    ADD ESP,0x8                         ; 0041b7ec
    FXCH                                ; 0041b7ef
    FSTP float ptr [EBX + 0x2ff4]       ; 0041b7f1
    FSTP float ptr [EBX + 0x2ff8]       ; 0041b7f7
    PUSH EDI                            ; 0041b7fd
    MOV AL,byte ptr [ESI]               ; 0041b7fe
        ;   Label: LAB_0041b7fe
    MOV byte ptr [EDI],AL               ; 0041b800
    CMP AL,0x0                          ; 0041b802
    JZ 0x0041b816                       ; 0041b804
        ;   XREF to: 0041b816 (CONDITIONAL_JUMP)  ; LAB_0041b816
    MOV AL,byte ptr [ESI + 0x1]         ; 0041b806
    ADD ESI,0x2                         ; 0041b809
    MOV byte ptr [EDI + 0x1],AL         ; 0041b80c
    ADD EDI,0x2                         ; 0041b80f
    CMP AL,0x0                          ; 0041b812
    JNZ 0x0041b7fe                      ; 0041b814
        ;   XREF to: 0041b7fe (CONDITIONAL_JUMP)  ; LAB_0041b7fe
    POP EDI                             ; 0041b816
        ;   Label: LAB_0041b816
    PUSH 0x5a0                          ; 0041b817
    PUSH 0x0                            ; 0041b81c
    LEA EAX,[EBX + 0xc2e8]              ; 0041b81e
    PUSH EAX                            ; 0041b824
    MOV dword ptr [EBX + 0xc2e4],0x0    ; 0041b825
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0041b82f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041b834
    PUSH 0xff                           ; 0041b837
    PUSH 0x0                            ; 0041b83c
    CALL core_actor.cpp_FUN_0040cc60    ; 0041b83e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc26c],0x0    ; 0041b843
    MOV dword ptr [EBX + 0xc270],0x0    ; 0041b84d
    MOV dword ptr [EBX + 0xc274],0x0    ; 0041b857
    MOV dword ptr [EBX + 0xc25c],0x40c00000 ; 0041b861
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 0041b86b
    ADD ESP,0x8                         ; 0041b875
    MOV dword ptr [EBX + 0xc268],EAX    ; 0041b878
    PUSH 0x437f0000                     ; 0041b87e
    PUSH 0x0                            ; 0041b883
    CALL core_actor.cpp_FUN_0040cc00    ; 0041b885
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041b88a
    FLD float ptr [ESP + 0x2c]          ; 0041b88e
    ADD ESP,0x8                         ; 0041b892
    PUSH 0x42200000                     ; 0041b895
    PUSH 0x0                            ; 0041b89a
    FSTP float ptr [ESP + 0x14]         ; 0041b89c
    CALL core_actor.cpp_FUN_0040cc00    ; 0041b8a0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041b8a5
    FLD float ptr [ESP + 0x2c]          ; 0041b8a9
    ADD ESP,0x8                         ; 0041b8ad
    PUSH 0x43800000                     ; 0041b8b0
    PUSH 0x42d40000                     ; 0041b8b5
    FSTP float ptr [ESP + 0x18]         ; 0041b8ba
    CALL core_actor.cpp_FUN_0040cc00    ; 0041b8be
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041b8c3
    LEA ESI,[ESP + 0x20]                ; 0041b8c7
    FLD float ptr [ESP + 0x2c]          ; 0041b8cb
    ADD ESP,0x8                         ; 0041b8cf
    LEA EAX,[ESP + 0xc]                 ; 0041b8d2
    MOV EDI,ESP                         ; 0041b8d6
    PUSH EAX                            ; 0041b8d8
    FSTP float ptr [ESP + 0x18]         ; 0041b8d9
    CALL core_boneguy.cpp_FUN_0041b590  ; 0041b8dd
        ;   XREF to: 0041b590 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_FUN_0041b590()
    LEA ESI,[ESP + 0x1c]                ; 0041b8e2
    ADD ESP,0x4                         ; 0041b8e6
    MOVSD ES:EDI,ESI                    ; 0041b8e9
    MOVSD ES:EDI,ESI                    ; 0041b8ea
    MOVSD ES:EDI,ESI                    ; 0041b8eb
    FLD float ptr [0x005d45b1]          ; 0041b8ec | DAT_005d45b1
    FLD float ptr [ESP]                 ; 0041b8f2
    FMUL ST1                            ; 0041b8f5
    FLD float ptr [ESP + 0x4]           ; 0041b8f7
    FMUL ST2                            ; 0041b8fb
    FLD float ptr [ESP + 0x8]           ; 0041b8fd
    FMULP ST3                           ; 0041b901
    MOV EAX,EBX                         ; 0041b903
    FXCH                                ; 0041b905
    CALL crt_math.c_round_FUN_005c03a0  ; 0041b907
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041b90c
    CALL crt_math.c_round_FUN_005c03a0  ; 0041b90e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0041b913
    CALL crt_math.c_round_FUN_005c03a0  ; 0041b915
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041b91a
    FISTP dword ptr [EBX + 0x108]       ; 0041b91c
    FXCH                                ; 0041b922
    FISTP dword ptr [EBX + 0x10c]       ; 0041b924
    FISTP dword ptr [EBX + 0x110]       ; 0041b92a
    ADD ESP,0x28                        ; 0041b930
    POP EDI                             ; 0041b933
    POP ESI                             ; 0041b934
    POP EBX                             ; 0041b935
    RET                                 ; 0041b936

