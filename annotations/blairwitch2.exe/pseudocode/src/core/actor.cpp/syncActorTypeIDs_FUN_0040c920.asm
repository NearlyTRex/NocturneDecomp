; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c920(void)
;
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_save_FUN_0040b0a0 at 0040b0af
;   core_mission.cpp_FUN_004fbce0 at 004fbdcb
;
; Referenced Globals:
;   undefined4 DAT_007bc044
;   undefined4 DAT_007bc048
;   undefined4 DAT_007bc04c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040c920
        ;   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040c920
    MOV ESI,dword ptr [0x007bc044]      ; 0040c921 | DAT_007bc044
    XOR EAX,EAX                         ; 0040c927
    TEST ESI,ESI                        ; 0040c929
    JLE 0x0040c947                      ; 0040c92b
        ;   XREF to: 0040c947 (CONDITIONAL_JUMP)  ; LAB_0040c947
    PUSH EBX                            ; 0040c92d
    XOR EDX,EDX                         ; 0040c92e
    MOV ECX,dword ptr [EDX + 0x7bc048]  ; 0040c930 | DAT_007bc048 | DAT_007bc04c
        ;   Label: LAB_0040c930
    ADD EDX,0x4                         ; 0040c936
    MOV EBX,dword ptr [ECX + 0x30]      ; 0040c939
    MOV ECX,dword ptr [ECX + 0x34]      ; 0040c93c
    INC EAX                             ; 0040c93f
    MOV dword ptr [EBX],ECX             ; 0040c940
    CMP EAX,ESI                         ; 0040c942
    JL 0x0040c930                       ; 0040c944
        ;   XREF to: 0040c930 (CONDITIONAL_JUMP)  ; LAB_0040c930
    POP EBX                             ; 0040c946
    MOV dword ptr [0x007bc044],ESI      ; 0040c947 | DAT_007bc044
        ;   Label: LAB_0040c947
    POP ESI                             ; 0040c94d
    RET                                 ; 0040c94e

