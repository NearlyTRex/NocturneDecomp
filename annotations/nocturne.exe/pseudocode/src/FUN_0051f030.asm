; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051f030(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   FUN_00518f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f030
        ;   Label: FUN_0051f030
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051f031
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051f035
    PUSH ECX                            ; 0051f039
    LEA EAX,[EDX + 0xe80]               ; 0051f03a
    PUSH EAX                            ; 0051f040
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051f041
    PUSH EBX                            ; 0051f045
    PUSH EDX                            ; 0051f046
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051f047
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051f04c
    PUSH EAX                            ; 0051f04f
    CALL FUN_00518f60                   ; 0051f050
        ;   XREF to: 00518f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00518f60()
    ADD ESP,0x10                        ; 0051f055
    POP EBX                             ; 0051f058
    RET                                 ; 0051f059

