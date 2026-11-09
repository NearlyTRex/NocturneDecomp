; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_setupZBufferScanlines_FUN_00538970(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 at 0053887c
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 00538581
;
; Referenced Globals:
;   undefined4 DAT_01c2b64c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00538970
        ;   Label: core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538974
    XOR EAX,EAX                         ; 00538977
    TEST EDX,EDX                        ; 00538979
    JLE 0x005389a1                      ; 0053897b
        ;   XREF to: 005389a1 (CONDITIONAL_JUMP)  ; LAB_005389a1
    PUSH ESI                            ; 0053897d
    PUSH EBX                            ; 0053897e
    XOR EDX,EDX                         ; 0053897f
    MOV EBX,dword ptr [ECX]             ; 00538981
        ;   Label: LAB_00538981
    IMUL EBX,EAX                        ; 00538983
    MOV ESI,dword ptr [ECX + 0x24]      ; 00538986
    SHL EBX,0x2                         ; 00538989
    ADD EBX,ESI                         ; 0053898c
    MOV dword ptr [EDX + 0x1c2b64c],EBX ; 0053898e | DAT_01c2b64c
    INC EAX                             ; 00538994
    MOV EBX,dword ptr [ECX + 0x4]       ; 00538995
    ADD EDX,0x4                         ; 00538998
    CMP EAX,EBX                         ; 0053899b
    JL 0x00538981                       ; 0053899d
        ;   XREF to: 00538981 (CONDITIONAL_JUMP)  ; LAB_00538981
    POP EBX                             ; 0053899f
    POP ESI                             ; 005389a0
    RET                                 ; 005389a1
        ;   Label: LAB_005389a1

