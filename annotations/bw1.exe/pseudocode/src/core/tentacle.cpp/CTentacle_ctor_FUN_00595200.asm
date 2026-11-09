; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_00595200(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tentacle.cpp_factoryFuncTentacle_FUN_005951d0 at 005951e3
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595200
        ;   Label: core_tentacle.cpp_CTentacle_ctor_FUN_00595200
    MOV EDX,dword ptr [ESP + 0x8]       ; 00595201
    PUSH EDX                            ; 00595205
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 00595206
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059520b
    PUSH 0x5f76d8                       ; 0059520e
    MOV EBX,EAX                         ; 00595213
    ADD EAX,0x158                       ; 00595215
    PUSH EAX                            ; 0059521a
    MOV dword ptr [EAX + -0x4],0x606ae4 ; 0059521b
    CALL core_skeleton.cpp_FUN_00569f50 ; 00595222
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2ff4],0x42480000 ; 00595227
    MOV dword ptr [EBX + 0x2ff8],0x42c80000 ; 00595231
    MOV dword ptr [EBX + 0xc268],0x0    ; 0059523b
    ADD ESP,0x8                         ; 00595245
    MOV dword ptr [EBX + 0xc26c],0x0    ; 00595248
    MOV EAX,EBX                         ; 00595252
    MOV dword ptr [EBX + 0xc270],0x0    ; 00595254
    POP EBX                             ; 0059525e
    RET                                 ; 0059525f

