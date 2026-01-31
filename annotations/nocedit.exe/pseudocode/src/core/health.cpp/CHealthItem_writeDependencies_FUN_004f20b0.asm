; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_health_cpp_CHealthItem_writeDependencies_FUN_004f20b0(CHealthItem *this_ptr,_FILE *file_handle)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f20b0
        ;   Label: core_health.cpp_CHealthItem_writeDependencies_FUN_004f20b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f20b4
    PUSH EDX                            ; 004f20b8
    ADD EAX,0x158                       ; 004f20b9
    PUSH EAX                            ; 004f20be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 004f20bf
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f20c4
    RET                                 ; 004f20c7

