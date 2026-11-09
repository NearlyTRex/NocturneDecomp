; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0047ae10(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;   core_dtri.cpp_getClippedTriangleCount_FUN_0047ae00
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0047ae10
        ;   Label: core_dtri.cpp_buildClipTriangleFan_FUN_0047ae10
    SUB ESP,0x4                         ; 0047ae11
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047ae14
    PUSH EDX                            ; 0047ae18
    CALL core_dtri.cpp_getClippedTriangleCount_FUN_0047ae00 ; 0047ae19
        ;   XREF to: 0047ae00 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_getClippedTriangleCount_FUN_0047ae00(int flags)
    ADD ESP,0x4                         ; 0047ae1e
    XOR EBP,EBP                         ; 0047ae21
    MOV dword ptr [ESP],EAX             ; 0047ae23
    TEST EAX,EAX                        ; 0047ae26
    JLE 0x0047ae67                      ; 0047ae28
        ;   XREF to: 0047ae67 (CONDITIONAL_JUMP)  ; LAB_0047ae67
    PUSH EDI                            ; 0047ae2a
    PUSH ESI                            ; 0047ae2b
    PUSH EBX                            ; 0047ae2c
    MOV ESI,0x1c59e78                   ; 0047ae2d
    MOV EDI,0x1c59e78                   ; 0047ae32
    MOV EBX,0x1c59f38                   ; 0047ae37
    ADD ESI,0xc                         ; 0047ae3c
    ADD EDI,0x18                        ; 0047ae3f
    PUSH EDI                            ; 0047ae42
        ;   Label: LAB_0047ae42
    PUSH ESI                            ; 0047ae43
    PUSH 0x1c59e78                      ; 0047ae44
    PUSH EBX                            ; 0047ae49
    INC EBP                             ; 0047ae4a
    ADD EDI,0xc                         ; 0047ae4b
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0047ae4e
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0047ae53
    ADD ESI,0xc                         ; 0047ae56
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047ae59
    ADD EBX,0x38                        ; 0047ae5d
    CMP EBP,ECX                         ; 0047ae60
    JL 0x0047ae42                       ; 0047ae62
        ;   XREF to: 0047ae42 (CONDITIONAL_JUMP)  ; LAB_0047ae42
    POP EBX                             ; 0047ae64
    POP ESI                             ; 0047ae65
    POP EDI                             ; 0047ae66
    MOV EAX,0x1c59f38                   ; 0047ae67
        ;   Label: LAB_0047ae67
    ADD ESP,0x4                         ; 0047ae6c
    POP EBP                             ; 0047ae6f
    RET                                 ; 0047ae70

