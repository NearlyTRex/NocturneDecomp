; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_multicramTextures_FUN_0046eb80(void)
;
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f78d
;
; Referenced Globals:
;   CMultiCram g_CMultiCramInstance
;
; Called Functions:
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046eb80
        ;   Label: shape_design.c_multicramTextures_FUN_0046eb80
    PUSH ESI                            ; 0046eb81
    PUSH EDI                            ; 0046eb82
    PUSH EBP                            ; 0046eb83
    MOV EBP,ESP                         ; 0046eb84
    SUB ESP,0x0                         ; 0046eb86
    MOV EAX,0x1eb17bc                   ; 0046eb8c | g_CMultiCramInstance
    PUSH EAX                            ; 0046eb91 | g_CMultiCramInstance
    CALL shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 ; 0046eb92
        ;   XREF to: 0053ee70 (UNCONDITIONAL_CALL)  ; void shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70(CMultiCram * this_ptr)
    ADD ESP,0x4                         ; 0046eb97
    POP EBP                             ; 0046eb9a
    POP EDI                             ; 0046eb9b
    POP ESI                             ; 0046eb9c
    POP EBX                             ; 0046eb9d
    RET                                 ; 0046eb9e

