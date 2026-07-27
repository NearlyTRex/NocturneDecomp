; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0050d640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_set.cpp_FUN_0050dd60 at 0050ddc3
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d640
        ;   Label: core_set.cpp_FUN_0050d640
    PUSH ESI                            ; 0050d641
    PUSH 0x3c                           ; 0050d642
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d644
    PUSH EDX                            ; 0050d648
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050d649
    PUSH ECX                            ; 0050d64d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050d64e
    PUSH EBX                            ; 0050d652
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050d653
    PUSH ESI                            ; 0050d657
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 ; 0050d658
        ;   XREF to: 0050d6a0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0()
    ADD ESP,0x14                        ; 0050d65d
    POP ESI                             ; 0050d660
    POP EBX                             ; 0050d661
    RET                                 ; 0050d662

