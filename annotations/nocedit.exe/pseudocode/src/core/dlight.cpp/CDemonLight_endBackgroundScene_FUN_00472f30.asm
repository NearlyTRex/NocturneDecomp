; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b609
;
; Referenced Globals:
;   int g_BackgroundSceneNestingCount
;   void*[1024] g_SavedScreenBufferArray
;   undefined4 DAT_026a5818
;   undefined4 DAT_026a5819
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 g_ScreenBufferArray[1]+1
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x026a5810]      ; 00472f30 | int g_BackgroundSceneNestingCount
        ;   Label: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
    DEC EDX                             ; 00472f36
    MOV dword ptr [0x026a5810],EDX      ; 00472f37 | int g_BackgroundSceneNestingCount
    JZ 0x00472f40                       ; 00472f3d | LAB_00472f40
        ;   XREF to: 00472f40 (CONDITIONAL_JUMP)
    RET                                 ; 00472f3f
    PUSH EDI                            ; 00472f40
        ;   Label: LAB_00472f40
    PUSH ESI                            ; 00472f41
    PUSH EBX                            ; 00472f42
    MOV ECX,dword ptr [ESP + 0x10]      ; 00472f43
    MOV ESI,0x26a5814                   ; 00472f47 | void *[1024] g_SavedScreenBufferArray
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 00472f4c
    MOV EDI,0x2cf6a9c                   ; 00472f52 | void *[1024] g_ScreenBufferArray
    SHL ECX,0x2                         ; 00472f57
    PUSH EDI                            ; 00472f5a | void *[1024] g_ScreenBufferArray
    MOV EAX,ECX                         ; 00472f5b
    SHR ECX,0x2                         ; 00472f5d
    MOVSD.REP ES:EDI,ESI                ; 00472f60 | void *[1024] g_ScreenBufferArray | void *[1024] g_SavedScreenBufferArray
    MOV CL,AL                           ; 00472f62
    AND CL,0x3                          ; 00472f64
    MOVSB.REP ES:EDI,ESI                ; 00472f67 | void *[1024] g_ScreenBufferArray | void *[1024] g_SavedScreenBufferArray
    POP EDI                             ; 00472f69
    PUSH EDX                            ; 00472f6a
    MOV EBX,dword ptr [0x006703ec]      ; 00472f6b | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00472f71 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00472f72 | void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00472f77
    POP EBX                             ; 00472f7a
    POP ESI                             ; 00472f7b
    POP EDI                             ; 00472f7c
    RET                                 ; 00472f7d

