; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_FUN_0053ad70 at 0053adad
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01d8105c
;   undefined4 DAT_01d81060
;   undefined4 DAT_01d81064
;   undefined4 DAT_01d81068
;   undefined4 DAT_01d8106c
;   undefined4 DAT_01d81070
;   undefined4 DAT_01d81074
;   undefined4 DAT_01d81078
;   undefined4 DAT_01d8107c
;
; Called Functions:
;   core_mirror.cpp_FUN_004f5130
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f53f0
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f53f4
    MOV dword ptr [0x01d8105c],EDX      ; 004f53f7 | DAT_01d8105c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f53fd
    MOV dword ptr [0x01d81060],EDX      ; 004f5400 | DAT_01d81060
    MOV EDX,dword ptr [EAX + 0xc]       ; 004f5406
    MOV dword ptr [0x01d81064],EDX      ; 004f5409 | DAT_01d81064
    MOV EDX,dword ptr [EAX + 0x10]      ; 004f540f
    MOV dword ptr [0x01d81068],EDX      ; 004f5412 | DAT_01d81068
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f5418
    MOV dword ptr [0x01d8106c],EDX      ; 004f541b | DAT_01d8106c
    MOV EDX,dword ptr [EAX + 0x18]      ; 004f5421
    MOV dword ptr [0x01d81070],EDX      ; 004f5424 | DAT_01d81070
    MOV EDX,dword ptr [EAX + 0x24]      ; 004f542a
    MOV dword ptr [0x01d81074],EDX      ; 004f542d | DAT_01d81074
    MOV EDX,dword ptr [EAX + 0x30]      ; 004f5433
    PUSH 0x1d81058                      ; 004f5436
    MOV dword ptr [0x01d81078],EDX      ; 004f543b | DAT_01d81078
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f5441
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004f5445
    PUSH EDX                            ; 004f5448
    MOV [0x01d8107c],EAX                ; 004f5449 | DAT_01d8107c
    CALL core_mirror.cpp_FUN_004f5130   ; 004f544e
        ;   XREF to: 004f5130 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_FUN_004f5130(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004f5453
    TEST EAX,EAX                        ; 004f5456
    JNZ 0x004f545b                      ; 004f5458
        ;   XREF to: 004f545b (CONDITIONAL_JUMP)  ; LAB_004f545b
    RET                                 ; 004f545a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f545b
        ;   Label: LAB_004f545b
    ADD EAX,0xe8                        ; 004f545f
    PUSH EAX                            ; 004f5464
    MOV ECX,dword ptr [0x005f2afc]      ; 004f5465 | DAT_005f2afc
    PUSH ECX                            ; 004f546b
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 004f546c
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004f5471
    RET                                 ; 004f5474

