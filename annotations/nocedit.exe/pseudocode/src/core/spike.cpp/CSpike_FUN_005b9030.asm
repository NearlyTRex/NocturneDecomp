; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_spike.cpp_CSpike_FUN_005b9030(CSpike * this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005b9030
        ;   Label: core_spike.cpp_CSpike_FUN_005b9030
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b9034
    PUSH EDX                            ; 005b9038
    ADD EAX,0x158                       ; 005b9039
    PUSH EAX                            ; 005b903e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 005b903f
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 005b9044
    RET                                 ; 005b9047

