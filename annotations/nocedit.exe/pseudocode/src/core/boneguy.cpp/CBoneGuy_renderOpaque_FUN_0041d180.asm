; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041d180(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006703ec]      ; 0041d180 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041d180
    PUSH EDX                            ; 0041d186 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0041d187
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041d18c
    TEST EAX,EAX                        ; 0041d18f
    JNZ 0x0041d194                      ; 0041d191
        ;   XREF to: 0041d194 (CONDITIONAL_JUMP)  ; LAB_0041d194
    RET                                 ; 0041d193
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041d194
        ;   Label: LAB_0041d194
    PUSH ECX                            ; 0041d198
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 0041d199
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d19e
    RET                                 ; 0041d1a1

