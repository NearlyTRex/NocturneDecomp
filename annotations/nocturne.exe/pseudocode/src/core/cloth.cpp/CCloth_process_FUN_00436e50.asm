; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_process_FUN_00436e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[5]:
;   core_cloth.cpp_CClothList_process_FUN_00438550 at 00438584
;   core_gabriela.cpp_FUN_00495a20 at 00496245
;   core_mimic.cpp_FUN_004d4f30 at 004d5726
;   core_svetlana.cpp_FUN_00541d00 at 00542032
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d377
;
; Called Functions:
;   core_cloth.cpp_CCloth_step_FUN_00436e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436e50
        ;   Label: core_cloth.cpp_CCloth_process_FUN_00436e50
    PUSH ESI                            ; 00436e51
    MOV EDX,dword ptr [ESP + 0x20]      ; 00436e52
    PUSH EDX                            ; 00436e56
    PUSH dword ptr [ESP + 0x20]         ; 00436e57
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00436e5b
    PUSH dword ptr [ESP + 0x20]         ; 00436e5f
    PUSH ECX                            ; 00436e63
    MOV EBX,dword ptr [ESP + 0x20]      ; 00436e64
    PUSH EBX                            ; 00436e68
    MOV ESI,dword ptr [ESP + 0x20]      ; 00436e69
    PUSH ESI                            ; 00436e6d
    CALL core_cloth.cpp_CCloth_step_FUN_00436e80 ; 00436e6e
        ;   XREF to: 00436e80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_step_FUN_00436e80()
    ADD ESP,0x18                        ; 00436e73
    POP ESI                             ; 00436e76
    POP EBX                             ; 00436e77
    RET                                 ; 00436e78

