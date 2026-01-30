; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[15]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f749
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 0053ac1a
;   core_msnedit.cpp_CDemonMission_FUN_0053b030 at 0053b273
;   core_msnedit.cpp_CDemonMission_FUN_0053b510 at 0053b753
;   core_msnedit.cpp_CDemonMission_FUN_0053b9f0 at 0053ba3f
;   core_msnedit.cpp_CDemonMission_FUN_0053c210 at 0053c28f
;   core_msnedit.cpp_CDemonMission_FUN_0053d8b0 at 0053d951
;   core_msnedit.cpp_CDemonMission_FUN_0053dcf0 at 0053dda4
;   core_msnedit.cpp_CDemonMission_FUN_0053df90 at 0053e05f
;   core_msnedit.cpp_CDemonMission_FUN_0053ec80 at 0053edc1
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004a2ec0
        ;   Label: shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
    MOV EAX,dword ptr [ECX]             ; 004a2ec4
    DEC EAX                             ; 004a2ec6
    PUSH EAX                            ; 004a2ec7
    PUSH 0x0                            ; 004a2ec8
    MOV EDX,dword ptr [ECX + 0xc]       ; 004a2eca
    PUSH ECX                            ; 004a2ecd
    CALL dword ptr [EDX + 0x8]          ; 004a2ece
    ADD ESP,0xc                         ; 004a2ed1
    RET                                 ; 004a2ed4

