; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_00476a60(CDemonLight *this_ptr,CVector3i *corners)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   corners
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x38]:24  SStack_38
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476a60
        ;   Label: core_dlight.cpp_CDemonLight_testVisibility_FUN_00476a60
    PUSH ESI                            ; 00476a61
    PUSH EDI                            ; 00476a62
    PUSH EBP                            ; 00476a63
    SUB ESP,0x28                        ; 00476a64
    MOV EDX,0x4                         ; 00476a67
    PUSH 0x1                            ; 00476a6c
    MOV ESI,0x2                         ; 00476a6e
    MOV EBP,dword ptr [0x006703ec]      ; 00476a73 | g_CDemonRendererPtr2
    XOR ECX,ECX                         ; 00476a79
    XOR EBX,EBX                         ; 00476a7b
    MOV dword ptr [ESP + 0x8],EDX       ; 00476a7d
    MOV dword ptr [ESP + 0x18],ECX      ; 00476a81
    MOV dword ptr [ESP + 0x14],ECX      ; 00476a85
    PUSH EBP                            ; 00476a89 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x14],ECX      ; 00476a8a
    MOV dword ptr [ESP + 0x10],ECX      ; 00476a8e
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00476a92
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 00476a97
    MOV ECX,0x6                         ; 00476a9c
    ADD ESP,0x8                         ; 00476aa1
    MOV EAX,ESP                         ; 00476aa4
    MOV EDI,dword ptr [0x006810c8]      ; 00476aa6 | g_CDemonSetPtr
    PUSH EAX                            ; 00476aac
    MOV dword ptr [ESP + 0x1c],EBX      ; 00476aad
    MOV dword ptr [ESP + 0x20],EDX      ; 00476ab1
    PUSH EDI                            ; 00476ab5 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],ECX      ; 00476ab6
    MOV dword ptr [ESP + 0x2c],ESI      ; 00476aba
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476abe
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476ac3
    TEST EAX,EAX                        ; 00476ac6
    JZ 0x00476ae9                       ; 00476ac8
        ;   XREF to: 00476ae9 (CONDITIONAL_JUMP)  ; LAB_00476ae9
    MOV EBX,0x1                         ; 00476aca
        ;   Label: LAB_00476aca
    PUSH 0x0                            ; 00476acf
        ;   Label: LAB_00476acf
    MOV EAX,[0x006703ec]                ; 00476ad1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00476ad6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00476ad7
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00476adc
    MOV EAX,EBX                         ; 00476adf
    ADD ESP,0x28                        ; 00476ae1
    POP EBP                             ; 00476ae4
    POP EDI                             ; 00476ae5
    POP ESI                             ; 00476ae6
    POP EBX                             ; 00476ae7
    RET                                 ; 00476ae8
    MOV EBP,0x1                         ; 00476ae9
        ;   Label: LAB_00476ae9
    MOV EAX,0x3                         ; 00476aee
    MOV EDX,0x7                         ; 00476af3
    MOV dword ptr [ESP + 0x1c],EAX      ; 00476af8
    MOV EAX,ESP                         ; 00476afc
    MOV ECX,0x5                         ; 00476afe
    PUSH EAX                            ; 00476b03
    MOV ESI,dword ptr [0x006810c8]      ; 00476b04 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBP      ; 00476b0a
    PUSH ESI                            ; 00476b0e | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDX      ; 00476b0f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00476b13
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476b17
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476b1c
    TEST EAX,EAX                        ; 00476b1f
    JZ 0x00476b27                       ; 00476b21
        ;   XREF to: 00476b27 (CONDITIONAL_JUMP)  ; LAB_00476b27
    MOV EBX,EBP                         ; 00476b23
    JMP 0x00476acf                      ; 00476b25
        ;   XREF to: 00476acf (UNCONDITIONAL_JUMP)  ; LAB_00476acf
    MOV dword ptr [ESP + 0x20],0x5      ; 00476b27
        ;   Label: LAB_00476b27
    MOV EAX,ESP                         ; 00476b2f
    MOV EDX,0x4                         ; 00476b31
    PUSH EAX                            ; 00476b36
    MOV ECX,dword ptr [0x006810c8]      ; 00476b37 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBX      ; 00476b3d
    PUSH ECX                            ; 00476b41 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBP      ; 00476b42
    MOV dword ptr [ESP + 0x2c],EDX      ; 00476b46
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476b4a
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476b4f
    TEST EAX,EAX                        ; 00476b52
    JZ 0x00476b5d                       ; 00476b54
        ;   XREF to: 00476b5d (CONDITIONAL_JUMP)  ; LAB_00476b5d
    MOV EBX,EBP                         ; 00476b56
    JMP 0x00476acf                      ; 00476b58
        ;   XREF to: 00476acf (UNCONDITIONAL_JUMP)  ; LAB_00476acf
    MOV ESI,0x2                         ; 00476b5d
        ;   Label: LAB_00476b5d
    MOV EAX,0x3                         ; 00476b62
    MOV EDI,0x6                         ; 00476b67
    MOV dword ptr [ESP + 0x24],EAX      ; 00476b6c
    MOV EAX,ESP                         ; 00476b70
    MOV EBP,0x7                         ; 00476b72
    PUSH EAX                            ; 00476b77
    MOV EDX,dword ptr [0x006810c8]      ; 00476b78 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00476b7e
    PUSH EDX                            ; 00476b82 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 00476b83
    MOV dword ptr [ESP + 0x28],EBP      ; 00476b87
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476b8b
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476b90
    TEST EAX,EAX                        ; 00476b93
    JNZ 0x00476aca                      ; 00476b95
        ;   XREF to: 00476aca (CONDITIONAL_JUMP)  ; LAB_00476aca
    MOV EDI,0x3                         ; 00476b9b
    MOV EBP,0x1                         ; 00476ba0
    MOV EAX,ESP                         ; 00476ba5
    MOV dword ptr [ESP + 0x18],EBX      ; 00476ba7
    PUSH EAX                            ; 00476bab
    MOV EAX,[0x006810c8]                ; 00476bac | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x20],ESI      ; 00476bb1
    PUSH EAX                            ; 00476bb5 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 00476bb6
    MOV dword ptr [ESP + 0x2c],EBP      ; 00476bba
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476bbe
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476bc3
    TEST EAX,EAX                        ; 00476bc6
    JZ 0x00476bd1                       ; 00476bc8
        ;   XREF to: 00476bd1 (CONDITIONAL_JUMP)  ; LAB_00476bd1
    MOV EBX,EBP                         ; 00476bca
    JMP 0x00476acf                      ; 00476bcc
        ;   XREF to: 00476acf (UNCONDITIONAL_JUMP)  ; LAB_00476acf
    MOV EDX,0x4                         ; 00476bd1
        ;   Label: LAB_00476bd1
    MOV ECX,0x5                         ; 00476bd6
    MOV ESI,0x7                         ; 00476bdb
    MOV EDI,0x6                         ; 00476be0
    MOV EAX,ESP                         ; 00476be5
    MOV EBP,dword ptr [0x006810c8]      ; 00476be7 | g_CDemonSetPtr
    PUSH EAX                            ; 00476bed
    MOV dword ptr [ESP + 0x1c],EDX      ; 00476bee
    MOV dword ptr [ESP + 0x20],ECX      ; 00476bf2
    PUSH EBP                            ; 00476bf6 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],ESI      ; 00476bf7
    MOV dword ptr [ESP + 0x2c],EDI      ; 00476bfb
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0 ; 00476bff
        ;   XREF to: 00570df0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00476c04
    TEST EAX,EAX                        ; 00476c07
    JZ 0x00476acf                       ; 00476c09
        ;   XREF to: 00476acf (CONDITIONAL_JUMP)  ; LAB_00476acf
    JMP 0x00476aca                      ; 00476c0f
        ;   XREF to: 00476aca (UNCONDITIONAL_JUMP)  ; LAB_00476aca

