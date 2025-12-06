; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_writeDependencies_FUN_00481630(CDoor * this_ptr, FILE * file_handle)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00481630
        ;   Label: core_door.cpp_CDoor_writeDependencies_FUN_00481630
    MOV EAX,dword ptr [ESP + 0x4]       ; 00481634
    PUSH EDX                            ; 00481638
    ADD EAX,0x158                       ; 00481639
    PUSH EAX                            ; 0048163e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 0048163f | void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00481644
    RET                                 ; 00481647

