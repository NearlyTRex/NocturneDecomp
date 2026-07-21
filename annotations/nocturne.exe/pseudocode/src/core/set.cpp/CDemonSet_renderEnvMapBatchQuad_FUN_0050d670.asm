; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0050ddd0 at 0050debd
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d670
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670
    PUSH ESI                            ; 0050d671
    PUSH 0x48                           ; 0050d672
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050d674
    PUSH EDX                            ; 0050d678
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050d679
    PUSH ECX                            ; 0050d67d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050d67e
    PUSH EBX                            ; 0050d682
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050d683
    PUSH ESI                            ; 0050d687
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 ; 0050d688
        ;   XREF to: 0050d6a0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0()
    ADD ESP,0x14                        ; 0050d68d
    POP ESI                             ; 0050d690
    POP EBX                             ; 0050d691
    RET                                 ; 0050d692

