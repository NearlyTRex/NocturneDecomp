; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049dbbe(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f5d0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0049dbbe
        ;   Label: shape_edittool.cpp_FUN_0049dbbe
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049dbc0
    CMP EDX,dword ptr [0x01c3f5d0]      ; 0049dbc4 | DAT_01c3f5d0
    JZ 0x0049c9dd                       ; 0049dbca
        ;   XREF to: 0049c9dd (CONDITIONAL_JUMP)  ; LAB_0049c9dd
    RET                                 ; 0049dbd0

