; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_005490d0(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5997
;
; Referenced Globals:
;   TerminatedCString s_d_skeletons_d_bytes_d_mo_005e75ed
;   undefined4 g_DeformableModelPool[0].field10864_0x2a70
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00544c70
;   core_skeleton.cpp_FUN_00541000
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005490d0
        ;   Label: core_skeleton.cpp_FUN_005490d0
    PUSH ESI                            ; 005490d1
    PUSH EDI                            ; 005490d2
    PUSH EBP                            ; 005490d3
    SUB ESP,0xc                         ; 005490d4
    MOV ESI,0x21780f4                   ; 005490d7
    XOR EBP,EBP                         ; 005490dc
    XOR EBX,EBX                         ; 005490de
    XOR EDI,EDI                         ; 005490e0
    IMUL EAX,EBX,0x1e01c                ; 005490e2
        ;   Label: LAB_005490e2
    PUSH ESI                            ; 005490e8
    MOV dword ptr [ESP + 0x4],EAX       ; 005490e9
    CALL core_skeleton.cpp_FUN_00541000 ; 005490ed
        ;   XREF to: 00541000 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00541000(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 005490f2
    ADD EBP,EAX                         ; 005490f5
    MOV EAX,dword ptr [ESP]             ; 005490f7
    CMP byte ptr [EAX + 0x219529c],0x0  ; 005490fa
    JZ 0x00549104                       ; 00549101
        ;   XREF to: 00549104 (CONDITIONAL_JUMP)  ; LAB_00549104
    INC EDI                             ; 00549103
    INC EBX                             ; 00549104
        ;   Label: LAB_00549104
    ADD ESI,0x1e01c                     ; 00549105
    CMP EBX,0x28                        ; 0054910b
    JL 0x005490e2                       ; 0054910e
        ;   XREF to: 005490e2 (CONDITIONAL_JUMP)  ; LAB_005490e2
    MOV ESI,0x20ccff4                   ; 00549110
    XOR EDX,EDX                         ; 00549115
    XOR EBX,EBX                         ; 00549117
    MOV dword ptr [ESP + 0x8],EDX       ; 00549119
    ADD ESI,0x2a70                      ; 0054911d
    MOV dword ptr [ESP + 0x4],EDX       ; 00549123
    IMUL EAX,EBX,0x2ac0                 ; 00549127
        ;   Label: LAB_00549127
    ADD EAX,0x20ccff4                   ; 0054912d
    PUSH EAX                            ; 00549132
    CALL core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00544c70 ; 00549133
        ;   XREF to: 00544c70 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_00544c70(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00549138
    ADD dword ptr [ESP + 0x8],EAX       ; 0054913b
    CMP byte ptr [ESI],0x0              ; 0054913f | g_DeformableModelPool[0].field10864_0x2a70
    JZ 0x00549148                       ; 00549142
        ;   XREF to: 00549148 (CONDITIONAL_JUMP)  ; LAB_00549148
    INC dword ptr [ESP + 0x4]           ; 00549144
    INC EBX                             ; 00549148
        ;   Label: LAB_00549148
    ADD ESI,0x2ac0                      ; 00549149
    CMP EBX,0x40                        ; 0054914f
    JL 0x00549127                       ; 00549152
        ;   XREF to: 00549127 (CONDITIONAL_JUMP)  ; LAB_00549127
    MOV EBX,dword ptr [ESP + 0x8]       ; 00549154
    PUSH EBX                            ; 00549158
    MOV ESI,dword ptr [ESP + 0x8]       ; 00549159
    PUSH ESI                            ; 0054915d
    PUSH EBP                            ; 0054915e
    PUSH EDI                            ; 0054915f
    PUSH 0x5e75ed                       ; 00549160 | = "%d skeletons, %d bytes, %d models, %d..."
    MOV EDI,dword ptr [ESP + 0x34]      ; 00549165
    PUSH EDI                            ; 00549169
    CALL crt_unknown.c_FUN_005b7790     ; 0054916a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x18                        ; 0054916f
    ADD ESP,0xc                         ; 00549172
    POP EBP                             ; 00549175
    POP EDI                             ; 00549176
    POP ESI                             ; 00549177
    POP EBX                             ; 00549178
    RET                                 ; 00549179

