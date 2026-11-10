; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_schngeis_cpp_CSchnellGeist_archive_FUN_005a3bf0(CSchnellGeist *this_ptr)
;
; Parameters:
; CSchnellGeist *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_BreathState_005f0204+2
;   int g_CSchnellGeistClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3bf0
        ;   Label: core_schngeis.cpp_CSchnellGeist_archive_FUN_005a3bf0
    PUSH EDX                            ; 005a3bf4
    CALL core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10 ; 005a3bf5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10(CTwigZombie * this_ptr)
    MOV ECX,dword ptr [0x0061eb24]      ; 005a3bfa | g_CSchnellGeistClassVersion
    ADD ESP,0x4                         ; 005a3c00
    CMP ECX,0x2                         ; 005a3c03
    JGE 0x005a3c09                      ; 005a3c06
        ;   XREF to: 005a3c09 (CONDITIONAL_JUMP)  ; LAB_005a3c09
    RET                                 ; 005a3c08
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a3c09
        ;   Label: LAB_005a3c09
    PUSH 0x5f0206                       ; 005a3c0d | s_BreathState_005f0204+2
    ADD EAX,0x11864                     ; 005a3c12
    PUSH EAX                            ; 005a3c17
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 005a3c18
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a3c1d
    RET                                 ; 005a3c20

