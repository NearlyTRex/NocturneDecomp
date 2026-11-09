; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10(CSentinel *this_ptr)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sentinel.cpp_factoryFuncSentinel_FUN_0054b9e0 at 0054b9f3
;
; Referenced Globals:
;   undefined4 DAT_00604e4c
;   undefined4 DAT_00604e50
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ba10
        ;   Label: core_sentinel.cpp_CSentinel_ctor_FUN_0054ba10
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054ba11
    PUSH EDX                            ; 0054ba15
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0054ba16
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054ba1b
    PUSH 0x5f02c3                       ; 0054ba1e
    MOV EBX,EAX                         ; 0054ba23
    ADD EAX,0x158                       ; 0054ba25
    PUSH EAX                            ; 0054ba2a
    MOV dword ptr [EAX + -0x4],0x604e64 ; 0054ba2b
    CALL core_skeleton.cpp_FUN_00569f50 ; 0054ba32
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    FLD float ptr [0x00604e4c]          ; 0054ba37 | DAT_00604e4c
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0054ba3d
    FLD float ptr [0x00604e50]          ; 0054ba47 | DAT_00604e50
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 0054ba4d
    ADD ESP,0x8                         ; 0054ba57
    MOV dword ptr [EBX + 0xc26c],0x0    ; 0054ba5a
    MOV EAX,EBX                         ; 0054ba64
    FXCH                                ; 0054ba66
    FSTP float ptr [EBX + 0x2ff4]       ; 0054ba68
    FSTP float ptr [EBX + 0x2ff8]       ; 0054ba6e
    POP EBX                             ; 0054ba74
    RET                                 ; 0054ba75

