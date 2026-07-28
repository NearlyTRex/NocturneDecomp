; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gabriela_cpp_CGabriella_renderTransparent_FUN_00498db0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00498db0
        ;   Label: core_gabriela.cpp_CGabriella_renderTransparent_FUN_00498db0
    MOV EAX,dword ptr [EAX + 0x1f8d0]   ; 00498db4
    PUSH EAX                            ; 00498dba
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00498dbb
    CALL dword ptr [EDX + 0xc]          ; 00498dc1
    ADD ESP,0x4                         ; 00498dc4
    MOV EDX,dword ptr [ESP + 0x4]       ; 00498dc7
    PUSH EDX                            ; 00498dcb
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 ; 00498dcc
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260(CCharacter * this_ptr)
    MOV EAX,0x1                         ; 00498dd1
    ADD ESP,0x4                         ; 00498dd6
    RET                                 ; 00498dd9

