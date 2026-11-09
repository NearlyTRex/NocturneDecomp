; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_carved.cpp_factoryFuncCarved_FUN_004286a0 at 004286b3
;
; Referenced Globals:
;   undefined4 DAT_005fd470
;   undefined4 DAT_005fd474
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004286d0
        ;   Label: core_carved.cpp_CCarved_ctor_FUN_004286d0
    SUB ESP,0x4                         ; 004286d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004286d4
    PUSH EDX                            ; 004286d8
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004286d9
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004286de
    PUSH 0x5d51e5                       ; 004286e1
    MOV EBX,EAX                         ; 004286e6
    ADD EAX,0x158                       ; 004286e8
    PUSH EAX                            ; 004286ed
    MOV dword ptr [EAX + -0x4],0x5fd484 ; 004286ee
    CALL core_skeleton.cpp_FUN_00569f50 ; 004286f5
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f000000 ; 004286fa
    FLD float ptr [0x005fd470]          ; 00428704 | DAT_005fd470
    MOV dword ptr [EBX + 0x2ff0],0x3f800000 ; 0042870a
    ADD ESP,0x8                         ; 00428714
    MOV dword ptr [EBX + 0xc278],0x0    ; 00428717
    FLD float ptr [0x005fd474]          ; 00428721 | DAT_005fd474
    MOV dword ptr [EBX + 0xc274],0x0    ; 00428727
    PUSH 0x3f800000                     ; 00428731
    FXCH                                ; 00428736
    FSTP float ptr [EBX + 0x2ff4]       ; 00428738
    PUSH 0x3e99999a                     ; 0042873e
    FSTP float ptr [EBX + 0x2ff8]       ; 00428743
    CALL core_actor.cpp_FUN_0040cc00    ; 00428749
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0042874e
    FLD float ptr [ESP + 0x8]           ; 00428752
    ADD ESP,0x8                         ; 00428756
    PUSH 0xff                           ; 00428759
    PUSH 0x0                            ; 0042875e
    FSTP float ptr [EBX + 0xc268]       ; 00428760
    CALL core_actor.cpp_FUN_0040cc60    ; 00428766
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc270],0x0    ; 0042876b
    MOV dword ptr [EBX + 0xc280],0x0    ; 00428775
    MOV dword ptr [EBX + 0xc2d4],0x0    ; 0042877f
    MOV dword ptr [EBX + 0xc284],0x0    ; 00428789
    MOV dword ptr [EBX + 0xc2e4],0x0    ; 00428793
    MOV dword ptr [EBX + 0xc2e8],0x0    ; 0042879d
    MOV dword ptr [EBX + 0xc2ec],0x0    ; 004287a7
    MOV dword ptr [EBX + 0xc264],0x0    ; 004287b1
    MOV dword ptr [EBX + 0x252c],0x40490fdb ; 004287bb
    ADD ESP,0x8                         ; 004287c5
    MOV dword ptr [EBX + 0xc26c],EAX    ; 004287c8
    MOV EAX,EBX                         ; 004287ce
    ADD ESP,0x4                         ; 004287d0
    POP EBX                             ; 004287d3
    RET                                 ; 004287d4

