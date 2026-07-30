; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stone_cpp_FUN_00534d00(CBoxActor *param_1)
;
;
; XREF[1]:
;   core_stone.cpp_factoryFunc_FUN_00534cd0 at 00534ce3
;
; Referenced Globals:
;   CDemonActor_vtable g_CTempleStoneVTable
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534d00
        ;   Label: core_stone.cpp_FUN_00534d00
    PUSH EDX                            ; 00534d04
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300 ; 00534d05
        ;   XREF to: 0041e300 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041e300(CBoxActor * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x5a25d4 ; 00534d0a | g_CTempleStoneVTable
    ADD ESP,0x4                         ; 00534d14
    MOV dword ptr [EAX + 0x664],0x0     ; 00534d17
    RET                                 ; 00534d21

