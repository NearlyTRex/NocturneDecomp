; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_toggleGoggles_FUN_005270a0(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CGoggles_005cda01
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.vtable
;   undefined4 g_CGogglesClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_inv.cpp_FUN_004db9e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d22e40]      ; 005270a0 | g_CGogglesClassInfo.name_hash
        ;   Label: core_prye.cpp_CPrye_toggleGoggles_FUN_005270a0
    PUSH EDX                            ; 005270a6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005270a7
    PUSH 0x5cda01                       ; 005270ab | = "CGoggles"
    ADD EAX,0x206e8                     ; 005270b0
    PUSH EAX                            ; 005270b5
    CALL core_inv.cpp_FUN_004db9e0      ; 005270b6
        ;   XREF to: 004db9e0 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004db9e0(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 005270bb
    PUSH EAX                            ; 005270be
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005270bf
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005270c4
    MOV EDX,EAX                         ; 005270c7
    TEST EAX,EAX                        ; 005270c9
    JNZ 0x005270dc                      ; 005270cb
        ;   XREF to: 005270dc (CONDITIONAL_JUMP)  ; LAB_005270dc
    MOV EAX,[0x005fe9dc]                ; 005270cd | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x264],0x0     ; 005270d2 | g_CGameInstance.goggles_active
    JNZ 0x00527100                      ; 005270d9
        ;   XREF to: 00527100 (CONDITIONAL_JUMP)  ; LAB_00527100
    RET                                 ; 005270db
    CMP dword ptr [EAX + 0x2d4],0x0     ; 005270dc
        ;   Label: LAB_005270dc
    SETZ AL                             ; 005270e3
    AND EAX,0xff                        ; 005270e6
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005270eb
    MOV EAX,[0x005fe9dc]                ; 005270f1 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x264],0x0     ; 005270f6 | g_CGameInstance.goggles_active
    JNZ 0x00527100                      ; 005270fd
        ;   XREF to: 00527100 (CONDITIONAL_JUMP)  ; LAB_00527100
    RET                                 ; 005270ff
    PUSH 0x0                            ; 00527100
        ;   Label: LAB_00527100
    MOV EDX,dword ptr [EAX + 0xb8c]     ; 00527102 | g_CGameInstance.vtable
    PUSH EAX                            ; 00527108 | g_CGameInstance
    CALL dword ptr [EDX]                ; 00527109
    ADD ESP,0x8                         ; 0052710b
    RET                                 ; 0052710e

