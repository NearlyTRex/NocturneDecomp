; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004facd0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_FUN_00534130 at 0053416d
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01d182cc
;   undefined4 DAT_01d182d0
;   undefined4 DAT_01d182d4
;   undefined4 DAT_01d182d8
;   undefined4 DAT_01d182dc
;   undefined4 DAT_01d182e0
;   undefined4 DAT_01d182e4
;   undefined4 DAT_01d182e8
;   undefined4 DAT_01d182ec
;
; Called Functions:
;   core_mirror.cpp_FUN_004faa10
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004facd0
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004facd4
    MOV dword ptr [0x01d182cc],EDX      ; 004facd7 | DAT_01d182cc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004facdd
    MOV dword ptr [0x01d182d0],EDX      ; 004face0 | DAT_01d182d0
    MOV EDX,dword ptr [EAX + 0xc]       ; 004face6
    MOV dword ptr [0x01d182d4],EDX      ; 004face9 | DAT_01d182d4
    MOV EDX,dword ptr [EAX + 0x10]      ; 004facef
    MOV dword ptr [0x01d182d8],EDX      ; 004facf2 | DAT_01d182d8
    MOV EDX,dword ptr [EAX + 0x14]      ; 004facf8
    MOV dword ptr [0x01d182dc],EDX      ; 004facfb | DAT_01d182dc
    MOV EDX,dword ptr [EAX + 0x18]      ; 004fad01
    MOV dword ptr [0x01d182e0],EDX      ; 004fad04 | DAT_01d182e0
    MOV EDX,dword ptr [EAX + 0x24]      ; 004fad0a
    MOV dword ptr [0x01d182e4],EDX      ; 004fad0d | DAT_01d182e4
    MOV EDX,dword ptr [EAX + 0x30]      ; 004fad13
    PUSH 0x1d182c8                      ; 004fad16
    MOV dword ptr [0x01d182e8],EDX      ; 004fad1b | DAT_01d182e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fad21
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004fad25
    PUSH EDX                            ; 004fad28
    MOV [0x01d182ec],EAX                ; 004fad29 | DAT_01d182ec
    CALL core_mirror.cpp_FUN_004faa10   ; 004fad2e
        ;   XREF to: 004faa10 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_004faa10(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004fad33
    TEST EAX,EAX                        ; 004fad36
    JNZ 0x004fad3b                      ; 004fad38
        ;   XREF to: 004fad3b (CONDITIONAL_JUMP)  ; LAB_004fad3b
    RET                                 ; 004fad3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fad3b
        ;   Label: LAB_004fad3b
    ADD EAX,0xe8                        ; 004fad3f
    PUSH EAX                            ; 004fad44
    MOV ECX,dword ptr [0x0060b280]      ; 004fad45 | DAT_0060b280
    PUSH ECX                            ; 004fad4b
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670 ; 004fad4c
        ;   XREF to: 00469670 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004fad51
    RET                                 ; 004fad54

