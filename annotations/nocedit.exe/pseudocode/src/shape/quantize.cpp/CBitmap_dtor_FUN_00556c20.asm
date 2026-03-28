; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBitmap * __cdecl shape_quantize_cpp_CBitmap_dtor_FUN_00556c20(CBitmap *this_ptr,uint flags)
;
; Parameters:
; CBitmap *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 at 00556256
;   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 at 0055679c
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_006411b2
;   TerminatedCString s_shape_quantize_cpp_006411c8
;   TerminatedCString s_shape_quantize_cpp_006411de
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556c20
        ;   Label: shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
    PUSH ESI                            ; 00556c21
    PUSH EBP                            ; 00556c22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00556c23
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00556c27
    TEST EDX,EDX                        ; 00556c2a
    JNZ 0x00556c60                      ; 00556c2c
        ;   XREF to: 00556c60 (CONDITIONAL_JUMP)  ; LAB_00556c60
    MOV EBP,dword ptr [EBX + 0x20]      ; 00556c2e
        ;   Label: LAB_00556c2e
    TEST EBP,EBP                        ; 00556c31
    JZ 0x00556c53                       ; 00556c33
        ;   XREF to: 00556c53 (CONDITIONAL_JUMP)  ; LAB_00556c53
    MOV EAX,0x6411c8                    ; 00556c35 | = "..\\shape\\quantize.cpp"
    MOV EDX,0x4b7                       ; 00556c3a
    PUSH EBP                            ; 00556c3f
    MOV [0x0067d20c],EAX                ; 00556c40 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 00556c45 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00556c4b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00556c50
    MOV ESI,dword ptr [EBX + 0x24]      ; 00556c53
        ;   Label: LAB_00556c53
    TEST ESI,ESI                        ; 00556c56
    JNZ 0x00556c81                      ; 00556c58
        ;   XREF to: 00556c81 (CONDITIONAL_JUMP)  ; LAB_00556c81
    MOV EAX,EBX                         ; 00556c5a
    POP EBP                             ; 00556c5c
    POP ESI                             ; 00556c5d
    POP EBX                             ; 00556c5e
    RET                                 ; 00556c5f
    MOV ECX,0x6411b2                    ; 00556c60 | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00556c60
    MOV ESI,0x4b6                       ; 00556c65
    PUSH EDX                            ; 00556c6a
    MOV dword ptr [0x0067d20c],ECX      ; 00556c6b | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 00556c71 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00556c77
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00556c7c
    JMP 0x00556c2e                      ; 00556c7f
        ;   XREF to: 00556c2e (UNCONDITIONAL_JUMP)  ; LAB_00556c2e
    PUSH EDI                            ; 00556c81
        ;   Label: LAB_00556c81
    MOV EDI,0x6411de                    ; 00556c82 | = "..\\shape\\quantize.cpp"
    MOV EBP,0x4b8                       ; 00556c87
    PUSH ESI                            ; 00556c8c
    MOV dword ptr [0x0067d20c],EDI      ; 00556c8d | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 00556c93 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00556c99
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00556c9e
    POP EDI                             ; 00556ca1
    MOV EAX,EBX                         ; 00556ca2
    POP EBP                             ; 00556ca4
    POP ESI                             ; 00556ca5
    POP EBX                             ; 00556ca6
    RET                                 ; 00556ca7

