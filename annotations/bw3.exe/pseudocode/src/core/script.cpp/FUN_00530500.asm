; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_FUN_00530500(CScript *param_1)
;
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004bae55
;   core_script.cpp_FUN_00530530 at 0053054d
;
; Called Functions:
;   core_script.cpp_FUN_00530390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530500
        ;   Label: core_script.cpp_FUN_00530500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00530501
    MOV EDX,dword ptr [EBX + 0x4]       ; 00530505
    PUSH EDX                            ; 00530508
    PUSH EBX                            ; 00530509
    CALL core_script.cpp_FUN_00530390   ; 0053050a
        ;   XREF to: 00530390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_00530390(CScript * this_ptr, CDemonActor * actor)
    MOV dword ptr [EBX + 0x48],0x0      ; 0053050f
    ADD ESP,0x8                         ; 00530516
    MOV dword ptr [EBX + 0x4c],0x0      ; 00530519
    POP EBX                             ; 00530520
    RET                                 ; 00530521

