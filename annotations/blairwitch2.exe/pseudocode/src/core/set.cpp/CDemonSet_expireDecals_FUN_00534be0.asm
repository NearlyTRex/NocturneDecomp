; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_expireDecals_FUN_00534be0(CDemonSet *this_ptr,int expire_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534be0
        ;   Label: core_set.cpp_CDemonSet_expireDecals_FUN_00534be0
    PUSH ESI                            ; 00534be1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00534be2
    PUSH EDX                            ; 00534be6
    PUSH 0x0                            ; 00534be7
    MOV ECX,dword ptr [0x006167e0]      ; 00534be9 | g_CGorePtr
    PUSH ECX                            ; 00534bef
    CALL core_gore.cpp_CGore_renderDecals_FUN_004c94c0 ; 00534bf0
        ;   XREF to: 004c94c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_renderDecals_FUN_004c94c0(CGore * this_ptr, int render_all, int expire_flag)
    ADD ESP,0xc                         ; 00534bf5
    MOV EBX,dword ptr [ESP + 0x10]      ; 00534bf8
    PUSH EBX                            ; 00534bfc
    PUSH 0x0                            ; 00534bfd
    MOV ESI,dword ptr [0x00614d30]      ; 00534bff | DAT_00614d30
    PUSH ESI                            ; 00534c05
    CALL core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 ; 00534c06
        ;   XREF to: 0049cb50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect * this_ptr, int render_mode, int render_completeness)
    ADD ESP,0xc                         ; 00534c0b
    POP ESI                             ; 00534c0e
    POP EBX                             ; 00534c0f
    RET                                 ; 00534c10

