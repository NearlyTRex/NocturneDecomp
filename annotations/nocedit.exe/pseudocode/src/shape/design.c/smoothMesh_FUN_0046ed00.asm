; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_smoothMesh_FUN_0046ed00(void)
;
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f7a1
;
; Referenced Globals:
;   TerminatedCString s_Mesh_smoothed_0061e0a3
;   CDSEModel g_CDSEModelInstance
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020
;   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ed00
        ;   Label: shape_design.c_smoothMesh_FUN_0046ed00
    PUSH ESI                            ; 0046ed01
    PUSH EDI                            ; 0046ed02
    PUSH EBP                            ; 0046ed03
    MOV EBP,ESP                         ; 0046ed04
    SUB ESP,0x0                         ; 0046ed06
    PUSH 0x0                            ; 0046ed0c
    MOV EAX,0x1eb2760                   ; 0046ed0e | g_CDSEModelInstance
    PUSH EAX                            ; 0046ed13 | g_CDSEModelInstance
    CALL shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 ; 0046ed14
        ;   XREF to: 0048f770 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel * this_ptr, uint part_index)
    ADD ESP,0x8                         ; 0046ed19
    MOV EAX,0x1eb2760                   ; 0046ed1c | g_CDSEModelInstance
    PUSH EAX                            ; 0046ed21 | g_CDSEModelInstance
    CALL shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020 ; 0046ed22
        ;   XREF to: 00490020 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020(CDSEModel * this_ptr)
    ADD ESP,0x4                         ; 0046ed27
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 0046ed2a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0046ed2f
    PUSH 0x0                            ; 0046ed31
    MOV EAX,0x61e0a3                    ; 0046ed33 | = "Mesh smoothed."
    PUSH EAX                            ; 0046ed38 | = "Mesh smoothed."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ed39
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ed3e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ed41
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    POP EBP                             ; 0046ed46
    POP EDI                             ; 0046ed47
    POP ESI                             ; 0046ed48
    POP EBX                             ; 0046ed49
    RET                                 ; 0046ed4a

