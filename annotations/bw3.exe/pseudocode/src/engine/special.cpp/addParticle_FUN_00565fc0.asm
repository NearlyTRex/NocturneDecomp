; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_addParticle_FUN_00565fc0(void *particle_data,int particle_type)
;
; Parameters:
; void *           Stack[0x4]:4   particle_data
; int              Stack[0x8]:4   particle_type
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6034
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565fc0 | DAT_01c6cee8
        ;   Label: engine_special.cpp_addParticle_FUN_00565fc0
    JNZ 0x00565fcc                      ; 00565fc7
        ;   XREF to: 00565fcc (CONDITIONAL_JUMP)  ; LAB_00565fcc
    XOR EAX,EAX                         ; 00565fc9
    RET                                 ; 00565fcb
    PUSH EBX                            ; 00565fcc
        ;   Label: LAB_00565fcc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00565fcd
    PUSH ECX                            ; 00565fd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00565fd2
    PUSH EBX                            ; 00565fd6
    CALL dword ptr [0x02cf6034]         ; 00565fd7 | DAT_02cf6034
    ADD ESP,0x8                         ; 00565fdd
    POP EBX                             ; 00565fe0
    RET                                 ; 00565fe1

