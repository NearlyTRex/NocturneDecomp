; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_CDemonActor_getBoundingBox_FUN_0040a060(undefined4 param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0040a060
        ;   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_0040a060
    MOV dword ptr [EAX + 0x4],0x0       ; 0040a064
    MOV dword ptr [EAX + 0x8],0xc0800000 ; 0040a06b
    MOV dword ptr [EAX + 0xc],0x40800000 ; 0040a072
    MOV dword ptr [EAX + 0x10],0x41000000 ; 0040a079
    MOV dword ptr [EAX + 0x14],0x40800000 ; 0040a080
    MOV dword ptr [EAX],0xc0800000      ; 0040a087
    RET                                 ; 0040a08d

