; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int shape_edittool_cpp_FUN_0049dc20(int param_1)
;
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0049dbe0 at 0049dbe6
;   shape_edittool.cpp_FUN_0049dc70 at 0049dc87
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049dc20
        ;   Label: shape_edittool.cpp_FUN_0049dc20
    MOV ECX,dword ptr [EDX + 0x14]      ; 0049dc24
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0049dc27
    SUB EAX,ECX                         ; 0049dc2a
    MOV EDX,EAX                         ; 0049dc2c
    SHL EAX,0x3                         ; 0049dc2e
    SUB EAX,EDX                         ; 0049dc31
    MOV EDX,EAX                         ; 0049dc33
    SAR EDX,0x1f                        ; 0049dc35
    SHL EDX,0x3                         ; 0049dc38
    SBB EAX,EDX                         ; 0049dc3b
    SAR EAX,0x3                         ; 0049dc3d
    RET                                 ; 0049dc40

