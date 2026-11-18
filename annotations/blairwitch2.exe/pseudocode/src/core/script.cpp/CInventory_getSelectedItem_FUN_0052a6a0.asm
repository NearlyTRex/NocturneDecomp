; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_script_cpp_CInventory_getSelectedItem_FUN_0052a6a0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00527fc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052a6a0
        ;   Label: core_script.cpp_CInventory_getSelectedItem_FUN_0052a6a0
    MOV EAX,dword ptr [EDX + 0x468]     ; 0052a6a4
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x5fc] ; 0052a6aa
    RET                                 ; 0052a6b1

