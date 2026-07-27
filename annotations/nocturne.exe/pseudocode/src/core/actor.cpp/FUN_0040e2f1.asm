; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040e2f1(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 0040e2f1
        ;   Label: core_actor.cpp_FUN_0040e2f1
    AND AL,0x4                          ; 0040e2f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e2f4
    MOV EAX,dword ptr [EAX]             ; 0040e2f8
    MOV dword ptr [EDX],EAX             ; 0040e2fa
    MOV EAX,EDX                         ; 0040e2fc
    RET                                 ; 0040e2fe

