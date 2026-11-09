; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bbcb0(int param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bc020 at 004bc04b
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_00499380
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bbcb0
        ;   Label: core_fldnotes.cpp_FUN_004bbcb0
    ADD EAX,0x148                       ; 004bbcb4
    PUSH EAX                            ; 004bbcb9
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 004bbcba
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    SUB EAX,0x148                       ; 004bbcbf
    MOV byte ptr [EAX + 0x40],0x0       ; 004bbcc4
    MOV dword ptr [EAX + 0x144],0x0     ; 004bbcc8
    MOV dword ptr [EAX + 0x140],0xffffffff ; 004bbcd2
    MOV dword ptr [EAX + 0x158],0xffffffff ; 004bbcdc
    ADD ESP,0x4                         ; 004bbce6
    MOV byte ptr [EAX],0x0              ; 004bbce9
    RET                                 ; 004bbcec

