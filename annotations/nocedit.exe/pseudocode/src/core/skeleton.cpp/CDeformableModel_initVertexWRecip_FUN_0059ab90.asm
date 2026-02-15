; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0 at 005a031a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ab90
        ;   Label: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
    PUSH ESI                            ; 0059ab91
    PUSH EDI                            ; 0059ab92
    PUSH EBP                            ; 0059ab93
    MOV EDI,dword ptr [0x006703ec]      ; 0059ab94 | g_CDemonRendererPtr2
    MOV EBP,dword ptr [0x02d051f4]      ; 0059ab9a | g_PerspectiveReciprocal
    MOV ESI,dword ptr [ESP + 0x18]      ; 0059aba0
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059aba4
    SHL ESI,0x2                         ; 0059aba8
    ADD ESI,ECX                         ; 0059abab
    XOR EAX,EAX                         ; 0059abad
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0059abaf
    XOR EDX,EDX                         ; 0059abb2
    TEST EBX,EBX                        ; 0059abb4
    JLE 0x0059abd0                      ; 0059abb6
        ;   XREF to: 0059abd0 (CONDITIONAL_JUMP)  ; LAB_0059abd0
    MOV ECX,dword ptr [EDI]             ; 0059abb8 | g_CDemonRendererInstance
        ;   Label: LAB_0059abb8
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 0059abba
    INC EDX                             ; 0059abbe
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0059abbf
    ADD EAX,0x30                        ; 0059abc2
    CMP EDX,ECX                         ; 0059abc5
    JL 0x0059abb8                       ; 0059abc7
        ;   XREF to: 0059abb8 (CONDITIONAL_JUMP)  ; LAB_0059abb8
    LEA EAX,[EAX]                       ; 0059abc9
    NOP                                 ; 0059abcf
    MOV dword ptr [0x02d051f4],EBP      ; 0059abd0 | g_PerspectiveReciprocal
        ;   Label: LAB_0059abd0
    MOV dword ptr [0x006703ec],EDI      ; 0059abd6 | g_CDemonRendererPtr2
    POP EBP                             ; 0059abdc
    POP EDI                             ; 0059abdd
    POP ESI                             ; 0059abde
    POP EBX                             ; 0059abdf
    RET                                 ; 0059abe0

