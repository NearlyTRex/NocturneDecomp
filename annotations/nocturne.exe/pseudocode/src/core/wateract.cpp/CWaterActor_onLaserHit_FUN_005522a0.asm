; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_CWaterActor_onLaserHit_FUN_005522a0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040ab10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005522a0
        ;   Label: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005522a0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005522a1
    PUSH EBX                            ; 005522a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005522a6
    PUSH EDX                            ; 005522aa
    CALL core_actor.cpp_FUN_0040ab10    ; 005522ab
        ;   XREF to: 0040ab10 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ab10()
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 005522b0
    ADD ESP,0x8                         ; 005522b7
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 005522ba
    POP EBX                             ; 005522c1
    RET                                 ; 005522c2

