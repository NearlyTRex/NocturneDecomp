; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0056b780(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004ced67
;
; Referenced Globals:
;   TerminatedCString s_d_skeletons_d_bytes_d_mo_005f27e7
;   undefined4 g_DeformableModelPool[0].model_filename[0]
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00567310
;   core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00563670
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b780
        ;   Label: core_skeleton.cpp_getMemoryStats_FUN_0056b780
    PUSH ESI                            ; 0056b781
    PUSH EDI                            ; 0056b782
    PUSH EBP                            ; 0056b783
    SUB ESP,0xc                         ; 0056b784
    MOV ESI,0x27903bc                   ; 0056b787
    XOR EBP,EBP                         ; 0056b78c
    XOR EBX,EBX                         ; 0056b78e
    XOR EDI,EDI                         ; 0056b790
    IMUL EAX,EBX,0x1ec9c                ; 0056b792
        ;   Label: LAB_0056b792
    PUSH ESI                            ; 0056b798
    MOV dword ptr [ESP + 0x4],EAX       ; 0056b799
    CALL core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00563670 ; 0056b79d
        ;   XREF to: 00563670 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00563670(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 0056b7a2
    ADD EBP,EAX                         ; 0056b7a5
    MOV EAX,dword ptr [ESP]             ; 0056b7a7
    CMP byte ptr [EAX + 0x27ae1e4],0x0  ; 0056b7aa
    JZ 0x0056b7b4                       ; 0056b7b1
        ;   XREF to: 0056b7b4 (CONDITIONAL_JUMP)  ; LAB_0056b7b4
    INC EDI                             ; 0056b7b3
    INC EBX                             ; 0056b7b4
        ;   Label: LAB_0056b7b4
    ADD ESI,0x1ec9c                     ; 0056b7b5
    CMP EBX,0x28                        ; 0056b7bb
    JL 0x0056b792                       ; 0056b7be
        ;   XREF to: 0056b792 (CONDITIONAL_JUMP)  ; LAB_0056b792
    MOV ESI,0x26b82bc                   ; 0056b7c0
    XOR EDX,EDX                         ; 0056b7c5
    XOR EBX,EBX                         ; 0056b7c7
    MOV dword ptr [ESP + 0x8],EDX       ; 0056b7c9
    ADD ESI,0x35b0                      ; 0056b7cd
    MOV dword ptr [ESP + 0x4],EDX       ; 0056b7d3
    IMUL EAX,EBX,0x3600                 ; 0056b7d7
        ;   Label: LAB_0056b7d7
    ADD EAX,0x26b82bc                   ; 0056b7dd
    PUSH EAX                            ; 0056b7e2
    CALL core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00567310 ; 0056b7e3
        ;   XREF to: 00567310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00567310(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0056b7e8
    ADD dword ptr [ESP + 0x8],EAX       ; 0056b7eb
    CMP byte ptr [ESI],0x0              ; 0056b7ef | g_DeformableModelPool[0].model_filename[0]
    JZ 0x0056b7f8                       ; 0056b7f2
        ;   XREF to: 0056b7f8 (CONDITIONAL_JUMP)  ; LAB_0056b7f8
    INC dword ptr [ESP + 0x4]           ; 0056b7f4
    INC EBX                             ; 0056b7f8
        ;   Label: LAB_0056b7f8
    ADD ESI,0x3600                      ; 0056b7f9
    CMP EBX,0x40                        ; 0056b7ff
    JL 0x0056b7d7                       ; 0056b802
        ;   XREF to: 0056b7d7 (CONDITIONAL_JUMP)  ; LAB_0056b7d7
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b804
    PUSH EBX                            ; 0056b808
    MOV ESI,dword ptr [ESP + 0x8]       ; 0056b809
    PUSH ESI                            ; 0056b80d
    PUSH EBP                            ; 0056b80e
    PUSH EDI                            ; 0056b80f
    PUSH 0x5f27e7                       ; 0056b810 | = "%d skeletons, %d bytes, %d models, %d..."
    MOV EDI,dword ptr [ESP + 0x34]      ; 0056b815
    PUSH EDI                            ; 0056b819
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0056b81a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x18                        ; 0056b81f
    ADD ESP,0xc                         ; 0056b822
    POP EBP                             ; 0056b825
    POP EDI                             ; 0056b826
    POP ESI                             ; 0056b827
    POP EBX                             ; 0056b828
    RET                                 ; 0056b829

