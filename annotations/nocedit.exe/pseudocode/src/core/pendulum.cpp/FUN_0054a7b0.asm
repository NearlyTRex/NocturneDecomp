; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_pendulum.cpp_FUN_0054a7b0()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0054a7b0
        ;   Label: core_pendulum.cpp_FUN_0054a7b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a7b4
    PUSH EDX                            ; 0054a7b8
    ADD EAX,0x158                       ; 0054a7b9
    PUSH EAX                            ; 0054a7be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0054a7bf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0054a7c4
    RET                                 ; 0054a7c7

