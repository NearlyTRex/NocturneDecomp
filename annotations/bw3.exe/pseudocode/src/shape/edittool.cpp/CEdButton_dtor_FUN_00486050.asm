; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_00486050(CEdButton *this_ptr,uint flags)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_dtor_FUN_004832b0 at 004832d5
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cbbb
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c5c2
;
; Called Functions:
;   shape_edittool.cpp_FUN_00486070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486050
        ;   Label: shape_edittool.cpp_CEdButton_dtor_FUN_00486050
    MOV EBX,dword ptr [ESP + 0x8]       ; 00486051
    PUSH EBX                            ; 00486055
    CALL shape_edittool.cpp_FUN_00486070 ; 00486056
        ;   XREF to: 00486070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00486070(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0048605b
    MOV EAX,EBX                         ; 0048605e
    POP EBX                             ; 00486060
    RET                                 ; 00486061

