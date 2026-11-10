; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char *** core_fldnotes_cpp_FUN_004bbcf0(int param_1)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bbf60 at 004bbfb2
;
; Called Functions:
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bbcf0
        ;   Label: core_fldnotes.cpp_FUN_004bbcf0
    PUSH 0x0                            ; 004bbcf4
    ADD EAX,0x148                       ; 004bbcf6
    PUSH EAX                            ; 004bbcfb
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 004bbcfc
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbd01
    SUB EAX,0x148                       ; 004bbd04
    RET                                 ; 004bbd09

