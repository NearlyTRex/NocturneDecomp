; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimpleParticleSystem * core_bwspart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000(CSimpleParticleSystem *this_ptr,uint flags)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8000
        ;   Label: core_bwspart.cpp_CSimpleParticleSystem_dtor_FUN_005a8000
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8001
    MOV EDX,dword ptr [EBX + 0x38]      ; 005a8005
    MOV dword ptr [EBX + 0x40],0x6002e4 ; 005a8008
    TEST EDX,EDX                        ; 005a800f
    JNZ 0x005a8017                      ; 005a8011
        ;   XREF to: 005a8017 (CONDITIONAL_JUMP)  ; LAB_005a8017
    MOV EAX,EBX                         ; 005a8013
    POP EBX                             ; 005a8015
    RET                                 ; 005a8016
    MOV ECX,dword ptr [EBX + 0x3c]      ; 005a8017
        ;   Label: LAB_005a8017
    PUSH ECX                            ; 005a801a
    CALL crt_unknown.c_FUN_005b86a0     ; 005a801b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005a8020
    MOV EAX,EBX                         ; 005a8023
    POP EBX                             ; 005a8025
    RET                                 ; 005a8026

