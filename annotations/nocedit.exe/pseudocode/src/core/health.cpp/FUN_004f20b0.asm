; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_health_cpp_FUN_004f20b0(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f20b0
        ;   Label: core_health.cpp_FUN_004f20b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f20b4
    PUSH EDX                            ; 004f20b8
    ADD EAX,0x158                       ; 004f20b9
    PUSH EAX                            ; 004f20be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 004f20bf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 004f20c4
    RET                                 ; 004f20c7

