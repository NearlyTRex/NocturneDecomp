; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_inv_cpp_FUN_004f8ce0(CInventory *param_1,char *param_2)
;
;
; XREF[2]:
;   core_doc.cpp_FUN_00469550 at 0046bb74
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7c68
;
; Called Functions:
;   core_inv.cpp_FUN_004f8c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f8ce0
        ;   Label: core_inv.cpp_FUN_004f8ce0
    PUSH EDX                            ; 004f8ce4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f8ce5
    PUSH ECX                            ; 004f8ce9
    CALL core_inv.cpp_FUN_004f8c90      ; 004f8cea
        ;   XREF to: 004f8c90 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f8c90(CInventory * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8cef
    TEST EAX,EAX                        ; 004f8cf2
    SETNZ AL                            ; 004f8cf4
    AND EAX,0xff                        ; 004f8cf7
    RET                                 ; 004f8cfc

