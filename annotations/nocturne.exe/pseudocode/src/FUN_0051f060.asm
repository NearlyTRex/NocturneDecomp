; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051f060(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   FUN_00519120
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f060
        ;   Label: FUN_0051f060
    LEA EAX,[EDX + 0xe80]               ; 0051f064
    PUSH EAX                            ; 0051f06a
    PUSH EDX                            ; 0051f06b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051f06c
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051f071
    PUSH EAX                            ; 0051f074
    CALL FUN_00519120                   ; 0051f075
        ;   XREF to: 00519120 (UNCONDITIONAL_CALL)  ; undefined FUN_00519120()
    ADD ESP,0x8                         ; 0051f07a
    RET                                 ; 0051f07d

