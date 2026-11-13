; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBackgroundActor * __cdecl core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040ee80 at 0040ee93
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eeb0
        ;   Label: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040eeb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040eeb1
    PUSH EBX                            ; 0040eeb5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 0040eeb6
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040eebb
    ADD EAX,0x15c                       ; 0040eebe
    PUSH EAX                            ; 0040eec3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0040eec4
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040eec9
    LEA EBX,[EAX + 0xfffffea4]          ; 0040eecc
    PUSH 0x5d332c                       ; 0040eed2
    LEA EAX,[EBX + 0x15c]               ; 0040eed7
    PUSH EAX                            ; 0040eedd
    MOV dword ptr [EBX + 0x154],0x5fb9a4 ; 0040eede
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 0040eee8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0040eeed
    ADD ESP,0x8                         ; 0040eef7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0040eefa
    MOV EAX,EBX                         ; 0040ef04
    MOV dword ptr [EBX + 0x158],0x1     ; 0040ef06
    POP EBX                             ; 0040ef10
    RET                                 ; 0040ef11

