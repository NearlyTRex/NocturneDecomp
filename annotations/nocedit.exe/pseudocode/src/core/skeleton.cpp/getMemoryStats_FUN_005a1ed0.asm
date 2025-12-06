; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_getMemoryStats_FUN_005a1ed0(char * output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da862
;
; Referenced Globals:
;   TerminatedCString s_d_skeletons_d_bytes_d_mo_0064f0e6
;   int g_DeformableModelCount
;   CDeformableModel[64] g_DeformableModelPool
;   undefined4 DAT_036958a0
;   int g_SkeletonPoolCount
;   CSkeleton[40] g_SkeletonPool
;   undefined4 DAT_038f60d0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60
;   core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ed0
        ;   Label: core_skeleton.cpp_getMemoryStats_FUN_005a1ed0
    PUSH ESI                            ; 005a1ed1
    PUSH EDI                            ; 005a1ed2
    PUSH EBP                            ; 005a1ed3
    MOV EDX,dword ptr [0x038cc8a0]      ; 005a1ed4 | int g_SkeletonPoolCount
    XOR EBX,EBX                         ; 005a1eda
    XOR EBP,EBP                         ; 005a1edc
    TEST EDX,EDX                        ; 005a1ede
    JLE 0x005a1f10                      ; 005a1ee0 | LAB_005a1f10
        ;   XREF to: 005a1f10 (CONDITIONAL_JUMP)
    MOV ESI,0x38cc8a4                   ; 005a1ee2 | CSkeleton[40] g_SkeletonPool
    PUSH ESI                            ; 005a1ee7 | CSkeleton[40] g_SkeletonPool
        ;   Label: LAB_005a1ee7
    CALL core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140 ; 005a1ee8 | int core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(CSkeleton * this_ptr)
        ;   XREF to: 0059a140 (UNCONDITIONAL_CALL)
    INC EBX                             ; 005a1eed
    MOV ECX,dword ptr [0x038cc8a0]      ; 005a1eee | int g_SkeletonPoolCount
    ADD ESP,0x4                         ; 005a1ef4
    ADD ESI,0x2982c                     ; 005a1ef7
    ADD EBP,EAX                         ; 005a1efd
    CMP EBX,ECX                         ; 005a1eff
    JL 0x005a1ee7                       ; 005a1f01 | LAB_005a1ee7
        ;   XREF to: 005a1ee7 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005a1f03
    LEA EDX,[EDX]                       ; 005a1f09
    NOP                                 ; 005a1f0f
    MOV ESI,dword ptr [0x0368c89c]      ; 005a1f10 | int g_DeformableModelCount
        ;   Label: LAB_005a1f10
    XOR EBX,EBX                         ; 005a1f16
    XOR EDI,EDI                         ; 005a1f18
    TEST ESI,ESI                        ; 005a1f1a
    JLE 0x005a1f40                      ; 005a1f1c | LAB_005a1f40
        ;   XREF to: 005a1f40 (CONDITIONAL_JUMP)
    MOV ESI,0x368c8a0                   ; 005a1f1e | CDeformableModel[64] g_DeformableModelPool
    PUSH ESI                            ; 005a1f23 | CDeformableModel[64] g_DeformableModelPool
        ;   Label: LAB_005a1f23
    CALL core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60 ; 005a1f24 | int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(CDeformableModel * this_ptr)
        ;   XREF to: 0059dd60 (UNCONDITIONAL_CALL)
    INC EBX                             ; 005a1f29
    ADD ESP,0x4                         ; 005a1f2a
    ADD EDI,EAX                         ; 005a1f2d
    MOV EAX,[0x0368c89c]                ; 005a1f2f | int g_DeformableModelCount
    ADD ESI,0x9000                      ; 005a1f34
    CMP EBX,EAX                         ; 005a1f3a
    JL 0x005a1f23                       ; 005a1f3c | LAB_005a1f23
        ;   XREF to: 005a1f23 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 005a1f3e
    PUSH EDI                            ; 005a1f40
        ;   Label: LAB_005a1f40
    MOV EDX,dword ptr [0x0368c89c]      ; 005a1f41 | int g_DeformableModelCount
    PUSH EDX                            ; 005a1f47
    PUSH EBP                            ; 005a1f48
    MOV ECX,dword ptr [0x038cc8a0]      ; 005a1f49 | int g_SkeletonPoolCount
    PUSH ECX                            ; 005a1f4f
    PUSH 0x64f0e6                       ; 005a1f50 | = "%d skeletons, %d bytes, %d models, %d..." | s_d_skeletons_d_bytes_d_mo_0064f0e6 = %d skeletons, %d bytes, %d models, %d bytes
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a1f55
    PUSH EBX                            ; 005a1f59
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005a1f5a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 005a1f5f
    POP EBP                             ; 005a1f62
    POP EDI                             ; 005a1f63
    POP ESI                             ; 005a1f64
    POP EBX                             ; 005a1f65
    RET                                 ; 005a1f66

