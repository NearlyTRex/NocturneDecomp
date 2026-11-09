; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * core_shadow_cpp_CShadow_ctor_FUN_0055dad0(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shadow.cpp_factoryFuncShadow_FUN_0055daa0 at 0055dab3
;
; Referenced Globals:
;   undefined4 DAT_00605194
;   undefined4 DAT_00605198
;   undefined4 DAT_0060519c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dad0
        ;   Label: core_shadow.cpp_CShadow_ctor_FUN_0055dad0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055dad1
    PUSH EDX                            ; 0055dad5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0055dad6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0055dadb
    PUSH 0x5f14d5                       ; 0055dade
    MOV EBX,EAX                         ; 0055dae3
    ADD EAX,0x158                       ; 0055dae5
    PUSH EAX                            ; 0055daea
    MOV dword ptr [EAX + -0x4],0x6051b4 ; 0055daeb
    CALL core_skeleton.cpp_FUN_00569f50 ; 0055daf2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f800000 ; 0055daf7
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 0055db01
    MOV dword ptr [EBX + 0xc30c],0x1    ; 0055db0b
    MOV dword ptr [EBX + 0xc268],0x0    ; 0055db15
    MOV dword ptr [EBX + 0xc290],0x1    ; 0055db1f
    MOV dword ptr [EBX + 0xc2b8],0x0    ; 0055db29
    MOV dword ptr [EBX + 0xc2bc],0x40a00000 ; 0055db33
    MOV dword ptr [EBX + 0xc2c0],0x0    ; 0055db3d
    MOV dword ptr [EBX + 0xc2c4],0x0    ; 0055db47
    MOV dword ptr [EBX + 0xc2cc],0x0    ; 0055db51
    MOV dword ptr [EBX + 0xc300],0x3f800000 ; 0055db5b
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 0055db65
    MOV dword ptr [EBX + 0xc2f0],0x0    ; 0055db6f
    MOV dword ptr [EBX + 0xc2e8],0x0    ; 0055db79
    MOV dword ptr [EBX + 0xc2ec],0x0    ; 0055db83
    FLD float ptr [0x00605194]          ; 0055db8d | DAT_00605194
    MOV dword ptr [EBX + 0xc2f8],0x0    ; 0055db93
    FLD float ptr [0x00605198]          ; 0055db9d | DAT_00605198
    MOV dword ptr [EBX + 0xc2f4],0x41200000 ; 0055dba3
    FLD float ptr [0x0060519c]          ; 0055dbad | DAT_0060519c
    MOV dword ptr [EBX + 0xc304],0x0    ; 0055dbb3
    ADD ESP,0x8                         ; 0055dbbd
    MOV dword ptr [EBX + 0xc308],0x0    ; 0055dbc0
    MOV EAX,EBX                         ; 0055dbca
    FXCH ST2                            ; 0055dbcc
    FSTP float ptr [EBX + 0x2ff4]       ; 0055dbce
    FSTP float ptr [EBX + 0x2ff8]       ; 0055dbd4
    FSTP float ptr [EBX + 0xc2d0]       ; 0055dbda
    POP EBX                             ; 0055dbe0
    RET                                 ; 0055dbe1

