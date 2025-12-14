; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_CMorphModel_FUN_0052b350(CMorphModel * this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_FUN_0052b330 at 0052b335
;   core_morph.cpp_FUN_0052bcb0 at 0052c4c9
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052b350
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052b350
    PUSH EDX                            ; 0052b354
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b355
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052b35a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052b35d
    ADD EAX,0x608                       ; 0052b361
    PUSH EAX                            ; 0052b366
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b367
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052b36c
    RET                                 ; 0052b36f

