; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004cf2c0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_grave.cpp_factoryFuncGrave_FUN_004cf290 at 004cf2a3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf2c0
        ;   Label: core_grave.cpp_CGrave_ctor_FUN_004cf2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cf2c1
    PUSH EBX                            ; 004cf2c5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004cf2c6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cf2cb
    ADD EAX,0x158                       ; 004cf2ce
    PUSH EAX                            ; 004cf2d3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 004cf2d4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cf2d9
    LEA EBX,[EAX + 0xfffffea8]          ; 004cf2dc
    PUSH 0x5c47b6                       ; 004cf2e2
    LEA EAX,[EBX + 0x158]               ; 004cf2e7
    PUSH EAX                            ; 004cf2ed
    MOV dword ptr [EBX + 0x154],0x5e0f24 ; 004cf2ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004cf2f8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cf2fd
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 004cf307
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004cf311
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004cf31b
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004cf325
    ADD ESP,0x8                         ; 004cf32f
    MOV byte ptr [EBX + 0x2e8],0x0      ; 004cf332
    MOV EAX,EBX                         ; 004cf339
    MOV byte ptr [EBX + 0x34c],0x0      ; 004cf33b
    POP EBX                             ; 004cf342
    RET                                 ; 004cf343

