; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBride * core_bride_cpp_CBride_ctor_FUN_004238c0(CBride *this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bride.cpp_factoryFuncBride_FUN_00423890 at 004238a3
;
; Referenced Globals:
;   undefined4 DAT_005fd090
;   undefined4 DAT_005fd094
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004238c0
        ;   Label: core_bride.cpp_CBride_ctor_FUN_004238c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004238c1
    PUSH EDX                            ; 004238c5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004238c6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004238cb
    PUSH 0x5d4df7                       ; 004238ce
    MOV EBX,EAX                         ; 004238d3
    ADD EAX,0x158                       ; 004238d5
    PUSH EAX                            ; 004238da
    MOV dword ptr [EAX + -0x4],0x5fd0a4 ; 004238db
    CALL core_skeleton.cpp_FUN_00569f50 ; 004238e2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f400000 ; 004238e7
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 004238f1
    FLD float ptr [0x005fd090]          ; 004238fb | DAT_005fd090
    MOV dword ptr [EBX + 0xc290],0x0    ; 00423901
    FLD float ptr [0x005fd094]          ; 0042390b | DAT_005fd094
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 00423911
    ADD ESP,0x8                         ; 0042391b
    MOV dword ptr [EBX + 0xc28c],0x0    ; 0042391e
    MOV EAX,EBX                         ; 00423928
    FXCH                                ; 0042392a
    FSTP float ptr [EBX + 0x2ff4]       ; 0042392c
    FSTP float ptr [EBX + 0x2ff8]       ; 00423932
    POP EBX                             ; 00423938
    RET                                 ; 00423939

