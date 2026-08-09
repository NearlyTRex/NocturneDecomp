; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_004c80f0(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_litecone.cpp_factoryFuncLightCone_FUN_004c80c0 at 004c80d3
;
; Referenced Globals:
;   TerminatedCString s_none_00587ad0
;   undefined4 s_one_00587ad0+1
;   undefined4 s_ne_00587ad0+2
;   undefined4 s_e_00587ad0+3
;   TerminatedCString s_none_00587ad5
;   undefined4 s_one_00587ad5+1
;   undefined4 s_ne_00587ad5+2
;   undefined4 s_e_00587ad5+3
;   CDemonActor_vtable g_CLightConeVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c80f0
        ;   Label: core_litecone.cpp_CLightCone_ctor_FUN_004c80f0
    PUSH EDI                            ; 004c80f1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c80f2
    PUSH EDX                            ; 004c80f6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004c80f7
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x59fed4 ; 004c80fc | g_CLightConeVTable
    MOV ESI,0x587ad0                    ; 004c8106 | = "none"
    MOV dword ptr [EAX + 0x150],0x42600000 ; 004c810b
    MOV EDX,EAX                         ; 004c8115
    MOV dword ptr [EAX + 0x154],0x40c00000 ; 004c8117
    ADD ESP,0x4                         ; 004c8121
    MOV dword ptr [EAX + 0xfc],0x1      ; 004c8124
    LEA EDI,[EAX + 0x15c]               ; 004c812e
    MOV dword ptr [EAX + 0x158],0x1     ; 004c8134
    PUSH EDI                            ; 004c813e
    MOV AL,byte ptr [ESI]               ; 004c813f | = "none" | s_ne_00587ad0+2
        ;   Label: LAB_004c813f
    MOV byte ptr [EDI],AL               ; 004c8141
    CMP AL,0x0                          ; 004c8143
    JZ 0x004c8157                       ; 004c8145
        ;   XREF to: 004c8157 (CONDITIONAL_JUMP)  ; LAB_004c8157
    MOV AL,byte ptr [ESI + 0x1]         ; 004c8147 | s_one_00587ad0+1 | s_e_00587ad0+3
    ADD ESI,0x2                         ; 004c814a
    MOV byte ptr [EDI + 0x1],AL         ; 004c814d
    ADD EDI,0x2                         ; 004c8150
    CMP AL,0x0                          ; 004c8153
    JNZ 0x004c813f                      ; 004c8155
        ;   XREF to: 004c813f (CONDITIONAL_JUMP)  ; LAB_004c813f
    POP EDI                             ; 004c8157
        ;   Label: LAB_004c8157
    MOV ESI,0x587ad5                    ; 004c8158 | = "none"
    LEA EDI,[EDX + 0x1c0]               ; 004c815d
    PUSH EDI                            ; 004c8163
    MOV AL,byte ptr [ESI]               ; 004c8164 | = "none" | s_ne_00587ad5+2
        ;   Label: LAB_004c8164
    MOV byte ptr [EDI],AL               ; 004c8166
    CMP AL,0x0                          ; 004c8168
    JZ 0x004c817c                       ; 004c816a
        ;   XREF to: 004c817c (CONDITIONAL_JUMP)  ; LAB_004c817c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c816c | s_one_00587ad5+1 | s_e_00587ad5+3
    ADD ESI,0x2                         ; 004c816f
    MOV byte ptr [EDI + 0x1],AL         ; 004c8172
    ADD EDI,0x2                         ; 004c8175
    CMP AL,0x0                          ; 004c8178
    JNZ 0x004c8164                      ; 004c817a
        ;   XREF to: 004c8164 (CONDITIONAL_JUMP)  ; LAB_004c8164
    POP EDI                             ; 004c817c
        ;   Label: LAB_004c817c
    MOV EAX,EDX                         ; 004c817d
    POP EDI                             ; 004c817f
    POP ESI                             ; 004c8180
    RET                                 ; 004c8181

