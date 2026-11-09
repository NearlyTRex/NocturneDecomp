; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_restoreVideoMode_FUN_00582310(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_FUN_005ad270 at 005ad299
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40 at 005aca58
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c8339c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582310
        ;   Label: engine_special.cpp_restoreVideoMode_FUN_00582310
    CMP dword ptr [0x01c50948],0x0      ; 00582311 | DAT_01c50948
    JZ 0x0058232c                       ; 00582318
        ;   XREF to: 0058232c (CONDITIONAL_JUMP)  ; LAB_0058232c
    XOR ECX,ECX                         ; 0058231a
    MOV EBX,dword ptr [0x02c8339c]      ; 0058231c | DAT_02c8339c
    MOV dword ptr [0x01c50948],ECX      ; 00582322 | DAT_01c50948
    TEST EBX,EBX                        ; 00582328
    JNZ 0x00582330                      ; 0058232a
        ;   XREF to: 00582330 (CONDITIONAL_JUMP)  ; LAB_00582330
    XOR EAX,EAX                         ; 0058232c
        ;   Label: LAB_0058232c
    POP EBX                             ; 0058232e
    RET                                 ; 0058232f
    CALL dword ptr [0x02c8339c]         ; 00582330 | DAT_02c8339c
        ;   Label: LAB_00582330
    POP EBX                             ; 00582336
    RET                                 ; 00582337

