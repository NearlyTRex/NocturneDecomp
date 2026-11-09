; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_turret_cpp_FUN_0057f970(CDemonActor *param_1,undefined4 *param_2,int param_3)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f970
        ;   Label: core_turret.cpp_FUN_0057f970
    PUSH ESI                            ; 0057f971
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057f972
    MOV EDX,dword ptr [ESP + 0x10]      ; 0057f976
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057f97a
    CMP dword ptr [ESI + 0x10],0x0      ; 0057f97e
    JNZ 0x0057f9c5                      ; 0057f982
        ;   XREF to: 0057f9c5 (CONDITIONAL_JUMP)  ; LAB_0057f9c5
    LEA EAX,[EBX + 0x30]                ; 0057f984
    CMP EAX,EDX                         ; 0057f987
    JZ 0x0057f99b                       ; 0057f989
        ;   XREF to: 0057f99b (CONDITIONAL_JUMP)  ; LAB_0057f99b
    MOV ECX,dword ptr [EDX]             ; 0057f98b
    MOV dword ptr [EAX],ECX             ; 0057f98d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057f98f
    MOV dword ptr [EAX + 0x4],ECX       ; 0057f992
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057f995
    MOV dword ptr [EAX + 0x8],ECX       ; 0057f998
    PUSH EDI                            ; 0057f99b
        ;   Label: LAB_0057f99b
    PUSH EBX                            ; 0057f99c
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0057f99d
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0xc]       ; 0057f9a2
    ADD ESP,0x4                         ; 0057f9a5
    TEST EDI,EDI                        ; 0057f9a8
    JZ 0x0057f9bc                       ; 0057f9aa
        ;   XREF to: 0057f9bc (CONDITIONAL_JUMP)  ; LAB_0057f9bc
    PUSH EBX                            ; 0057f9ac
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057f9ad
    CALL dword ptr [EAX + 0xec]         ; 0057f9b3
    ADD ESP,0x4                         ; 0057f9b9
    MOV EAX,0x1                         ; 0057f9bc
        ;   Label: LAB_0057f9bc
    POP EDI                             ; 0057f9c1
    POP ESI                             ; 0057f9c2
    POP EBX                             ; 0057f9c3
    RET                                 ; 0057f9c4
    MOV dword ptr [ESI + 0x10],0x0      ; 0057f9c5
        ;   Label: LAB_0057f9c5
    XOR EAX,EAX                         ; 0057f9cc
    POP ESI                             ; 0057f9ce
    POP EBX                             ; 0057f9cf
    RET                                 ; 0057f9d0

