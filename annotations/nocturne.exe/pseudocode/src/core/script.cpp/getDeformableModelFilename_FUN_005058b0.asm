; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_getDeformableModelFilename_FUN_005058b0(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_parseBodyPartMask_FUN_004fe3d0 at 004fe460
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005058b0
        ;   Label: core_script.cpp_getDeformableModelFilename_FUN_005058b0
    ADD EAX,0x2a70                      ; 005058b4
    RET                                 ; 005058b9

