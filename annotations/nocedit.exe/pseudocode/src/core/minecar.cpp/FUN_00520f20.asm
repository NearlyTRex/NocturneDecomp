; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMineCar * core_minecar.cpp_FUN_00520f20(CMineCar * this_ptr)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
;
; Called Functions:
;   core_platfrm.cpp_FUN_0054c850
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00520f20
        ;   Label: core_minecar.cpp_FUN_00520f20
    PUSH EDX                            ; 00520f24
    CALL core_platfrm.cpp_FUN_0054c850  ; 00520f25 | CPlatform * core_platfrm.cpp_FUN_0054c850(CPlatform * this_ptr)
        ;   XREF to: 0054c850 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520f2a
    MOV dword ptr [EAX + 0x154],0x6615d4 ; 00520f2d | CDemonActor_vtable PTR_core_minecar.cpp_FUN_006615d4
    RET                                 ; 00520f37

