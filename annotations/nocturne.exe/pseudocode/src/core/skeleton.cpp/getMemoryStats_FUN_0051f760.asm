; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0051f760(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d37c
;
; Referenced Globals:
;   TerminatedCString s_d_skeletons_d_bytes_d_mo_00591e81
;   undefined4 DAT_0268cef0
;   undefined4 DAT_02737ef4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600
;   core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f760
        ;   Label: core_skeleton.cpp_getMemoryStats_FUN_0051f760
    PUSH ESI                            ; 0051f761
    PUSH EDI                            ; 0051f762
    PUSH EBP                            ; 0051f763
    MOV EDX,dword ptr [0x02737ef4]      ; 0051f764 | DAT_02737ef4
    XOR EBX,EBX                         ; 0051f76a
    XOR EBP,EBP                         ; 0051f76c
    TEST EDX,EDX                        ; 0051f76e
    JLE 0x0051f7a0                      ; 0051f770
        ;   XREF to: 0051f7a0 (CONDITIONAL_JUMP)  ; LAB_0051f7a0
    MOV ESI,0x2737ef8                   ; 0051f772
    PUSH ESI                            ; 0051f777
        ;   Label: LAB_0051f777
    CALL core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50 ; 0051f778
        ;   XREF to: 00517b50 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50(CSkeleton * this_ptr)
    INC EBX                             ; 0051f77d
    MOV ECX,dword ptr [0x02737ef4]      ; 0051f77e | DAT_02737ef4
    ADD ESP,0x4                         ; 0051f784
    ADD ESI,0x2937c                     ; 0051f787
    ADD EBP,EAX                         ; 0051f78d
    CMP EBX,ECX                         ; 0051f78f
    JL 0x0051f777                       ; 0051f791
        ;   XREF to: 0051f777 (CONDITIONAL_JUMP)  ; LAB_0051f777
    LEA EAX,[EAX]                       ; 0051f793
    LEA EDX,[EDX]                       ; 0051f799
    NOP                                 ; 0051f79f
    MOV ESI,dword ptr [0x0268cef0]      ; 0051f7a0 | DAT_0268cef0
        ;   Label: LAB_0051f7a0
    XOR EBX,EBX                         ; 0051f7a6
    XOR EDI,EDI                         ; 0051f7a8
    TEST ESI,ESI                        ; 0051f7aa
    JLE 0x0051f7d0                      ; 0051f7ac
        ;   XREF to: 0051f7d0 (CONDITIONAL_JUMP)  ; LAB_0051f7d0
    MOV ESI,0x268cef4                   ; 0051f7ae
    PUSH ESI                            ; 0051f7b3
        ;   Label: LAB_0051f7b3
    CALL core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600 ; 0051f7b4
        ;   XREF to: 0051b600 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(CDeformableModel * this_ptr)
    INC EBX                             ; 0051f7b9
    ADD ESP,0x4                         ; 0051f7ba
    ADD EDI,EAX                         ; 0051f7bd
    MOV EAX,[0x0268cef0]                ; 0051f7bf | DAT_0268cef0
    ADD ESI,0x2ac0                      ; 0051f7c4
    CMP EBX,EAX                         ; 0051f7ca
    JL 0x0051f7b3                       ; 0051f7cc
        ;   XREF to: 0051f7b3 (CONDITIONAL_JUMP)  ; LAB_0051f7b3
    MOV EAX,EAX                         ; 0051f7ce
    PUSH EDI                            ; 0051f7d0
        ;   Label: LAB_0051f7d0
    MOV EDX,dword ptr [0x0268cef0]      ; 0051f7d1 | DAT_0268cef0
    PUSH EDX                            ; 0051f7d7
    PUSH EBP                            ; 0051f7d8
    MOV ECX,dword ptr [0x02737ef4]      ; 0051f7d9 | DAT_02737ef4
    PUSH ECX                            ; 0051f7df
    PUSH 0x591e81                       ; 0051f7e0 | = "%d skeletons, %d bytes, %d models, %d..."
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051f7e5
    PUSH EBX                            ; 0051f7e9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0051f7ea
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x18                        ; 0051f7ef
    POP EBP                             ; 0051f7f2
    POP EDI                             ; 0051f7f3
    POP ESI                             ; 0051f7f4
    POP EBX                             ; 0051f7f5
    RET                                 ; 0051f7f6

