; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STreeNode * __cdecl shape_design_c_allocateSpatialTreeNode_FUN_00457ed0(void)
;
;
; XREF[2]:
;   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 at 004619f5
;   shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 at 004580ee
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061a856
;
; Called Functions:
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457ed0
        ;   Label: shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
    PUSH ESI                            ; 00457ed1
    PUSH EDI                            ; 00457ed2
    PUSH EBP                            ; 00457ed3
    MOV EBP,ESP                         ; 00457ed4
    SUB ESP,0x4                         ; 00457ed6
    PUSH 0x166                          ; 00457edc
    MOV EAX,0x61a856                    ; 00457ee1 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00457ee6 | = "..\\shape\\design.c"
    PUSH 0x1c                           ; 00457ee7
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00457ee9
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00457eee
    MOV dword ptr [EBP + -0x4],EAX      ; 00457ef1
    MOV EAX,dword ptr [EBP + -0x4]      ; 00457ef4
    MOV ESP,EBP                         ; 00457ef7
    POP EBP                             ; 00457ef9
    POP EDI                             ; 00457efa
    POP ESI                             ; 00457efb
    POP EBX                             ; 00457efc
    RET                                 ; 00457efd

